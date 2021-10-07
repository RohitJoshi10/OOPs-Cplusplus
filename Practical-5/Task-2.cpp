#include<iostream>
using namespace std;

void charfun()
 {
  char a= 'a';
  cout<<sizeof(char)<<endl;
  cout<<sizeof(a)<<endl;
 }
 
void boolfun()
 {
  bool a= (4>9);
  cout<<sizeof(bool)<<endl;
  cout<<sizeof(a)<<endl;
  }
void shortfun()
 {
 short a=2;
 cout<<sizeof(short)<<endl;
  cout<<sizeof(a)<<endl;
 }
void intfun()
 {
  int a=2564;
  cout<<sizeof(int)<<endl;
  cout<<sizeof(a)<<endl;
 }
void longfun()
 {
   long a=145254;
   cout<<sizeof(long)<<endl;
  cout<<sizeof(a)<<endl;
 }
void floatfun()
 {
  float a= 15.2f;
 cout<<sizeof(float)<<endl;
  cout<<sizeof(a)<<endl;
 }
void doublefun()
{
 double a=14.54;
 cout<<sizeof(double)<<endl;
  cout<<sizeof(a)<<endl;
}
void longdoublefun()
{ 
 long double a=123.768;
 cout<<sizeof(long double)<<endl;
  cout<<sizeof(a)<<endl;
}
void widecharfun()
{
 wchar_t a='A';
 cout<<sizeof(wchar_t)<<endl;
  cout<<sizeof(a)<<endl;
}
int main()
{
 charfun();
 boolfun();
 shortfun();
 intfun();
 longfun();
 floatfun();
 doublefun();
 longdoublefun();
 widecharfun();
  return 0;
  }
