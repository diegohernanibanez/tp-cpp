#ifndef LISTACILINDRO_H_
#define LISTACILINDRO_H_


using namespace std;
struct nodoCilindro{
       Cilin cilindro;
       struct nodoCilindro *sgte;
};

typedef struct nodoCilindro *ListaCilindro;

void insertarInicioCilin(ListaCilindro &lista, Cilin val);

void insertarFinalCilin(ListaCilindro &lista, Cilin valor);

void mostrarListaCilin(ListaCilindro &lista);

float plasticoTotalCilin(ListaCilindro &lista);

float plasticoPorColorCilin(ListaCilindro &lista, string color);

void crearListaCilindro(ListaCilindro &lista);

void mostrarCilinPorNroOrdenColor(ListaCilindro &lista, int numero, string color);

void ordenarListaPlasticoCilindro(ListaCilindro &lista);

void eliminarPrimeroCilindro(ListaCilindro &lista);

Cilin getPrimerCilindro(ListaCilindro &lista);

void copiarListaCilindro(ListaCilindro &lista, ListaCilindro &copia);

#endif
