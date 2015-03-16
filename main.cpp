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
#include "Kolekcja2Header.h"
#include "UrzadzenieKlientaHeader.h"
#include "KlientUKleintaHeader.h"
#include "KolekcjaHeader.h"
#include "ObiektHeader.h"

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
	int i = 7;
    srand(time(nullptr));

    IPID ip(168, 140, 20, 113, 2750, 3050);
    IPID ip2(160, 140, 20, 113, 2750, 3050);
    IPID ip3(169, 140, 20, 113, 2750, 3050);
    IPID ip4(150, 140, 20, 113, 2750, 3050);
    IPID ip5(191, 140, 20, 113, 2750, 3050);
    IPID ip6(121, 140, 20, 113, 2750, 3050);


    Serwer serwer;
    
    KlientNaSerwerze klient(&ip);
    KlientNaSerwerze klient2(&ip2);
    KlientNaSerwerze klient3(&ip3);
	
    
    serwer.addKlient(&klient);
    serwer.addKlient(&klient2);
	serwer.addKlient(&klient3);

    serwer << std::cout;
    std::cout << std::endl;
	Kolekcja2 <int> kolekcja(4);
	for (int i=0; i < 4; i++)
	{
		kolekcja.Add(i);
	}
	kolekcja.IsFull() ? std::cout << "pelny" : std::cout << "pusty";
	std::cout<<std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout<<kolekcja.Read(i)<<std::endl;
	}


    
	system("PAUSE");
    return 0;
}
