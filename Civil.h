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
        int id;
        std::string nombre;
        char veredicto;
        double acuerdo;
        double demanda;
        int cuota;
        bool corte;

    public:
        //Constructores del objeto
        //Default
        Civil();

        //Con parametros
        Civil(int id, std::string nom, char ver, double ac, double dem, int cuo, bool cor);
        
        //Métodos del objeto
        //Getters
        int getId()const;
        std::string get_nombre()const;
        char get_veredicto()const;
        double get_acuerdo()const;
        double get_demanda()const;
        int get_cuota()const;
        bool get_corte()const;

        //Otras funciones
        std::string toString()const;
};

//Constructores
/*
* Constructor por default
* @param
* @return objeto Civil
*/
Civil::Civil(){
    id = 0;
    nombre = ""; 
    veredicto = 'g'; 
    acuerdo = 0.0; 
    demanda = 0.0; 
    cuota = 0;
    corte = false;
}

/*
* Constructor con parametros
* @param int n: id, string nom: nombre, char ver: veredicto, double ac: acuerdo, 
* double dem: demanda, int cuo: cuota, bool cor: corte 
* @return objeto Civil
*/
Civil::Civil(int n, std::string nom, char ver, double ac, double dem, int cuo, bool cor){
    id = n;
    nombre = nom; 
    veredicto = ver; 
    acuerdo = ac; 
    demanda = dem; 
    cuota = cuo;
}

//Getters
/* getter id
* @param
* @return int id
*/
int Civil::getId()const{
    return id;
}

/* getter nombre
* @param
* @return string nombre
*/
std::string Civil::get_nombre()const{
    return nombre;
}

/* getter veredicto
* @param
* @return char veredicto
*/
char Civil::get_veredicto()const{
    return veredicto;
} 

/* getter acuerdo
* @param
* @return double acuerdo
*/
double Civil::get_acuerdo()const{
    return acuerdo;
}

/* getter demanda
* @param
* @return double demanda
*/
double Civil::get_demanda()const{
    return demanda;
}

/* getter cuota
* @param
* @return int cuota
*/
int Civil::get_cuota()const{
    return cuota;
}

/* getter corte
* @param
* @return bool corte
*/
bool Civil::get_corte()const{
    return corte;
}

/* Almacena los valores de las variables en una cadena de texto
* @param
* @return string con datos del caso
*/
std::string Civil::toString()const{
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
        Laborales(int id, std::string nom, char ver, double ac, double dem, int cuo, \
        bool cor, std::string deman);

        //Metodos del objeto
        //Getters
        int getId()const;
        std::string get_nombre()const;
        char get_veredicto()const;
        double get_acuerdo()const;
        double get_demanda()const;
        int get_cuota()const;
        bool get_corte()const;
        std::string get_demandado()const;

        //Otras funciones
        double calcularPago();
        double calcularGana_Cliente();
        std::string toString();
};

/*
* Constructor por default
* @param
* @return objeto Laborales
*/
Laborales::Laborales(){
    id = 0;
    nombre = ""; 
    veredicto = 'g'; 
    acuerdo = 0.0; 
    demanda = 0.0; 
    cuota = 0;
    corte = false; 
    demandado = "";
}
    
/*
* Constructor con parametros
* @param int n: id, string nom: nombre, char ver: veredicto, double ac: acuerdo, 
* double dem: demanda, int cuo: cuota, bool cor: corte, string deman: demandado
* @return objeto Laborales
*/
Laborales::Laborales(int n, std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, std::string deman){
        id = n;
        nombre = nom; 
        veredicto = ver; 
        acuerdo = ac; 
        demanda = dem;
        cuota = cuo; 
        corte = cor; 
        demandado = deman; 
}

//Getters
/* getter id
* @param
* @return int id
*/
int Laborales::getId()const{
    return id;
}

/* getter nombre
* @param
* @return string nombre
*/
std::string Laborales::get_nombre()const{
    return nombre;
}

/* getter veredicto
* @param
* @return char veredicto
*/
char Laborales::get_veredicto()const{
    return veredicto;
} 

/* getter acuerdo
* @param
* @return double acuerdo
*/
double Laborales::get_acuerdo()const{
    return acuerdo;
}

/* getter demanda
* @param
* @return double demanda
*/
double Laborales::get_demanda()const{
    return demanda;
}

/* getter cuota
* @param
* @return int cuota
*/
int Laborales::get_cuota()const{
    return cuota;
}

/* getter corte
* @param
* @return bool corte
*/
bool Laborales::get_corte()const{
    return corte;
}

/* getter demandado
* @param
* @return string demandado
*/
std::string Laborales::get_demandado()const{
    return demandado;
}

/* Metodo que calcula el pago del cliente
* basado en la cuota, lo ganado para el cliente
* y si el caso fue a corte
* @param 
* @return double total
*/
double Laborales::calcularPago(){
    double total;
    if (veredicto == 'p'){
        total = cuota * acuerdo * 0.5;
    } else if (acuerdo / demanda > 0.50 || corte == true) {
        total = cuota * acuerdo * 1.05;
    } else if (acuerdo / demanda < 0.50) {
        total = cuota * acuerdo * 1.02;
    } 
    return total;
}

/* Metodo que calcula la diferencia entre
* lo que pidio el cliente y lo que se gano
* al final del caso
* @param
* @return double ganancia
*/
double Laborales::calcularGana_Cliente(){
    double ganancia;
    ganancia = acuerdo - demanda;
    return ganancia;
}

/* Almacena los valores de las variables en una cadena de texto
* @param
* @return string con datos del caso Laborales
*/
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
        Lesiones(int id, std::string nom, char ver, double ac, double dem, int cuo, \
        bool cor, char dan);

        //Metodos del objeto
        //Getters
        int getId()const;
        std::string get_nombre()const;
        char get_veredicto()const;
        double get_acuerdo()const;
        double get_demanda()const;
        int get_cuota()const;
        bool get_corte()const;
        char get_dano()const;

        //Otras funciones
        double calcularPago();
        double calcularGana_Cliente();
        std::string toString();
};

/*
* Constructor por default
* @param
* @return objeto Lesiones
*/
Lesiones::Lesiones(){
    id = 0;
    nombre = ""; 
    veredicto = 'i'; 
    acuerdo = 0.0; 
    demanda = 0.0; 
    cuota = 0;
    corte = false; 
    dano = 'f';
}
    
/*
* Constructor con parametros
* @param int n: id, string nom: nombre, char ver: veredicto, double ac: acuerdo, 
* double dem: demanda, int cuo: cuota, bool cor: corte, char dan: daño
* @return objeto Lesiones
*/
Lesiones::Lesiones(int n, std::string nom, char ver, double ac, double dem, int cuo, \
    bool cor, char dan){
        id = n;
        nombre = nom;
        veredicto = ver;
        acuerdo = ac; 
        demanda = dem;
        cuota = cuo; 
        corte = cor; 
        dano = dan;
}

//Getters
/* getter id
* @param
* @return int id
*/
int Lesiones::getId()const{
    return id;
}

/* getter nombre
* @param
* @return string nombre
*/
std::string Lesiones::get_nombre()const{
    return nombre;
}

/* getter veredicto
* @param
* @return char veredicto
*/
char Lesiones::get_veredicto()const{
    return veredicto;
} 

/* getter acuerdo
* @param
* @return double acuerdo
*/
double Lesiones::get_acuerdo()const{
    return acuerdo;
}

/* getter demanda
* @param
* @return double demanda
*/
double Lesiones::get_demanda()const{
    return demanda;
}

/* getter cuota
* @param
* @return int cuota
*/
int Lesiones::get_cuota()const{
    return cuota;
}

/* getter cuota
* @param
* @return int cuota
*/
bool Lesiones::get_corte()const{
    return corte;
}

/* getter daño
* @param
* @return char daño
*/
char Lesiones::get_dano()const{
    return dano;
}

/* Metodo que calcula el pago del cliente
* basado en la cuota, lo ganado para el cliente,
* que tipo de daño sufrio el cliente
* y si el caso fue a corte
* @param
* @return double total
*/
double Lesiones::calcularPago(){
    double total;
    if (veredicto == 'p'){
        total = cuota * acuerdo * 0.5;
    } else if (acuerdo / demanda > 0.50 || corte == true) {
        total = cuota * acuerdo * 1.05;
    } else if (acuerdo / demanda < 0.50 || dano == 'm') {
        total = cuota * acuerdo * 1.02;
    }
    return total;
}

/* Metodo que calcula la diferencia entre
* lo que pidio el cliente y lo que se gano
* al final del caso
* @param
* @return double ganancia
*/
double Lesiones::calcularGana_Cliente(){
    double ganancia;
    ganancia = acuerdo - demanda;
    return ganancia;
}

/* Almacena los valores de las variables en una cadena de texto
* @param
* @return string con datos del caso Lesiones
*/
std::string Lesiones::toString(){
    std::stringstream aux;
    aux << "Defendio a " << nombre << " en una demanda por daños de tipo " << dano << \
    " por " << demanda << " con un veredicto de " << veredicto << \
    " consiguiendo un acuerdo de " << acuerdo << " con una cuota de " \
    << cuota << ". Fue a corte: " << corte << "\n";
    return aux.str();
}

#endif // CIVIL_H_