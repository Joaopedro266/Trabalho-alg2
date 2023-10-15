#include <iostream>
#include <cmath>
using namespace std;

    bool Exer1(int x) {
    return (x % 4 == 0);
    }
  
    
    string Exer2(int x) {
         if(x%2==0){
                return  "eh par";
            }
            else{
                return "eh impar";
            }
        
    }
    
    int Exer3(){
        int z, y, s=0;
        cin >>z >> y;
            while(z<y){
                s+=z;
                z++;
            }
        s+=y;
        return s;
    }
    
    float Exer4(float x){
        float aux;
        double pi=M_PI;
        aux=x;
            for(int i=1 ; i<3; i++){
                x*=aux;
            }
        float v;
        v=((4*pi)*x)/3;
        return v;
    }
    
    int Exer5(int x){
        int aux=1, r;
        r=x;
        while(aux<x){
            r*=aux;
            aux++;
        }
        return r;
    }
    
    int Exer6(int b, int e){
        for(int i = 1; i<e; i++){
            b*=e;
        }
        return b;
    }
    
int main(){
   
   
   //Exer1
    /*
   int x;
   cin >>x;
   if(Exer1(x)){
      cout << "eh multiplo";
   }
   else{
       cout << "nao eh";
   }
   */
   
   
   //Exer2
   /*
   int x;
   cin >>x;
   cout << Exer2(x);
   */
   
   
   //Exer3
   /*
   int resultadoExer3 = Exer3();
   cout << resultadoExer3;
   */
   
   
   //Exer4
   /*
   float x;
   cin >> x;
   cout << Exer4(x);
   */
   
   
   //Exer5
   /*
   int x;
   cin >> x;
   cout << Exer5(x);
   */
   
   
   //Exer6
   /*
   int b, e;
   cin >> b >> e;
   cout <<Exer6(b,e);
   */

   
}

   
   
  
