#ifndef _CIRCULO_H_
#define _CIRCULO_H_

using namespace std;

typedef struct Circulo {
    float radio;
    string color;
    int numeroOrden;
}circulo;

//REQUIERE QUE HAYA UN CIRCULO CREADO Y UN VALOR PARA ASIGNAR
void setRadioCirculo(Circulo &circulo, float dato);
//ASIGNA EL VALOR AL CIRCULO

//REQUIERE QUE HAYA UN CIRCULO CREADO Y UN VALOR PARA ASIGNAR
void setColorCirculo(Circulo &circulo, string dato);
//ASIGNA EL VALOR AL CIRCULO

//REQUIERE QUE HAYA UN CIRCULO CREADO Y UN VALOR PARA ASIGNAR
void setNroCirculo(Circulo &circulo, int dato);
//ASIGNA EL VALOR AL CIRCULO

//REQUIERE QUE HAYA UN CIRCULO CREADO
float getRadioCirculo(Circulo &circulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN CIRCULO CREADO
string getColorCirculo(Circulo &circulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN CIRCULO CREADO
int getNroOrdenCirculo(Circulo &circulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN CIRCULO CREADO
float areaCirculo(Circulo &circulo);
//CALCULA EL AREA DEL CIRCULO

//REQUIERE QUE HAYA UN CIRCULO CREADO
void mostrarCirculo(Circulo &circulo);
//MUESTRA POR CONSOLA LOS VALORES QUE TIENE EL CIRCULO

//REQUIERE QUE HAYA UN CIRCULO CREADO
void borrarCirculo(Circulo &circulo);
//ELIMINA EL CIRCULO

#endif