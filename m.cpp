/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int celsius;
    //Solicitando que o usuario digite a temperatura em Celsius;
    std::cout << "Digite uma temperatura em Celsius: ";
    std::cin >> celsius;
    
    //Formula para tranformar celsius em Fahrenheit;
    int Fahrenheit = (celsius * 1,8) + 32;
    
    //Mostrando na tela a mensagem, da temperatura em Fahrenheit;
    std::cout << "A temperatura em Fahrenheit convertida de Celsius para Fahrenheit é:" << Fahrenheit;
    return 0;
}