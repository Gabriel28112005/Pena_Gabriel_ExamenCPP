//
// Created by gapt2 on 05/11/2024.
//

#include "Dia_semana.h"
#include <iostream>

void Ejercicio2_Dia_semana(){ //Esta es la función que se llama en el main.cpp
    int numero2;
    std::cout<<"Dime un numero del 1 al 7 para saber a cual dia de la semana pertece: "<<std::endl; //La máquina nos pregunta que número queremos ingresar para saber a qué día de la semana pertenece
    std::cin>>numero2; //El numero que le hemos dicho a la máquina se guarda en la variable numero2
    switch(numero2){ //Acá hacemos que la máquina compare el número que hemos ingresado con los casos que hemos puesto
        case 1:
            std::cout<<"El dia de la semana que corresponde al numero que has ingresado es Lunes"<<std::endl;
            break;
        case 2:
            std::cout<<"El dia de la semana que corresponde al numero que has ingresado es Martes"<<std::endl;
            break;
        case 3:
            std::cout<<"El dia de la semana que corresponde al numero que has ingresado es Miercoles"<<std::endl;
            break;
        case 4:
            std::cout<<"El dia de la semana que corresponde al numero que has ingresado es Jueves"<<std::endl;
            break;
        case 5:
            std::cout<<"El dia de la semana que corresponde al numero que has ingresado es Viernes"<<std::endl;
            break;
        case 6:
            std::cout<<"El dia de la semana que corresponde al numero que has ingresado es Sabado"<<std::endl;
            break;
        case 7:
            std::cout<<"El dia de la semana que corresponde al numero que has ingresado es Domingo"<<std::endl;
            break;
        default:
            std::cout<<"El numero que has ingresado no corresponde a ningun dia de la semana"<<std::endl;
            break;
    }
}