#include<stdio.h>
#include<conio.h>
int main()
{
 int a[]={1,2,3,4,5};
 int i,j,n,s,res;
 clrscr();
 printf("Enter sum value :\n ");
 scanf("%d",&s);
 n=sizeof(a)/sizeof(int);
 for(i=0;i<n;i++)
 {
  res=0;
   for(j=i;j<n;j++)
   {
    if(a[j]<s)
    {
     res+=a[j];
     if(res==s)
     {
     for(i=i;i<=j;i++)
     printf("%d+",a[i]);
     printf("=%d",res);
     break;
     }
    }
   }
   if(res==s)
   break;
 }
 getch();
return 0;
}
