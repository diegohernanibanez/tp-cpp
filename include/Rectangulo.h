#ifndef RECTANGULO_H
#define RECTANGULO_H

using namespace std;

typedef struct Rectangulo {
    float base;
    float altura;
    string color;
    int numeroOrden;
}rectangulo;

//REQUIERE QUE HAYA UN RECTANGULO CREADO Y UN VALOR PARA ASIGNAR
void setBase(Rectangulo &rectangulo, float dato);
//ASIGNA EL VALOR AL RECTANGULO

//REQUIERE QUE HAYA UN RECTANGULO CREADO Y UN VALOR PARA ASIGNAR
void setAltura(Rectangulo &rectangulo, float dato);
//ASIGNA EL VALOR AL RECTANGULO

//REQUIERE QUE HAYA UN RECTANGULO CREADO Y UN VALOR PARA ASIGNAR
void setColorRectangulo(Rectangulo &rectangulo, string dato);
//ASIGNA EL VALOR AL RECTANGULO

//REQUIERE QUE HAYA UN RECTANGULO CREADO Y UN VALOR PARA ASIGNAR
void setNroRectangulo(Rectangulo &rectangulo, int dato);
//ASIGNA EL VALOR AL RECTANGULO

//REQUIERE QUE HAYA UN RECTANGULO CREADO
float getBase(Rectangulo &rectangulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN RECTANGULO CREADO
float getAltura(Rectangulo &rectangulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN RECTANGULO CREADO
string getColorRectangulo(Rectangulo &rectangulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN RECTANGULO CREADO
int getNroRectangulo(Rectangulo &rectangulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN RECTANGULO CREADO
float areaRectangulo(Rectangulo &rectangulo);
//CALCULA EL AREA DEL RECTANGULO

//REQUIERE QUE HAYA UN RECTANGULO CREADO
void mostrarRectangulo(Rectangulo &rectangulo);
//MUESTRA POR CONSOLA LOS VALORES QUE TIENE EL RECTANGULO

//REQUIERE QUE HAYA UN RECTANGULO CREADO
void borrarRectangulo(Rectangulo &rectangulo);
//ELIMINA EL RECTANGULO


#endif // RECTANGULO_H
