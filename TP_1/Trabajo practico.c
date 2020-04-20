#include <stdio.h>
#include <stdbool.h> // duda 

#define cantEstados 7
#define posCaracter 6

void rellenarMatriz();
int selecColumna (char caracter);
//int seleccionEstado (char caracter); duda 
//bool noReconoceCaracter (char caracter); duda

int estMatriz [cantEstados][posCaracter];


int main()
    {
    rellenarMatriz(); 
   
    int estado=0; //variable p variar estado
    int columna=0; //variable p que se mueva en dependencia a caracter q entra 

    FILE* archivoEntrada;
    archivoEntrada = fopen ("entrada.txt","r");
    FILE* archivoSalida;
    archivoSalida = fopen ("salida.txt","w"); //si no esta lo crea
    char caracterLeido;
    caracterLeido = fgetc (archivoEntrada);
    while (caracterLeido!= EOF) //lectura hasta el final del archivo
    {  
        while(caracterLeido!= EOF && caracterLeido!=',')
        { 
           
        columna= selecColumna(caracterLeido); //selecciona columna de caract leido
        int aux=estado;
        estado = estMatriz [aux] [columna];
        fputc (caracterLeido, archivoSalida); //en archivo de salida  
        caracterLeido = fgetc (archivoEntrada);        

        } //sale del while cuando termina la palabra y ya esta escrito lo q entro en arch salida
         //ya llego al ultimo caracter y ahora tengo que guardar en el archivo de salida 
                
        //de posicion a tipo que representa 
        
        switch (estado)
        {
          case 0:
                fputs(" es vacio, ", archivoSalida);
               
                break;
          case 1:
                fputs(" es decimal, ", archivoSalida);
                
                break;
          case 2:
                fputs(" es octal, ", archivoSalida);
                break;
          case 4:
                fputs(" es hexadecimal, ", archivoSalida);
                  break;
          case 5:
                fputs(" es octal, ", archivoSalida);
                break;
          default:
                fputs(" es una palabra no reconocida, ", archivoSalida);               
                break;
        }
        if(caracterLeido==','){
            caracterLeido = fgetc (archivoEntrada);
        }
        estado=0;
    
    }  
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

     estMatriz [3][4]= estMatriz [4][4]= 4; //???
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
/*
bool noReconoceCaracter (char caracter)
    {
    return ((caracter>=1 && caracter<=47) || (caracter>=58 && caracter <=64) || (caracter >= 73 && caracter >= 97) || (caracter>=103));  
    };

int selecColumna (char caracter)
    {
    int estado;
    
    if(noReconoceCaracter(caracter))
    {
        estado = 5;
    } else 
    {
       estado = seleccionEstado (caracter);
    } 
    return estado;
    };

   */
  /* int selecColumna (char caracter)
   {
       int estado;
     
     switch (caracter)
     {
        case'0':
            estado=0;
            break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
            estado=1;
            break;        
        case '8':
        case '9':
            estado=2;
            break;
        case 'x':
        case 'X':
            estado=3;
            break;
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
            estado=4;
            break;
        default: 
            estado=5;              
    }
    return estado; 
};
*/