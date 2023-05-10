#include "main.h"

/**
 * print_elf_magic - prints array of bytes that specifies how to
 * interpret the file, independent of the processor or the
 * file's remaining contents.
 * @file: pointer to pointer to file's mapped or virtual memory location.
 * Return: nothing.
 */
void print_elf_magic(Elf64_Ehdr **file)
{
	int i = 0;

	printf("  Magic:   ");
	while (i < 16)
	{
		printf("%02x", (*file)->e_ident[i]);
		if (i != 16 - 1)
			printf(" ");
		i++;
	}
	printf("\n");
}

/**
 * print_elf_class - prints identity for the architecture for binary file.
 * @file: pointer to pointer to mapped or virtual memory location.
 * Return: nothing.
 */
void print_elf_class(Elf64_Ehdr **file)
{
	if ((*file)->e_ident[EI_CLASS] == ELFCLASS64)
		printf("  Class:\t\t\t     ELF64\n");
	else if ((*file)->e_ident[EI_CLASS] == ELFCLASS32)
		printf("  Class:\t\t\t     ELF32\n");
	else
		printf("  Class:\t\t\t     This class is invalid\n");
}

/**
 * data_and_version - prints data encoding of the processor-specific
 * data in the file and version number of the ELF specification;
 * @file: pointer to pointer to mapped or virtual memory location.
 * Return: void.
 */
void data_and_version(Elf64_Ehdr **file)
{
	if ((*file)->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("  Data:\t\t\t\t     %d's complement, little-endian\n", 2);
	else if ((*file)->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("  Data:\t\t\t\t     %d's complement, big-endian\n", ELFDATA2MSB);
	else
		printf("  Data:\t\t\t\t     Unknown data format\n");

	if ((*file)->e_ident[EI_VERSION] == EV_CURRENT)
		printf("  Version:\t\t\t     %d (current)\n", (*file)->e_ident[EI_VERSION]);
	else
		printf("  Version:\t\t\t     Invalid version\n");
}

/**
 * print_os_abi - prints identity the operating system and
 * application binary interface (ABI) to which the object is targeted.
 * @file: pointer to pointer to mapped or virtual memory location.
 * Return: void.
 */
void print_os_abi(Elf64_Ehdr **file)
{
	int os_app_bi_int[11] = {
		ELFOSABI_NONE,
		ELFOSABI_SYSV,
		ELFOSABI_HPUX,
		ELFOSABI_NETBSD,
		ELFOSABI_LINUX,
		ELFOSABI_SOLARIS,
		ELFOSABI_IRIX,
		ELFOSABI_FREEBSD,
		ELFOSABI_TRU64,
		ELFOSABI_ARM,
		ELFOSABI_STANDALONE
	}, n;

	char *os_abi[] = {
		"UNIX - System V",
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - Linux",
		"UNIX - Solaris",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"TRU64 UNIX",
		"ARM architecture",
		"Stand-alone (embedded)"
	};

	for (n = 0; n < 11; n++)
	{
		if ((*file)->e_ident[EI_OSABI] == os_app_bi_int[n])
		{
			printf("  OS/ABI:\t\t\t     %s\n", os_abi[n]);
			break;
		}
	}
}

/**
 * abiv_type_and_entry - prints version of the ABI to which the
 * object is targeted, identity the object file type and virtual
 * address to which the system first transfers control.
 * @file: pointer to pointer to mapped or virtual memory location.
 * Return: void.
 */
void abiv_type_and_entry(Elf64_Ehdr **file)
{
	int type_flag[5] = {ET_NONE, ET_REL, ET_EXEC, ET_DYN, ET_CORE}, n;
	char *file_type[] = {
		"NONE (Unknown type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};

	if ((*file)->e_ident[EI_ABIVERSION] == 0)
		printf("  ABI Version:\t\t\t     0\n");

	for (n = 0; n < 5; n++)
	{
		if ((*file)->e_type == type_flag[n])
		{
			printf("  Type:\t\t\t\t     %s\n", file_type[n]);
			break;
		}
	}
	printf("  Entry point address:\t\t     %#lx\n", (*file)->e_entry);
}

/**
 * main - reads an elf file and prints its header section.
 * @argc: argument count.
 * @argv: pointer to array of arguments passed.
 * Return: 0 on success or -1 on failure.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int fd;
	off_t size;
	void *address;
	Elf64_Ehdr *file;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	size = lseek(fd, 0, SEEK_END);
	if (size == -1)
	{
		perror("lseek");
		close(fd);
		return (-1);
	}
	address = mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0);
	if (address == MAP_FAILED)
	{
		perror("address");
		close(fd);
		return (-1);
	}
	file = (Elf64_Ehdr *)address;
	printf("ELF Header:\n");
	print_elf_magic(&file);
	print_elf_class(&file);
	data_and_version(&file);
	print_os_abi(&file);
	abiv_type_and_entry(&file);
	if (munmap(address, size) == -1)
	{
		perror("munmap");
		close(fd);
		return (-1);
	}
	close(fd);
	return (0);
}
