/*
La clase Vigenere que:
Atributos: frase, clave
Metodos: getters(), setters(), palabra_to_matriz()
Constructor
*/

#include<string>

//definicion de la clase 
class Vigenere{
private: 
  std::string frase; 
  std::string clave; //si letras, recibe ASCII

public: //constructor  
  Vigenere():frase(""), clave("") {}; //vacio
  Vigenere(std::string f, std::string clav): 
                      frase(f), clave(clav) {};

  //getters
  std::string get_frase(); 
  
  std::string get_clave();

  //setters
  void set_frase(std::string ); 

  void set_clave(std::string );

  //otros metodos
  void palabra_to_matriz(std::string );
};

std::string Vigenere::get_frase(){ 
  return frase;
}

std::string Vigenere::get_clave(){
  return clave;
}

void Vigenere::set_frase(std::string f){
  frase = f;
}

void Vigenere::set_clave(std::string clav){
  clave = clav;
}

void Vigenere::palabra_to_matriz(std::string mat){
  std::string str = mat;
    for(char i : str){
        str = char palab_letras [mat.length()];
    }
}