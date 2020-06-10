#include <iostream>
#include <cstdlib>
#include <math.h>
#include "include/Cilin.h"

# define M_PIl          3.141592653589793238462643383279502884L
using namespace std;


void setAlturaCilin(Cilin &c, float newAlt ){
    c.altura= newAlt;
}

void setRadioCilin(Cilin &c, float newRadio){
    c.radio= newRadio;
}

void setColorCilin(Cilin &c, string newColor){
    c.color= newColor;
}

void setNroOrdenCilin(Cilin &c, int newNumero){
    c.numeroOrden = newNumero;
}

float getAlturaCilin(Cilin &c){
    return c.altura;
}

float getRadioCilin(Cilin &c){
    return c.radio;
}

string getColorCilin(Cilin &c){
    return c.color;

}

int getNroOrdenCilin(Cilin &cilindro){
    return cilindro.numeroOrden;
}

float areaCilin(Cilin &c){
    float area;
    area= 2*M_PIl*c.radio*(c.radio+c.altura);
    return area;
}

void mostrarCilindro(Cilin &cilindro){
    cout << "Cilindro: " << endl;
    cout << "Radio: " << cilindro.radio << endl;
    cout << "Altura: " << cilindro.altura << endl;
    cout << "Color: " <<cilindro.color<< endl;
    cout << "Cantidad de Plastico:" << areaCilin(cilindro) << endl << endl;
}


void borrarCilindro(Cilin &c){
    delete &c;
    c.color="";
}
