#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/circulo.h"
#include "include/listaCirculo.h"

using namespace std;

void insertarCirculoInicio(ListaCirculo &lista, Circulo circulo){
    ListaCirculo q;
    q = new(struct nodoCirculo);
    q->circulo = circulo;
    q->sig = lista;
    lista  = q;
}

void crearListaCirculo(ListaCirculo &lista){
    lista = NULL;
}


void insertarCirculoFinal(ListaCirculo &lista, Circulo circulo){
    ListaCirculo t, q = new(struct nodoCirculo);

    q->circulo  = circulo;
    q->sig = NULL;

    if(lista==NULL){
        lista = q;
    }

    else{
        t = lista;

        while(t->sig != NULL){
            t = t->sig;
        }
        t->sig = q;
    }
}

void mostrarListaCirculo(ListaCirculo &lista){
    int i = 0;
    ListaCirculo aux = lista;
    while(lista != NULL){
        cout << i+1 << ". ";    
        mostrarCirculo(lista -> circulo);
        lista = lista->sig;
        i++;
    }
    cout << endl;
    lista = aux;
}

float plasticoTotalCirculo(ListaCirculo &lista){
    float res = 0;
    ListaCirculo aux = lista;
    while(lista != NULL){
        res += areaCirculo(lista->circulo);
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

float plasticoPorColorCirculo(ListaCirculo &lista, string color){
    ListaCirculo aux = lista;
    float res = 0;

    while(lista != NULL){
        if(lista -> circulo.color.compare(color) == 0){
            res += areaCirculo(lista -> circulo);
        }
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

void mostrarCirculoPorNroOrdenColor(ListaCirculo &lista, int numero, string color){
    ListaCirculo aux = lista;
    while(lista != NULL){
        if(lista -> circulo.color.compare(color) == 0 && lista -> circulo.numeroOrden == numero){
            mostrarCirculo(lista->circulo);
        }
        lista = lista->sig;
    }
    lista = aux;

}

void ordenarListaPlasticoCirculo(ListaCirculo &lista){
    ListaCirculo aux , siguiente;
    Circulo t;
    aux = lista;
    while(lista->sig != NULL)
    {
        siguiente = lista->sig;
        
        while(siguiente!=NULL)
        {
            if((areaCirculo (lista->circulo)) < (areaCirculo (siguiente->circulo)))
            {
                t = siguiente->circulo;
                siguiente->circulo = lista->circulo;
                lista->circulo = t;          
            }
            siguiente = siguiente->sig;                    
        }    
        lista = lista->sig;
        siguiente = lista->sig;
    }
    lista = aux;
}

void eliminarPrimeroCirculo(ListaCirculo &lista){
    if(lista->sig != NULL){
        lista = lista->sig;
    }else{
        lista = NULL;
    }
}

void copiarListaCirculo(ListaCirculo &lista, ListaCirculo &copia){
    ListaCirculo aux = lista;
    while(lista != NULL){
        insertarCirculoFinal(copia, lista->circulo);
        lista = lista->sig;
    }
    lista = aux;
}

Circulo getPrimerCirculo(ListaCirculo &lista){
    return lista->circulo; 
}