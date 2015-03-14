//
//  UrzadzenieHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//
// 13.03.2015 Arkadiusz Œwierczek- I pisanie klasy
//			uporz¹dkowanie

#ifndef __Komunikator_PROI_B__UrzadzenieHeader__
#define __Komunikator_PROI_B__UrzadzenieHeader__
#include "IPIDHeader.h"
template <class Klasa>
class Urzadzenie {
    
    
public:
	IPID adres;

	void SednMessage();
	void ReceiveMessage();


};
#endif /* defined(__Komunikator_PROI_B__UrzadzenieHeader__) */
