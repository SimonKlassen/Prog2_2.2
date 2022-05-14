//
// Created by simon on 14.05.2022.
//

#include "Fifo.h"
#include "string"

Fifo::Fifo(string wert): value(wert) {}

Fifo::Fifo() = default;

Fifo::~Fifo() = default;

Fifo &Fifo::operator>>(string&) {}

Fifo &Fifo::operator<<(const string& x) {
    if(start != nullptr){

    }
}

Fifo Fifo::pop() {}

Fifo Fifo::push(string x) {}

Fifo Fifo::info() {}

Fifo Fifo::size() {}

Fifo::operator int() const {}