#ifndef SHOOT_SUPER_GREEN_H
#define SHOOT_SUPER_GREEN_H

#include "DISPARO.h"
#include "Colisionable.h"

class Shoot_Super_Green : public Disparo, public sf::Drawable, public Colisionable
{
public:
    Shoot_Super_Green();
    virtual ~Shoot_Super_Green();

    void draw(sf::RenderTarget& target,sf::RenderStates states) const override; //reescribimos el metodo DRAW por haberlo heredado de DRAWABLE
    sf::FloatRect getBounds() const override;                                   //reescribimos el metodo getBounds por haberlo heredado de COLISIONABLE

private:
    void init();

};

#endif // SHOOT_SUPER_GREEN_H
