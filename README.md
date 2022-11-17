# TC-1033

## Contexto
Desde la época del imperio Romano, han existido varios métodos de cifrar y descifrar mensajes al manipular el abecedario con patrones numéricos. Entre estos, existen tres tipos en particular en los que se basa este programa: el cifrado Caesar, utilizado por el mismo emperador, en el que se decide una llave numérica para mover las letras del mensake original en el alfabeto, reemplazandolas con la letra correspondiente, el cifrado Vigenère, que eleva la complejidad del Caesar al hacer este desplazamiento en dos columnas a través de una tabla, y el cifrado Beaufort, que es una versión invertida del Vigenère. 

## Funcionalidad
Estre programa permite a un usuario cifrar y/o descifrar un mensaje en forma de string. Primero, en forma de menú, el usuario tiene la opción de escoger entre tres tipos de cifrado: el Caesar, el Vigenère, y el Beaufort. Después, determina si quiere cifrar o descifrar, y escribe la frase y su llave. El programa, utilizando procesos algebráicos, ciclos, y matrices para llevar a cabo el desplazamiento y reemplazo alfabético, genera la nueva oración y la regresa al usuario. En el caso de los cifrados Vigenère y Beaufort, recibe la llave como un string pero el programa lo separa en una matriz de caracteres. Estos caracteres en si después se convierten en números equivalentes a su lugar en el alfabeto (A=0 para Vigenère, Z=0 para Beaufort) antes de seguir con el proceso de cifrado. 

## Consideraciones
Este programa opera con el sistema legal de los Estados Unidos y maneja las cifras de dinero en dólares. También se basa en las leyes específicas (particularmente relevante para las sentencias) del estado de California.

## Correciones
Se cambió el tema del proyecto. Solía ser un programa para cifrar/descifrar mensajes. 
