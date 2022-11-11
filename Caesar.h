/*
La clase Caesar que:
Atributos: frase, clave
Metodos: getters(), setters()
Constructor
*/

#include<string>

//definicion de la clase 
class Caesar{
private: 
  std::string frase;
  int clave; //si letras, recibe ASCII

public: //constructor
  Caesar():frase(""), clave(0) {}; //vacio
  Caesar(std::string f, int clav): 
                      frase(f), clave(clav) {}; //para cuando se tiene frase

  //getters
  std::string get_frase(); 
  
  int get_clave();

  //setters
  void set_frase(std::string ); 

  void set_clave(int );

};

std::string Caesar::get_frase(){ 
  return frase;
}

int Caesar::get_clave(){
  return clave;
}

void Caesar::set_frase(std::string f){
  frase = f;
}

void Caesar::set_clave(int clav){
  clave = clav;
}