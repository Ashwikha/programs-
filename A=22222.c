#include<stdio.h>
int main()
{
  char s[100];
  scanf("%s",s);
  int i=0;
  while(s[i]!='\0')
  {
    if(s[i]=='2')
    {
      printf("%c",s[i]);
    }
    i++;
  }
  return 0;
}
