#ifndef LISTARECTANGULO_H
#define LISTARECTANGULO_H

using namespace std;

struct nodoRectangulo{
  Rectangulo rectangulo;
  struct nodoRectangulo *sig;
};

typedef struct nodoRectangulo *ListaRectangulo;


//REQUIERE QUE HAYA UNA LISTA CREADA Y RECIBE UN RECTANGULO COMO PARAMETRO
void insertarRectanguloInicio(ListaRectangulo &lista, Rectangulo rectangulo);
//LA LISTA CONTIENE EL RECTANGULO EN EL INICIO DE LA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA Y RECIBE UN RECTANGULO COMO PARAMETRO
void insertarRectanguloFinal(ListaRectangulo &lista, Rectangulo rectangulo);
//LA LISTA CONTIENE EL RECTANGULO EN EL FINAL DE LA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA
void mostrarListaRectangulo(ListaRectangulo &lista);
//MUESTRA POR CONSOLA CADA RECTANGULO QUE CONTIENE LA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA
float plasticoTotalRectangulo(ListaRectangulo &lista);
//DEVUELVE EL TOTAL DE PLASTICO UTILIZADO EN ESTA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA Y UN COLOR
float plasticoPorColorRectangulo(ListaRectangulo &lista, string color);
//BUSCA DEPENDIENDO EL COLOR Y DEVUELVE EL TOTAL DE PLASTICO UTILIZADO CON ESE COLOR

//
void crearListaRectangulo(ListaRectangulo &lista);
//IGUALA LA LISTA A NULL PARA 

//REQUIERE QUE HAYA UNA LISTA CREADA, UN NUMERO ENTERO Y UN COLOR
void mostrarRectanguloPorNroOrdenColor(ListaRectangulo &lista, int numero, string color);
//MUESTRA UN ELEMENTO DE LA LISTA QUE COINCIDA CON LOS PARAMETROS

//REQUIERE QUE HAYA UNA LISTA CREADA
void ordenarListaPlasticoRectangulo(ListaRectangulo &lista);
//ORDENA LA LISTA POR LA CANTIDAD DE PLASTICO UTILIZADO

//REQUIERE QUE HAYA UNA LISTA CREADA Y QUE TENGA AL MENOS UN ELEMENTO
void eliminarPrimeroRectangulo(ListaRectangulo &lista);
//SACA EL PRIMER ELEMENTO DE LA LISTA 

//REQUIERE QUE HAYA UNA LISTA CREADA Y QUE TENGA AL MENOS UN ELEMENTO
Rectangulo getPrimerRectangulo(ListaRectangulo &lista);
//DEVUELVE EL PRIMER ELEMENTO DE LA LISTA

//REQUIERE QUE HAYA DOS LISTAS CREADAS Y QUE UNA TENGA AL MENOS UN ELEMENTO
void copiarListaRectangulo(ListaRectangulo &lista, ListaRectangulo &copia);
//LA LISTA COPIADA CONTENDRA LOS MISMOS VALORES QUE LA LISTA A COPIAR

#endif
