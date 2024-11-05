//
// Created by gapt2 on 05/11/2024.
//

//EJERCICIO 1 IDENTIFICACION DE NUMERO PSOTIVO, NEGATIVO O CERO

#include "Identificacion.h"
#include <iostream>

void Ejercicio1_Identificacion(){ //Esta es la función que se llama en el main.cpp
    int numero1;
    std::cout<<"Dime el numero que quieras ingresar: "; //La máquina nos pide que ingresemos un número
    std::cin>>numero1; //El número que hemos dicho se guarda en la variable numero1
    if(numero1>0){
        std::cout<<"El numero que has ingresado es positivo"<<std::endl; //Si el número ingresado es mayor que 0, la máquina nos dirá que es positivo
    }
    else if(numero1<0){
     std::cout<<"El numero que has ingresado es negativo"<<std::endl; //Si el número ingresado es menor que 0, la máquina nos dirá que es negativo
    }
    else{
        std::cout<<"El numero que has ingresado es cero"<<std::endl; //Si el número ingresado es igual a 0, la máquina nos dirá que es cero
    }
}