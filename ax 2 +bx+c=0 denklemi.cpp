#include<iostream> 
#include<math.h> 
   
  using namespace std; 
   
  int main() 
  { 
   
      float a,b,c; 
      float x1,x2; 
      float delta; 
   
      cout<<"a,b,c sayilarini sirasiyla entera basarak yaziniz: " ; 
      cin>> a>>b>>c ; 
   
      delta=b*b-4*a*c ; 
   
      if (delta<0) 
   
      cout<<"Reel kok yok!" << endl; 
   
      else { 
   
      if (delta==0) { 
   
      cout<<"Tek kok vardir" << endl;
   
      x1=-b/(2*a); 
       
   
      cout<<x1<< endl; 
      } 
   
      else { 
      
      if (delta>0)
   
      x1=(-b + sqrt(delta)) / (2*a) ; 
      x2=(-b - sqrt(delta)) / (2*a) ; 
   
      cout<<"iki tane reel kok vardir: " <<x1<< "ve" <<x2<<" dir..."<<endl; 
      } 
   
  } 
      return 0; 
   
  } 
   
  
