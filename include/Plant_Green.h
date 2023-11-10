#ifndef PLANT_GREEN_H
#define PLANT_GREEN_H

#include"Colisionable.h"
#include"PLANTA.h"

class Plant_Green: public Planta, public Colisionable, public sf::Drawable
{
    public:
        Plant_Green();
        virtual ~Plant_Green();

        void draw(sf::RenderTarget& target,sf::RenderStates states) const override; //reescribimos el metodo DRAW por haberlo heredado de DRAWABLE
        sf::FloatRect getBounds() const override;                                   //reescribimos el metodo getBounds por haberlo heredado de COLISIONABLE

    private:
        void init();
};

#endif // PLANT_GREEN_H
