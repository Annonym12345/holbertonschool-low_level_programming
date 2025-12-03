# Git Intro Project

File: 0-read_textfile.c
───────┼──────────────────────────────────────────────────────────────────────────────────────────────
   1   │ #include "main.h"
   2   │ #include <stdlib.h>
   3   │
   4   │ /**
   5   │  * read_textfile - Reads a text file and prints it to POSIX stdout.
   6   │  * @filename: A pointer to the name of the file.
   7   │  * @letters: The number of letters the
   8   │  *           function should read and print.
   9   │  *
  10   │  * Return: If the function fails or filename is NULL - 0.
  11   │  *         O/w - the actual number of bytes the function can read and print.
  12   │  */
  13   │ ssize_t read_textfile(const char *filename, size_t letters)
  14   │ {
  15   │     ssize_t o, r, w;
  16   │     char *buffer;
  17   │
  18   │     if (filename == NULL)
  19   │         return (0);
  20   │
  21   │     buffer = malloc(sizeof(char) * letters);
  22   │     if (buffer == NULL)
  23   │         return (0);
  24   │
  25   │     o = open(filename, O_RDONLY);
  26   │     r = read(o, buffer, letters);
  27   │     w = write(STDOUT_FILENO, buffer, r);
  28   │
  29   │     if (o == -1 || r == -1 || w == -1 || w != r)
  30   │     {
  31   │         free(buffer);
  32   │         return (0);
  33   │     }
  34   │
  35   │     free(buffer);
  36   │     close(o);
  37   │
  38   │     return (w);
  39   │ }
------------------------------------------------------------------------------------------

 File: 1-create_file.c
───────┼──────────────────────────────────────────────────────────────────────────────────────────────
   1   │ #include "main.h"
   2   │
   3   │ /**
   4   │  * create_file - Creates a file.
   5   │  * @filename: A pointer to the name of the file to create.
   6   │  * @text_content: A pointer to a string to write to the file.
   7   │  *
   8   │  * Return: If the function fails - -1.
   9   │  *         Otherwise - 1.
  10   │  */
  11   │ int create_file(const char *filename, char *text_content)
  12   │ {
  13   │     int o, w, len = 0;
  14   │
  15   │     if (filename == NULL)
  16   │         return (-1);
  17   │
  18   │     if (text_content != NULL)
  19   │     {
  20   │         for (len = 0; text_content[len];)
  21   │             len++;
  22   │     }
  23   │
  24   │     o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
  25   │     w = write(o, text_content, len);
  26   │
  27   │     if (o == -1 || w == -1)
  28   │         return (-1);
  29   │
  30   │     close(o);
  31   │
  32   │     return (1);
  33   │ }
───────┴───────────────────────────────────────────────────────────────



 File: 2-append_text_to_file.c
───────┼──────────────────────────────────────────────────────────────────────────────────────────────
   1   │ #include "main.h"
   2   │
   3   │ /**
   4   │  * append_text_to_file - Appends text at the end of a file.
   5   │  * @filename: A pointer to the name of the file.
   6   │  * @text_content: The string to add to the end of the file.
   7   │  *
   8   │  * Return: If the function fails or filename is NULL - -1.
   9   │  *         If the file does not exist the user lacks write permissions - -1.
  10   │  *         Otherwise - 1.
  11   │  */
  12   │ int append_text_to_file(const char *filename, char *text_content)
  13   │ {
  14   │     int a, b, len = 0;
  15   │
  16   │     if (filename == NULL)
  17   │         return (-1);
  18   │
  19   │     if (text_content != NULL)
  20   │     {
  21   │         for (len = 0; text_content[len];)
  22   │             len++;
  23   │     }
  24   │
  25   │     a = open(filename, O_WRONLY | O_APPEND);
  26   │     b = write(a, text_content, len);
  27   │
  28   │     if (a == -1 || b == -1)
  29   │         return (-1);
  30   │
  31   │     close(a);
  32   │
  33   │     return (1);
  34   │ }







 #include "main.h"
   2   │ #include <stdio.h>
   3   │ #include <stdlib.h>
   4   │
   5   │ char *create_buffer(char *file);
   6   │ void close_file(int fd);
   7   │
   8   │ /**
   9   │  * create_buffer - Allocates 1024 bytes for a buffer.
  10   │  * @file: The name of the file buffer is storing chars for.
  11   │  *
  12   │  * Return: A pointer to the newly-allocated buffer.
  13   │  */
  14   │ char *create_buffer(char *file)
  15   │ {
  16   │     char *b;
  17   │
  18   │     b = malloc(sizeof(char) * 1024);
  19   │
  20   │     if (b == NULL)
  21   │     {
  22   │         dprintf(STDERR_FILENO,
  23   │             "Error: Can't write to %s\n", file);
  24   │         exit(99);
  25   │     }
  26   │
  27   │     return (b);
  28   │ }
  29   │
  30   │ /**
  31   │  * close_file - Closes file descriptors.
  32   │  * @fd: The file descriptor to be closed.
  33   │  */
  34   │ void close_file(int fd)
  35   │ {
  36   │     int c;
  37   │
  38   │     c = close(fd);
  39   │
  40   │     if (c == -1)
  41   │     {
  42   │         dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
  43   │         exit(100);
  44   │     }
  45   │ }
  46   │
  47   │ /**
  48   │  * main - Copies the contents of a file to another file.
  49   │  * @argc: The number of arguments supplied to the program.
  50   │  * @argv: An array of pointers to the arguments.



.................................................
......................................
.............
