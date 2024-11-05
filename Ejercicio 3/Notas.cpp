//
// Created by gapt2 on 05/11/2024.
//

#include "Notas.h"
#include "funciones.h"
#include <iostream>
void Ejercicio3_Notas(){ //Funcion que se llama en el main.cpp
    float nota_primera; //La primera nota puede tener decimales
    float nota_segunda; //La segunda nota puede tener decimales
    float nota_tercera; //La tercera nota puede tener decimales
    float nota_cuarta;  //La cuarta nota puede tener decimales
    float nota_quinta;  //La quinta nota puede tener decimales
    float nota_sexta;   //La sexta nota puede tener decimales
    float nota_septima; //La septima nota puede tener decimales
    float nota_octava;  //La octava nota puede tener decimales
    float nota_total= nota_primera + nota_segunda + nota_tercera + nota_cuarta + nota_quinta + nota_sexta + nota_septima + nota_octava; //Esta es la suma de las calificaciones
    float nota_promedio = nota_total/8; //Este es el promedio de las calificaciones obtenidas
    std::cout<<"Dime la nota que has sacado en el primer ejercicio: "<<std::endl;   //El programa nos pregunta la nota que hemos sacado en el primer ejercicio
    std::cin>>nota_primera; //La nota que hemos sacado en el primer ejercicio se guarda en la variable nota_primera
    std::cout<<"Dime la nota que has sacado en el segundo ejercicio: "<<std::endl;  //El programa nos pregunta la nota que hemos sacado en el segundo ejercicio
    std::cin>>nota_segunda; //La nota que hemos sacado en el segundo ejercicio se guarda en la variable nota_segunda
    std::cout<<"Dime la nota que has sacado en el tercer ejercicio: "<<std::endl;   //El programa nos pregunta la nota que hemos sacado en el tercer ejercicio
    std::cin>>nota_tercera; //La nota que hemos sacado en el tercer ejercicio se guarda en la variable nota_tercera
    std::cout<<"Dime la nota que has sacado en el cuarto ejercicio: "<<std::endl;   //El programa nos pregunta la nota que hemos sacado en el cuarto ejercicio
    std::cin>>nota_cuarta; //La nota que hemos sacado en el cuarto ejercicio se guarda en la variable nota_cuarta
    std::cout<<"Dime la nota que has sacado en el quinto ejercicio: "<<std::endl;   //El programa nos pregunta la nota que hemos sacado en el quinto ejercicio
    std::cin>>nota_quinta;  //La nota que hemos sacado en el quinto ejercicio se guarda en la variable nota_quinta
    std::cout<<"Dime la nota que has sacado en el sexto ejercicio: "<<std::endl;    //El programa nos pregunta la nota que hemos sacado en el sexto ejercicio
    std::cin>>nota_sexta;   //La nota que hemos sacado en el sexto ejercicio se guarda en la variable nota_sexta
    std::cout<<"Dime la nota que has sacado en el septimo ejercicio: "<<std::endl;  //El programa nos pregunta la nota que hemos sacado en el septimo ejercicio
    std::cin>>nota_septima; //La nota que hemos sacado en el septimo ejercicio se guarda en la variable nota_septima
    std::cout<<"Dime la nota que has sacado en el octavo ejercicio: "<<std::endl;   //El programa nos pregunta la nota que hemos sacado en el octavo ejercicio
    std::cin>>nota_octava;  //La nota que hemos sacado en el octavo ejercicio se guarda en la variable nota_octava

    std::cout<<"El promedio de tus calificiaciones es: "<<nota_promedio<<std::endl; //El programa nos dice el promedio de nuestras calificaciones
}