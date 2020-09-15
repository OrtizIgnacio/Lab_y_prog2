#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Utilizando la funci�n gets , leer de la entrada est�ndar dos l�neas de longitud m�xima 80
caracteres cada una. Se pide generar y devolver l a cadena que surge como producto de
la intersecci�n de las palabras de ambas l�neas. Ejemplo:
l�nea 1: El f�tbol es un deporte que se juega con una pelota redonda.
l�nea 2: El rugby es un deporte que se juega con una pelota ovalada.
salida: El es un deporte que se juega con una pelota.*/

char *interseccionCadenas(char *, char *);

int main()
{
    char *cadenaUno =(char*)malloc(sizeof(char)*81);
    char *cadenaDos = (char*)malloc(sizeof(char)*81);
    char *cadenaResultante = (char*)malloc(sizeof(char)*81);
    printf("Ingrese please la cadena uno\n");
    gets(cadenaUno);
    printf("Ingrese please la cadena dos\n");
    gets(cadenaDos);
    cadenaResultante = interseccionCadenas(cadenaUno, cadenaDos);
    printf("La cadena resultante de la concatenacion es:\n%s", cadenaResultante);
    return 0;
}

char *interseccionCadenas(char *cadenaUno, char *cadenaDos){
    char *cadenaSalida = (char*)malloc(sizeof(char)*81);
    char *vector[80];
    int i = 0;
    while(*(cadenaUno + i) != '\0' && *(cadenaDos + i) != '\0'){
        palabraUno = NULL;
        palabraDos = NULL;
        while(*(cadenaUno + i) != '\0' && *(cadenaDos + i) != '\0' && *(cadenaUno + i) != ' ' && *(cadenaDos + i) != ' '){
            *(palabraUno + j) = *(cadenaUno + i);
            *(palabraDos + j) = *(cadenaDos + i);
            j++;
            i++;
        }
        *(palabraUno + j) = '\0';
        *(palabraDos + j) = '\0';
        if(strcmp(palabraUno,palabraDos) == 0){
            strcat(cadenaSalida, palabraUno);
            strcat(cadenaSalida, " ");
        }
        i++;
        j=0;
    }
    return cadenaSalida;
}
