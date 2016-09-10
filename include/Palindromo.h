/* Rodrigo Mayett Guzman
el programa verifica si la palabra es un palindromo*/
//bibliotecas de la clase usadas
#include <iostream>
#include <string>
#include <queue>
#include <stack>

class Palindromo
{
private:
	//atributos de la clase 
	std::string palabra;
    std::stack<char> pila;
    std::queue<char> cola;    
public:
	//constructor de la clase
	Palindromo(std::string palabra);
	//~Palindromo();

};