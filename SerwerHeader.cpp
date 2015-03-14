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

//template <class Klasa>
void Serwer::add(KlientNaSerwerze* doDodania)
{
    //if (doDodania->Typ == 1) {
    this->listaKlientow.add(doDodania);
    //} else this->listaUrzadzen.add(doDodania);

}
