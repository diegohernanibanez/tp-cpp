
#ifndef LISTASCUBO_H
#define LISTASCUBO_H

using namespace std;

struct nodoCubo{
  Cubo cubo;
  struct nodoCubo *sig;
};

typedef struct nodoCubo *ListaCubo;


void crearListaCubo(ListaCubo &lista);

void insertarCuboInicio(ListaCubo &lista, Cubo cubo);

void insertarCuboFinal(ListaCubo &lista, Cubo cubo);

void mostrarListaCubo(ListaCubo &lista);

float plasticoTotalCubo(ListaCubo &lista);

float plasticoPorColorCubo(ListaCubo &lista, string color);

void mostrarCuboPorNroOrdenColor(ListaCubo &lista, int numero, string color);

void ordenarListaPlasticoCubo(ListaCubo &lista);

void eliminarPrimeroCubo(ListaCubo &lista);

Cubo getPrimerCubo(ListaCubo &lista);

void copiarListaCubo(ListaCubo &lista, ListaCubo &copia);

#endif
