#pragma once
#include <vector>

template<typename RIGHT, typename LEFT>
class Shablon {
private:
    LEFT* lefthand;
    RIGHT* righthand;
public:
    Player(LEFT* lefthand, RIGHT* righthand) : lefthand(lefthand), righthand(righthand){}
    
    RIGHT getlefthand() {

        return lefthand;
    }

    void setlefthand(RIGHT lefthand) {

        this->lefthand = lefthand;
    }
    LEFT gerighthandt() {

        return righthand;
    }

    void setrighthand(LEFT righthand) {

        this->righthand = righthand;
    }
};

