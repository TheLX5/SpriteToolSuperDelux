#ifndef FILES_IO_H
#define FILES_IO_H

#include <cstdio>
#include <cstdlib>
#include <string_view>

template <typename... A> void error(const char *message, A... args) {
    printf(message, args...);
    exit(-1);
}

FILE *open(const char *name, const char *mode);
size_t file_size(FILE *file);
unsigned char *read_all(const char *file_name, bool text_mode = false, unsigned int minimum_size = 0u);
void write_all(unsigned char *data, const char *file_name, unsigned int size);
void write_all(unsigned char *data, const char *dir, const char *file_name, unsigned int size);

void write_all(unsigned char *data, std::string_view file_name, unsigned int size);
void write_all(unsigned char *data, std::string_view dir, std::string_view file_name, unsigned int size);

#endif