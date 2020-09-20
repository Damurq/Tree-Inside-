#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_

#include <string>
#include <iostream>
#include "ArbolBB.h"
#include "VGeneral.h"
#include "Nodo.h"

//#include "Persona.h"

class Controlador
{
    typedef Nodo<string>* Apuntador;     
    private:
        //ArbolBB<Persona> TreePers;
        ArbolBB<string> TreePers;
        VGeneral vg;
    public:
        Controlador();
        bool IncluirPrsn(); 
        void Imprimir(int tipo);                        
        
};

#include "Controlador.cpp"
#endif /* CONTROLADOR_H_ */
