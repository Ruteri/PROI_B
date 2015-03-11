//
//  main.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include <iostream>


#include "SerwerHeader.h"
#include "IPIDHeader.h"
#include "KolekcjaHeader.h"
#include "UrzadzenieKlientaHeader.h"
#include "KlientUKleintaHeader.h"
#include "KolekcjaHeader.h"
#include "ObiektHeader.h"
#include "NodeHeader.h"

class test
{
public:
    test(int id): ID(id) {}
    int ID;
    
    void operator <<(std::ostream &stream)
    {
        stream << "Klasa testowa. ID: " << this->ID << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    
    srand(time(nullptr));

    Serwer serwer;
    IPID ip(168, 140, 20, 113, 2750, 3050);
    
    test TestClass(5);
    test TestClass2(7);

    Obiekt objekt;
    objekt.IPID = 450;
    
    Node<Obiekt, IPID> testNode(&ip, &objekt);
    
    
    
    return 0;
}
