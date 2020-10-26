  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct nodoIdentificadores{
	int cantidad; // este nos sirve para controlar la repetición
    char* tipo;
    char* identificador;
    struct nodoIdentificadores* next;
    
};
typedef struct nodoIdentificadores NodoId;
NodoId *raizId=NULL;

struct nodoFuncion{
  char* funcion;
  char* tipoRetorno;
  char* tipoParametro;
  struct nodoFuncion* next;
};
typedef struct nodoFuncion NodoFun;
NodoFun *raizFuncion=NULL;


struct nodoErrorLexico{
    char* error;
    struct nodoErrorLexico* next;
    
};
typedef struct nodoErrorLexico NodoErrorLexico;
NodoErrorLexico *raizErrorLexico=NULL;


struct nodoErrorSintactico{
    int lineaError;
    char* error;
    struct nodoErrorSintactico* next;
};
typedef struct nodoErrorSintactico NodoErrorSintactico;
NodoErrorSintactico *raizErrorSintactico=NULL;


void agregarErrorLexico(char* errorLexico){
    NodoErrorLexico *nuevoNodo,*auxiliar; 
    nuevoNodo = (NodoErrorLexico *) malloc (sizeof(NodoErrorLexico)); //ver lo q esta entre () casting
    nuevoNodo -> error =strdup(errorLexico); 
    nuevoNodo ->next = NULL;
    auxiliar=raizErrorLexico;
    if(raizErrorLexico==NULL){
        raizErrorLexico=nuevoNodo;
    }else{
        while(auxiliar->next!=NULL){
            auxiliar=auxiliar->next;
        }
        auxiliar->next=nuevoNodo
    }

}



 struct nodoControlTipos{
	char *exp1;
	char *exp2;
	char *operacion;
    struct nodoControlTipos* next;
};
typedef struct nodoControlTipos NodoCT;


NodoCT *raizControlTipos=NULL;

void agregarIdentificador(char* , char* );
NodoId* idYaSeDeclaro(char*);
void variablesDeclaradas();
void dobleDeclaracion();

// con esto hacemos el pto 1 y el pto 5 
void agregarIdentificador(char* id, char* tipo){
    NodoId *nuevoNodo; 
    if(raizId==NULL){
        nuevoNodo = (NodoId *) malloc (sizeof(NodoId)); //ver lo q esta entre () casting
        nuevoNodo -> identificador=strdup(id); 
        nuevoNodo -> tipo=strdup(tipo); 
        nuevoNodo -> cantidad = 1;
        nuevoNodo -> next = NULL;
    }else{
        NodoId *encontrado = idYaSeDeclaro(id);
        if(encontrado ==NULL){
            //no lo encuentra en la lista de identificadores encontrados
            nuevoNodo = (NodoId *) malloc (sizeof(NodoId));   
            nuevoNodo -> identificador=strdup(id); 
            nuevoNodo -> tipo=strdup(tipo); 
            nuevoNodo -> cantidad = 1;
            nuevoNodo -> next = NULL; 
            NodoId *auxiliar=raizId;
            while(auxiliar->next!=NULL){
                auxiliar=auxiliar->next;
            }
            auxiliar->next=nuevoNodo;
        }else{
            //lo encuentra en la lista de identificadores declarados
            encontrado -> cantidad += 1;
        }
    }
}



NodoId* idYaSeDeclaro(char* id){
    NodoId *auxiliar=raizId;
    while(auxiliar!=NULL){
        if(strcmp(auxiliar->identificador,id)==0){
           return auxiliar;
        }else{
            auxiliar=auxiliar->next;
        }
    }
    return NULL;
}

void agregarErrorLexico(char* errorLexico){
    NodoErrorLexico *nuevoNodo,*auxiliar; 
    nuevoNodo = (NodoErrorLexico *) malloc (sizeof(NodoErrorLexico)); //ver lo q esta entre () casting
    nuevoNodo -> error =strdup(errorLexico); 
    nuevoNodo ->next = NULL;
    auxiliar=raizErrorLexico;
    if(raizErrorLexico==NULL){
        raizErrorLexico=nuevoNodo;
    }else{
        while(auxiliar->next!=NULL){
            auxiliar=auxiliar->next;
        }
        auxiliar->next=nuevoNodo;
    }

}

void agregarErrorSintactico(char* errorSintactico, int linea){
    NodoErrorSintactico *nuevoNodo,*auxiliar;
    nuevoNodo= (NodoErrorSintactico *) malloc (sizeof(NodoErrorSintactico));
    nuevoNodo -> error =strdup(errorSintactico); 
    nuevoNodo ->lineaError=linea;
    auxiliar=raizErrorSintactico;
    if(raizErrorSintactico==NULL){
        raizErrorSintactico=nuevoNodo;  
    }else{
        while(auxiliar->next!=NULL){
            auxiliar=auxiliar->next;
        }
        auxiliar->next=nuevoNodo;
    }
}






void generarReporte(); <- por que tira error aca? quiere un ; ahi
{
    printf("\n");
    variablesDeclaradas();
    //funcionesDeclaradas();
    erroresLexicos();
    erroresSintacticos();
    erroresSemanticos();
}


void erroresSemanticos(){
    //controlTipos();
    dobleDeclaracion();
}




void erroresLexicos(){
    NodoErrorLexico *auxiliarRecorrido;
    while(auxiliarRecorrido!=NULL){
         printf("Se presento el error lexico  %s \n",auxiliarRecorrido->error);
         auxiliarRecorrido=auxiliarRecorrido->next; 

    }
}

void erroresSintacticos(){
    NodoErrorSintactico *auxiliarRecorrido=raizErrorSintactico;
    while(auxiliarRecorrido!=NULL){
        printf("Se encontro el error sintactico %s en la linea %d",auxiliarRecorrido->error,auxiliarRecorrido->lineaError);
        auxiliarRecorrido=auxiliarRecorrido->next;
    }
}


void variablesDeclaradas(){ //semantico
    NodoId *auxiliarRecorrido=raizId;
    while(auxiliarRecorrido!=NULL){
        if(auxiliarRecorrido->cantidad==1){
            printf("Se encontro el identificador %s del tipo %s \n",auxiliarRecorrido->identificador, auxiliarRecorrido->tipo );
            auxiliarRecorrido=auxiliarRecorrido->next;
        }
    auxiliarRecorrido=auxiliarRecorrido->next;
    }
}


void dobleDeclaracion(){ //es semantico
    NodoId *auxiliarRecorrido=raizId;
    while(auxiliarRecorrido!=NULL){
        if(auxiliarRecorrido->cantidad!=1){
            printf("Se realizo una doble declaracion con el identificador %s \n",auxiliarRecorrido->identificador);
            auxiliarRecorrido=auxiliarRecorrido->next;
        }
    auxiliarRecorrido=auxiliarRecorrido->next;
    }
}


/* ESTAS 3 FUNCIONES  SE USAN PARA LA VALIDACION DE TIPOS

int calcularTipo(char* potencialIdentificador, int tipoOriginal){
    if (idEncontrado(primeroId,potencialIdentificador)){            //encuentra el id?

        return buscarTipo(potencialIdentificador);                  //obtener el tipo del id encontrado

    }
    return tipoOriginal;                                            //retorno del tipo original en caso de no encontrar el id en la lista
}

int idEncontrado(nodoIdentificador* lista,char* iden){
	nodoIdentificador* aux = primeroId;
	while(aux!=NULL){
		if(!strcmp(aux->identificador, iden)){
            aux->cantidad ++;
			return 1;
		}else{
		aux=aux->next;
		}
	}
	return 0;
}

int buscarTipo (char* iden){
	nodoIdentificador* aux = primeroId;
	while(aux!=NULL){
		if(!strcmp(aux->identificador, iden)){              //el if de la linea 128 muestra los 4 tipos de variables posibles para operaciones
            //aux->cantidad ++;
			if(strcmp(aux->tipo,"int")== 0 || strcmp(aux->tipo,"char")== 0 || strcmp(aux->tipo,"float")== 0 || strcmp(aux->tipo,"double")== 0){return 1;} else { return 2;};
		}else{
		aux=aux->next;
		}


	}
	return 0;
}
*/

