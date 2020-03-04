# obj2

v0.4 pakeitimai:
- Pridėta timer klasė, skaičiuojanti laiką.
- Pakeista failo generacija.
- Vidurkiai nebeskaičiuojami išvedime.
- Studentai išvedami dviejuose failuose: nepatenkinami.txt - kurių vidurkiai <5 ir patenkinami.txt - kurių vidurkiai >=5.

Laikai:
- Su 1000:        Vektoriai                          Deque                   
  - Generavimas:  0.00385726 s.         Generavimas:  0.00897711s.
  - Skaitymas:    0.00199291 s.         Skaitymas:    0.00179636s.
  - Skaiciavimas: 0.000627293 s.        Skaiciavimas: 0.00211808s.
  - Atrinkimas:   0.000419402 s.        Atrinkimas:   0.0177752s.
  - Rasymas:      0.00231845 s.         Rasymas:      0.00580631s.
  - Viso:         0.009215315 s.        Viso:         0.0306667s.
- Su 10000:
  - Generavimas:  0.0211149 s.          Generavimas: 0.0494865s.
  - Skaitymas:    0.0199951 s.          Skaitymas: 0.0172362s.
  - Skaiciavimas: 0.00607036 s.         Skaiciavimas: 0.0204484s.
  - Atrinkimas:   0.00394418 s.         Atrinkimas: 0.251935s.
  - Rasymas:      0.0219306 s.          Rasymas:0.04755s.
  - Viso:         0.07305514 s.         Viso: 0.339106s.
- Su 100000:
  - Generavimas:  0.191304 s.           Generavimas: 0.350764s.
  - Skaitymas:    0.190955 s.           Skaitymas: 0.161954s.
  - Skaiciavimas: 0.0603658 s.          Skaiciavimas: 0.195948s.
  - Atrinkimas:   0.0381968 s.          Atrinkimas: 3.56463s.
  - Rasymas:      0.225144 s.           Rasymas:0.441573s.
  - Viso:         0.7059656 s.          Viso: 4.27329s.
- Su 1000000:
  - Generavimas:  2.09837 s.            Generavimas: 3.363s.
  - Skaitymas:    1.90887 s.            Skaitymas: 1.66347s.
  - Skaiciavimas: 0.593764 s.           Skaiciavimas: 2.05486s.
  - Atrinkimas:   0.401827 s.           Atrinkimas: 43.1559s.
  - Rasymas:      2.2395 s.             Rasymas:4.44425s.
  - Viso:         7.242331 s.           Viso: 50.4559s.
- Su 10000000:
  - Generavimas:  19.6896 s.            Out of memory.
  - Skaitymas:    19.5779 s.
  - Skaiciavimas: 5.9756 s.
  - Atrinkimas:   3.74884 s.
  - Rasymas:      23.6103 s.
  - Viso:         72.60224 s.
  
Generavimas - parinkto dydžio failo generavimas.
Skaitymas - sugeneruoto failo skaitymas.
Skaičiavimas - pažymių pagal vidurkį ir medianą skaičiavimas.
Atrinkimas - duomenų išrinkimas pagal paskutinį balą, skaičiuotą pagal vidurkį. Čia vyksta rikiavimas.
Rašymas - duomenų rašymas į 2 failus pagal atrinkimą.

Sistemos aprašymas:
- Intel(R) Core(TM) i5-8265U CPU @ 1.60GH
- 2 * 4GB DDR4 RAM
- SSD

v0.3 pakeitimai:
- Pridėtas antraštės failas.
- Funkcijos perkeltos į 2 .cpp failus. inOut.cpp - išvesčiai, gradeGen.cpp - vidurkiui ir medianai.

v0.2 pakeitimai:
- Dirba su mokinių sąrašu, kuriame gali būti skirtingas kiekvieno mokinio padarytų namų darbų kiekis.
- Išveda pagal vardą (jei vardai vienodi, pavardę) surūšiuotą mokinių galutinių balų sąrašą.
- Jei nėra kursiokai.txt failo sugeneruoja naują failą Generated.txt, su kuriuo toliau vykdo operacijas.

Programa raides, simbolius ir kitus netinkamus pazymiu formatus ignoruoja.
Pazymiuose kablelius pavercia i taskus, bet viska, kas eina po tasko ignoriuoja (dirba su int).
Perskaičius string formato įvestį ignoruoja viską, kas eina po jo toje eilutėje.

Skaitymui:
- Sukurti failą kursiokai.txt. Pirma eilutė ignoruojama, tad duomenis pradėti rašyti nuo antros eilutės.
- Failo eilutės struktūra:
  - Vardas ir pavardė, atskirti tarpu.
  - Namų darbų balai.
  - Paskurinis balas - egzamino.

Programa skaičiuoja galutinį balą pagal:
- Pagal vidurkį: 0.4 * [namų darbų balų vidurkis] + 0.6 * [egzamino balas].
- Pagal medianą: 0.4 * [namų darbų balų mediana] + 0.6 * [egzamino balas].

Programos pavyzdys:

![Programos pavyzdys](https://github.com/benas761/obj2/blob/master/v0.3%20ex)
