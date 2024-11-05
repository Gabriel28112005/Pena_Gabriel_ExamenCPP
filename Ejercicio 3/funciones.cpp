//
// Created by gapt2 on 05/11/2024.
//

#include <iostream>
#include <cmath>

float suma(float nota_primera, float nota_segunda, float nota_tercera, float nota_cuarta, float nota_quinta, float nota_sexta, float nota_septima, float nota_octava){
    return nota_primera + nota_segunda + nota_tercera + nota_cuarta + nota_quinta + nota_sexta + nota_septima + nota_octava;
}

float promedio(float nota_primera, float nota_segunda, float nota_tercera, float nota_cuarta, float nota_quinta, float nota_sexta, float nota_septima, float nota_octava){
    return suma(nota_primera, nota_segunda, nota_tercera, nota_cuarta, nota_quinta, nota_sexta, nota_septima, nota_octava)/8;
}



