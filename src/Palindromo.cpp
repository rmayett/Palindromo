/*Rodrigo Mayett Guzman
se define el metodo del palindromo 
recibe una cadena 
y no regresa nada*/
#include "Palindromo.h"

Palindromo::Palindromo(std::string palabra){
	int i;
	//se borran los espacios 
	for (i = 0; i < palabra.size(); i++)
	{		
		if (palabra.at(i)==32)
		{
			palabra.erase(i,1);
		}
	}
//se guarda la cadena si espacios en una cola
	for (i = 0; i < palabra.size(); i++)
	{
		cola.push(palabra.at(i));			
	}
//se guarda la cadena sin espacios en una pila	
	for (i = 0; i < palabra.size(); i++)
	{
		pila.push(palabra.at(i));			
	}
//recorre la pila y la cola 
//comprobando que la cadena sea igual 
	for(i=0;i<palabra.size();i++){
	//si es distinta termina el programa 
		if (cola.front()!=pila.top())
		{
		//e imprime que no es un palindromo
			std::cout<<"No es un Palindromo"<<std::endl;
			return ;
		}	
	}
//si cumple imprime el palindromo sin espacios 
//e imprime que si es un palindromo	
	std::cout<<palabra<<"\nEs un palindromo"<<std::endl;
}
