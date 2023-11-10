#ifndef SHOOT_FIRE_PRUEBA_H
#define SHOOT_FIRE_PRUEBA_H

#include"DISPARO.h"
#include"Colisionable.h"

class Shoot_Fire_Prueba : public Disparo, public Colisionable, public sf::Drawable
{
    public:
        Shoot_Fire_Prueba();
        virtual ~Shoot_Fire_Prueba();

        void draw(sf::RenderTarget& target,sf::RenderStates states) const override;     //reescribimos el metodo DRAW por haberlo heredado de DRAWABLE
        sf::FloatRect getBounds() const override;                                       //reescribimos el metodo getBounds por haberlo heredado de COLISIONABLE

    private:
        void init();

};

#endif // SHOOT_FIRE_PRUEBA_H
