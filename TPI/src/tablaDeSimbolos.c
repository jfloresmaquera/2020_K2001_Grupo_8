
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

NodoId *raizId=NULL;
NodoParametrosFuncion *raizParametro=NULL;
NodoFuncion *raizFuncion=NULL;
NodoErrorLexico *raizErrorLexico=NULL;
NodoErrorFuncionInvocacion *raizErrorFuncionInvocacion = NULL;
NodoErrorSintactico *raizErrorSintactico=NULL;
NodoCT *raizControlTipos=NULL;
NodoET *raizErroresTipos=NULL;
NodoEI*raizErroresIdentificador = NULL;




//datos globales

int ultimoTDato;
int flagError=0;

void ultimoTipoDato(int tipo){
    ultimoTDato = tipo;
}

int mostrarUltimoDato(){
    return ultimoTDato;
}

void levantarFlag(){
    flagError=1;
}

void bajarFlag(){
    flagError=0;
}

int flag(){
    return flagError;
}

//relacionado con funciones


void agregarFuncion(int tipo, char* id,int funcionalidad){ //funcionalidad=0 prototipo, funcionalidad=1 desarrollo
    NodoFuncion* nuevoNodo;
    if(raizFuncion==NULL){
        nuevoNodo = (NodoFuncion *) malloc (sizeof(NodoFuncion)); //ver lo q esta entre () casting
        nuevoNodo -> identificador=strdup(id);
        nuevoNodo -> tipoRetorno=tipo;
        nuevoNodo -> listaParametros = raizParametro; 
        nuevoNodo -> cantidadVecesDeclarado = 0;   
        nuevoNodo -> cantidadVecesDesarrollada = 0;
        nuevoNodo -> cantidadParametros = cantidadNodos(nuevoNodo -> listaParametros);
        if(funcionalidad==0){
                nuevoNodo -> cantidadVecesDeclarado+=1;
        }else{
                nuevoNodo -> cantidadVecesDesarrollada+=1;
        }
        nuevoNodo -> next = NULL;
        raizFuncion = nuevoNodo;
        raizParametro = NULL; // este null lo que hace es que "resetea" la listaParametros global   
    }else{
        NodoFuncion *encontrado = funcionYaSeDeclaro(id);
        if(encontrado ==NULL){ //no lo encuentra en la lista de identificadores encontrados
            nuevoNodo = (NodoFuncion *) malloc (sizeof(NodoFuncion)); //ver lo q esta entre () casting
            nuevoNodo -> identificador=strdup(id);
            nuevoNodo -> tipoRetorno=tipo;
            nuevoNodo -> listaParametros = raizParametro;
            nuevoNodo -> cantidadVecesDesarrollada = 0;
            nuevoNodo -> cantidadVecesDeclarado = 0;
            nuevoNodo -> cantidadParametros = cantidadNodos(nuevoNodo -> listaParametros);// falta hacer la funcion
            if(funcionalidad==0){
                nuevoNodo -> cantidadVecesDeclarado+=1;
            }else{
                nuevoNodo -> cantidadVecesDesarrollada+=1;
            }
            nuevoNodo -> next = NULL;
            NodoFuncion *auxiliar = raizFuncion;
            while(auxiliar->next!=NULL){
                auxiliar=auxiliar->next;
            }
            auxiliar->next=nuevoNodo;
            raizParametro = NULL;
        }else{
            //lo encuentra en la lista de funciones declarados
            if(funcionalidad==0){
                encontrado -> cantidadVecesDeclarado+=1;
            }else{
                encontrado -> cantidadVecesDesarrollada+=1;
            }
            raizParametro = NULL;
        }
    }
}

NodoFuncion* funcionYaSeDeclaro(char* id){
    NodoFuncion *auxiliar=raizFuncion;
    while(auxiliar!=NULL){
        if(strcmp(auxiliar->identificador,id)==0){
           return auxiliar;
        }else{
            auxiliar=auxiliar->next;
        }
    }
    return NULL;
}


//relacionado con identificadores

void agregarIdentificador(char* id, int tipo){
    NodoId *nuevoNodo; 
    if(raizId==NULL){
        nuevoNodo = (NodoId *) malloc (sizeof(NodoId)); //ver lo q esta entre () casting
        nuevoNodo -> identificador=strdup(id); 
        nuevoNodo -> tipo = tipo;
        nuevoNodo -> cantidad = 1;
        nuevoNodo -> next = NULL;
        raizId = nuevoNodo;
        //ven 
    }else{
        NodoId *encontrado = idYaSeDeclaro(id);
        if(encontrado == NULL){
            //no lo encuentra en la lista de identificadores encontrados
            nuevoNodo = (NodoId *) malloc (sizeof(NodoId));   
            nuevoNodo -> identificador=strdup(id); 
            nuevoNodo -> tipo = tipo; 
            nuevoNodo -> cantidad = 1;
            nuevoNodo -> next = NULL; 
            NodoId *auxiliar=raizId;
            while(auxiliar->next!=NULL){
                auxiliar=auxiliar->next;
            }
            auxiliar->next=nuevoNodo;
        }else{
            encontrado -> cantidad += 1;
        }
    }
}

void agregarErrorFuncionInvocacion(char *identificador,int tipoError){
    NodoErrorFuncionInvocacion* auxiliar=raizErrorFuncionInvocacion;
    NodoErrorFuncionInvocacion* nuevoNodo;
    if(raizErrorFuncionInvocacion==NULL){
        nuevoNodo = (NodoErrorFuncionInvocacion *) malloc(sizeof(NodoErrorFuncionInvocacion)) ;
        nuevoNodo->identificadorFuncion=strdup(identificador);
        nuevoNodo->errorDeInvocacion=tipoError;
        nuevoNodo -> next = NULL;
        raizErrorFuncionInvocacion=nuevoNodo;
    }else{
        while(auxiliar->next!=NULL){
            auxiliar=auxiliar->next;
        }
        nuevoNodo = (NodoErrorFuncionInvocacion *) malloc(sizeof(NodoErrorFuncionInvocacion)) ;
        nuevoNodo->identificadorFuncion=strdup(identificador);
        nuevoNodo->errorDeInvocacion=tipoError;
        nuevoNodo -> next = NULL;
        auxiliar->next=nuevoNodo;
    }
}

NodoId* idYaSeDeclaro(char* id){
    NodoId *auxiliar=raizId;
    while(auxiliar!=NULL && strcmp(auxiliar->identificador,id)!=0){ 
    auxiliar=auxiliar->next;
    }
    return auxiliar;
}

void agregarErrorSemanticoIdentificadores(char *id,char* error){
    NodoEI *nuevoNodo;
    if (raizErroresIdentificador == NULL) {
        nuevoNodo = (NodoEI *) malloc (sizeof(NodoEI));
        nuevoNodo -> id=strdup(id);
        nuevoNodo -> tipoError=error;
        nuevoNodo -> next = NULL;
        raizErroresIdentificador= nuevoNodo;
    }else{
        NodoEI * auxiliar = raizErroresIdentificador;
        while(auxiliar->next!=NULL){
           auxiliar=auxiliar->next;
        }
        nuevoNodo = (NodoEI *) malloc (sizeof(NodoEI));
        nuevoNodo -> id=strdup(id);
        nuevoNodo -> next = NULL;
        nuevoNodo -> tipoError=error;
        auxiliar -> next=nuevoNodo;
    }
}


//funciones relacionadas a los errores lexicos
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



// funciones relacionadas a los errores sintacticos

void agregarErrorSintactico(int linea){
    NodoErrorSintactico *nuevoNodo,*auxiliar;
    nuevoNodo= (NodoErrorSintactico *) malloc (sizeof(NodoErrorSintactico)); 
    nuevoNodo ->lineaError=linea;
    nuevoNodo ->next = NULL;
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



//funciones relacionadas con los errores semanticos


int verificaFuncion(char* id){
    NodoFuncion* auxiliar=raizFuncion;
    if(raizFuncion==NULL){
            agregarErrorFuncionInvocacion(id,3);
            return 0;
    }else{
        while(auxiliar!=NULL&&strcmp(auxiliar->identificador,id)!=0){
            auxiliar=auxiliar->next;
        }
        if(auxiliar==NULL){
            agregarErrorFuncionInvocacion(id,3);
            return 0;
        }else{
            if(auxiliar->cantidadParametros!=cantidadNodos(raizParametro)){
                    agregarErrorFuncionInvocacion(id,0);
                    return 0;
            }else{
                  if(verificarTiposDeParametro(id,auxiliar->listaParametros,raizParametro)){
                    return 1;
                  }
            }
            }
        }   
}



int verificarTiposDeParametro (char* identificador, NodoParametrosFuncion * listaParametros, NodoParametrosFuncion* raizParametro){

    NodoParametrosFuncion * auxiliarListaParam = listaParametros;
    NodoParametrosFuncion * auxiliarRaizParam = raizParametro;

    while(sonOperables(listaParametros->tipo,raizParametro->tipo) && listaParametros!=NULL) {
      listaParametros = listaParametros->next;
      raizParametro= raizParametro->next;
    }
    if(listaParametros!=NULL || raizParametro!=NULL){
        agregarErrorFuncionInvocacion(identificador, 1);
        return 0; //error
    }
    return 1;
    
    
}

void agregarParametro(int tipoNuevo){
    NodoParametrosFuncion *auxiliar=raizParametro;
    NodoParametrosFuncion *nuevoNodo;
    if(raizParametro==NULL){
        nuevoNodo = (NodoParametrosFuncion *) malloc (sizeof(NodoParametrosFuncion)); 
        nuevoNodo ->tipo = tipoNuevo;        
        nuevoNodo->next=NULL;
        raizParametro=nuevoNodo;
    }else{
        while(auxiliar->next!=NULL){
            auxiliar=auxiliar->next;
        }
        nuevoNodo = (NodoParametrosFuncion *) malloc (sizeof(NodoParametrosFuncion)); 
        auxiliar->next=nuevoNodo;
        nuevoNodo -> tipo = tipoNuevo; 
        nuevoNodo->next=NULL;
    }
    

}

int cantidadNodos(NodoParametrosFuncion *unaListaParametros){ 
    NodoParametrosFuncion* auxiliar = unaListaParametros;
    int cant = 0;
    if(auxiliar==NULL) {
    }else{
        while(auxiliar->next != NULL){
        cant++;
        auxiliar = auxiliar -> next;
       }
        cant++;
    }
    return cant;
}






//funcion principal de generar reporte
void generarReporte(){
    printf("\n");
    printf("------------------REPORTE GENERADO------------------");
    printf("\n");
    variablesCorrectamenteDeclaradas();
    funcionesCorrectamenteDeclaradas();
    erroresLexicos();
    erroresSintacticos();
    erroresSemanticos();
    system("pause");
}

void erroresSemanticos(){
    invocacionesIncorrectas();
    controlTipos();
    dobleDeclaracion();
    errorEnIdentificadores();

}



// funciones de impresion por pantalla para reporte
void variablesCorrectamenteDeclaradas(){
    NodoId *auxiliarRecorrido=raizId;   
    while(auxiliarRecorrido!=NULL){
        if(auxiliarRecorrido->cantidad==1){
            printf("Se encontro el identificador %s del tipo %s \n",auxiliarRecorrido->identificador,tipoRepresentado(auxiliarRecorrido->tipo) );
        }
    auxiliarRecorrido=auxiliarRecorrido->next;
    }
} 

void funcionesCorrectamenteDeclaradas(){
    NodoFuncion *auxiliarRecorridos=raizFuncion;
     while(auxiliarRecorridos!=NULL){
        if(auxiliarRecorridos->cantidadVecesDesarrollada==1&&auxiliarRecorridos->cantidadVecesDeclarado==1){
            printf("Se realizo el prototipo y el desarrollo correcto de la funcion %s que cuenta con %d parametros, siendo la misma del tipo %s \n",auxiliarRecorridos->identificador,auxiliarRecorridos->cantidadParametros,tipoRepresentado(auxiliarRecorridos->tipoRetorno));
        }
    auxiliarRecorridos=auxiliarRecorridos->next;
    }

}
//errores
void erroresLexicos(){
    NodoErrorLexico *auxiliarRecorrido=raizErrorLexico;
    while(auxiliarRecorrido!=NULL){
         printf("Se presento el error lexico  %s \n",auxiliarRecorrido->error);
         auxiliarRecorrido=auxiliarRecorrido->next;
    }
    
}

void erroresSintacticos(){
    NodoErrorSintactico *auxiliarRecorrido=raizErrorSintactico;
    if(raizErrorSintactico!=NULL){
        printf("Se encontraron errores sintacticos en las lineas");
        while(auxiliarRecorrido!=NULL){
            printf( " %d ",auxiliarRecorrido->lineaError);
            auxiliarRecorrido=auxiliarRecorrido->next;
        }
        printf("\n");
    }
}


//semantico
void invocacionesIncorrectas(){
    NodoErrorFuncionInvocacion* auxiliar=raizErrorFuncionInvocacion;
    while(auxiliar!=NULL){
        printf("La funcion %s tuvo un error al invocarse debido a",auxiliar->identificadorFuncion);
        switch (auxiliar->errorDeInvocacion)
        {
        case 0:
            printf("que fue invocado con diferente cantidad de parametros a los necesarios\n");
            break;
        case 1:
            printf("que los parametros no son del tipo que fue declarada la funcion\n");
            break;
        case 2:
            printf("que nunca se declaro la funcion \n");
            break;
        case 3:
            printf("que al menos un parametro es un identificador no definido \n");
            break;
        }
        auxiliar=auxiliar->next;
    }
}

void errorEnIdentificadores(){
    NodoEI* auxiliar=raizErroresIdentificador;
    while(auxiliar!=NULL){
         printf("Se produce un error con el identificador  %s debido a que %s \n ", auxiliar->id,auxiliar->tipoError);
        auxiliar= auxiliar->next;
}
}

void controlTipos(){
    NodoET *auxiliar=raizErroresTipos;
    if(auxiliar!=NULL){
        while(auxiliar!=NULL){
            printf("Hubo un error de tipos en donde el dato %s del tipo %s ",auxiliar->dato1,auxiliar->tipo1);
            printf("quiso relacionarse a travez de la operacion %c ",auxiliar->operacion);
            printf("con el dato %s del tipo %s \n",auxiliar->dato2,auxiliar->tipo2);
            auxiliar=auxiliar->next;
        }
    }
}



void agregarErrorDeTipos(char* informacion1,int tipoInf1, char operador,char* informacion2,int tipoInf2){
    NodoET *auxiliar;
    auxiliar=raizErroresTipos;
    if(raizErroresTipos==NULL){
        NodoET *nuevoNodo;
        nuevoNodo = (NodoET *) malloc (sizeof(NodoET));
        nuevoNodo -> dato1=strdup(informacion1);
        nuevoNodo -> tipo1=strdup(tipoRepresentado(tipoInf1));
        nuevoNodo->operacion=operador;
        nuevoNodo -> dato2=strdup(informacion2);
        nuevoNodo -> tipo2=strdup(tipoRepresentado(tipoInf2));
        nuevoNodo ->next=NULL;
        raizErroresTipos=nuevoNodo;
    }else{
        while(auxiliar->next!=NULL){
            auxiliar=auxiliar->next;
        }
        NodoET *nuevoNodo;
        nuevoNodo = (NodoET *) malloc (sizeof(NodoET));
        nuevoNodo -> dato1=strdup(informacion1);
        nuevoNodo -> tipo1=strdup(tipoRepresentado(tipoInf1));
        nuevoNodo->operacion=operador;
        nuevoNodo -> dato2=strdup(informacion2);
        nuevoNodo -> tipo2=strdup(tipoRepresentado(tipoInf2));
        nuevoNodo ->next=NULL;
        auxiliar->next=nuevoNodo;
    }
}



void dobleDeclaracion(){ 
    NodoId *auxiliarRecorrido=raizId;
    NodoFuncion *auxiliarRecorridos;
    //con respecto a variables
    while(auxiliarRecorrido!=NULL){
        if(auxiliarRecorrido->cantidad!=1){
            printf("Se realizo una doble declaracion con el identificador %s \n",auxiliarRecorrido->identificador);

        }
    auxiliarRecorrido=auxiliarRecorrido->next;
    }
    //con respecto a funciones
    auxiliarRecorridos=raizFuncion;
    while(auxiliarRecorridos!=NULL){
            if(auxiliarRecorridos->cantidadVecesDesarrollada==0){
                 printf("Nunca se desarrollo la funcion %s \n",auxiliarRecorridos->identificador);
            }
            if(auxiliarRecorridos->cantidadVecesDeclarado==0){
                 printf("Nunca se realizo el prototipo de la la funcion %s \n",auxiliarRecorridos->identificador);
            }
            if(auxiliarRecorridos->cantidadVecesDesarrollada>1){
                 printf("Se desarrollo mas de una vez la funcion %s \n",auxiliarRecorridos->identificador);   
            }
            if(auxiliarRecorridos->cantidadVecesDeclarado>1){
                    printf("Se realizo mas de una vez el prototipo de la funcion %s \n",auxiliarRecorridos->identificador); 
            }
        
    auxiliarRecorridos=auxiliarRecorridos->next;
    }


}






//funciones utilizadas en generacion de informe
char* tipoRepresentado(int enNumero){
    switch (enNumero)
    {
    case 0:
        return "char";
        break;
    case 1:
        return "int";
        break;
    case 2:
        return "float";
        break;
    case 3:
        return "double";
        break;
    case 4:
        return "char*";
        break;
    case 5:
        return "void";
        break;
    }
}





int calcularTipo(char* potencialIdentificador, int tipoOriginal){
    if (idEncontrado(raizId,potencialIdentificador)){            //encuentra el id?

        return buscarTipo(potencialIdentificador);                  //obtener el tipo del id encontrado

    }
    return tipoOriginal;                                            //retorno del tipo original en caso de no encontrar el id en la lista
}

int idEncontrado(NodoId* lista,char* iden){
	NodoId* aux = raizId;
	while(aux!=NULL){
		if(!strcmp(aux->identificador, iden)){
			return 1;
		}else{
		aux=aux->next;
		}
	}
	return 0;
}


int esNumerica(char* iden){
	NodoId* aux = raizId;
	while(aux!=NULL){
		if(!strcmp(aux->identificador, iden)){              //el if de la linea 128 muestra los 4 tipos de variables posibles para operaciones

			if(aux->tipo== 0 || aux->tipo== 1 || aux->tipo== 2 || aux->tipo== 3)
            {return 1;} 
            else 
            { return 0;};
		}else{
		aux=aux->next;
		}


	}
	return 0;
}



int sonOperables(int unTipo, int otroTipo){
    if(unTipo <= 4 && otroTipo <= 4) {return 1;}  else {return 0;}
}

int buscarTipo(char* iden){
    NodoId* aux = raizId;
    while(aux!=NULL){
        if(aux!=NULL&&strcmp(aux->identificador, iden)!=0){  
           aux=aux->next;
        }
        if(aux==NULL){
             return -1; //no se encontro el id 
        }else{
            return aux->tipo;
        }
    }
}



