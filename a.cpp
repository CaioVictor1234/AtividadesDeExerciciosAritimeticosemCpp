/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main()
{   
    int numero1,numero2,sum;
    std::cout<<"Digite um numero: ";
    std::cin>> numero1;
    std::cout<<"Digite outro numero: ";
    std::cin>> numero2;
    sum = numero1 + numero2;
    std::cout << "A soma dos numeros é: " << sum;
    return 0;
}