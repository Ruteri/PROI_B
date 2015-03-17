#ifndef URZADZENIE_NA_SERWERZE_H
#define URZADZENIE_NA_SERWERZE_H

#include "ObiektHeader.h"
#include "IPIDHeader.h"

//W przyszlosci dziedziczenie z Obiekt
class ServerDevice {
	private:
		IPID ID;
		std::vector <Obiekt*> AccessList;
		std::vector <int> FuctionalityList;
	public:
		ServerDevice(IPID* a);
		ServerDevice(int a, int b, int c, int d, int port= NULL, int id = NULL) : ID(a, b, c, d, port, id){}
		ServerDevice(Obiekt* obiekt);

		const IPID* getID();
		void addAccess(Obiekt* toAdd);
		bool checkAccess(Obiekt* toCheck);
		bool checkAccess(IPID* toCheck);

		void addFuncionality(int F);
		bool checkFunctionality(int F);

		bool operator==(ServerDevice*);
		void operator<<(std::ostream &stream);
};

#endif
