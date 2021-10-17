#include<iostream>
#include<string.h>
using namespace std;
int main()
{
     string str1,str2;
     int i=0,j=0,flag=0;

     cout<<"Enter first string:- ";
     getline(cin,str1);

     cout<<"\nEnter Second string:- ";
     getline(cin,str2);

      while(str1[i]!='\0')
      {
        i++;
      }
      while(str2[j]!='\0')
      {
        j++;
      }
     if(i!=j)
     {
        flag=0;
     }
     else
     {
         for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
         {
             if(str1[i]==str2[j])
             {
                flag=1;
             }
         }
     }
     if(flag==0)
     {
        cout<<"\nStrings are not equal.\n";
     }
     else
     {
        cout<<"\nStrings are equal.\n";
     }

      return 0;
}
