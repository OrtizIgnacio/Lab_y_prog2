#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*b) Luego, invoque una funci�n que reciba el struct por par�metro y que imprima el valor de
ambas variables del struct.
c) Dentro de esa misma funci�n, cambie los valores de las variables en cuesti�n y muestre
nuevamente sendos valores.
d) De regreso en el main, e inmediatamente despu�s de la llamada a la funci�n, imprima los
valores del struct; analice qu� valores se imprimieron en pantalla.*/
typedef struct{
    char nombre[20];
    int edad;
}Persona;

void miKokumo(Persona* persona){
    printf("miKokumo\nnombre: %s\n", persona->nombre);
    printf("edad: %d\n", persona->edad);
    strcpy(persona->nombre, "Ignacio");
    persona->edad = 25;
    printf("miKokumoDos\nnombre: %s\n", persona->nombre);
    printf("edad: %d\n", persona->edad);
}
int main(){
    //A)
    Persona persona;
    strcpy(persona.nombre, "Kokumo");
    persona.edad = 30;
    //B)
    miKokumo(&persona);
    //C)
    printf("nombre: %s\n", persona.nombre);
    printf("edad: %d\n", persona.edad);

    return 0;
}
