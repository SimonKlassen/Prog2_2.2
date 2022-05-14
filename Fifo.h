
#ifndef INC_2_2_FIFO_H
#define INC_2_2_FIFO_H
#include "string"
using namespace std;

class Fifo {

    Fifo *start = nullptr;
    string value;
    Fifo *next = nullptr;



public:
    Fifo(string wert);
    Fifo();
    ~Fifo();
    Fifo& operator<<(const string& x);
    Fifo& operator>>(string&);
    operator int() const;
    Fifo pop();
    Fifo push(string x);
    Fifo info();
    Fifo size();
};


#endif //INC_2_2_FIFO_H
