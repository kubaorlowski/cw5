#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
#include <string>
#include <sstream>
#include <algorithm>
#include "AnalizatorSygnalu.hpp"
#include "Probka.hpp"
#include "SygnalProbkowany.hpp"
#include "SygnalLoader.hpp"
#include "Sygnal.hpp"


using namespace std;

    struct Probka
    {
        double t;
        double x;
        Probka(double _t,double _x)
        {
            t=_t;
            x=_x;
        }
    };

    vector <Probka> wczytaj (string abc)
    {
      vector <Probka> tablica;
      ifstream plik (abc);
      string linia;
      while (getline(plik,linia))
      {
          stringstream ss(linia); // inicjalizujemy stringstream zawartosci¹ linii
          double _t, _x; // w tych zmiennych zapiszemy odczytane wartoœci
          ss >> _t; // odczytujemy z linii pierwsz¹ liczbê
          ss.ignore(); // ignorujemy przecinek
          ss >> _x; // odczytujemy z linii drug¹ liczbê
          cout << _t <<" "<< _x<< endl;
      }
      plik.close();
      return tablica;
    }

    //tablica push_back (probka1);
    //cout<<tablica[a].t<<endl;




int main(int argc, char* argv[])
{

    if (argc !=2)
    {
        return -1;
    }

    vector <Probka> dane=wczytaj(argv[1]);



    //cout << "Minimum : " << min_element(dane,dane);






    return 0;
}
