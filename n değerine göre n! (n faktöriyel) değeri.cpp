#include <iostream>
using namespace std;
int main()
{
 int i,faktoriyel=1,sayi;
 
 cout<<"Bir sayi giriniz:\n";
 cin>>sayi;
 
 for(i=1;i<=sayi;i++)
 
 faktoriyel*=i;
 cout<<"Cevap:\n"<<faktoriyel; 
}
