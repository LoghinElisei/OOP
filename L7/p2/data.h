#ifndef _Data_h_
#define _Data_h_
class Data
{
private:
    int an, luna, zi;

    
public:
    Data() {}
    Data(int an, int luna, int zi);
    Data &operator=(const Data &data);
    int getAn() const ;
    int getLuna() const;
    int getZi() const ;
    /*returneaza 1 daca this > data2, 0 daca this <=
    data2*/
    int maiMare(Data data2);
};
#endif