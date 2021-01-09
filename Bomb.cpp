#include "Bomb.h"

Bomb::Bomb()
{
    currentX = 0;
    currentY = 0;
    state = true;
}

Bomb::Bomb(int x, int y, bool state)
{
    this->setCurrentX(x);
    this->setCurrentY(y);
    this->setState(true);
}

int Bomb::getCurrentX() const
{
    return currentX;
}

void Bomb::setCurrentX(int currentX)
{
    if (currentX < FIELD_SIZE - 1 && currentX > 0) {
        this->currentX = currentX;
    }
    else if (currentX > FIELD_SIZE - 1) {
        this->currentX = FIELD_SIZE - 2;
    }
    else {
        this->currentX = 1;
    }
}

int Bomb::getCurrentY() const
{
    return currentY;
}

void Bomb::setCurrentY(int currentY)
{
    if (currentY >= 0 && currentY <= FIELD_SIZE - 1) { this->currentY = currentY; }
    else if (currentY >= FIELD_SIZE - 1) {
        this->currentY = FIELD_SIZE - 1;
    }
    else {
        this->currentY = 0;
    }
}

bool Bomb::getState() const
{
    return state;
}

void Bomb::setState(bool state)
{
    this->state = state;
}

int Bomb::generate()
{
    int n = rand() % (FIELD_SIZE - 2) + 1;
    return n;
}

