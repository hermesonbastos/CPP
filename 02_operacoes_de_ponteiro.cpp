#include <iostream>
using namespace std;

int main(){
    int y = 5; // declara a variável y
    int *yPtr; // declara variável ponteiro yPtr

    yPtr = &y; // atribui o endereço de y a yPtr
    
    cout << *yPtr << endl; // imprime o valor da variável para qual está apontando, no caso "y"

    // o uso do * nesse contexto pode ser chamado de desreferenciar um ponteiro

    *yPtr = 9; // atribui o valor 9 a variável y

    cin >> *yPtr; // coloca o valor da entrada em y

}