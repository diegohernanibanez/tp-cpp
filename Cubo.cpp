#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/Cubo.h"

using namespace std;

void setLado(Cubo &cubo, float dato){
    cubo.Lado = dato;
}

void setColorCubo(Cubo &cubo, string dato){
    cubo.color = dato;
}

void setNroCubo(Cubo &cubo, int dato){
    cubo.numeroOrden = dato;
}

float getLado(Cubo &cubo){
    return cubo.Lado;
}

string getColorCubo(Cubo &cubo){
    return cubo.color;
}

int getNroCubo(Cubo &cubo){
    return cubo.numeroOrden;
}

float areaCubo(Cubo &cubo){
    float lado= cubo.Lado;
    return 6*(lado*lado);
}

void mostrarCubo(Cubo &c){
    cout << "Cubo" << endl;
    cout << "Lado: " << c.Lado << endl;
    cout << "Color: " << c.color << endl;
    cout << "Cantidad de Plastico: " << areaCubo (c) << endl << endl;
}

void borrarCubo(Cubo &cubo){
    delete &cubo;
    cubo.color = "";
}
