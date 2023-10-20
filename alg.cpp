
#include <iostream>
#include <cctype>
using namespace std;  
/*EXER1
int Exer1(int n);
int main()
{
    int n;
    cin >> n;
   cout << Exer1(n);
    return 0;
}
int Exer1(int n){
    int r=0;
  for(int i = 1; i < n; i++){
      r+=i;
  }
  r+=n;
  return r;
}
*/

/*EXER2
bool Exer2(int n);
int main()
{
    int n;
    cin >> n;
    if(Exer2(n)){
        cout << "Eh bissexto" << endl;
    }
    else{
        cout << "Nao eh bissexto" << endl;
    }
}
bool Exer2(int n){
    if(n%4==0 || n%400==0){
        if(n%100==0 && n%400!=0){
            return false;
        }
        else{
            return true;
        }
    }
    else{ 
        return false;
    }
}
*/

/*EXER3
string Exer3(int n);

int main(){
    int n;
    cin >> n;
    cout << Exer3(n);
}

string Exer3(int n){
    string binario="";
    if(n==0){
        binario='0';
    }
    else{
        while(n>0){
            if(n%2==0){
                binario= '0' + binario;
            }
            else{
                binario= '1' + binario;
            }
            n/=2;
        }
    }
        return binario;

}
*/

/*Exer 4
bool testesenha(string senha);
int main(){
    string senha;
    cin >> senha;
    if(testesenha(senha)){
        cout << "pode";
    }
    else{
        cout << "nao pode";
    }

}
bool testesenha(string senha){
    int tamanho = 0;
    if(senha.length()>=8){
        while(tamanho<senha.length()){
            if(isupper(senha[tamanho]) || islower(senha[tamanho])){
                    while (tamanho < senha.length()) {
                        if (senha[tamanho] >= '0' && senha[tamanho] <= '9'){
                            return true; 
                        }
                tamanho++;
                }
            }
            else{
                tamanho++;
            }
        }
        return false;
    }
    else{
        return false;
    }
}
*/
/*Exer 5
float Juros(float i, float n);
int main(){
    float i, n;
    cin >> i >> n;
    cout << Juros(i,n);
}
float Juros(float i, float n){
    float j=1;
    for(int b=1; b<=n; b++){
    j*=(1+i);
    }
    return j;
}
*/

//Exer6
void ordenador(int t);

int main() {
    int t;
    cin >> t;
    ordenador(t);
}

void ordenador(int t) {
    int vetor[t], vetorcerto[t], n;
    
    for (int i = 0; i < t; i++) {
        cin >> n;
        vetor[i] = n;
    }

    for (int i = 0; i < t - 1; i++) {
        for (int j = i + 1; j < t; j++) {
            if (vetor[j] < vetor[i]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    for (int i = 0; i < t; i++) {
        cout << vetor[i] << " ";
    }
}




