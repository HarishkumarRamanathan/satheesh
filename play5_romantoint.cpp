#include<iostream.h>
#include<conio.h>


int main()
{
char *n;
char valid_vlaues[]={'I','V','X','L','C','D','M'};
int value[]={1,5,10,50,100,500,1000};
int ans[10]={0};//store values 
cin>>n;
for(int i=0,coninous_repeated=0;n[i]!='\0';i++)
{
int count=0;
char tm;//temp 

if(i==0)
tm=n[0];
else
	if(n[i]==n[i-1])
	   coninous_repeated++;
	else
	tm=n[i];

for(int j=0;j<=6;j++)
{
	if(n[i]==valid_vlaues[j])
		count++;
	else
		break;


}
if(count>6||coninous_repeated>2)//first instance is not into account 

 {
 cout<<"INVALID";
 getch();
 return 0;
 }
}
 int res=0,answer_index=0;

 for( i=0;n[i]!='\0';i++,answer_index++)
{
int ind;
 for(int j=0;j<6;j++)
    {
	if(n[i]==valid_vlaues[j])
	  {
	  ind=j;
	    break;
	  }
     }
    ans[answer_index]=value[ind];

}

for(int j=0;ans[j]!=0;j++)
      {
    // cout<<ans[j];
      if(j>0&&ans[j]>ans[j-1]) //XIV I is smaller than V so substract twices since i have added I to ans
	res+=ans[j]-ans[j-1]*2;
      else
      res+=ans[j];
      }
cout<<res;


return 0;
}
