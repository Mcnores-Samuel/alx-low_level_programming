#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <elf.h>
#include <sys/mman.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char **argv);
void copy_file(const char *src, const char *dest);
void print_elf_magic(Elf64_Ehdr **file);
void print_elf_class(Elf64_Ehdr **file);
void data_and_version(Elf64_Ehdr **file);
void print_os_abi(Elf64_Ehdr **file);
void abiv_type_and_entry(Elf64_Ehdr **file);

#endif
