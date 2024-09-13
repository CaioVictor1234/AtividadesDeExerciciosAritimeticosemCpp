/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>  // Para std::setprecision
using namespace std;

int main() {
    double preco, desconto, precoFinal;

    cout << "Digite o preço do produto: ";
    cin >> preco;
    cout << "Digite o desconto em porcentagem: ";
    cin >> desconto;

    precoFinal = preco - (preco * desconto / 100);

    cout << fixed << setprecision(2);  // Define a precisão para duas casas decimais
    cout << "O preço final com desconto é: R$ " << precoFinal << endl;

    return 0;
}