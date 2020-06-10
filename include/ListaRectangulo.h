#ifndef LISTARECTANGULO_H
#define LISTARECTANGULO_H

using namespace std;

struct nodoRectangulo{
  Rectangulo rectangulo;
  struct nodoRectangulo *sig;
};

typedef struct nodoRectangulo *ListaRectangulo;

void crearListaRectangulo(ListaRectangulo &lista);

void insertarRectanguloInicio(ListaRectangulo &lista, Rectangulo rectangulo);

void insertarRectanguloFinal(ListaRectangulo &lista, Rectangulo rectangulo);

void mostrarListaRectangulo(ListaRectangulo &lista);

float plasticoTotalRectangulo(ListaRectangulo &lista);

float plasticoPorColorRectangulo(ListaRectangulo &lista, string color);

void mostrarRectanguloPorNroOrdenColor(ListaRectangulo &lista, int numero, string color);

void ordenarListaPlasticoRectangulo(ListaRectangulo &lista);

void eliminarPrimeroRectangulo(ListaRectangulo &lista);

Rectangulo getPrimerRectangulo(ListaRectangulo &lista);

void copiarListaRectangulo(ListaRectangulo &lista, ListaRectangulo &copia);

#endif
