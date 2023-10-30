#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/types.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void print_error(const char *message);
void print_magic(const unsigned char *magic);
void print_class(uint8_t class);
void print_data(uint8_t data);
void print_version(uint8_t version);
void print_osabi(uint8_t osabi);
void print_abi_version(uint8_t abi_version);
void print_entry(uint64_t entry);
void display_elf_header(const char *filename);



#endif
