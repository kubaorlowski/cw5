#ifndef SYGNALPROBKOWANY_HPP_INCLUDED
#define SYGNALPROBKOWANY_HPP_INCLUDED

class SygnalProbkowany
{
private:
    std::vector <Probka> probki;
public:
    SygnalProbkowany();
    void dodajProbke(const p Probka&);
    int iloscProbek();
    operator[](int i):Probka&;
    friend std::ostream& operator<<(std::ostream& stream,const sygnalProbkowany Sygnal&);

};


#endif // SYGNALPROBKOWANY_HPP_INCLUDED
