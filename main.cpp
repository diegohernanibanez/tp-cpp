#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "include/triangulo.h"
#include "include/listaTriangulo.h"
#include "include/Cubo.h"
#include "include/ListasCubo.h"
#include "include/Rectangulo.h"
#include "include/ListaRectangulo.h"
#include "include/Cilin.h"
#include "include/ListaCilin.h"
#include "include/circulo.h"
#include "include/listaCirculo.h"

using namespace std;

int cargarListasConArchivo(string texto, ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos);
void separarData(string texto, int numeroOrden, ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos);
void mostrarOrdenColor(int cantidad, string color, ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos);
int encuentrarMinEntreListas ( ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos);
void ordenarListasPorCantidad (ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos);

int main() {
    int cantidadFig = -1;
    int menu = -1;
    string nombreArchivo = "";
    ListaTriangulo triangulos = new (struct nodoTriangulo);
    ListaCubo cubos = new (struct nodoCubo);
    ListaRectangulo rectangulos = new (struct nodoRectangulo);
    ListaCilindro cilindros = new (struct nodoCilindro);
    ListaCirculo circulos = new (struct nodoCirculo);
    
    crearListaCilindro(cilindros);
    crearListaCirculo(circulos);
    crearListaCubo(cubos);
    crearListaRectangulo(rectangulos);
    crearListaTriangulo(triangulos);
    while (cantidadFig == -1){
        cout << "Ingrese el nombre del archivo del lote que quiere procesar." << endl << endl;
        cin >> nombreArchivo;
        cantidadFig = cargarListasConArchivo(nombreArchivo + ".txt", triangulos, cubos, rectangulos, cilindros, circulos);
    }
    while(menu != 0){
        cout << "Seleccione una figura para ver una lista de la produccion de este lote." << endl;
        cout << "1.Mostrar rectangulos producidos en este lote" << endl;
        cout << "2.Mostrar triangulos producidos en este lote" << endl;
        cout << "3.Mostrar cubos producidos en este lote" << endl;
        cout << "4.Mostrar circulos producidos en este lote" << endl;
        cout << "5.Mostrar cilindros producidos en este lote" << endl;
        cout << "6.Ver el plastico total utilizado en este lote." << endl;
        cout << "7.Ver la cantidad de plastico utilizado en este lote por figura." << endl;
        cout << "8.Ver la cantidad de plastico utilizado en este lote por figura y color." << endl;
        cout << "9.Ver una lista ordenada por la cantidad de plastico utilizado." << endl;
        cout << "10.Ver una lista ordenada por orden de creacion de figura por color." << endl;
        cout << "0.Salir" << endl << endl;
        cin >> menu;
        switch (menu){
            case 0:
                break;
            case 1:{
                mostrarListaRectangulo(rectangulos);
                cout << endl;
                break;
            }
            case 2:{
                mostrarListaTriangulo(triangulos);
                cout << endl;
                break;
            }
            case 3:{
                mostrarListaCubo(cubos);
                cout << endl;
                break;
            }
            case 4:{
                mostrarListaCirculo(circulos);
                cout << endl;
                break;
            }
            case 5:{
                mostrarListaCilin(cilindros);
                cout << endl;
                break;
            }
            case 6:{
                float plasticoTotal = 0;
                plasticoTotal = plasticoTotalCilin(cilindros) + plasticoTotalCirculo(circulos) + plasticoTotalCubo(cubos) + plasticoTotalTriangulo(triangulos) + plasticoTotalRectangulo(rectangulos);
                cout << "El plastico total del lote producido es: " << plasticoTotal << endl << endl;
                break;
            }
            case 7:{
                int valor = -1;
                while(valor == -1){
                    cout << "Seleccione una figura para ver la cantidad de plastico utilizado en este lote." << endl; 
                    cout << "1.Rectangulo" << endl;
                    cout << "2.Triangulo" << endl;
                    cout << "3.Cubo" << endl;
                    cout << "4.Circulo" << endl;
                    cout << "5.Cilindro" << endl;
                    cout << "0.Volver" << endl << endl;
                    cin >> valor;
                    switch (valor){
                        case 0:
                            break;
                        case 1:
                            cout << "La cantidad de plastico utilizado en rectangulos es: " << plasticoTotalRectangulo(rectangulos) << endl << endl;
                            break;
                        case 2:
                            cout << "La cantidad de plastico utilizado en triangulos es: " << plasticoTotalTriangulo(triangulos) << endl << endl;
                            break;
                        case 3:
                            cout << "La cantidad de plastico utilizado en cubos es: " << plasticoTotalCubo(cubos) << endl << endl;
                            break;
                        case 4:
                            cout << "La cantidad de plastico utilizado en circulos es: " << plasticoTotalCirculo(circulos) << endl << endl;
                            break;
                        case 5:
                            cout << "La cantidad de plastico utilizado en cilindros es: " << plasticoTotalCilin(cilindros) << endl << endl;
                            break;
                        default:
                            cout << "Valor invalido. Por favor ingrese otro valor" << endl << endl;
                            valor = -1;
                            break;
                    }
                }
                break;
            }
            case 8:{
                int valor = -1;
                string color = " ";
                while(valor == -1){
                    valor = 0;
                    int valorFigura = -1;
                    int valorColor = -1;
                    while(valorColor == -1){ 
                        cout << "Seleccione el color de la figura." << endl;
                        cout << "1.Azul" << endl;
                        cout << "2.Rojo" << endl;
                        cout << "3.Amarillo" << endl;
                        cout << "4.Verde" << endl;
                        cout << "5.Violeta" << endl;
                        cout << "6.Naranja" << endl;
                        cout << "7.Blanco" << endl;
                        cout << "8.Negro" << endl;
                        cout << "9.Rosa" << endl;
                        cout << "10.Celeste" << endl;
                        cout << "0.Volver" << endl << endl;
                        cin >> valorColor;

                        switch(valorColor){
                            case 1:{
                                color = "azul";
                                break;
                            }
                            case 2:{
                                color = "rojo";
                                break;
                            }
                            case 3:{
                                color = "amarillo";
                                break;
                            }
                            case 4:{
                                color = "verde";
                                break;
                            }
                            case 5:{
                                color = "violeta";
                                break;
                            }
                            case 6:{
                                color = "naranja";
                                break;
                            }
                            case 7:{
                                color = "blanco";
                                break;
                            }
                            case 8:{
                                color = "negro";
                                break;
                            }
                            case 9:{
                                color = "rosa";
                                break;
                            }
                            case 10:{
                                color = "celeste";
                                break;
                            }
                            case 0: {
                                valorFigura = 0;
                                break;
                            }
                            default:{
                                cout << "Valor invalido. Por favor ingrese otro valor" << endl << endl;
                                valorColor = -1;
                                break;
                            }
                        }
                    }    

                    while(valorFigura == -1){
                        cout << "Seleccione una figura para ver la cantidad de plastico utilizado en este lote." << endl;
                        cout << "1.Rectangulo" << endl;
                        cout << "2.Triangulo" << endl;
                        cout << "3.Cubo" << endl;
                        cout << "4.Circulo" << endl;
                        cout << "5.Cilindro" << endl;
                        cout << "0.Volver" << endl << endl;
                        cin >> valorFigura;

                        switch (valorFigura){
                            case 1:
                                cout << "La cantidad de plastico utilizado en rectangulos de color " << color << " es: " << plasticoPorColorRectangulo(rectangulos, color) << endl << endl;
                                break;
                            case 2:
                                cout << "La cantidad de plastico utilizado en triangulos de color " << color << " es: " << plasticoPorColorTriangulo(triangulos, color) << endl << endl;
                                break;
                            case 3:
                                cout << "La cantidad de plastico utilizado en cubos de color " << color << " es: " << plasticoPorColorCubo(cubos, color) << endl << endl;
                                break;
                            case 4:
                                cout << "La cantidad de plastico utilizado en circulos de color " << color << " es: " << plasticoPorColorCirculo(circulos, color) << endl << endl;
                                break;
                            case 5:
                                cout << "La cantidad de plastico utilizado en cilindros de color " << color << " es: " << plasticoPorColorCilin(cilindros, color) << endl << endl;
                                break;
                            case 0:
                                valorColor = -1;
                                valor = -1;
                                break;
                            default:
                                cout << "Valor invalido. Por favor ingrese otro valor" << endl << endl;
                                valorFigura = -1;
                                break;
                        }
                    }
                }
                break;
            }
            case 9:{
                ordenarListasPorCantidad (triangulos, cubos, rectangulos, cilindros, circulos);
                break;
            }
            case 10:{
                string color = "";
                int valorColor = -1;
                while (valorColor == -1){
                    cout << "1.Azul" << endl;
                    cout << "2.Rojo" << endl;
                    cout << "3.Amarillo" << endl;
                    cout << "4.Verde" << endl;
                    cout << "5.Violeta" << endl;
                    cout << "6.Naranja" << endl;
                    cout << "7.Blanco" << endl;
                    cout << "8.Negro" << endl;
                    cout << "9.Rosa" << endl;
                    cout << "10.Celeste" << endl;
                    cout << "0.Volver" << endl << endl;
                    cin >> valorColor;
                    switch(valorColor){
                        case 1:{
                            color = "azul";
                            break;
                        }
                        case 2:{
                            color = "rojo";
                            break;
                        }
                        case 3:{
                            color = "amarillo";
                            break;
                        }
                        case 4:{
                            color = "verde";
                            break;
                        }
                        case 5:{
                            color = "violeta";
                            break;
                        }
                        case 6:{
                            color = "naranja";
                            break;
                        }
                        case 7:{
                            color = "blanco";
                            break;
                        }
                        case 8:{
                            color = "negro";
                            break;
                        }
                        case 9:{
                            color = "rosa";
                            break;
                        }
                        case 10:{
                            color = "celeste";
                            break;
                        }
                        case 0:{
                            break;
                        }
                        default:{
                            cout << "Valor invalido. Por favor ingrese otro valor" << endl << endl;
                            valorColor = -1;
                            break;
                        }
                    }
                }  
                mostrarOrdenColor(cantidadFig, color, triangulos, cubos, rectangulos, cilindros, circulos);
                cout << endl;
                break;
            }
            default:{
                cout << "Valor invalido. Por favor ingrese otro valor" << endl << endl;
                menu = -1;
                break;
            }
        }
    }
    
    return 0;
}

int cargarListasConArchivo(string nombreArchivo, ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos){

    int numeroOrden = 0;
    ifstream arc;
    string text;
    arc.open(nombreArchivo,ios::in);
    if (arc.fail()){
        cout << "Error al leer el archivo." << endl << endl;
        numeroOrden = -1;
    }else{
         while(!arc.eof()){
            getline(arc,text);
            numeroOrden ++;
            while (!text.empty()){
                // insertar funcion dividir data.
                separarData(text, numeroOrden, triangulos, cubos, rectangulos, cilindros, circulos);
                text.clear();
            }
        }
        arc.close();
    }
    return numeroOrden;
}

void separarData(string texto, int numeroOrden, ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos){
    string tipo = " ";
    Triangulo trianguloAux;
    Cubo cuboAux;
    Rectangulo rectanguloAux;
    Cilin cilindroAux;
    Circulo circuloAux;
    int vuelta = 0;
    string str(texto);
    istringstream isstream(str);

    while(!isstream.eof()){

        string tempStr;

        isstream >> tempStr;

        if (tempStr.find(";") != string::npos) {
            int j = 0;

            for (int i = 0; i < tempStr.length(); i++){
                if (tempStr[i] == ';'){
                    continue;
                }
                else{
                    tempStr[j] = tempStr[i];
                    j++;
                }
            }
            tempStr[j] = '\0';
        }
        size_t found = tempStr.find(",");
        if(found != string::npos){
            tempStr[found]='.'; // Change ',' to '.'
        }

        if(vuelta == 0){
            tipo = tempStr;
        }
        if (tipo.compare("circulo") == 0){
            if(vuelta == 1){
                setColorCirculo(circuloAux, tempStr);
            }
            if(vuelta == 2){
                setRadioCirculo(circuloAux, stof(tempStr));
                setNroCirculo(circuloAux, numeroOrden);
                insertarCirculoFinal(circulos, circuloAux);
            }
        }
        
        if (tipo.compare("triangulo") == 0){
            
            if(vuelta == 1){
                setColorTriangulo(trianguloAux, tempStr);
            }
            if(vuelta == 2){
                setCatetoMayor(trianguloAux, stof(tempStr));
            }
            if(vuelta == 3){
                setCatetoMenor(trianguloAux, stof(tempStr));
                setNroTriangulo(trianguloAux, numeroOrden);
                insertarTrianguloFinal(triangulos, trianguloAux);

            }   
        }  
        if (tipo.compare("cubo") == 0){

            if(vuelta == 1){
                setColorCubo(cuboAux, tempStr);
            }
            if(vuelta == 2){
                setLado(cuboAux, stof(tempStr));
                setNroCubo(cuboAux, numeroOrden);
                insertarCuboFinal(cubos, cuboAux);

            }
        }
        if (tipo.compare("cilindro") == 0){
            if(vuelta == 1){
                setColorCilin(cilindroAux, tempStr);
            }
            if(vuelta == 2){
                setRadioCilin(cilindroAux, stof(tempStr));
            }
            if(vuelta == 3){
                setAlturaCilin(cilindroAux, stof(tempStr));
                setNroOrdenCilin(cilindroAux, numeroOrden);
                insertarFinalCilin(cilindros, cilindroAux);
            }
        }
        if(tipo.compare("rectangulo") == 0){
            if(vuelta == 1){
                setColorRectangulo(rectanguloAux, tempStr);
            }
            if(vuelta == 2){
                setBase(rectanguloAux, stof(tempStr));
            }
            if(vuelta == 3){
                setAltura(rectanguloAux, stof(tempStr));
                setNroRectangulo(rectanguloAux, numeroOrden);
                insertarRectanguloFinal(rectangulos, rectanguloAux);
            }
        }
        vuelta ++;
    }
}

void mostrarOrdenColor(int cantidad, string color, ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos){
    for(int i = 0; i < cantidad; i++){
        mostrarTrianguloPorNroOrdenColor(triangulos, i, color);
        mostrarRectanguloPorNroOrdenColor(rectangulos, i, color);
        mostrarCuboPorNroOrdenColor(cubos, i, color);
        mostrarCilinPorNroOrdenColor(cilindros, i, color);
        mostrarCirculoPorNroOrdenColor(circulos, i, color);
    }
}

void ordenarListasPorCantidad (ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos){
    int may = 0 ;
    int opcion = 0 ;
    bool compareCant = false ;
    ListaRectangulo rectangulosCopia = new (struct nodoRectangulo);
    ListaTriangulo triangulosCopia = new (struct nodoTriangulo);
    ListaCilindro cilindrosCopia = new (struct nodoCilindro);
    ListaCirculo circulosCopia = new (struct nodoCirculo);
    ListaCubo cubosCopia = new (struct nodoCubo);
    crearListaTriangulo(triangulosCopia);
    crearListaRectangulo(rectangulosCopia);
    crearListaCilindro(cilindrosCopia);
    crearListaCirculo(circulosCopia);
    crearListaCubo(cubosCopia);
    copiarListaRectangulo(rectangulos, rectangulosCopia);
    copiarListaTriangulo(triangulos, triangulosCopia);
    copiarListaCilindro(cilindros, cilindrosCopia);
    copiarListaCirculo(circulos, circulosCopia);
    copiarListaCubo(cubos, cubosCopia);
    ordenarListaPlasticoRectangulo(rectangulosCopia);
    ordenarListaPlasticoTriangulo(triangulosCopia);
    ordenarListaPlasticoCilindro(cilindrosCopia);
    ordenarListaPlasticoCirculo(circulosCopia);
    ordenarListaPlasticoCubo(cubosCopia);

    while (compareCant != true ){
    
        opcion =  encuentrarMinEntreListas (triangulosCopia, cubosCopia, rectangulosCopia, cilindrosCopia, circulosCopia);
        switch (opcion){
            case 0:{
                Triangulo t = getPrimerTriangulo(triangulosCopia);
                mostrarTriangulo(t);
                eliminarPrimeroTriangulo(triangulosCopia);
                break;
            }
        
            case 1 :{
                Cilin c = getPrimerCilindro(cilindrosCopia);
                mostrarCilindro (c);
                eliminarPrimeroCilindro(cilindrosCopia);
                break; 
            }

            case 2 :{
                Rectangulo r = getPrimerRectangulo(rectangulosCopia);
                mostrarRectangulo(r);
                eliminarPrimeroRectangulo(rectangulosCopia);
                break;
            } 

            case 3:{
                Cubo c = getPrimerCubo(cubosCopia);
                mostrarCubo(c);
                eliminarPrimeroCubo(cubosCopia);
                break;
            }

            case 4 :{
                Circulo c = getPrimerCirculo(circulosCopia);
                mostrarCirculo(c);
                eliminarPrimeroCirculo(circulosCopia);
                break;
            }
            default:
                cout << "Todas las listas estan vacias." << endl << endl;
                break;
        }
        compareCant = (triangulosCopia == NULL) && (cubosCopia == NULL) &&(rectangulosCopia == NULL) && (cilindrosCopia == NULL) && (circulosCopia == NULL);
    } 
}


int encuentrarMinEntreListas ( ListaTriangulo &triangulos, ListaCubo &cubos, ListaRectangulo &rectangulos, ListaCilindro &cilindros, ListaCirculo &circulos){
    int pos = -1 ;
    int  i = 0 ;
    float mayor = -1;

    if(triangulos != NULL){
        Triangulo t = getPrimerTriangulo(triangulos);
        if(areaTriangulo(t) > mayor){
            mayor = areaTriangulo (t);
            pos = 0;
        }
    }

    if (cilindros != NULL){
        Cilin c = getPrimerCilindro(cilindros);
        if(areaCilin(c) > mayor){
            mayor = areaCilin(c);
            pos = 1;
        }
    }

    if (rectangulos != NULL){
        Rectangulo r = getPrimerRectangulo(rectangulos);
        if(areaRectangulo (r) > mayor){
            mayor = areaRectangulo (r);
            pos = 2;
        }
    }

    if(cubos != NULL){
        Cubo c = getPrimerCubo(cubos);
        if(areaCubo (c) > mayor){
            mayor = areaCubo (c);
            pos = 3;
        }
    }

    if (circulos != NULL){
        Circulo c = getPrimerCirculo(circulos);
        if(areaCirculo (c) > mayor){
            mayor =  areaCirculo (c);
            pos = 4;
        }
    }

    return pos; 
}