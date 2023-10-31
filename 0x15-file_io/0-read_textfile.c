// Includes stdlib for malloc/free
#include "main.h"
#include <stdlib.h>

// Function prototype
size_t read_and_write(const char *file_to_read, size_t max_chars);

// Function definition 
size_t read_and_write(const char *file_to_read, size_t max_chars)
{
  // Declare variables
  FILE *fp; 
  char *buf;
  size_t chars_read = 0;

  // Validate file pointer
  if (file_to_read == NULL) {
    return 0;
  }

  // Allocate memory for buffer
  buf = malloc(max_chars);
  if (buf == NULL) {
    return 0;
  }

  // Open file for reading
  fp = fopen(file_to_read, "r");
  if (fp == NULL) {
    free(buf);
    return 0;
  }

  // Read file contents into buffer
  chars_read = fread(buf, sizeof(char), max_chars, fp);
  if (chars_read == 0) {
    fclose(fp);
    free(buf);
    return 0; 
  }

  // Write buffer to standard output
  if (fwrite(buf, sizeof(char), chars_read, stdout) != chars_read) {
    fclose(fp);
    free(buf);
    return 0;
  }

  // Clean up and return chars read
  fclose(fp);
  free(buf);

  return chars_read;
}
