//
//  towersHanoi.c
//  towerHanoi
//
//  Created by Mario Díaz on 4/11/16.
//  Copyright © 2016 Mario Díaz. All rights reserved.
//

#include "towersHanoi.h"
#include <math.h>

double minMovements(double numRings) {
    return pow(2,numRings) - 1;
}

void towerSolver(int numRings, char origin, char desti, char aux) {
    if  (numRings > 0) {
        towerSolver(numRings-1, origin, aux, desti);
        printf("\n%c -> %c", origin, desti);
        towerSolver(numRings-1, aux, desti, origin);
    }
}