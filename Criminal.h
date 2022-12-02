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
        int id;
        std::string nombre;
        char veredicto;
        double horas;
        int grado;
        double tarifa;

    public:
        //Constructores del objeto
        //Default
        Criminal();

        //Con parametros
        Criminal(int id, std::string nom, char ver, double hr, int grad, double tar);
        
        //Métodos del objeto
        //Getters
        int getId()const;
        std::string get_nombre() const;
        char get_veredicto() const;
        double get_horas() const;
        int get_grado() const;
        double get_tarifa() const;

        //Otras funciones
        std::string toString() const;
};

/*
* Constructor por default
* @param
* @return objeto Criminal
*/
Criminal::Criminal(){
    id = 0;
    nombre = ""; 
    veredicto = 'i';
    horas = 0.0;
    grado = 0; 
    tarifa = 0.0;
}

/*
* Constructor con parametros
* @param int n: id, string nom: nombre, char ver: veredicto, double hr: horas, 
* int grad: grado, double tar: tarifa
* @return objeto Criminal
*/
Criminal::Criminal(int n, std::string nom, char ver, double hr, int grad, double tar){
    id = n;
    nombre = nom; 
    veredicto = ver; 
    horas = hr; 
    grado = grad; 
    tarifa = tar;
}

//Getters
/* getter id
* @param
* @return int id
*/
int Criminal::getId()const{
    return id;
}

/* getter nombre
* @param
* @return string nombre
*/
std::string Criminal::get_nombre()const{
    return nombre;
}

/* getter veredicto
* @param
* @return char veredicto
*/
char Criminal::get_veredicto()const{
    return veredicto;
} 

/* getter horas
* @param
* @return double horas
*/
double Criminal::get_horas()const{
    return horas;
}

/* getter grado
* @param
* @return int grado
*/
int Criminal::get_grado()const{
    return grado;
}

/* getter tarifa
* @param
* @return double tarifa
*/
double Criminal::get_tarifa()const{
    return tarifa;
}

/* Almacena los valores de las variables en una cadena de texto
* @param
* @return string con datos del caso
*/
std::string Criminal::toString()const{
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
    Homicidio(int id, std::string nom, char ver, double hr, int grad, \
    double tar, bool invol);

    //Metodos del objeto
    //Getters
    int getId()const;
    std::string get_nombre()const;
    char get_veredicto()const;
    double get_horas()const;
    int get_grado()const;
    double get_tarifa()const;
    bool get_involuntario()const;

    //Otras funciones
    double calcularPago();
    std::string toString();
};

/*
* Constructor por default
* @param
* @return objeto Homicidio
*/
Homicidio::Homicidio(){
    id = 0;
    nombre = ""; 
    veredicto = 'i'; 
    horas = 0.0;
    grado = 0;
    tarifa = 0.0;
    involuntario = false;
}
    
/*
* Constructor con parametros
* @param int n: id, string nom: nombre, char ver: veredicto, double hr: horas, 
* int grad: grado, double tar: tarifa, bool invol: involuntario
* @return objeto Homicidio
*/
Homicidio::Homicidio(int n, std::string nom, char ver, double hr, int grad, \
    double tar, bool invol){
        id = n;
        nombre = nom;
        veredicto = ver; 
        horas = hr;
        grado = grad;
        tarifa = tar; 
        involuntario = invol;
}

//Getters
/* getter id
* @param
* @return int id
*/
int Homicidio::getId()const{
    return id;
}

/* getter nombre
* @param
* @return string nombre
*/
std::string Homicidio::get_nombre()const{
    return nombre;
}

/* getter veredicto
* @param
* @return char veredicto
*/
char Homicidio::get_veredicto()const{
    return veredicto;
} 

/* getter horas
* @param
* @return double horas
*/
double Homicidio::get_horas()const{
    return horas;
}

/* getter grado
* @param
* @return int grado
*/
int Homicidio::get_grado()const{
    return grado;
}

/* getter tarifa
* @param
* @return double tarifa
*/
double Homicidio::get_tarifa()const{
    return tarifa;
}

/* getter involuntario
* @param
* @return bool involuntario
*/
bool Homicidio::get_involuntario()const{
    return involuntario;
}

/* Metodo que calcula el pago del cliente
* basado en el tiempo y la complejidad del caso
* @ param
* @ return double total
*/
double Homicidio::calcularPago(){
    double total;
    if (grado ==  1) {
        total = tarifa * 1.05 * horas;
    } else if (grado == 2) {
        total = tarifa * 1.02 * horas;
    } else if (veredicto == 'c' || involuntario == true){
        total = tarifa * 0.5 * horas;
    } 
    return total;
}

/* Almacena los valores de las variables en una cadena de texto
* @param
* @return string con datos del caso Homicidio
*/
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
        Hurto(int id, std::string nom, char ver, double hr, int grad, \
        double tar, double val);

        //Metodos del objeto
        //Getters
        int getId()const;
        std::string get_nombre()const;
        char get_veredicto()const;
        double get_horas()const;
        int get_grado()const;
        double get_tarifa()const;
        double get_valor()const;

        //Otras funciones
        double calcularPago();
        std::string calcularTipo();
        std::string toString();
};

/*
* Constructor por default
* @param
* @return objeto Homicidio
*/
Hurto::Hurto(){
    id = 0;
    nombre = ""; 
    veredicto = 'i'; 
    horas = 0.0; 
    grado = 0;
    tarifa = 0.0; 
    valor_robado = 0.0;
}
    
/*
* Constructor con parametros
* @param int n: id, string nom: nombre, char ver: veredicto, double hr: horas, 
* int grad: grado, double tar: tarifa, double val: valor
* @return objeto Hurto
*/
Hurto::Hurto(int n, std::string nom, char ver, double hr, int grad, \
    double tar, double val){
        id = n;
        nombre = nom; 
        veredicto = ver;
        horas = hr; 
        grado = grad;
        tarifa = tar;
        valor_robado = val;
}

//Getters
/* getter id
* @param
* @return int id
*/
int Hurto::getId()const{
    return id;
}

/* getter nombre
* @param
* @return string nombre
*/
std::string Hurto::get_nombre()const{
    return nombre;
}

/* getter veredicto
* @param
* @return char veredicto
*/
char Hurto::get_veredicto()const{
    return veredicto;
} 

/* getter horas
* @param
* @return double horas
*/
double Hurto::get_horas()const{
    return horas;
}

/* getter grado
* @param
* @return int grado
*/
int Hurto::get_grado()const{
    return grado;
}

/* getter tarifa
* @param
* @return double tarifa
*/
double Hurto::get_tarifa()const{
    return tarifa;
}

/* getter valor
* @param
* @return double valor
*/
double Hurto::get_valor()const{
    return valor_robado;
}

/* Metodo que calcula el pago del cliente
* basado en el tiempo y la complejidad del caso
* @ param
* @ return double total
*/
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

/* Metodo que calcula el tipo del caso
* basado en el valor robado
* @ param
* @ return string tipo
*/
std::string Hurto::calcularTipo(){
    std::string tipo;
    if(valor_robado > 500){
        tipo = "menor";
    } else {
        tipo = "mayor";
    }
    return tipo;
}

/* Almacena los valores de las variables en una cadena de texto
* @param
* @return string con datos del caso Homicidio
*/
std::string Hurto::toString(){
    std::stringstream aux;
    aux << "Defendio a " << nombre << " contra un cargo de hurto de tipo " \
    << Hurto::calcularTipo() << " en " << grado << " grado con un veredicto de " \
    << veredicto << " dedicando " << horas << " horas al caso con una tarifa de " \
    << tarifa << " Valor robado: " << valor_robado << "\n";
    return aux.str();
}

#endif // CRIMINAL_H_