/*
* Proyecto Archivo de Casos
* Paulina Almada Martínez
* A01710029
* 17/11/2022
*/

/*
* Clase Casos, maneja grupos de casos, divididos en
* Homicidios, Hurto, Laborales y Lesiones
*/

#ifndef CASOS_H_
#define CASOS_H_
#include<string>
#include<sstream>

#include "Criminal.h"
#include "Civil.h"
const int MAX = 100; //tamano de arreglos


class Casos {
    //Variables de instancia
    private:
        Homicidio hom[MAX];
        Hurto hur[MAX];
        Laborales lab[MAX];
        Lesiones les[MAX];
        int cuenta_hom;
        int cuenta_hur;
        int cuenta_lab; 
        int cuenta_les;

    public:
    //Constructor
    Casos();

    //Metodos de la clase
    
    //Para imprimir objetos
    void muestraHomicidio();
    void muestraHurto();
    void muestraLaborales();
    void muestraLesiones();
    
    //Para crear objetos
    void agregaHomicidio(std::string nombre, char veredicto, double horas, \
    int grado,double tarifa);
    void agregaHurto(std::string nombre, char veredicto, double horas, int grado, \
    double tarifa, double valor_robado);
    void agregaLaborales(std::string nombre, char veredicto, double acuerdo, \
    double demanda, int cuota, bool corte, std::string demandado);
    void agregaLesiones(std::string nombre, char veredicto, double acuerdo, \
    double demanda, int cuota, bool corte, char dano);
};

#endif // CASOS_H_