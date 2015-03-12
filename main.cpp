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

    IPID ip(168, 140, 20, 113, 2750, 3050);
    IPID ip2(160, 140, 20, 113, 2750, 3050);
    IPID ip3(169, 140, 20, 113, 2750, 3050);
    IPID ip4(150, 140, 20, 113, 2750, 3050);
    IPID ip5(191, 140, 20, 113, 2750, 3050);
    IPID ip6(121, 140, 20, 113, 2750, 3050);


    
    Obiekt objekt(&ip);
    Obiekt objekt2(&ip2);
    Obiekt objekt3(&ip3);
    Obiekt objekt4(&ip4);
    Obiekt objekt5(&ip5);
    Obiekt objekt6(&ip6);



    Node testNode(&objekt);

    Serwer serwer(&testNode, &testNode);
    
    serwer >> &objekt2;
    serwer >> &objekt3;
    serwer >> &objekt4;
    serwer >> &objekt5;


    std::cout << serwer.maUprawnienia(&objekt2) << std::endl;
    std::cout << serwer.maUprawnienia(&objekt5) << std::endl;
    std::cout << serwer.maUprawnienia(&objekt6) << std::endl;

    
    
    
    
    
    
    return 0;
}
