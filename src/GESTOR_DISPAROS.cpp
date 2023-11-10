#include "GESTOR_DISPAROS.h"
#include<vector>

GESTOR_DISPAROS::GESTOR_DISPAROS()
{
    //ctor
}

GESTOR_DISPAROS::~GESTOR_DISPAROS()
{
    //dtor
}


void GESTOR_DISPAROS::agregarDisparo(Disparo* disp)
{
    _array_disparos.push_back(disp);

}
