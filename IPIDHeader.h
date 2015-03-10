//
//  IPIDHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__IPIDHeader__
#define __Komunikator_PROI_B__IPIDHeader__

#import <string>

class IPID
{
public:
    
    IPID (int a, int b, int c, int d, int ID, int port):
    A(a), B(b), C(c), D(d), Id(ID), Port(port) {};
    
    
    int Id;

    void operator>>(int );
    bool operator==(IPID A);
    bool connect(...);
    bool sendMessage(...);
    
private:
    int A;
    int B;
    int C;
    int D;
    
    int Port;
    
    std::string IP;
    
    
};

#endif /* defined(__Komunikator_PROI_B__IPIDHeader__) */