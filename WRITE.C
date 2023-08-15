#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *p;
  char ch;
  clrscr();
  p=fopen("supervis","w");
  while((ch=getchar())!='z')
  {

    putc(ch,p);
  }
  fclose(p);
  getch() ;
}