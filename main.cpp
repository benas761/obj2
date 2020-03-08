#include "imports.h"

int main() {
	cout << "|  Dydis   | Generavimas | Skaitymas | Skaiciavimas | Atrinkimas | Rasymas |   Viso   |\n";
	for(int i=1000; i<pow(10, 8); i*=10) {
		timer fileGen;
		string input = whichFile(i); // Tikrina ar yra kursiokai.txt failas. Jeigu nera, kokio dydzio testo faila sukurti.
		fileGen.stop();
		vector<stud> x;
		try {
			timer fileRead;
			Input(x, input);
			fileRead.stop();
			timer calc;
			AssignGrades(x);
			calc.stop();
			timer pick;
			std::vector<stud> good, bad;
			std::sort(x.begin(), x.end(), compareByName);
			Pick(x, good, bad);
			pick.stop();
			timer out;
	        Output2file(good, "Patenkinami.txt");
			Output2file(bad,  "Nepatenkinami.txt");
			out.stop();
			OutputTime(i, fileGen, fileRead, calc, pick, out);
			} catch(std::exception& e) {
			cout << "Papildykite kursiokai.txt faila arba ji istrinkite" << endl;
			break;
		}
	}
	return 0;
}