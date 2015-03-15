//
//  KilentNaSerwerzeHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __KLIENT_B_CPP
#define __KLIENT_B_CPP

#include <ostream>
#include "KilentNaSerwerzeHeader.h"

void KlientNaSerwerze::operator<<(std::ostream &stream) {
    stream << "Memory Stack Adress: " << this <<std::endl << "IP/ID Memory Stack: "<< &ID << std::endl << "IP/ID: ";
    ID >> stream;
    stream <<"Memory Stack Kolekcje: "<< &listaPrzyjaciol << ", "<< &listaZaprzyjaznionychUrzadzen << std::endl;
}

bool KlientNaSerwerze::operator<(KlientNaSerwerze* Klient)
{
    return this->ID<&Klient->ID;
}


#endif