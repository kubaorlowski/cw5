#include "SygnalProbkowany.hpp"

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
