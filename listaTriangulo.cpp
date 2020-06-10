#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/triangulo.h"
#include "include/listaTriangulo.h"

using namespace std;

void insertarTrianguloInicio(ListaTriangulo &lista, Triangulo triangulo){
    ListaTriangulo q;
    q = new(struct nodoTriangulo);
    q->triangulo = triangulo;
    q->sig = lista;
    lista  = q;
}

void crearListaTriangulo(ListaTriangulo &lista){
    lista = NULL;
}


void insertarTrianguloFinal(ListaTriangulo &lista, Triangulo triangulo){
    ListaTriangulo t, q = new(struct nodoTriangulo);

    q->triangulo  = triangulo;
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

void mostrarListaTriangulo(ListaTriangulo &lista){
    int i = 0;
    ListaTriangulo aux = lista;
    while(lista != NULL){
        cout << i+1 << ". ";
        mostrarTriangulo(lista ->triangulo);
        lista = lista->sig;
        i++;
    }
    cout << endl;
    lista = aux;
}

float plasticoTotalTriangulo(ListaTriangulo &lista){
    float res = 0;
    ListaTriangulo aux = lista;
    while(lista != NULL){
        res += areaTriangulo(lista->triangulo);
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

float plasticoPorColorTriangulo(ListaTriangulo &lista, string color){
    ListaTriangulo aux = lista;
    float res = 0;

    while(lista != NULL){
        if(lista -> triangulo.color.compare(color) == 0){
            res += areaTriangulo(lista -> triangulo);
        }
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

void mostrarTrianguloPorNroOrdenColor(ListaTriangulo &lista, int numero, string color){
    ListaTriangulo aux = lista;
    while(lista != NULL){
        if(lista -> triangulo.color.compare(color) == 0 && lista -> triangulo.numeroOrden == numero){
            mostrarTriangulo(lista->triangulo);
        }
        lista = lista->sig;
    }
    lista = aux;

}

void ordenarListaPlasticoTriangulo(ListaTriangulo &lista){
    ListaTriangulo aux , siguiente;
    Triangulo t;
    aux = lista;
    while(lista->sig != NULL)
    {
        siguiente = lista->sig;
        
        while(siguiente!=NULL)
        {
            if((areaTriangulo (lista->triangulo)) < (areaTriangulo (siguiente->triangulo)))
            {
                t = siguiente->triangulo;
                siguiente->triangulo = lista->triangulo;
                lista->triangulo = t;          
            }
            siguiente = siguiente->sig;                    
        }    
        lista = lista->sig;
        siguiente = lista->sig;
    }
    lista = aux;
}

void eliminarPrimeroTriangulo(ListaTriangulo &lista){
    if(lista->sig != NULL){
        lista = lista->sig;
    }else{
        lista = NULL;
    }
}

void copiarListaTriangulo(ListaTriangulo &lista, ListaTriangulo &copia){
    ListaTriangulo aux = lista;
    while(lista != NULL){
        insertarTrianguloFinal(copia, lista->triangulo);
        lista = lista->sig;
    }
    lista = aux;
}

Triangulo getPrimerTriangulo(ListaTriangulo &lista){
    return lista->triangulo;
}


