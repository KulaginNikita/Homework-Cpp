#include <iostream>

struct DateTime
{
    void printDateAndTime() const
    {
        std::cout<<this->date<<"."<<this->month<<"."<<this->year<<"\t"<<this->hour<<"::"<<this->min<<"::"<<this->second;
    }
    unsigned int year: 12;
    unsigned int month: 4;
    unsigned int date: 5;
    unsigned int hour: 5;
    unsigned int min: 6;
    unsigned int second: 6;
};



int main(){
    DateTime timeIDoMyHomework{2022,9,25,2,32,60};
    // timeIDoMyHomework.year = 2022;
    // timeIDoMyHomework.month = 9;
    // timeIDoMyHomework.date = 25;
    // timeIDoMyHomework.hour = 2;
    // timeIDoMyHomework.min = 32;
    // timeIDoMyHomework.second = 60;
    timeIDoMyHomework.printDateAndTime();
    return 0;
}