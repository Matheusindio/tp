#ifndef VIAGEM_HPP_INCLUDED
#define VIAGEM_HPP_INCLUDED
#include "../dominios/data.hpp"
using namespace std;


class Viagem {
 private:
 Data date; 
 public:
 void setDate(const Data& date);
 Data getDate() const;
};

inline void Viagem::setDate(const Data &date){
 this->date = date;
}
inline Data Viagem::getDate() const{
 return date;
}

#endif