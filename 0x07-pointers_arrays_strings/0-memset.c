/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with the constant byte b.
 *
 * @param s: The memory area to fill.
 * @param b: The constant byte to fill with.
 * @param n: The number of bytes to fill.
 *
 * @return A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n) {
  /* Loop over the first n bytes of the memory area pointed to by s */
for (unsigned int i = 0; i < n; i++) {
    /* Set the byte at s[i] to the constant byte b */
s[i] = b;
}

  /* Return a pointer to the memory area s */
return (s);
}
