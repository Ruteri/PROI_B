//
//  IPIDHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "IPIDHeader.h"
#include <iostream>

void IPID::operator<<(std::ostream &stream)   {
    stream << this->A << "." << this->B << "." << this->C << "." << this->D << std::endl;
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

bool IPID::operator<(IPID A)
{
    return this->A < A.A? 1:this->B < A.B? 1:this->C < A.C? 1:this->D < A.D? 1:0;
}