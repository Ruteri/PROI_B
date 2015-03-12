//
//  PaczkaDanych.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__PaczkaDanych__
#define __Komunikator_PROI_B__PaczkaDanych__

#include "CzasHeader.h"
#include "IPIDHeader.h"
#include "ObiektHeader.h"

// template
class PaczkaDanych
{
public:
    IPID* to;



private:
    char* wiadomosc;
    Czas* czas;
    
    IPID* from;
};

#endif /* defined(__Komunikator_PROI_B__PaczkaDanych__) */
