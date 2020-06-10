#include <iostream>
#include <stdlib.h>
#include "include/Cilin.h"
#include "include/ListaCilin.h"

using namespace std;

void insertarInicioCilin(ListaCilindro &lista, Cilin val){
    ListaCilindro p;
    p= new(struct nodoCilindro);
    p->cilindro = val;
    p->sgte= lista;
    lista=p;

}
void mostrarListaCilin(ListaCilindro &lista){
    int i=0;
    ListaCilindro listaw = lista; 
    while(lista !=NULL){
        cout << i+1 << ". ";
        mostrarCilindro(lista -> cilindro);
        lista = lista->sgte;
        i++;
    }
    cout << endl;
    lista = listaw;
}
void insertarFinalCilin(ListaCilindro &lista, Cilin valor){
        ListaCilindro g,h= new(struct nodoCilindro);
        h->cilindro= valor;
        h->sgte=NULL;

      if(lista==NULL){
          lista = h;
        }

          else{
               g = lista;

             while(g->sgte != NULL){
                   g = g->sgte;
                  }
            g->sgte = h;
          }

}


void crearListaCilindro(ListaCilindro  &lista){
        lista = NULL;
}

float plasticoTotalCilin(ListaCilindro &lista){
    float res = 0;
    ListaCilindro aux = lista;
    while(lista != NULL){
        res += areaCilin(lista->cilindro);
        lista = lista->sgte;
    }
    lista = aux;
    return res;
}

float plasticoPorColorCilin(ListaCilindro &lista, string color){
    ListaCilindro aux = lista;
    float res = 0;

    while(lista != NULL){
        if(lista -> cilindro.color.compare(color) == 0){
            res += areaCilin(lista -> cilindro);
        }
        lista = lista->sgte;
    }
    lista = aux;
    return res;
}

void mostrarCilinPorNroOrdenColor(ListaCilindro &lista, int numero, string color){
    ListaCilindro aux = lista;
    while(lista != NULL){
        if(lista -> cilindro.color.compare(color) == 0 && lista -> cilindro.numeroOrden == numero){
            mostrarCilindro(lista->cilindro);
        }
        lista = lista->sgte;
    }
    lista = aux;

}

void ordenarListaPlasticoCilindro(ListaCilindro &lista){
    ListaCilindro aux , siguiente;
    Cilin t;
    aux = lista;
    while(lista->sgte != NULL)
    {
        siguiente = lista->sgte;
        
        while(siguiente!=NULL)
        {
            if(areaCilin( (lista->cilindro)) < (areaCilin (siguiente->cilindro)))
            {
                t = siguiente->cilindro;
                siguiente->cilindro = lista->cilindro;
                lista->cilindro = t;          
            }
            siguiente = siguiente->sgte;                    
        }    
        lista = lista->sgte;
        siguiente = lista->sgte;
    }
    lista = aux;
}

void eliminarPrimeroCilindro(ListaCilindro &lista){
    if(lista->sgte != NULL){
        lista = lista->sgte;
    }else{
        lista = NULL;
    }
}

void copiarListaCilindro(ListaCilindro &lista, ListaCilindro &copia){
    ListaCilindro aux = lista;
    while(lista != NULL){
        insertarFinalCilin(copia, lista->cilindro);
        lista = lista->sgte;
    }
    lista = aux;
}

Cilin getPrimerCilindro(ListaCilindro &lista){
    return lista->cilindro; 
}