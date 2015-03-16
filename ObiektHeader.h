//
//  ObiektHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__ObiektHeader__
#define __Komunikator_PROI_B__ObiektHeader__

#include <ostream>
#include "IPIDHeader.h"
#include <string>
#include <vector>

// BEZ SERWERA

// TODO: typ, IP/ID? (zamiast klienta), przec. <<, receiveMessage (z serwera/od kogos), sendMessage (na serwer/do kogos), ostatnie wiadomosci

class Obiekt
{
private:
	IPID ID;
	int Type;
	std::vector <std::string> MessageList;
public:
    Obiekt(IPID* a);
	Obiekt(int a, int b, int c, int d, int port= NULL, int id = NULL) : ID(a, b, c, d, port, id){}
    
    const int getType();
	const IPID* getID();

	//W przyszlosci zmiana stringa na klase wiadomosci (zawierajaca nadawce, odbiorce, tresc, itp)
	void sendMessage (Obiekt* sendTo, std::string message);
	void recieveMessage (std::string message);
	void showMessageList (std::ostream &stream);

    bool operator==(Obiekt*);
    void operator<<(std::ostream &stream);
    bool operator<(Obiekt*);
};



#endif /* defined(__Komunikator_PROI_B__ObiektHeader__) */
