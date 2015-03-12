//
//  ObiektHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "ObiektHeader.h"

bool Obiekt::operator<(Obiekt* A)
{
    return *this->ID < A->ID;
}

bool Obiekt::operator==(Obiekt* A)
{
    return *this->ID == A->ID;
}