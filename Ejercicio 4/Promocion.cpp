//
// Created by gapt2 on 05/11/2024.
//

#include "Promocion.h"
#include "Operaciones.h"
#include <iostream>
void Ejercicio4_Promocion(){
    int precio1, precio2, precio3;
    std::cout<<"Dime el precio del primer producto: "<<std::endl;
    std::cin>>precio1;
    std::cout<<"Dime el precio del segundo producto: "<<std::endl;
    std::cin>>precio2;
    std::cout<<"Dime el precio del tercer producto: "<<std::endl;
    std::cin>>precio3;
    if(precio1>precio2 && precio2>precio3){
        std::cout<<"El precio a pagar son: "<<suma1(precio1, precio2)<<" euros"<<std::endl;
    }
    else if(precio1>precio2 && precio3>precio2){
        std::cout<<"El precio a pagar son: "<<suma2(precio1, precio3)<<" euros"<<std::endl;
    }
    else{
        std::cout<<"El precio a pagar son: "<<suma3(precio2, precio3)<<" euros"<<std::endl;
    }
}