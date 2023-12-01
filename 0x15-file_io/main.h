#ifndef MAIN_H
#define MAIN_H

int create_file(const char *filename, char *text_content);

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);



#endif /* MAIN_H */
