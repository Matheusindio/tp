#ifndef hora_HPP_INCLUDED
#define hora_HPP_INCLUDED

class Horario {
    private:
        std::string horario;
        bool validarHorario(std::string horario);

    public:
        bool setHorario(std::string horario);
        std::string getHorario() const;
};

inline std::string Horario :: getHorario() const{
    return horario;
}


#endif 
