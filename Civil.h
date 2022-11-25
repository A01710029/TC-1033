/*
* Proyecto Archivo de Casos
* Paulina Almada Martínez
* A01710029
* 17/11/2022
*/

/*
* Clase Civil contiene los métodos genéricos 
* para el manejo de casos de derecho civil
* y tiene 2 clases hijas (tipos de casos):
* Demandas Laborales y Lesiones Personales
*/

#ifndef CIVIL_H_
#define CIVIL_H_

#include<string>
#include <sstream>

//Clase Civil
class Civil {
    protected:
    //Variables de instancia
    std::string nombre;
    char veredicto;
    double acuerdo;
    double demanda;
    int cuota;
    bool corte;

    public:
    //Constructores del objeto
    //Default
    Civil():nombre(""), veredicto('g'), acuerdo(0.0), demanda(0.0), cuota(0), corte(false) {};

    //Con parametros
    Civil(std::string nom, char ver, double ac, double dem, int cuo, bool cor):
                nombre(nom), veredicto(ver), acuerdo (ac), demanda(dem), cuota(cuo), corte(cor) {};
    
    //Métodos del objeto
    //Getters
    std::string get_nombre();
    char get_veredicto();
    double get_acuerdo();
    double get_demanda();
    int get_cuota();
    bool get_corte();

    //Otras funciones
    std::string toString();
};

//Getters
//Getter para nombre
std::string Civil::get_nombre(){
    return nombre;
}

//Getter para veredicto
char Civil::get_veredicto(){
    return veredicto;
} 

//Getter para acuerdo
double Civil::get_acuerdo(){
    return acuerdo;
}

//Getter para demanda
double Civil::get_demanda(){
    return demanda;
}

//Getter para cuota
int Civil::get_cuota(){
    return cuota;
}

//Getter para corte
bool Civil::get_corte(){
    return corte;
}

//toString con datos de casos civiles
std::string Civil::toString(){
    std::stringstream aux;
    aux << "Defendio a " << nombre << " en una demanda por " << demanda << \
     " con un veredicto de " << veredicto << " consiguiendo un acuerdo de " << acuerdo \
     << " con una cuota de " << cuota << ". Fue a corte: " << corte << "\n";
    return aux.str();
}

//Objeto Laborales (hereda de Civil)
class Laborales: public Civil{
    private:
    //Variables de instancia del objeto
    std::string demandado;

    public:
    //Constructores del objeto
    //Default
    Laborales();
    
    //Con parametros
    Laborales(std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, std::string deman);

    //Metodos del objeto
    //Getters
    std::string get_nombre();
    char get_veredicto();
    double get_acuerdo();
    double get_demanda();
    int get_cuota();
    bool get_corte();
    std::string get_demandado();

    //Otras funciones
    double calcularPago();
    double calcularGana_Cliente();
    std::string toString();
};

//Constructores del objeto
//Default
Laborales::Laborales(){
    nombre = ""; 
    veredicto = 'g'; 
    acuerdo = 0.0; 
    demanda = 0.0; 
    cuota = 0;
    corte = false; 
    demandado = "";
}
    
//Con parametros
Laborales::Laborales(std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, std::string deman){
        nombre = nom; 
        veredicto = ver; 
        acuerdo = ac; 
        demanda = dem;
        cuota = cuo; 
        corte = cor; 
        demandado = deman; 
}

//Getters
//Getter para nombre
std::string Laborales::get_nombre(){
    return nombre;
}

//Getter para veredicto
char Laborales::get_veredicto(){
    return veredicto;
} 

//Getter para acuerdo
double Laborales::get_acuerdo(){
    return acuerdo;
}

//Getter para demanda
double Laborales::get_demanda(){
    return demanda;
}

//Getter para cuota
int Laborales::get_cuota(){
    return cuota;
}

//Getter para corte
bool Laborales::get_corte(){
    return corte;
}

//Getter para demandado
std::string Laborales::get_demandado(){
    return demandado;
}

//Metodo que calcula el pago del cliente
//basado en la cuota, lo ganado para el cliente
//y si el caso fue a corte
double Laborales::calcularPago(){
    double total;
    if (acuerdo / demanda > 0.50) {
        total = cuota * acuerdo * 1.05;
    } else if (acuerdo / demanda < 0.50) {
        total = cuota * acuerdo * 1.02;
    } else if (veredicto = 'p'){
        total = cuota * acuerdo * 0.5;
    } else if (corte = false){
        total = cuota * 0.90;
    } 
    return total;
}

//Metodo que calcula la diferencia entre
//lo que pidio el cliente y lo que se gano
//al final del caso
double Laborales::calcularGana_Cliente(){
    double ganancia;
    ganancia = acuerdo - demanda;
    return ganancia;
}

//toString con datos de casos de homicidio
std::string Laborales::toString(){
    std::stringstream aux;
    aux << "Defendio a " << nombre << " en una demanda contra " << demandado << \
    " por " << demanda << " con un veredicto de " << veredicto << \
    " consiguiendo un acuerdo de " << acuerdo << " con una cuota de " \
    << cuota << ". Fue a corte: " << corte << "\n";
    return aux.str();
}

//Objeto Lesiones (hereda de Civil)
class Lesiones: public Civil{
    private:
    //Variables de instancia
    char dano;

    public:
    //Constructores del objeto
    //Default
    Lesiones();
    
    //Con parametros
    Lesiones(std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, char dan);

    //Metodos del objeto
    //Getters
    std::string get_nombre();
    char get_veredicto();
    double get_acuerdo();
    double get_demanda();
    int get_cuota();
    bool get_corte();
    char get_dano();

    //Otras funciones
    double calcularPago();
    double calcularGana_Cliente();
    std::string toString();
};

 //Constructores del objeto
//Default
Lesiones::Lesiones(){
    nombre = ""; 
    veredicto = 'i'; 
    acuerdo = 0.0; 
    demanda = 0.0; 
    cuota = 0;
    corte = false; 
    dano = 'f';
}
    
//Con parametros
Lesiones::Lesiones(std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, char dan){
        nombre = nom;
        veredicto = ver;
        acuerdo = ac; 
        demanda = dem;
        cuota = cuo; 
        corte = cor; 
        dano = dan;
}

//Getters
//Getter para nombre
std::string Lesiones::get_nombre(){
    return nombre;
}

//Getter para veredicto
char Lesiones::get_veredicto(){
    return veredicto;
} 

//Getter para acuerdo
double Lesiones::get_acuerdo(){
    return acuerdo;
}

//Getter para demanda
double Lesiones::get_demanda(){
    return demanda;
}

//Getter para cuota
int Lesiones::get_cuota(){
    return cuota;
}

//Getter para corte
bool Lesiones::get_corte(){
    return corte;
}

//Getter para dano
char Lesiones::get_dano(){
    return dano;
}

//Metodo que calcula el pago del cliente
//basado en la cuota, lo ganado para el cliente,
//que tipo de daño sufrio el cliente
//y si el caso fue a corte
double Lesiones::calcularPago(){
    double total;
    if (acuerdo / demanda > 0.50) {
        total = cuota * acuerdo * 1.05;
    } else if (acuerdo / demanda < 0.50) {
        total = cuota * acuerdo * 1.02;
    } else if (veredicto = 'p'){
        total = cuota * acuerdo * 0.5;
    } else if (corte = false){
        total = cuota * 0.90;
    } else if (dano = 'm'){
        total = cuota * acuerdo * 0.7;
    }
    return total;
}

//Metodo que calcula la diferencia entre
//lo que pidio el cliente y lo que se gano
//al final del caso
double Lesiones::calcularGana_Cliente(){
    double ganancia;
    ganancia = acuerdo - demanda;
    return ganancia;
}

//toString con datos de casos de hurto
std::string Lesiones::toString(){
    std::stringstream aux;
    aux << "Defendio a " << nombre << " en una demanda por daños de tipo " << dano << \
    " por " << demanda << " con un veredicto de " << veredicto << \
    " consiguiendo un acuerdo de " << acuerdo << " con una cuota de " \
    << cuota << ". Fue a corte: " << corte << "\n";
    return aux.str();
}

#endif // CIVIL_H_