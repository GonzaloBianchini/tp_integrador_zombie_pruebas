#ifndef PLANT_FIRE_H
#define PLANT_FIRE_H

#include"Colisionable.h"
#include"PLANTA.h"

class Plant_Fire: public Planta, public Colisionable, public sf::Drawable
{
    public:
        Plant_Fire();
        virtual ~Plant_Fire();

        void draw(sf::RenderTarget& target,sf::RenderStates states) const override; //reescribimos el metodo DRAW por haberlo heredado de DRAWABLE
        sf::FloatRect getBounds() const override;                                   //reescribimos el metodo getBounds por haberlo heredado de COLISIONABLE

    private:
        void init();
};

#endif // PLANT_FIRE_H
