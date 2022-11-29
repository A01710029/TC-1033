/*
* Proyecto Archivo de Casos
* Paulina Almada Martínez
* A01710029
* 17/11/2022
*/

/*
* Clase Criminal contiene los métodos genéricos 
* para el manejo de casos de derecho penal
* y tiene 2 clases hijas (tipos de crímenes):
* Homicidio y Hurto
*/

#ifndef CRIMINAL_H_
#define CRIMINAL_H_

#include<string>
#include <sstream>

//Clase Criminal
class Criminal {
    protected:
    //Variables de instancia
    std::string nombre;
    char veredicto;
    double horas;
    int grado;
    double tarifa;

    public:
    //Constructores del objeto
    //Default
    Criminal():nombre(""), veredicto('i'), horas(0.0), grado(0), tarifa(0.0) {};

    //Con parametros
    Criminal(std::string nom, char ver, double hr, int grad, double tar):
                nombre(nom), veredicto(ver), horas (hr), grado(grad), tarifa(tar) {};
    
    //Métodos del objeto
    //Getters
    std::string get_nombre();
    char get_veredicto();
    double get_horas();
    int get_grado();
    double get_tarifa();

    //Otras funciones
    std::string toString();
};

//Getters
//Getter para nombre
std::string Criminal::get_nombre(){
    return nombre;
}

//Getter para veredicto
char Criminal::get_veredicto(){
    return veredicto;
} 

//Getter para horas
double Criminal::get_horas(){
    return horas;
}

//Getter para grado
int Criminal::get_grado(){
    return grado;
}

//Getter para tarifa
double Criminal::get_tarifa(){
    return tarifa;
}

//toString con datos de casos criminales
std::string Criminal::toString(){
    std::stringstream aux;
    aux << "Defendio a " << nombre << " contra un cargo en " << grado << \
     " grado con un veredicto de " << veredicto << " dedicando " << horas << \
     " horas al caso con una tarifa de " << tarifa << "\n";
    return aux.str();
}

//Objeto Homicidio (hereda de Criminal)
class Homicidio: public Criminal{
    private:
    //Variables de instancia del objeto
    bool involuntario;

    public:
    //Constructores del objeto
    //Default
    Homicidio();
    
    //Con parametros
    Homicidio(std::string nom, char ver, double hr, int grad, \
    double tar, bool invol);

    //Metodos del objeto
    //Getters
    std::string get_nombre();
    char get_veredicto();
    double get_horas();
    int get_grado();
    double get_tarifa();
    bool get_involuntario();

    //Otras funciones
    double calcularPago();
    std::string toString();
};

//Constructores del objeto
//Default
Homicidio::Homicidio(){
    nombre = ""; 
    veredicto = 'i'; 
    horas = 0.0;
    grado = 0;
    tarifa = 0.0;
    involuntario = false;
}
    
//Con parametros
Homicidio::Homicidio(std::string nom, char ver, double hr, int grad, \
    double tar, bool invol){
        nombre = nom;
        veredicto = ver; 
        horas = hr;
        grado = grad;
        tarifa = tar; 
        involuntario = invol;
}

//Getters
//Getter para nombre
std::string Homicidio::get_nombre(){
    return nombre;
}

//Getter para veredicto
char Homicidio::get_veredicto(){
    return veredicto;
} 

//Getter para horas
double Homicidio::get_horas(){
    return horas;
}

//Getter para grado
int Homicidio::get_grado(){
    return grado;
}

//Getter para tarifa
double Homicidio::get_tarifa(){
    return tarifa;
}

//Getter para involuntario
bool Homicidio::get_involuntario(){
    return involuntario;
}

//Metodo que calcula el pago del cliente
//basado en el tiempo y la complejidad del caso
double Homicidio::calcularPago(){
    double total;
    if (grado ==  1) {
        total = tarifa * 1.05 * horas;
    } else if (grado == 2) {
        total = tarifa * 1.02 * horas;
    } else if (veredicto == 'c'){
        total = tarifa * 0.5 * horas;
    } else if (involuntario == true){
        total = tarifa * 0.90 * horas;
    } 
    return total;
}

//toString con datos de casos de homicidio
std::string Homicidio::toString(){
    std::stringstream aux;
    aux << "Defendio a " << nombre << " contra un cargo de homicidio en " \
    << grado << " grado con un veredicto de " << veredicto << \
    " dedicando " << horas << " horas al caso con una tarifa de " \
    << tarifa << ". Involuntario: " << involuntario << "\n";
    return aux.str();
}

//Objeto Hurto (hereda de Criminal)
class Hurto: public Criminal{
    private:
    //Variables de instancia
    double valor_robado;

    public:
    //Constructores del objeto
    //Default
    Hurto();
    
    //Con parametros
    Hurto(std::string nom, char ver, double hr, int grad, \
    double tar, double val);

    //Metodos del objeto
    //Getters
    std::string get_nombre();
    char get_veredicto();
    double get_horas();
    int get_grado();
    double get_tarifa();
    double get_valor();

    //Otras funciones
    double calcularPago();
    std::string calcularTipo();
    std::string toString();
};

//Constructores
//Default
Hurto::Hurto(){
    nombre = ""; 
    veredicto = 'i'; 
    horas = 0.0; 
    grado = 0;
    tarifa = 0.0; 
    valor_robado = 0.0;
}
    
//Con parametros
Hurto::Hurto(std::string nom, char ver, double hr, int grad, \
    double tar, double val){
        nombre = nom; 
        veredicto = ver;
        horas = hr; 
        grado = grad;
        tarifa = tar;
        valor_robado = val;
}

//Getters
//Getter para nombre
std::string Hurto::get_nombre(){
    return nombre;
}

//Getter para veredicto
char Hurto::get_veredicto(){
    return veredicto;
} 

//Getter para horas
double Hurto::get_horas(){
    return horas;
}

//Getter para grado
int Hurto::get_grado(){
    return grado;
}

//Getter para tarifa
double Hurto::get_tarifa(){
    return tarifa;
}

//Getter para valor robado
double Hurto::get_valor(){
    return valor_robado;
}

//Metodo que calcula el pago del cliente
//basado en el tiempo y la complejidad del caso
double Hurto::calcularPago(){
    double total;
    if (grado ==  1) {
        total = tarifa * 1.05 * horas;
    } else if (grado == 2) {
        total = tarifa * 1.02 * horas;
    } else if (veredicto == 'c'){
        total = tarifa * 0.5 * horas;
    }
    return total;
}

std::string Hurto::calcularTipo(){
    std::string tipo;
    if(valor_robado > 500){
        tipo = "menor";
    } else {
        tipo = "mayor";
    }
    return tipo;
}

//toString con datos de casos de hurto
std::string Hurto::toString(){
    std::stringstream aux;
    aux << "Defendio a " << nombre << " contra un cargo de hurto de tipo " \
    << Hurto::calcularTipo() << " en " << grado << " grado con un veredicto de " \
    << veredicto << " dedicando " << horas << " horas al caso con una tarifa de " \
    << tarifa << " Valor robado: " << valor_robado << "\n";
    return aux.str();
}

#endif // CRIMINAL_H_