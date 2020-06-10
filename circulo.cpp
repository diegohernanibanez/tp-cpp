#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/circulo.h"
# define PI_N          3.141592653589793238462643383279502884

using namespace std;


void setRadioCirculo(Circulo &circulo, float dato){
    circulo.radio = dato;
}


void setColorCirculo(Circulo &circulo, string dato){
    circulo.color = dato;
}

void setNroCirculo(Circulo &circulo, int dato){
    circulo.numeroOrden = dato;
}

float getRadioCirculo(Circulo &circulo){
    return circulo.radio;
}

string getColorCirculo(Circulo &circulo){
    return circulo.color;
}

int getNroOrdenCirculo(Circulo &circulo){
    return circulo.numeroOrden;
}

float areaCirculo(Circulo &circulo){
    float radio = circulo.radio;
    return radio * radio * PI_N;
}

void mostrarCirculo(Circulo &circulo){
    cout << "Circulo: " << endl;
    cout << "Radio: " << circulo.radio << endl;
    cout << "Color: " << circulo.color << endl;
    cout << "Cantidad de Plastico: " << areaCirculo(circulo) << endl << endl;
}

void borrarCirculo(Circulo &circulo){
    delete &circulo;
    circulo.color = "";
}