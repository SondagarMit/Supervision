#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *p;
  char ch;
  clrscr();
  p=fopen("supervi.txt","r");
  while((ch=getc(p))!=EOF)
  {

    printf("%c",ch);

  }
  fclose(p);
  getch() ;
}