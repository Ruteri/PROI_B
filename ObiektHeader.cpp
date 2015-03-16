//
//  ObiektHeader.cpp
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#include "ObiektHeader.h"
#include <string>

Obiekt::Obiekt(IPID* a){
		ID = *a;
	}


const IPID* Obiekt::getID(){
		return &ID;
	}

const int Obiekt::getType(){
	return Type;
}

void Obiekt::sendMessage(Obiekt* sendTo, std::string message){
	return sendTo->recieveMessage(message);
}

void Obiekt::recieveMessage(std::string message){
	MessageList.push_back(message);
}

void Obiekt::showMessageList(std::ostream &stream){
	for(std::vector<std::string>::iterator it = MessageList.begin(); it!= MessageList.end(); it++){
		stream<<*it<<std::endl;
	}
}


bool Obiekt::operator<(Obiekt* A)
{
    return this->getID() < A->getID();
}

bool Obiekt::operator==(Obiekt* A)
{
    return this->getID() == A->getID();
}

void Obiekt::operator<<(std::ostream &stream) { 
	stream << "Klasa obiekt:" << std::endl << "IP: ";
	ID>>(std::cout);
	stream << "Lista Wiadomosci: "<<std::endl;
	showMessageList(stream);
}