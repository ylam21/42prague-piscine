char *ft_strcpy(char *dest, char *src) {
  int counter = 0;
  while (src[counter] != '\0') {
    dest[counter] = src[counter];
    ++counter
  }

  return dest;
}