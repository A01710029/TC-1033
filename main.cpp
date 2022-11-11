/*
La clase main() para un programa de cifrados
*/

#include <iostream>
#include <string>

//archivos para clases
#include "Caesar.h"
#include "Vigenere.h"
#include "Beaufort.h"

int main(){
    std::cout << "Caesar:";
    Caesar caesar_test("ydit", 4); 
    std::cout << caesar_test.get_frase();
    std::cout << "\n";
    std::cout << caesar_test.get_clave();
    caesar_test.set_frase("caesar");
    caesar_test.set_clave(5);
    std::cout << "\n";
    std::cout << caesar_test.get_frase();
    std::cout << "\n";
    std::cout << caesar_test.get_clave();

    std::cout << "\n";
    std::cout << "\n";

    std::cout << "Vigenere:\n";
    Vigenere vigenere_test("wert", "rpi"); 
    std::cout << vigenere_test.get_frase();
    std::cout << "\n";
    std::cout << vigenere_test.get_clave();
    vigenere_test.set_frase("vigenere");
    vigenere_test.set_clave("dsl");
    std::cout << "\n";
    std::cout << vigenere_test.get_frase();
    std::cout << "\n";
    std::cout << vigenere_test.get_clave();

    std::cout << "\n";
    std::cout << "\n";

    std::cout << "Beaufort: \n";
    Beaufort beaufort_test("kesf", "qtc"); 
    std::cout << beaufort_test.get_frase();
    std::cout << "\n";
    std::cout << beaufort_test.get_clave();
    beaufort_test.set_frase("beaufort");
    beaufort_test.set_clave("pfa");
    std::cout << "\n";
    std::cout << beaufort_test.get_frase();
    std::cout << "\n";
    std::cout << beaufort_test.get_clave();
}