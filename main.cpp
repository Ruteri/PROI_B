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
    
    ip << std::cout;

    test TestClass(5);
    test TestClass2(7);

    
    Node<test> node(&TestClass, nullptr);
    Node<test> node2(&TestClass2, &node);
    Node<test> node3(&TestClass2, &node);
    Node<test> node4(&TestClass2, &node);
    Node<test> node5(&TestClass2, &node);
    Node<test> node6(&TestClass2, &node);
    Node<test> node7(&TestClass2, &node);
    Node<test> node8(&TestClass2, &node);
    Node<test> node9(&TestClass2, &node);
    Node<test> node10(&TestClass2, &node);
    Node<test> node11(&TestClass2, &node);
    Node<test> node12(&TestClass2, &node);
    Node<test> node13(&TestClass2, &node);
    Node<test> node14(&TestClass2, &node);
    Node<test> node15(&TestClass2, &node);
    Node<test> node16(&TestClass2, &node);
    Node<test> node17(&TestClass2, &node);

    
    node << std::cout;

    
    
    return 0;
}
