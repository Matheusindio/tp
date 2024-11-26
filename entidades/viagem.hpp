#ifndef VIAGEM_HPP_INCLUDED
#define VIAGEM_HPP_INCLUDED
#include "../data.hpp"
using namespace std;


class Viagem {
 private:
 Data data; 
 public:
 void setData(const Data& data);
 Data getData() const;
};

inline void Viagem::setData(const Data &data){
 this->data = data;
}
inline Data Viagem::getData() const{
 return data;
}

#endif