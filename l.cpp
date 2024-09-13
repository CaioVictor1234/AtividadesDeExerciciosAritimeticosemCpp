/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    double pesoDoUsuario,alturaDoUsuario,iMc;
    //Solicitando o pesoDoUsuario e a alturaDoUsuario.
    std::cout<<"Digite seu peso: ";
    std::cin >> pesoDoUsuario; 
    std::cout<<"Digite sua altura: ";
    std::cin >> alturaDoUsuario; 
    
    //Calculo do IMC do usuario.
    double alturaDoUsuarioAoQuadrado = alturaDoUsuario * alturaDoUsuario;
    iMc = pesoDoUsuario/alturaDoUsuarioAoQuadrado;
    
    //Mostrando o IMC do usuario.
    std::cout << "O IMC do usuario é: " << iMc;
    return 0;
}