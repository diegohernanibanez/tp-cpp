#ifndef _CILIN_H_
#define _CILIN_H_

using namespace std;

typedef struct Cilin{
    float radio;
    float altura;
    string color;
    int numeroOrden;
}cilindro;


//REQUIERE QUE HAYA UN CILINDRO CREADO Y UN VALOR PARA ASIGNAR
void setAlturaCilin(Cilin &cilindro, float newAlt );
//ASIGNA EL VALOR AL CILINDRO

//REQUIERE QUE HAYA UN CILINDRO CREADO Y UN VALOR PARA ASIGNAR
void setRadioCilin(Cilin &cilindro, float newRadio);
//ASIGNA EL VALOR AL CILINDRO

//REQUIERE QUE HAYA UN CILINDRO CREADO Y UN VALOR PARA ASIGNAR
void setColorCilin(Cilin &cilindro, string newColor);
//ASIGNA EL VALOR AL CILINDRO

//REQUIERE QUE HAYA UN CILINDRO CREADO Y UN VALOR PARA ASIGNAR
void setNroOrdenCilin(Cilin &cilindro, int newNumero);
//ASIGNA EL VALOR AL CILINDRO

//REQUIERE QUE HAYA UN CILINDRO CREADO
float getAlturaCilin(Cilin &cilindro);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN CILINDRO CREADO
float getRadioCilin(Cilin &cilindro);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN CILINDRO CREADO
string getColorCilin(Cilin &cilindro);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN CILINDRO CREADO
int getNroOrdenCilin(Cilin &cilindro);
//DEVUELVE EL VALOR QUE TIENE ASIGNADO

//REQUIERE QUE HAYA UN CILINDRO CREADO
void mostrarCilindro(Cilin &cilindro);
//MUESTRA POR CONSOLA LOS VALORES QUE TIENE EL CILINDRO

//REQUIERE QUE HAYA UN CILINDRO CREADO
float areaCilin(Cilin &cilindro);
//CALCULA EL AREA DEL CILINDRO

//REQUIERE QUE HAYA UN CILINDRO CREADO
void borrarCilindro(Cilin &cilindro);
//ELIMINA EL CILINDRO

#endif
