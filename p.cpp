/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>    // Para M_PI (constante pi)
using namespace std;

int main() {
    double raio, altura, volume;

    cout << "Digite o raio do cilindro: ";
    cin >> raio;
    cout << "Digite a altura do cilindro: ";
    cin >> altura;

    volume = M_PI * pow(raio, 2) * altura;  // Volume = π * r² * h

    cout << "O volume do cilindro é: " << volume << endl;

    return 0;
}