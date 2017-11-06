#ifndef PROBKA_HPP_INCLUDED
#define PROBKA_HPP_INCLUDED
class Probka
{
public:
    double t;
    double x;
    Probka();
    Probka (double t,double x);
    friend std::ostream& operator<<(std::ostream& stream,const probka Probka&);

};


#endif // PROBKA_HPP_INCLUDED
