#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
  scanf("%s",s);
  int count=0;
  for(int i=0;i<strlen(s);i++)
  {
    if(s[i]=='i' || s[i]=='j')
    {
      count++;
    }
  }
  printf("%d",count);
  return 0;
  
}
