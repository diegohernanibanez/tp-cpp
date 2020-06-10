#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/triangulo.h"

using namespace std;

void setCatetoMenor(Triangulo &triangulo, float dato){
    triangulo.catetoMenor = dato;
}

void setCatetoMayor(Triangulo &triangulo, float dato){
    triangulo.catetoMayor = dato;
}

void setColorTriangulo(Triangulo &triangulo, string dato){
    triangulo.color = dato;
}

void setNroTriangulo(Triangulo &triangulo, int dato){
    triangulo.numeroOrden = dato;
}

float getCatetoMenor(Triangulo &triangulo){
    return triangulo.catetoMenor;
}

float getCatetoMayor(Triangulo &triangulo){
    return triangulo.catetoMayor;
}

string getColorTriangulo(Triangulo &triangulo){
    return triangulo.color;
}

int getNroTriangulo(Triangulo &triangulo){
    return triangulo.numeroOrden;
}

float areaTriangulo(Triangulo &triangulo){
    float base = triangulo.catetoMenor;
    float altura = triangulo.catetoMayor;
    return base*altura/2;
}

void mostrarTriangulo(Triangulo &triangulo){
    cout << "Triangulo: " << endl;
    cout << "Cateto mayor: " << triangulo.catetoMayor << endl;
    cout << "Cateto menor: " << triangulo.catetoMenor << endl;
    cout << "Color: " << triangulo.color << endl;
    cout << "Cantidad de Plastico: " << areaTriangulo(triangulo) << endl << endl;
}

void borrarTriangulo(Triangulo &triangulo){
    delete &triangulo;
    triangulo.color = "";
}