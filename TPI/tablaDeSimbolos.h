  
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

 struct nodoControlTipos{
	char *exp1;
	char *exp2;
	char *operacion;
    struct nodoControlTipos* next;
};
typedef struct nodoControlTipos NodoCT;


NodoCT *raizControlTipos=NULL;

 struct nodoFuncion{
  char* funcion;
  char* tipoRetorno;
  char* tipoParametro;
  struct nodoFuncion* next;
};
typedef struct nodoFuncion NodoFun;
NodoFun *raizFuncion=NULL;


void agregarIdentificador(char* , char* );
NodoId* idYaSeDeclaro(char*);

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






void generarReporte()
{
    printf("\n");
    //variablesDeclaradas();
    //funcionesDeclaradas();
    //ControlTipos();
    //DobleDeclaracion();

}