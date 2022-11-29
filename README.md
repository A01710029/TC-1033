# TC-1033

## Contexto
Existen varios tipos de derecho, que si mismos tienen muchos tipos de crímenes y demandas dentro de los mismos. La información que se recolecta depende del tipo de caso, al igual que la manera en la que un abogado cobra por sus servicios. 

De los casos criminales, se debe considerar el grado de la ofensa, donde 1er grado es lo más severo y 3er grado lo menos severo. En el caso del homicidio, igualmente se tiene que considerar si fue un asesinato involuntario o voluntario, ya que esto igual determina la severidad del cargo. En el caso del hurto, existen dos tipos, pequeño o grande ("petty" y "grand" en Inglés), que también determinan la severidad, los cuales se calculan basado en cuánto valía la propiedad robada. Por encima de $500 USD, se considera "grand" y se vuelve un cargo más severo.

De los casos civiles, se debe considerar la cantidad por la que está demandando la persona, al igual que el acuerdo al que se llega al final del proceso. También se debe considerar si el caso se llevó a corte, ya que la mayoría de las demandas civiles se resuelven fuera de corte. En el caso de demandas laborales, ya que casi siempre son contra una compañía específica, se tiene que tener registro de qué compañía se demandó. Para casos de lesión personal, se tiene que considerar si el daño que se le causó al cliente es físico o monetario. 

Para todo caso, cualquier abogado debe de tener el nombre de su cliente y el veredicto: inocente o culpable si se trata de un caso criminal, o ganancia o perdida si se trata de un caso civil.

Dos de los métodos más comunes para determinar cuánto debe un cliente a un abogado son una tarifa específica por hora, en la que el abogado recibe pago por todo el tiempo que dedica al caso (típicamente utilizada para casos criminales), y una cuota de la suma de dinero que consigue el cliente (típicamente utilizada para casos civiles, donde se llega a un acuerdo financiero para la demanda). Es común que dependiendo de la complejidad del caso (por ejemplo, un grado mayor para un caso criminal o si se llevó a corte para un caso civil) cambie el precio, y que casos más complejos sean más caros. Esto normalmente se refleja en un porcentaje agregado al valor total del precio para el cliente.

## Funcionalidad
Este programa permite a un usuario (que se asume sería un abogado), a través de un menu, escoger entre varios comandos que le ayudan a mantener registro de sus casos y determinar cuanto dinero hace. Tiene la opción de ingresar información sobre sus casos, divididos en cuatro tipos: homicidios y hurtos (criminales) y demandas laborales y de lesiones personales (civiles), que se guardan en listas por tipo. También puede mostrar todos los casos que ha registrado en forma de lista, dependiendo del tipo. 

## Consideraciones
Este programa opera con el sistema legal de los Estados Unidos y maneja las cifras de dinero en dólares.

## Correciones
Se cambió el tema del proyecto. Solía ser un programa para cifrar/descifrar mensajes.<br>
Se corrigió la sintaxis para hacer comparaciones de valores (de "=" a "==") en las funciones de calcularPago para todas las subclases (en Criminal y Civil).<br>
Se agregó el atributo de "involuntario" a la función agregaHomicidio (en Casos) y al menu de main().<br>
Se cambiaron las flechas en el diagrama de UML para reflejar correctamente la relación de herencia entre Homicidio/Hurto con Criminal, y Laborales/Lesiones con Civil, al igual que la relación de composición con las cuatro subclases y Casos.
