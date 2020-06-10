#ifndef _LISTACIRCULO_H_
#define _LISTACIRCULO_H_

using namespace std;
 
struct nodoCirculo{
  Circulo circulo;
  struct nodoCirculo *sig;
};
 
typedef struct nodoCirculo *ListaCirculo;


void crearListaCirculo(ListaCirculo &lista);

void insertarCirculoInicio(ListaCirculo &lista, Circulo circulo);

void insertarCirculoFinal(ListaCirculo &lista, Circulo circulo);

void mostrarListaCirculo(ListaCirculo &lista);

float plasticoTotalCirculo(ListaCirculo &lista);

float plasticoPorColorCirculo(ListaCirculo &lista, string color);

void mostrarCirculoPorNroOrdenColor(ListaCirculo &lista, int numero, string color);

void ordenarListaPlasticoCirculo(ListaCirculo &lista);

void eliminarPrimeroCirculo(ListaCirculo &lista);

Circulo getPrimerCirculo(ListaCirculo &lista);

void copiarListaCirculo(ListaCirculo &lista, ListaCirculo &copia);


#endif