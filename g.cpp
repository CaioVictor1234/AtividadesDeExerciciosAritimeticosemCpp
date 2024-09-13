/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib> // Para a função abs()

int main() {
    // Declaração da variável para armazenar o número
    int numero;
    
    // Solicita ao usuário para digitar um número
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;
    
    // Calcula o valor absoluto usando a função abs()
    int valorAbsoluto = std::abs(numero);
    
    // Exibe o valor absoluto
    std::cout << "O valor absoluto de " << numero << " é " << valorAbsoluto << "." << std::endl;
    
    return 0;
}