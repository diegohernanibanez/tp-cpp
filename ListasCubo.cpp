#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/Cubo.h"
#include "include/ListasCubo.h"

using namespace std;

void insertarCuboInicio(ListaCubo &lista, Cubo cubo){
    ListaCubo q;
    q = new(struct nodoCubo);
    q->cubo = cubo;
    q->sig = lista;
    lista  = q;
}

void crearListaCubo(ListaCubo &lista){
    lista = NULL;
}


void insertarCuboFinal(ListaCubo &lista, Cubo cubo){
    ListaCubo t, q = new(struct nodoCubo);

    q->cubo  = cubo;
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

void mostrarListaCubo(ListaCubo &lista){
    int i = 0;
    ListaCubo temp = lista;
    while(lista != NULL){
        cout << i+1 << ". ";
        mostrarCubo(lista -> cubo);
        lista = lista->sig;
        i++;
    }
    cout << endl;
    lista = temp;
}

float plasticoTotalCubo(ListaCubo &lista){
    float res = 0;
    ListaCubo aux = lista;
    while(lista != NULL){
        res += areaCubo(lista->cubo);
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

float plasticoPorColorCubo(ListaCubo &lista, string color){
    ListaCubo aux = lista;
    float res = 0;

    while(lista != NULL){
        if(lista -> cubo.color.compare(color) == 0){
            res += areaCubo(lista -> cubo);
        }
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

void mostrarCuboPorNroOrdenColor(ListaCubo &lista, int numero, string color){
    ListaCubo aux = lista;
    while(lista != NULL){
        if(lista -> cubo.color.compare(color) == 0 && lista -> cubo.numeroOrden == numero){
            mostrarCubo(lista->cubo);
        }
        lista = lista->sig;
    }
    lista = aux;
}

void ordenarListaPlasticoCubo(ListaCubo &lista){
    ListaCubo aux , siguiente;
    Cubo t;
    aux = lista;
    while(lista->sig != NULL)
    {
        siguiente = lista->sig;
        
        while(siguiente!=NULL)
        {
            if((areaCubo (lista->cubo)) < (areaCubo (siguiente->cubo)))
            {
                t = siguiente->cubo;
                siguiente->cubo = lista->cubo;
                lista->cubo = t;          
            }
            siguiente = siguiente->sig;                    
        }    
        lista = lista->sig;
        siguiente = lista->sig;
    }
    lista = aux;
}

void eliminarPrimeroCubo(ListaCubo &lista){
    if(lista->sig != NULL){
        lista = lista->sig;
    }else{
        lista = NULL;
    }
}

void copiarListaCubo(ListaCubo &lista, ListaCubo &copia){
    ListaCubo aux = lista;
    while(lista != NULL){
        insertarCuboFinal(copia, lista->cubo);
        lista = lista->sig;
    }
    lista = aux;
}

Cubo getPrimerCubo(ListaCubo &lista){
    return lista->cubo; 
}