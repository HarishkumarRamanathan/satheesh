#include<stdio.h>
#include<conio.h>
int main()
{
 int n,a[100],i,f=1;
 clrscr();
 printf("Enter n  :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  if(a[i]==i)
  {
  printf("%d \t",a[i]);
  f=0;
  }
  else if(i==n-1 && f==1)
  printf("no matches");
 }
    getch();
return 0;
}
