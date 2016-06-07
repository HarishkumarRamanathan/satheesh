#include <iostream.h>
#include <string.h>
int main()
{
   char arr[100];
   cout<<"Enter a string to reverse\n";
   cin>>arr;
   strrev(arr);
   cout<<"Reverse of entered string is :"<<arr;

   return 0;
}
