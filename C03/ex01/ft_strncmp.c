int ft_strncmp(char *s1, char *s2, unsigned int n) {
  unsigned int i = 0;
  if (n == 0)
    return 0;
  while (i < n && s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] == s2[i])
      i++;
    else
      return s1[i] - s2[i];
  }
  if (i < n)
    return s1[i] - s2[i];
  return 0;
}