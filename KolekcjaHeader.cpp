//
//  KolekcjaHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//


#ifndef __KOL_H_CPP
#define __KOL_H_CPP
#include "KolekcjaHeader.h"

template <class Klasa>
Klasa* Kolekcja<Klasa>::find(int ID, IPID* ip)
{
    return nullptr;
}

template <class Klasa>
bool Kolekcja<Klasa>::add(Klasa* doDodania, int mod)
{
    Node<Klasa>* newNode = new Node<Klasa>(doDodania);
    Node<Klasa>* help = this->firstNode;
    
    if (!help) {
        this->firstNode = newNode;
        return 0;
    }
    
    while (true) {
        
        if (*newNode<help) {
            if (help->prevNode()) help = help->prevNode();
                else return help->setLNode(newNode);
                    } else {
                        if (help->nextNode()) help = help->nextNode();
                            else return help->setRNode(newNode);
                                }
    }
    
    return 0;
}

template <class Klasa>
bool Kolekcja<Klasa>::push(Klasa* doDodania)
{
    return this->add(doDodania, 0);
}

template <class Klasa>
bool Kolekcja<Klasa>::del(Klasa* doUsuniecia, int ID, ...)
{
    return 1;
}

template <class Klasa>
void Kolekcja<Klasa>::operator<<(std::ostream &stream)
{
    stream << "Kolekcja @Memory Stack: " << this << std::endl << std::endl;
    *firstNode << stream;
}
















#endif