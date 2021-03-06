#ifndef OBSTACLEBOARDELEMENT_H
#define OBSTACLEBOARDELEMENT_H

#include "BoardElement.h"

/**
 * @brief
 * Reprezentacja pola na planszy, które jest przeszkodą.
 * Klasa rozszerza BoardElement o pola takie jak:
 * - isDestructable - stwierdza, czy pole można zniszczyć pociskami
 * - health - zdrowie przeszkody - gdy wartość osiągnie 0, element
 *   zostaje zniszczony.
 */
class ObstacleBoardElement: public BoardElement
{

public:
    ObstacleBoardElement();
    ObstacleBoardElement(int id, bool isDestructable, int health);
    virtual ~ObstacleBoardElement(){}

    /**
     * @brief isDestructable Flaga informująca, czy przeszkodę mozna niszczyć
     */
    bool isDestructable;

    /**
     * @brief health "Zdrowie" przeszkody
     */
    int health;

};

#endif // OBSTACLEBOARDELEMENT_H
