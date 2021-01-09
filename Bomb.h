#ifndef BOMB_H
#define BOMB_H

#include "Drone.h"

class Bomb
{
private:
	int currentX;
	int currentY;
	bool state;
public:
    Bomb();
    Bomb(int x, int y, bool state);

    //Getters and Setters
    int getCurrentX() const;
    void setCurrentX(int currentX);

    int getCurrentY() const;
    void setCurrentY(int currentY);

    bool getState() const;
    void setState(bool state);

    //Main methods
    int generate();
};

#endif