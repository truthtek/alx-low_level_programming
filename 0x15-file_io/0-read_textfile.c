// Includes required libraries
#include "main.h" 
#include <stdlib.h>

// Function declaration
unsigned int read_and_print_text(char *text_filename, unsigned int max_chars);

// Function definition
unsigned int read_and_print_text(char *text_filename, unsigned int max_chars) {

  // Declare variables
  int open_result;
  int read_result;
  int write_result;
  char *text_buffer;
  
  // Check for valid filename
  if (text_filename == NULL) {
    return 0; 
  }
  
  // Allocate memory for buffer
  text_buffer = malloc(max_chars * sizeof(char));
  if (text_buffer == NULL) {
    return 0;
  }

  // Open file for reading 
  open_result = open(text_filename, READ_ONLY);
  if (open_result == -1) {
    free(text_buffer);
    return 0;
  }

  // Read file contents into buffer
  read_result = read(open_result, text_buffer, max_chars);
  if (read_result == -1) {
    free(text_buffer);
    close(open_result);
    return 0;
  }

  // Print buffer contents to standard output
  write_result = write(STDOUT, text_buffer, read_result);
  if (write_result == -1 || write_result != read_result) {
    free(text_buffer);
    close(open_result);
    return 0;
  }

  // Free buffer, close file
  free(text_buffer);
  close(open_result);

  // Return number of bytes printed
  return write_result;
}
