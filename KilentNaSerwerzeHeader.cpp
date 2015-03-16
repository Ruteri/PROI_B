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

bool KlientNaSerwerze::operator<(KlientNaSerwerze* Klient)
{
    return this->ID<&Klient->ID;
}


#endif