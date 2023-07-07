#include<iostream>
using namespace std;
class calcutator{
  public:
           virtual sum(float num1,float num2)=0;
           virtual subtraction(float num1,float num2)=0; 
           virtual multiplication(float num1,float num2)=0; 
           virtual division(float num1,float num2)=0;       
      ~calculator (){    }
};
class functions:public calculator{
       public:
              void sum(float num1,float num2){
                    float addition =num1+num2;
                       cout<<"Result is: "<<sum<<endl;
              }
               void subtration(float num1,float num2){
                    float sub=num1+num2;
                       cout<<"Result is: "<<subtraction<<endl;
              }
                void multiplication(float num1,float num2){
                    float mult =num1+num2;
                       cout<<"Result is: "<<multiplication<<endl;
              } 
                 void division(float num1,float num2){
                   try{
                         float div=num1/num2;
                      if(num2>0){ 
                          cout<<"Result is: "<<division<<endl;
                     }
                        else{ 
                                  throw(num2);
                        }
                   catch (...){
                                  cout<<Zero is not divisible by a number"<<endl;
                               }
                            
};
//Driver code
int main ()
{

return 0;
}

