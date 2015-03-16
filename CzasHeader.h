//
//  CzasHeader.h
//  Komunikator_PROI_B
//
//  Created by Konto Mateusza on 10.03.2015.
//  Copyright (c) 2015 Mateusz. All rights reserved.
//

#ifndef __Komunikator_PROI_B__CzasHeader__
#define __Komunikator_PROI_B__CzasHeader__

#include <iostream>

enum Dzien
{
    Pon, Wt, Sr, Czw, Pia, Sob, Nie
};

enum Miesiac
{
    St, Lt, Mr, Kw, Mj, Lp, Sp, Wz, Ls, Gr,
};

class Czas
{
public:

    
    void operator<<(int ){ std::cout << year << " " << month << " " << day << " " << min << std::endl; }
    
    bool operator<(Czas* A){
        return A->year>this->year?1:A->month>this->month?1:A->day>this->day?1:A->hour>this->hour?1:A->min>this->min?1:A->sec>this->sec?1:0; }
    
    Czas* operator-(Czas* A){
        Czas* B = new Czas;
    
        int curr = A->year - this->year;
        B->year = curr > 0? curr:-curr;
        
        curr = A->month - this->month;
        B->month = curr>0? curr:-curr;
        
        curr = A->day - this->day;
        B->day = curr > 0? curr:-curr;
        
        curr = A->hour - this->hour;
        B->hour = curr > 0? curr:-curr;
        
        curr = A->min - this->min;
        B->min = curr > 0? curr:-curr;
        
        curr = A->sec - this->sec;
        B->sec = curr > 0? curr:-curr;
            
        return B;
    }
    
    
    
    
private:
    
    int sec;
    int min;
    int hour;
    int day;
    int month;
    int year;
    
    
    
    
    
};
#endif /* defined(__Komunikator_PROI_B__CzasHeader__) */
