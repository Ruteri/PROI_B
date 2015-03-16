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
Klasa* Kolekcja<Klasa>::find(Klasa* doZnalezienia)
{
    if (!doZnalezienia)
        return nullptr;
    
    
    Node<Klasa>* help;
    help = this->firstNode;
    Node<Klasa> thisNode(doZnalezienia);
    
    while (help&&!(*help == doZnalezienia)) {
        help = *help>&thisNode;
    }
    
    
    return help?help->getClass():nullptr;
}

template <class Klasa>
bool Kolekcja<Klasa>::add(Klasa* doDodania, int mod)
{
    if (!doDodania)
        return NULL;
        
    
    Node<Klasa>* newNode = new Node<Klasa>(doDodania, this->firstNode);
    Node<Klasa>* help = this->firstNode;
    
    
    
    if (!help) {
        this->firstNode = newNode;
        return 0;
    }
    
    while (true) {
        newNode->ParrentNode = help;
        
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
bool Kolekcja<Klasa>::del(Klasa* doUsuniecia, IPID* ip)
{
    Node<Klasa>* act = this->firstNode;
    Klasa* obiekt;
    
    if (!doUsuniecia)
        if (!ip)
            return NULL;
        else
        {
            Klasa newClass(ip);
            obiekt = &newClass;
        }
    else
    {
        obiekt = doUsuniecia;
    }
    
    Node<Klasa> newNode(obiekt);
    
    while (true) {
        
        if (newNode<act)
            if (act->prevNode()) act = act->prevNode();
            else break;
            else
                if (act->nextNode()) act = act->nextNode();
                else break;
        
    }
    
    if (act == act->ParrentNode->prevNode())
        act->ParrentNode->setLNode(nullptr);
    
    else
        act->ParrentNode->setRNode(nullptr);
    
    if (act->prevNode()) this->add(act->prevNode()->getClass());
    if (act->nextNode()) this->add(act->nextNode()->getClass());

    
    
    return 0;
}

template <class Klasa>
bool Kolekcja<Klasa>::sortInNode(Node<Klasa>* node)
{
    int n = 0;
    int k = 0;
    if (*countChildren(node->prevNode(), &n) > *countChildren(node->nextNode(), &k))
    { // wiecej z lewej
        if (node->ParrentNode){

        if (node == node->ParrentNode->prevNode())
            node->ParrentNode->setLNode(node->prevNode());
        else
            node->ParrentNode->setRNode(node->prevNode());
        } else {
            node->prevNode()->ParrentNode = nullptr;
            node->ParrentNode = node->prevNode();
        }
        
        Node<Klasa>* swap = node->prevNode()->nextNode();
        node->ParrentNode = node->prevNode();
        
        node->ParrentNode->setRNode(node);
        node->setLNode(swap);

    } else
    {
        if (node->ParrentNode){
            
        if (node == node->ParrentNode->prevNode())
            node->ParrentNode->setLNode(node->nextNode());
        else
            node->ParrentNode->setRNode(node->nextNode());
            
        } else {
            node->nextNode()->ParrentNode = nullptr;
            node->ParrentNode = node->nextNode();
        }
        
        Node<Klasa>* swap = node->nextNode()->prevNode();
        node->ParrentNode = node->nextNode();
        
        node->ParrentNode->setLNode(node);
        node->setRNode(swap);
    }
    
    return 0;

}


template <class Klasa>
int* Kolekcja<Klasa>::countChildren(Node<Klasa>* node, int* n)
{
    if (!node) 
        return n;
    
    (*n)++;
    countChildren(node->prevNode(), n);
    countChildren(node->nextNode(), n);
    
    return n;
    
}











#endif