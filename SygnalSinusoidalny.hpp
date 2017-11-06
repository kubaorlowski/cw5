#ifndef SYGNALSINUSOIDALNY_HPP_INCLUDED
#define SYGNALSINUSOIDALNY_HPP_INCLUDED

class SygnalSinusoidalny : public Sygnal
{
public:
    SygnalSinusoidalny(double a=1.0, double w=1.0, double psi=0.0) :_a(a), _w(w), _psi(psi) {}
    virtual ~SygnalSinusoidalny() {}
    virtual double x(double t)
    {
        return _A * sin(_w * t + _psi);
    }
virtual void wypisz(std::ostream& s)
{
    s << "Sygnal sinusoidalny" << endl;
    s << " A= " << _A << endl;
    s << " w= " << _w << endl;
    s << " psi= " << _psi << endl;
}
private:
    double _A;
    double _w;
    double _psi;
};

#endif // SYGNALSINUSOIDALNY_HPP_INCLUDED
