#pragma once
#include <SFML/Graphics.hpp>

const float WINDOW_WIDTH = 1300;
const float WINDOW_HEIGHT = 900;
const std::string WINDOW_TITLE = "SFML Asteroids P53122";
const float FPS = 60.f;
const float PI = 3.14159265358;


const sf::Vector2f FonStartPos{ 0, 0 };
const std::string Fon_File_Name = "images\\FonObject.jpg";
const float Fon_offset = 50.f;
const int fire_cooldown = 500.f;
const std::string Player_File_Name = "images\\spaceShips.png";
const int Player_max_hp = 100;