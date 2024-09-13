/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main() {
    int divisor;
    const int dividendo = 100; // Valor fixo para a divisão

    // Solicita o divisor
    std::cout << "Digite um número para dividir 100: ";
    std::cin >> divisor;

    // Calcula e exibe o resultado da divisão inteira
    int resultado = dividendo / divisor;
    std::cout << "O resultado da divisão inteira é: " << resultado << std::endl;

    return 0;
}