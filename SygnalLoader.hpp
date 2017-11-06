#ifndef SYGNALLOADER_HPP_INCLUDED
#define SYGNALLOADER_HPP_INCLUDED

class SygnalLoader
{
public:
    SygnalLoader();
    SygnalProbkowany wczytajSygnal(std::string nazwaPliku);
    void zapiszSygnal(Sygnal& SygnalProbkowany,std::string nazwaPliku);
};


#endif // SYGNALLOADER_HPP_INCLUDED
