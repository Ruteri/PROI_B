//
//  KolekcjaHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "KolekcjaHeader.h"

template <>
bool Kolekcja<class Klasa, class IDTYPE>::add(Klasa* doDodania, IDTYPE* ipid, int mod)
{
    Node<Klasa, IDTYPE> newNode(ipid, doDodania);
    
    Node<Klasa, IDTYPE>* help = this->firstNode;
    
    //while (help) {
     //   help = //do dokonczenia
    //}
    
    return 0;
}

//template <>
/*Klasa* Kolekcja<Klasa>::find(Klasa* A, int ID, IPID* ip)
{
    return nullptr;
}*/
