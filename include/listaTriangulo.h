#ifndef _LISTATRIANGULO_H_
#define _LISTATRIANGULO_H_

using namespace std;
 
struct nodoTriangulo{
  Triangulo triangulo;
  struct nodoTriangulo *sig;
};
 
typedef struct nodoTriangulo *ListaTriangulo;

void crearListaTriangulo(ListaTriangulo &lista);

void insertarTrianguloInicio(ListaTriangulo &lista, Triangulo triangulo);

void insertarTrianguloFinal(ListaTriangulo &lista, Triangulo triangulo);

void mostrarListaTriangulo(ListaTriangulo &lista);

float plasticoTotalTriangulo(ListaTriangulo &lista);

float plasticoPorColorTriangulo(ListaTriangulo &lista, string color);

void mostrarTrianguloPorNroOrdenColor(ListaTriangulo &lista, int numero, string color);

void ordenarListaPlasticoTriangulo(ListaTriangulo &lista);

void eliminarPrimeroTriangulo(ListaTriangulo &lista);

void copiarListaTriangulo(ListaTriangulo &lista, ListaTriangulo &copia);

Triangulo getPrimerTriangulo(ListaTriangulo &lista);

#endif