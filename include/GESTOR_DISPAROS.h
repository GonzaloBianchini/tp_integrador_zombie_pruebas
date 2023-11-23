#ifndef GESTOR_DISPAROS_H
#define GESTOR_DISPAROS_H

#include <vector>

#include "DISPARO.h"

class Gestor_disparos
{
    public:
        Gestor_disparos();
        virtual ~Gestor_disparos();

        void agregarDisparo(Disparo* disp);

        std::vector<Disparo*> _array_disparos;

};

#endif // GESTOR_DISPAROS_H
