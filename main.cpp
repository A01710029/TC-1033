/*
* Proyecto Archivo de Casos
* Paulina Almada Martínez
* A01710029
* 17/11/2022
 */

/**
 * Este es un programa que captura datos de diferentes
 * tipos de casos y permite calcular el pago que recibe
 * el abogado por cada uno al igual que mostrar todos
 * los casos registrados por tipo de crimen
*/

//Bibliotecas
#include <iostream>
#include "Criminal.h" //donde estan los objetos de casos criminales
#include "Civil.h" //donde estan los objetos de casos civiles
#include "Casos.h"

//Menu
void menu(){
    //Imprime las opciones del programa
    std::cout << "Menu:\n";
    std::cout << "1. Mostrar casos de Homicidio\n";
    std::cout << "2. Mostrar casos de Hurto\n";
    std::cout << "3. Mostrar casos de Demandas Laborales\n";
    std::cout << "4. Mostrar casos de Lesiones Personales\n";
    std::cout << "5. Agregar caso de Homicidio\n";
    std::cout << "6. Agregar caso de Hurto\n";
    std::cout << "7. Agregar caso de Demandas Laborales\n";
    std::cout << "8. Agregar caso de Lesiones Personales\n";
    std::cout << "9. Salir\n";
}

int main(){
    Casos casos; //crear objeto Casos
    //variables para el ciclo
    int opcion = 0;

    //todos los casos
    std::string nom;
    char ver; 

    //casos criminales
    double hrs;
    int grad;
    double tar;
    double val;
    bool invol;

    //casos civiles
    double ac;
    double dem;
    int cuo; 
    bool cor;
    std::string deman;
    char dan;

    //ciclo para que el menu funcione hasta que se escoga salir
    while(opcion < 9 && opcion > -1){

        //Imprime menu
        menu();

        //Pedir al usuario una opcion
        std::cin >> opcion;

        //Acciones para opciones del menu
        switch(opcion){
            //Opcion 1: imprime casos tipo homicidio
            case 1:
                casos.muestraHomicidio();
                break;
            //Opcion 2: imprime casos tipo hurto
            case 2: 
                casos.muestraHurto();
                break;
            //Opcion 3: imprime casos tipo laborales
            case 3: 
                casos.muestraLaborales();
                break;
            //Opcion 4: imprime casos tipo lesiones
            case 4:
                casos.muestraLesiones();
                break;
            //Opcion 5: crea un objeto Homicidio
            case 5:
                std::cout << "Nombre del cliente: ";
                std::cin >> nom;
                std::cout << "Veredicto del caso (i/c): ";
                std::cin >> ver;
                std::cout << "Horas dedicadas al caso: ";
                std::cin >> hrs;
                std::cout << "Grado del homicidio: ";
                std::cin >> grad;
                std::cout << "Tarifa por hora establecida: ";
                std::cin >> tar;
                std::cout << "Homicidio involuntario (t/f): ";
                std::cin >> invol;
                casos.agregaHomicidio(nom, ver, hrs, grad, tar, invol);
                break;
            //Opcion 6: crea un objeto Hurto
            case 6:
                std::cout << "Nombre del cliente: ";
                std::cin >> nom;
                std::cout << "Veredicto del caso (i/c): ";
                std::cin >> ver;
                std::cout << "Horas dedicadas al caso: ";
                std::cin >> hrs;
                std::cout << "Grado del hurto: ";
                std::cin >> grad;
                std::cout << "Tarifa por hora establecida: ";
                std::cin >> tar;
                std::cout << "Valor robado: ";
                std::cin >> val;
                casos.agregaHurto(nom, ver, hrs, grad, tar, val);
                break;
            //Opcion 7: crea un objeto Laborales
            case 7:
                std::cout << "Nombre del cliente: ";
                std::cin >> nom;
                std::cout << "Veredicto del caso (g/p): ";
                std::cin >> ver;
                std::cout << "Acuerdo conseguido: ";
                std::cin >> ac;
                std::cout << "Demanda del cliente: ";
                std::cin >> dem;
                std::cout << "Cuota del acuerdo establecida (porcentaje): ";
                std::cin >> cuo;
                std::cout << "Fue a corte (t/f): ";
                std::cin >> cor;
                std::cout << "Demandando a: ";
                std::cin >> deman;
                casos.agregaLaborales(nom, ver, ac, dem, cuo, cor, deman);
                break;
            //Opcion 8: crea un objeto Lesiones
            case 8:
                std::cout << "Nombre del cliente: ";
                std::cin >> nom;
                std::cout << "Veredicto del caso (g/p): ";
                std::cin >> ver;
                std::cout << "Acuerdo conseguido: ";
                std::cin >> ac;
                std::cout << "Demanda del cliente: ";
                std::cin >> dem;
                std::cout << "Cuota del acuerdo establecida (porcentaje): ";
                std::cin >> cuo;
                std::cout << "Fue a corte (t/f): ";
                std::cin >> cor;
                std::cout << "Tipo de daño (f/m): ";
                std::cin >> dan;
                casos.agregaLesiones(nom, ver, ac, dem, cuo, cor, dan);
                break;
        }
    }
}