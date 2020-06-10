#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <string.h>
#include "include/Rectangulo.h"

using namespace std;

void setBase(Rectangulo &rectangulo, float dato){
    rectangulo.base = dato;
}

void setAltura(Rectangulo &rectangulo, float dato){
    rectangulo.altura = dato;
}

void setColorRectangulo(Rectangulo &rectangulo, string dato){
    rectangulo.color = dato;
}

void setNroRectangulo(Rectangulo &rectangulo, int dato){
    rectangulo.numeroOrden = dato;
}

float getBase(Rectangulo &rectangulo){
    return rectangulo.base;
}

float getAltura(Rectangulo &rectangulo){
    return rectangulo.altura;
}

string getColorRectangulo(Rectangulo &rectangulo){
    return rectangulo.color;
}

int getNroRectangulo(Rectangulo &rectangulo){
    return rectangulo.numeroOrden;
}

float areaRectangulo(Rectangulo &rectangulo){
    float base = rectangulo.base;
    float altura = rectangulo.altura;
    return base*altura;
}

void mostrarRectangulo(Rectangulo &rectangulo){
    cout << "Rectangulo: " << endl;
    cout << "Base: " << rectangulo.base << endl;
    cout << "Altura: " << rectangulo.altura << endl;
    cout << "Color: " << rectangulo.color << endl;
    cout << "Cantidad de Plastico:" << areaRectangulo(rectangulo) << endl << endl; 
}

void borrarRectangulo(Rectangulo &rectangulo){
    delete &rectangulo;
    rectangulo.color = "";
}



