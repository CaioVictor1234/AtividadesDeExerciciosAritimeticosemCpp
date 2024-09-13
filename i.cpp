/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main() {
    // Declaração da variável para armazenar o número inserido pelo usuário
    int numero;

    // Solicita ao usuário que digite um número
    std::cout << "Digite um número: ";
    std::cin >> numero;

    // Calcula o resto da divisão do número por 2
    int resto = numero % 2;

    // Exibe o resultado
    std::cout << "O resto da divisão de " << numero << " por 2 é: " << resto << std::endl;

    return 0;
}