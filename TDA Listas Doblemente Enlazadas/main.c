#include <stdio.h>
#include <stdlib.h>
#include "ListasDobles.h"
#include "Persona.h"

int main()
{


    nodoDoble * listaDoble = IncializarListaDoble();

    persona per1={"nicolas", 20};
    persona per2={"martina", 21};
    persona per3={"josefina", 12};
    persona per4={"agusto", 29};

    listaDoble=Agregar_En_Orden_Doble(listaDoble, CrearNodoDoble(per1));
    listaDoble=Agregar_En_Orden_Doble(listaDoble, CrearNodoDoble(per2));
    listaDoble=Agregar_En_Orden_Doble(listaDoble, CrearNodoDoble(per3));
    listaDoble=Agregar_En_Orden_Doble(listaDoble, CrearNodoDoble(per4));


    MostarListasDobles(listaDoble);

//   listaDoble = BorrarPrimeroNodoDoble(listaDoble);
//   printf("\n Borrar un nodo buscado\n");
//   MostarListasDobles(listaDoble);
//
//   printf("\n Borrar el primero");
//   listaDoble = BorrarPrimeroNodoDoble(listaDoble);                   ANDUVO
//   MostarListasDobles(listaDoble);
//
//    nodoDoble * ultimo = BuscarUltimoNodoRecursivo(listaDoble);         ANDUVO
//    MostarListasDobles(ultimo);
//
//    nodoDoble * ultimo2 = BuscarUltimoNodoIterativo(listaDoble);        ANDUVO
//    MostarListasDobles(ultimo2);
//
//        printf("\n Buscar nodo ");
//        nodoDoble * aux = BuscarNodoEspecifico(listaDoble,21);
//        MostarNodoDoble(aux);
//
//        char nombre[20]={"nicolas"};
//
//        listaDoble = BorrarNodoBuscadoChar(listaDoble,nombre);
//        printf("\naaaaaaaaaa\n");
//        MostarListasDobles(listaDoble);

listaDoble = BorrarNodoBuscado(listaDoble,20);
printf("\n----------------------------\n");
MostarListasDobles(listaDoble);

    return 0;

}

































