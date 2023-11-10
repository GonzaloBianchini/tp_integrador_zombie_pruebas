#include "Shoot_Fire_Prueba.h"


Shoot_Fire_Prueba::Shoot_Fire_Prueba()
{
    init();
    initTexture();
    initAnimation();

}


Shoot_Fire_Prueba::~Shoot_Fire_Prueba()
{
    //dtor
}


void Shoot_Fire_Prueba::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_shoot_sprite,states);
}


sf::FloatRect Shoot_Fire_Prueba::getBounds() const
{
    return _shoot_sprite.getGlobalBounds();
}


void Shoot_Fire_Prueba::init()
{
    _width_texture=20;
    _height_texture=16;
    _first_frame_of_sheet=sf::IntRect(106,173,_width_texture,_height_texture);
    _end_of_frames_sheet=186;
    //_damage=3;
    _speed={0.f,0.f};
    _shoot_sprite.setPosition(300,500);
}
