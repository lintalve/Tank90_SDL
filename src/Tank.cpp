#include "Tank.h"


void Tank::advance() {
    if(!obsticle()) {
        pos+=direction;
    }
}
