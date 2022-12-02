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
    
    //Ejemplos
    void ejemploHomicidio();
    void ejemploHurto();
    void ejemploLaborales();
    void ejemploLesiones();

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

/*
* Constructor por default
* @param 
* @return Objeto Casos
*/
Casos::Casos(){
    cuenta_hom = 0;
    cuenta_hur = 0;
    cuenta_lab = 0;
    cuenta_les = 0;
}

/*
* Utiliza el arreglo de tipo Homicidio
* Lllena el arreglo con 2 ejemplos, considerando que va de 1 a 99
* @param 
* @return
*/
void Casos::ejemploHomicidio(){
    hom[0] = Homicidio(cuenta_hom, "R", 'i', 4.0, 1, 8.0, true);
    cuenta_hom = cuenta_hom + 1;
    hom[1] = Homicidio(cuenta_hom, "R", 'i', 4.0, 1, 8.0, true);
    cuenta_hom = cuenta_hom + 1;
}

/*
* Utiliza el arreglo de tipo Hurto
* Lllena el arreglo con 2 ejemplos, considerando que va de 1 a 99
* @param 
* @return
*/
void Casos::ejemploHurto(){
    hur[0] = Hurto(cuenta_hur, "R", 'i', 4.0, 1, 8.0, 5.0);
    cuenta_hur = cuenta_hur + 1;
    hur[1] = Hurto(cuenta_hur, "R", 'i', 4.0, 1, 8.0, 5.0);
    cuenta_hur = cuenta_hur + 1;
}

/*
* Utiliza el arreglo de tipo Laborales
* Lllena el arreglo con 2 ejemplos, considerando que va de 1 a 99
* @param 
* @return
*/
void Casos::ejemploLaborales(){
    lab[0] = Laborales(cuenta_lab, "R", 'p', 4.0, 5.0, 3, true, "F");
    cuenta_lab = cuenta_lab + 1;
    lab[1] = Laborales(cuenta_lab, "R", 'p', 4.0, 5.0, 3, true, "F");
    cuenta_lab = cuenta_lab + 1;
}

/*
* Utiliza el arreglo de tipo Lesiones
* Lllena el arreglo con 2 ejemplos, considerando que va de 1 a 99
* @param 
* @return
*/
void Casos::ejemploLesiones(){
    les[0] = Lesiones(cuenta_les, "R", 'p', 4.0, 5.0, 3, true, 'f');
    cuenta_les = cuenta_les + 1;
    les[1] = Lesiones(cuenta_les, "R", 'p', 4.0, 5.0, 3, true, 'f');
    cuenta_les = cuenta_les + 1;
}

/*
* Utiliza el arreglo de tipo Homicidio y su indice
* Recorre el arreglo, imprimiendo los objetos del mismo
* @param 
* @return
*/
void Casos::imprimeHomicidio(){
    for(int i = 0; i <= cuenta_hom; i++){
        std::cout << hom[i].toString();
    }
}

/*
* Utiliza el arreglo de tipo Hurto y su indice
* Recorre el arreglo, imprimiendo los objetos del mismo
* @param 
* @return
*/
void Casos::imprimeHurto(){
    for(int i = 0; i <= cuenta_hur; i++){
        std::cout << hur[i].toString();
    }
}

/*
* Utiliza el arreglo de tipo Laborales y su indice
* Recorre el arreglo, imprimiendo los objetos del mismo
* @param 
* @return
*/
void Casos::imprimeLaborales(){
    for(int i = 0; i <= cuenta_lab; i++){
        std::cout << lab[i].toString();
    }
}

/*
* Utiliza el arreglo de tipo Lesiones y su indice
* Recorre el arreglo, imprimiendo los objetos del mismo
* @param 
* @return
*/
void Casos::imprimeLesiones(){
    for(int i = 0; i <= cuenta_les; i++){
        std::cout << les[i].toString();
    }
}

/*
* Utiliza arreglo de Homicidio y su ultimo indice
* Recibe el nombre, veredicto, horas, grado, tarifa e involuntario
* Generando un id, crea el objeto Homicidio y lo agrega
* al arreglo
* @ param
* @return 
*/
void Casos::agregaHomicidio(std::string nom, char ver, double hr, int grad, \
    double tar, bool invol){
        cuenta_hom = cuenta_hom + 1;
        Homicidio aux(cuenta_hom, nom, ver, hr, grad, tar, invol);
        hom[cuenta_hom] = aux;
}

/*
* Utiliza arreglo de Hurto y su ultimo indice
* Recibe el nombre, veredicto, horas, grado, tarifa e valor
* Generando un id, crea el objeto Hurto y lo agrega
* al arreglo
* @ param
* @return 
*/
void Casos::agregaHurto(std::string nom, char ver, double hr, int grad, \
    double tar, double val){
        cuenta_hur = cuenta_hur + 1;
        Hurto aux(cuenta_hur, nom, ver, hr, grad, tar, val);
        hur[cuenta_hur] = aux;
}

/*
* Utiliza arreglo de Laborales y su ultimo indice
* Recibe el nombre, veredicto, acuerdo, demanda, cuota, corte y demandado
* Generando un id, crea el objeto Laborales y lo agrega
* al arreglo
* @param
* @return
*/
void Casos::agregaLaborales(std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, std::string deman){
        cuenta_lab = cuenta_lab + 1;
        Laborales aux(cuenta_lab, nom, ver, ac, dem, cuo, cor, deman);
        lab[cuenta_lab] = aux;
}

/*
* Utiliza arreglo de Lesiones y su ultimo indice
* Recibe el nombre, veredicto, acuerdo, demanda, cuota, corte y daño
* Generando un id, crea el objeto Homicidio y lo agrega
* al arreglo
* @param
* @return
*/
void Casos::agregaLesiones(std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, char dan){
        cuenta_les = cuenta_les + 1;
        Lesiones aux(cuenta_les, nom, ver, ac, dem, cuo, cor, dan);
        les[cuenta_les] = aux;
}

#endif // CASOS_H_