#include <stdio.h>

#define cantEstados 7
#define posCaracter 6

void rellenarMatriz();
int selecColumna (char caracter);
int estMatriz [cantEstados][posCaracter];


int main()
    {
    rellenarMatriz(); 
   
    int estado=0; //variable para variar estado
    int columna=0; //variable para que se mueva en dependencia a caracter q ingresa 

    FILE* archivoEntrada;
    archivoEntrada = fopen ("entrada.txt","r");
    FILE* archivoSalida;
    archivoSalida = fopen ("salida.txt","w"); //si no existe, lo crea.Si existe, lo sobreescribe
    char caracterLeido;
    caracterLeido = fgetc (archivoEntrada);
    while (caracterLeido!= EOF) //lectura hasta el final del archivo de entrada
    {  
        while(caracterLeido!= EOF && caracterLeido!=',')
        { 
           
        columna= selecColumna(caracterLeido); //selecciona columna en base a caracter leido
        int aux=estado;
        estado = estMatriz [aux] [columna];
        fputc (caracterLeido, archivoSalida); //escribe en archivo de salida caracter leido
        caracterLeido = fgetc (archivoEntrada);        

        } 
        //sale del while cuando termina la palabra:1)Ya escribió palabra en archivo salida 2)leyó la coma de fin de palabra


        switch (estado)
        {
          case 0:
                fputs(" es vacio.\n", archivoSalida);
               
                break;
          case 1:
                fputs(" es decimal.\n", archivoSalida);
                
                break;
          case 2:
                fputs(" es octal.\n", archivoSalida);
                break;
          case 4:
                fputs(" es hexadecimal.\n", archivoSalida);
                  break;
          case 5:
                fputs(" es octal.\n", archivoSalida);
                break;
          case 6:
                fputs(" es una palabra no reconocida.\n", archivoSalida);               
                break;
          default:
                break;
        }
        if(caracterLeido==','){
            caracterLeido = fgetc (archivoEntrada);
        }
        estado=0;
    
    }  //vuelve a iniciar el ciclo para categorizar la siguiente palabra
    fclose(archivoEntrada);
    fclose(archivoSalida);  
    return 0;
}



void  rellenarMatriz()
{
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

     estMatriz [3][4]= estMatriz [4][4]= 4; 
    for(i=3;i<5;i++){
        for(j=0;j<3;j++){
            estMatriz [i][j]=4;
        }
    }
}

  
int selecColumna (char caracter) 
 {
    int estado;
        if  (caracter==48)
        {
           //48 es 0 en ascii
           estado=0;
       } else if (caracter>=49 && caracter <=55)
       {
           // 1-7
           estado=1;
       } else if (caracter == 56 || caracter == 57)
       {
           // 8 o 9
           estado = 2;
       } else if (caracter == 120 || caracter == 88)
       {
           //x o X
           estado = 3;
       } else if ((caracter>=65 && caracter <= 70) || (caracter >=97 && caracter <=102 ))
       {
           //a-f y A-F
           estado = 4;
       } else 
       {
           estado = 5;
       }

    return estado;
 }
