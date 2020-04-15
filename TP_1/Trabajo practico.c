#include <stdio.h>

#define estados 7
#define posCaracter 6

int estMatriz [estados][posCaracter];

void rellenarMatriz();



int main()
    {
    char *estSalida[]={"vacio","decimal","octal","","hexadecimal","octal","desconocido"}; //vector p salida 

    rellenarMatriz(); //no manda parametros porq matriz es var global/externa
   

    int i=0; //variable p variar estado
    int j=0; //variable p q se mueva en dependencia a caracter q entra 

    FILE* archivo;
    archivo=fopen("entrada.txt","r");


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


void  rellenarMatriz(){
    int i;
    int j;
    estMatriz [2][2]= estMatriz [5][2]=6;
    for(j=0;j<3;j++){
        estMatriz [6][j]=6;
    }
    estMatriz [2][0]= estMatriz [2][1]=estMatriz [5][0]= estMatriz [5][1]=5;
    for(i=0;i<7;i++){
        for(j=3;j<6;j++){
           estMatriz [i][j]=6; 
        }
    }
   
   
   
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            estMatriz [i][j]=1; 
        }
    }
    estMatriz [0][0]=2;
  
    estMatriz [2][3]=3;

     estMatriz [3][4]= estMatriz [4][4]= 4; //???
    for(i=3;i<5;i++){
        for(j=0;j<3;j++){
            estMatriz [i][j]=4;
        }
    }
   
    
}
