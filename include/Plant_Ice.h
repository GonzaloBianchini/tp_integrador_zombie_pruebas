#ifndef PLANT_ICE_H
#define PLANT_ICE_H

#include"Colisionable.h"
#include"PLANTA.h"

class Plant_Ice: public Planta, public Colisionable, public sf::Drawable
{
    public:
        Plant_Ice();
        virtual ~Plant_Ice();

        void draw(sf::RenderTarget& target,sf::RenderStates states) const override; //reescribimos el metodo DRAW por haberlo heredado de DRAWABLE
        sf::FloatRect getBounds() const override;                                   //reescribimos el metodo getBounds por haberlo heredado de COLISIONABLE

    private:
        void init();
};

#endif // PLANT_ICE_H
