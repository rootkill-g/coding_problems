#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
  char str[315], c;
  int i, j, t, ar[26] = {0};

  scanf("%d", &t);
  scanf("%c", &c);
  while (t-- > 0) {

    gets(str);
    j = strlen(str);
    for (i = 0; i < j; i++) {
      c = str[i];
      if (c >= 65 && c <= 90)
        ar[c - 65] = 1;
      else if (c >= 97 && c <= 122)
        ar[c - 97] = 1;
    }
    for (i = 0, j = 0; i < 26; i++)
      if (ar[i] != 1) {
        printf("%c", 'a' + i);
        j++;
      } else
        ar[i] = 0;
    if (j == 0)
      printf("~");
    j = 0;
    printf("\n");
  }
}
