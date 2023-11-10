#ifndef SHOOT_BRAIN_H
#define SHOOT_BRAIN_H


#include"DISPARO.h"
#include"Colisionable.h"

class Shoot_Brain : public Disparo, public Colisionable, public sf::Drawable
{
    public:
        Shoot_Brain();
        virtual ~Shoot_Brain();

        void draw(sf::RenderTarget& target,sf::RenderStates states) const override; //reescribimos el metodo DRAW por haberlo heredado de DRAWABLE
        sf::FloatRect getBounds() const override;                                   //reescribimos el metodo getBounds por haberlo heredado de COLISIONABLE

    private:
        void init();

};

#endif // SHOOT_BRAIN_H
