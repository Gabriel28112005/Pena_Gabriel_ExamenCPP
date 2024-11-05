//
// Created by gapt2 on 05/11/2024.
//

#include "Promocion.h"
#include "Operaciones.h"
#include <iostream>
void Ejercicio4_Promocion(){ //Función que se llama en el main.cpp
    double precio1, precio2, precio3;
    std::cout<<"Dime el precio del primer producto: "<<std::endl; //La máquina nos pide el precio del primer producto
    std::cin>>precio1;  //El precio del primer producto se guarda en la variable precio1
    std::cout<<"Dime el precio del segundo producto: "<<std::endl;  //La máquina nos pide el precio del segundo producto
    std::cin>>precio2; //El precio del segundo producto se guarda en la variable precio2
    std::cout<<"Dime el precio del tercer producto: "<<std::endl;   //La máquina nos pide el precio del tercer producto
    std::cin>>precio3;  //El precio del tercer producto se guarda en la variable precio3

    if(precio1>precio3 && precio2>precio3){
        std::cout<<"El precio a pagar son: "<<suma1(precio1, precio2)<<" euros"<<std::endl; //Se ejecuta esta opción si los precios del primer producto y segundo producto respectivamente son mayores que el precio del tercer producto
    }
    else if(precio1>precio2 && precio3>precio2){
        std::cout<<"El precio a pagar son: "<<suma2(precio1, precio3)<<" euros"<<std::endl; //Se ejecuta esta opción si el precio del primer producto y tercer producto respectivamente son mayores que el precio del segundo producto
    }
    else{
        std::cout<<"El precio a pagar son: "<<suma3(precio2, precio3)<<" euros"<<std::endl; //Se ejecuta esta opción si el precio del segundo y tercer producto respectivamente son mayores que el precio del primer producto
    }
}