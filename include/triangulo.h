#ifndef _TRIANGULO_H_
#define _TRIANGULO_H_

using namespace std;

typedef struct Triangulo {
    float catetoMayor;
    float catetoMenor;
    string color;
    int numeroOrden;
}triangulo;

//REQUIERE QUE HAYA UN TRIANGULO CREADO Y UN VALOR PARA ASIGNAR
void setCatetoMenor(Triangulo &triangulo, float dato);
//ASIGNA EL VALOR AL TRIANGULO

//REQUIERE QUE HAYA UN TRIANGULO CREADO Y UN VALOR PARA ASIGNAR
void setCatetoMayor(Triangulo &triangulo, float dato);
//ASIGNA EL VALOR AL TRIANGULO

//REQUIERE QUE HAYA UN TRIANGULO CREADO Y UN VALOR PARA ASIGNAR
void setColorTriangulo(Triangulo &triangulo, string dato);
//ASIGNA EL VALOR AL TRIANGULO

//REQUIERE QUE HAYA UN TRIANGULO CREADO Y UN VALOR PARA ASIGNAR
void setNroTriangulo(Triangulo &triangulo, int dato);
//ASIGNA EL VALOR AL TRIANGULO

//REQUIERE QUE HAYA UN TRIANGULO CREADO
float getCatetoMenor(Triangulo &triangulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN TRIANGULO CREADO
float getCatetoMayor(Triangulo &triangulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN TRIANGULO CREADO
string getColorTriangulo(Triangulo &triangulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN TRIANGULO CREADO
int getNroTriangulo(Triangulo &triangulo);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN TRIANGULO CREADO
float areaTriangulo(Triangulo &triangulo);
//CALCULA EL AREA DEL TRIANGULO

//REQUIERE QUE HAYA UN TRIANGULO CREADO
void mostrarTriangulo(Triangulo &triangulo);
//MUESTRA POR CONSOLA LOS VALORES QUE TIENE EL TRIANGULO

//REQUIERE QUE HAYA UN TRIANGULO CREADO
void borrarTriangulo(Triangulo &triangulo);
//ELIMINA EL TRIANGULO


#endif