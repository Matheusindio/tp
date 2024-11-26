#ifndef VIAGEM_HPP_INCLUDED
#define VIAGEM_HPP_INCLUDED
#include "../dominios/data.hpp"
using namespace std;


class Viagem {
 private:
 Data data; 
 public:
 void setViagem(const Data& data);
 Data getViagem() const;
};

inline void Viagem::setViagem(const Data &data){
 this->data = data;
}
inline Data Viagem::getViagem() const{
 return data;
}

#endif