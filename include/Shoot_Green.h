#ifndef SHOOT_GREEN_H
#define SHOOT_GREEN_H

#include"DISPARO.h"
#include"Colisionable.h"

class Shoot_Green : public Disparo, public Colisionable, public sf::Drawable
{
    public:
        Shoot_Green();
        virtual ~Shoot_Green();

        void draw(sf::RenderTarget& target,sf::RenderStates states) const override; //reescribimos el metodo DRAW por haberlo heredado de DRAWABLE
        sf::FloatRect getBounds() const override;                                   //reescribimos el metodo getBounds por haberlo heredado de COLISIONABLE

    private:
        void init();

};

#endif // SHOOT_GREEN_H
