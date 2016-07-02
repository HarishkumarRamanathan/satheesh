#include<stdio.h>
#include<conio.h>
int main()
{
 int n,a[100],i,count[100]={0},f=1;
 clrscr();
 printf("Enter n  :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 count[a[i]]++;
 }
 for(i=0;i<n;i++)
 {
  if(count[a[i]]==1)
  {
  printf("%d \t",a[i]);
  count[a[i]]=0;
  f=0;
  }
  else if(i==n-1 && f==1)
  printf("no repeats");
 }
    getch();
return 0;
}
