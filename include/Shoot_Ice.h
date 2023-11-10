#ifndef SHOOT_ICE_H
#define SHOOT_ICE_H

#include"DISPARO.h"
#include"Colisionable.h"

class Shoot_Ice : public Disparo, public Colisionable, public sf::Drawable
{
    public:
        Shoot_Ice();
        virtual ~Shoot_Ice();

        void draw(sf::RenderTarget& target,sf::RenderStates states) const override; //reescribimos el metodo DRAW por haberlo heredado de DRAWABLE
        sf::FloatRect getBounds() const override;                                   //reescribimos el metodo getBounds por haberlo heredado de COLISIONABLE

    private:
        void init();

};

#endif // SHOOT_ICE_H
