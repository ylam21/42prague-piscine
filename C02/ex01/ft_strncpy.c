char *ft_strncpy(char *dest, char *src, unsigned int n) {
  int counter = 0;
  while (counter != n) {
    dest[counter] = src[counter];
    ++counter;
  }
  return dest;
}