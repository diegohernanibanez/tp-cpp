#ifndef LISTACILINDRO_H_
#define LISTACILINDRO_H_


using namespace std;
struct nodoCilindro{
       Cilin cilindro;
       struct nodoCilindro *sgte;
};

typedef struct nodoCilindro *ListaCilindro;

//REQUIERE QUE HAYA UNA LISTA CREADA Y RECIBE UN CILINDRO COMO PARAMETRO
void insertarInicioCilin(ListaCilindro &lista, Cilin val);
//LA LISTA CONTIENE EL CILINDRO EN EL INICIO DE LA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA Y RECIBE UN CILINDRO COMO PARAMETRO
void insertarFinalCilin(ListaCilindro &lista, Cilin valor);
//LA LISTA CONTIENE EL CILINDRO EN EL FINAL DE LA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA
void mostrarListaCilin(ListaCilindro &lista);
//MUESTRA POR CONSOLA CADA CILINDRO QUE CONTIENE LA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA
float plasticoTotalCilin(ListaCilindro &lista);
//DEVUELVE EL TOTAL DE PLASTICO UTILIZADO EN ESTA LISTA

//REQUIERE QUE HAYA UNA LISTA CREADA Y UN COLOR
float plasticoPorColorCilin(ListaCilindro &lista, string color);
//BUSCA DEPENDIENDO EL COLOR Y DEVUELVE EL TOTAL DE PLASTICO UTILIZADO CON ESE COLOR

//
void crearListaCilindro(ListaCilindro &lista);
//IGUALA LA LISTA A NULL PARA 

//REQUIERE QUE HAYA UNA LISTA CREADA, UN NUMERO ENTERO Y UN COLOR
void mostrarCilinPorNroOrdenColor(ListaCilindro &lista, int numero, string color);
//MUESTRA UN ELEMENTO DE LA LISTA QUE COINCIDA CON LOS PARAMETROS

//REQUIERE QUE HAYA UNA LISTA CREADA
void ordenarListaPlasticoCilindro(ListaCilindro &lista);
//ORDENA LA LISTA POR LA CANTIDAD DE PLASTICO UTILIZADO

//REQUIERE QUE HAYA UNA LISTA CREADA Y QUE TENGA AL MENOS UN ELEMENTO
void eliminarPrimeroCilindro(ListaCilindro &lista);
//SACA EL PRIMER ELEMENTO DE LA LISTA 

//REQUIERE QUE HAYA UNA LISTA CREADA Y QUE TENGA AL MENOS UN ELEMENTO
Cilin getPrimerCilindro(ListaCilindro &lista);
//DEVUELVE EL PRIMER ELEMENTO DE LA LISTA

//REQUIERE QUE HAYA DOS LISTAS CREADAS Y QUE UNA TENGA AL MENOS UN ELEMENTO
void copiarListaCilindro(ListaCilindro &lista, ListaCilindro &copia);
//LA LISTA COPIADA CONTENDRA LOS MISMOS VALORES QUE LA LISTA A COPIAR

#endif
