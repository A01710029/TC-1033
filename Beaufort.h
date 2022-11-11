/*
La clase Beaufort que:
Atributos: frase, clave
Metodos: getters(), setters()
Constructor
*/

#include<string>

//definicion de la clase 
class Beaufort{
private: 
  std::string frase; 
  std::string clave; //si letras, recibe ASCII

public: //constructor 
  Beaufort():frase(""), clave("") {}; //vacio
  Beaufort(std::string f, std::string clav): 
                      frase(f), clave(clav) {}; 

  //getters
  std::string get_frase(); 
  
  std::string get_clave();

  //setters
  void set_frase(std::string ); 

  void set_clave(std::string );
};

std::string Beaufort::get_frase(){ 
  return frase;
}

std::string Beaufort::get_clave(){
  return clave;
}

void Beaufort::set_frase(std::string f){
  frase = f;
}

void Beaufort::set_clave(std::string clav){
  clave = clav;
}