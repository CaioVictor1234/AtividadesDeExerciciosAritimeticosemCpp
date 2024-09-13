/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int numero1,numero2,numero3;
    
    //Solicita os numeros utilizados para fazer a media.
    std::cout<<"Digite o primeiro numero:";
    std::cin >> numero1;
    std::cout<<"Digite o primeiro numero:";
    std::cin >> numero2;
    std::cout<<"Digite o primeiro numero:";
    std::cin >> numero3;
    
    //Execução media Aritmetica.
    int mediaAritmetica = (numero1 + numero2 + numero3) / 3;
    
    //Visualização da media Aritmetica.
    std::cout << "A media Aritmetica dos numeros 1,2,3: " << mediaAritmetica;
    
    return 0;
}