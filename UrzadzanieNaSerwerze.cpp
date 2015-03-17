#include "UrzadzanieNaSerwerze.h"

ServerDevice::ServerDevice(IPID* a){
	ID = *a;
}

ServerDevice::ServerDevice(Obiekt* obiekt){
	ID = *(obiekt->getID());
}


const IPID* ServerDevice::getID(){
	return &ID;
}

bool ServerDevice::checkAccess(Obiekt* toCheck){
	for(std::vector<Obiekt*>::iterator it = AccessList.begin(); it != AccessList.end(); it++){
		if(*it == toCheck) return true;
	}
	return false;
}

bool ServerDevice::checkAccess(IPID* toCheck){
	for(std::vector<Obiekt*>::iterator it = AccessList.begin(); it != AccessList.end(); it++){
		if((*it)->getID() == toCheck) return true;
	}
	return false;
}

void ServerDevice::addAccess(Obiekt* toAdd){
	AccessList.push_back(toAdd);
}

void ServerDevice::addFuncionality(int toAdd){
	FuctionalityList.push_back(toAdd);
}

bool ServerDevice::checkFunctionality(int toCheck){
	for(std::vector<int>::iterator it = FuctionalityList.begin(); it != FuctionalityList.end(); it++){
		if(*it == toCheck) return true;
	}
	return false;
}


bool ServerDevice::operator==(ServerDevice* SD){
	return this->getID() == SD->getID();
}

void ServerDevice::operator<<(std::ostream &stream){
	stream<<"Urzadzenie na serwerze: "<<std::endl<<&ID<<"Funkcjonalnosc:"<<std::endl;
	for(std::vector<int>::iterator it = FuctionalityList.begin(); it != FuctionalityList.end(); it++){
		stream<<"\t"<<*it<<std::endl;
	}
	stream<<"Dostepnosc:"<<std::endl;
	for(std::vector<Obiekt*>::iterator it = AccessList.begin(); it != AccessList.end(); it++){
		stream<<"\t";
		**it<<(stream);
		stream<<std::endl;
	}
}