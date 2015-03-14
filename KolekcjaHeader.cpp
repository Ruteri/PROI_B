//
//  KolekcjaHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "KolekcjaHeader.h"

template <class Klasa>
bool Kolekcja<Klasa>::add(Klasa* doDodania, int mod)
{
    Node<Klasa>* newNode = new Node<Klasa>(doDodania);
    Node<Klasa>* help = this->firstNode;

    while (true) {
        
        if (*newNode<help) {
            if (help->LNode) {help = help->LNode; continue;}
                else {help->LNode = newNode; break;}
        } else {
            if (help->RNode){ help = help->RNode;continue;}
                    else {help->RNode = newNode; break;}}
    }
    
    return 0;
}

template <class Klasa>
Klasa* Kolekcja<Klasa>::find(int Id, IPID* ipid)
{
    Klasa* obiekt = new Obiekt(ipid);
    
    Node<Klasa> help(obiekt);
    Node<Klasa>* act = this->firstNode;

    
    while ((act = *act>&help) && act != &help) {}
    
    delete obiekt;
    return act?act->wskaznikNaKlase:nullptr;
}