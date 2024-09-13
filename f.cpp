/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int numero1,numero2,resultado;
    std::cout<<"Digite um numero: ";
    std::cin>> numero1;
    std::cout<<"Digite outro numero: ";
    std::cin>> numero2;
    resultado = numero2 - numero1;
    std::cout << "O resultado dos numeros que voce colocou é:" << resultado;
    return 0;
}