#ifndef _LISTATRIANGULO_H_
#define _LISTATRIANGULO_H_

using namespace std;
 
struct nodoTriangulo{
  Triangulo triangulo;
  struct nodoTriangulo *sig;
};
 
typedef struct nodoTriangulo *ListaTriangulo;


//REQUIERE QUE HAYA UNA LISTA CREADA Y RECIBE UN TRIANGULO COMO PARAMETRO
void insertarTrianguloInicio(ListaTriangulo &lista, Triangulo triangulo);
//LA LISTA CONTIENE EL TRIANGULO EN EL INICIO DE LA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA Y RECIBE UN TRIANGULO COMO PARAMETRO
void insertarTrianguloFinal(ListaTriangulo &lista, Triangulo triangulo);
//LA LISTA CONTIENE EL TRIANGULO EN EL FINAL DE LA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA
void mostrarListaTriangulo(ListaTriangulo &lista);
//MUESTRA POR CONSOLA CADA TRIANGULO QUE CONTIENE LA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA
float plasticoTotalTriangulo(ListaTriangulo &lista);
//DEVUELVE EL TOTAL DE PLASTICO UTILIZADO EN ESTA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA Y UN COLOR
float plasticoPorColorTriangulo(ListaTriangulo &lista, string color);
//BUSCA DEPENDIENDO EL COLOR Y DEVUELVE EL TOTAL DE PLASTICO UTILIZADO CON ESE COLOR

//
void crearListaTriangulo(ListaTriangulo &lista);
//IGUALA LA LISTA A NULL PARA 

//REQUIERE QUE HAYA UNA LISTA CREADA, UN NUMERO ENTERO Y UN COLOR
void mostrarTrianguloPorNroOrdenColor(ListaTriangulo &lista, int numero, string color);
//MUESTRA UN ELEMENTO DE LA LISTA QUE COINCIDA CON LOS PARAMETROS

//REQUIERE QUE HAYA UNA LISTA CREADA
void ordenarListaPlasticoTriangulo(ListaTriangulo &lista);
//ORDENA LA LISTA POR LA CANTIDAD DE PLASTICO UTILIZADO

//REQUIERE QUE HAYA UNA LISTA CREADA Y QUE TENGA AL MENOS UN ELEMENTO
void eliminarPrimeroTriangulo(ListaTriangulo &lista);
//SACA EL PRIMER ELEMENTO DE LA LISTA 

//REQUIERE QUE HAYA UNA LISTA CREADA Y QUE TENGA AL MENOS UN ELEMENTO
void copiarListaTriangulo(ListaTriangulo &lista, ListaTriangulo &copia);
//DEVUELVE EL PRIMER ELEMENTO DE LA LISTA

//REQUIERE QUE HAYA DOS LISTAS CREADAS Y QUE UNA TENGA AL MENOS UN ELEMENTO
Triangulo getPrimerTriangulo(ListaTriangulo &lista);
//LA LISTA COPIADA CONTENDRA LOS MISMOS VALORES QUE LA LISTA A COPIAR

#endif