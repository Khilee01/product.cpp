#include <iostream> 
using namespace std;
int main()
{  int *p; 
 int arr[]={1, 2, 3, 4, 5}; 
 p = arr; 
 cout<<"you entered:";
 for(int i=0; i<5;i++)
 { 
 cout<<*p<<"\t";
  p++; } 
 return 0; }
