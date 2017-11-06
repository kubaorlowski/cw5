#ifndef SYGNAL_HPP_INCLUDED
#define SYGNAL_HPP_INCLUDED

class Sygnal {
public:
virtual ~Sygnal() {}
virtual double x(double t) = 0;
virtual void wypisz(std::ostream& s) = 0;
friend std::ostream& operator<<(std::ostream& s, const Sygnal&sygnal)
{
sygnal.wypisz(s);
return s;
}
};


#endif // SYGNAL_HPP_INCLUDED
