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
    void imprimeHomicidio();
    void imprimeHurto();
    void imprimeLaborales();
    void imprimeLesiones();
    
    //Para crear objetos
    void agregaHomicidio(std::string nombre, char veredicto, double horas, \
    int grado,double tarifa, bool involuntario);
    void agregaHurto(std::string nombre, char veredicto, double horas, int grado, \
    double tarifa, double valor_robado);
    void agregaLaborales(std::string nombre, char veredicto, double acuerdo, \
    double demanda, int cuota, bool corte, std::string demandado);
    void agregaLesiones(std::string nombre, char veredicto, double acuerdo, \
    double demanda, int cuota, bool corte, char dano);
};

Casos::Casos(){
    cuenta_hom = 0;
    cuenta_hur = 0;
    cuenta_lab = 0;
    cuenta_les = 0;
}

void Casos::imprimeHomicidio(){
    for(int i = 0; i <= cuenta_hom; i++){
        std::cout << hom[i].toString();
    }
}

void Casos::imprimeHurto(){
    for(int i = 0; i <= cuenta_hur; i++){
        std::cout << hur[i].toString();
    }
}

void Casos::imprimeLaborales(){
    for(int i = 0; i <= cuenta_lab; i++){
        std::cout << lab[i].toString();
    }
}

void Casos::imprimeLesiones(){
    for(int i = 0; i <= cuenta_les; i++){
        std::cout << les[i].toString();
    }
}

void Casos::agregaHomicidio(std::string nom, char ver, double hr, int grad, \
    double tar, bool invol){
        cuenta_hom = cuenta_hom + 1;
        Homicidio aux(nom, ver, hr, grad, tar, invol);
        hom[cuenta_hom] = aux;
}

void Casos::agregaHurto(std::string nom, char ver, double hr, int grad, \
    double tar, double val){
        cuenta_hur = cuenta_hur + 1;
        Hurto aux(nom, ver, hr, grad, tar, val);
        hur[cuenta_hur] = aux;
}

void Casos::agregaLaborales(std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, std::string deman){
        cuenta_lab = cuenta_lab + 1;
        Laborales aux(nom, ver, ac, dem, cuo, cor, deman);
        lab[cuenta_lab] = aux;
}

void Casos::agregaLesiones(std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, char dan){
        cuenta_les = cuenta_les + 1;
        Lesiones aux(nom, ver, ac, dem, cuo, cor, dan);
        les[cuenta_les] = aux;
}

#endif // CASOS_H_