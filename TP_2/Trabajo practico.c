#include <stdio.h>

#define cantEstado 4
#define valorPila 2
#define posicionCaracter 6

void rellenarAutomata ();
int selecColumna (char caracter);


char expresion [50];
//esatdo: qx
// cimaPila : $, R
// caracter : [1-9, +, -, *, /, (, )]
//la pila siempre va a tener AL menos un elemento que es el $
//arranca en TT q0

struct Nodo
 {
     Nodo* sig;
     int info; 
 }

 void push (Nodo*& p, int v)
{
   Nodo* q = new Nodo();
   q->info=v;
   q->sig=p;
   p=q;
}

int pop (Nodo*& p)
{
   Node* aux=p;
   p=p->sig;
   int ret = aux->info;
   delete aux;
   return ret;
}

struct datoTT{
    int nuevoEstado;
    int elemPush;
}

datoTT TT [cantEstado][valorPila][posicionCaracter];


TT = {      { {3},{1,0},{3},{0,10},{3},{3} },
            { {3},{1,1},{3},{0,11},{3},{3} }, 
            { {1,0},{1,0},{0,0},{3},{3},{3} }, 
            { {1,1},{1,1},{0,1},{3},{2,-1},{3} }, 
            { {3},{3},{0,0},{3},{3},{3} }, 
            { {3},{3},{0,1},{3},{2,-1},{3} },  
            { {3},{3},{3},{3},{3},{3} },
            { {3},{3},{3},{3},{3},{3} } 
     }


void free(Node*& p)
{
   while (p->sig!=NULL)
      {
         Node* aux = p;
         delete p;
         p=aux->sig;

      }
}



int main ()
{
    int estado=0;
    int cimaPila;
    int caracter;
    DatoTT aux;
    /*while(escape){*/
        estado=0;
        Nodo* pila = NULL;  
        push (pila,0);      
           
        
        printf("Introduzca una expresion: ");
        scanf("%s", &expresion);
        int i=0;
        while(expresion[i]!='\0' && estado != 3 )
        {
            if(expresion[i]!=32) // distinto del espacio
            {
                caracter = selecColumna(caracterLeido);
                cimaPila = pop (pila);
                aux = TT [estado][cimaPila][caracter];
                estado = aux.nuevoEstado;
                switch (aux.elemPush)
                {
                    case 0:
                        push (pila,0);
                        break;
                    case 1:
                        push (pila,1);
                        break;
                    case 10:
                        push (pila,0);
                        push (pila,1);
                        break;
                    case 11:
                        push (pila,1);
                        push (pila,1);
                        break;
                    default:
                        break;
                }

            }          
            i++;
        }
    if(estado != 3){
        printf("La expresion %s ", expresion); 
        printf("es correcta \n"); 
    }
    else{
        printf("La expresion %s ", expresion); 
        printf("es incorrecta \n");
    }
    free (pila);
    getch();
    /*}*/
    

}


int selecColumna (char caracter) 
 {
    int columnaCaracter;
        if  (caracter==48)
        {
           //48 es 0 en ascii
           columnaCaracter=0;
       } else if (caracter>=49 && caracter <=7)
       {
           // 1-9
           columnaCaracter=1;
       } else if (caracter==42 || caracter==43 || caracter==45 || caracter==47)
       {
           // * + - /
           columnaCaracter = 2;
       } else if (caracter == 40)
       {
           // (
           columnaCaracter = 3;
       } else if (caracter==41)
       {
           // )
           columnaCaracter = 4;
       } else 
       {
           columnaCaracter = 5;
       }

    return columnaCaracter;
 }
