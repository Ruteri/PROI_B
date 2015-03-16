//
//  IPIDHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__IPIDHeader__
#define __Komunikator_PROI_B__IPIDHeader__

#include <string>
#include <iostream>

class IPID
{
public:
    
    IPID (int a = NULL, int b = NULL, int c = NULL, int d = NULL, int port = NULL, int Id = NULL):
        A(a), B(b), C(c), D(d), ID(Id), Port(port) {};
    
    
    int ID;

    bool operator<(IPID*);
    friend std::ostream& operator<<(std::ostream& stream, const IPID* ip)
    {
        stream << "IPID: " << ip->A << "." << ip->B << "." << ip->C << "." << ip->D << std::endl;
        
        return stream;
    }
    
    bool operator==(IPID* A);
    bool connect(...);
    
    
private:
    int A;
    int B;
    int C;
    int D;
    
    int Port;
    
    
    
};

#endif /* defined(__Komunikator_PROI_B__IPIDHeader__) */
