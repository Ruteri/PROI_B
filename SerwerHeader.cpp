//
//  SerwerHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "SerwerHeader.h"

void Serwer::operator<<(std::ostream & stream)
{
    stream << std::endl;
    //stream << this->listaKlientow
    //stream << this->listaUrzadzen

}

template <class Klasa>
void addObject(Klasa Object)
{
    if (Object.typ) {
        // listaKlientow >> Object
    } else {
        // listaUrzadzen >> Object
    }
}
