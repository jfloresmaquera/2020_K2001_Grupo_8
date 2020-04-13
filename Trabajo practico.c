#include <stdio.h>


int main()
    {
       
    string estados; // vector de salida p nombres (siguiendo q de i)
                    //primerpos si entra, directo; y desp ver en dependencia a pos de estados

    int estMatriz[7][6];

    cargar matriz //hacer funcion aparte por referencia



    int i=0; //variable p variar estado
    int j=0; //variable p q se mueva en dependencia a caracter q entra 

    abrir archivo //lectura

    while (no sea final del archivo){  
        leer caracter                                            
        while(caracter != , y no sea fin de archiv){ //esto lo podemos hacer en otra funcion q devuelva valor y lo ponemos en j
            switch caracter{
                case "0"
                    j=0
                    break
                case "1"
                case "7"   
                    j=1
                    break
                    .
                    .
            }
            i=matriz [i] [j]
            escribir en archivo caracter //en archivo de salida 
            leer devuelta        

        } //sale del while cuando termina la palabra y ya esta escrito lo q entro en arch salida
        
        if (leer =,){
            guardar " es "+ vector [posicion q diga hexa octal o des usando i] +","
        }
    i=0
    
    }    
     
    return 0;
}