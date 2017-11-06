#ifndef ANALIZATORSYGNALU_HPP_INCLUDED
#define ANALIZATORSYGNALU_HPP_INCLUDED

class AnalizatorSygnalu
{
public:
    AnalizatorSygnalu();
    double dlugosc(const SygnalProbkowany&);
    double minimum(const SygnalProbkowany&);
    double srednia(const SygnalProbkowany&);
    double calka(const SygnalProbkowany&);
};


#endif // ANALIZATORSYGNALU_HPP_INCLUDED
