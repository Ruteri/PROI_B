//
//  IPIDHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "IPIDHeader.h"
#include <iostream>

void IPID::operator>>(int )   {
    std::cout << this->A << "." << this->B << "." << this->C << "." << this->D << std::endl;
}

bool IPID::operator==(IPID A) {
    return this->A == A.A? this->B == A.B? this->C == A.C? this->D == A.D? 1:0:0:0:0;
}

bool connect(...)
{
    return 0;
}

bool sendMessage(...)
{
    return 0;
}