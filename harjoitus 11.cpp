/*
TATU REIJONEN - IIO14S2

Harjoitus 11 (Palautus vko 43)
Muuta tehtävän 9 laskin - ohjelmaa niin, etta valikko nayttaa
seuraavalta :

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista käsitellä
useita lukupareja käyttäjän toiveiden
mukaisesti.Mita tapahtuu, jos luku2 on 0 ?
HUOM!goto - lauseen käyttä on KIELLETTY!!!!
*/

#include <iostream>
#include <cmath>
using namespace std;
void main()

{
	int luku1, luku2;
	int valinta;

		cout << "Anna ensimmäinen kokonaisluku: ";
		cin >> luku1;
		cout << "Anna toinen kokonaisluku: ";
		cin >> luku2;

		do {

			cout << "VALIKKO";
			cout << "\n\n0 Lopeta ohjelma";
			cout << "\n1 Summa ";
			cout << "\n2 Erotus";
			cout << "\n3 Tulo";
			cout << "\n4 Osamaara";
			cout << "\n5 Jakojaannos";
			cout << "\n6 Syota uudet kokonaisluvut laskemista varten";
			cout << "\n\n\nVALINTASI ON: ";

			cin >> ws >> valinta;
			switch (valinta){

			case 0: exit(0);
			case 1: cout << "VASTAUS ON: " << luku1 + luku2;
				break;
			case 2: cout << "VASTAUS ON: " << luku1 - luku2;
				break;
			case 3: cout << "VASTAUS ON: " << luku1 * luku2;
				break;
			case 4:
			{if (luku2 == 0) { cout << "Nollalla ei voi jakaa"; }
			else { cout << "VASTAUS ON: " << (float)luku1 / luku2; }
			break; }
			case 5: cout << "VASTAUS ON: " << luku1 % luku2;
				break;
			case 6: cout << "Anna ensimmäinen kokonaisluku: ";
				cin >> luku1;
				cout << "Anna toinen kokonaisluku: ";
				cin >> luku2;



			}
			cout << "\n\n";
		} while (valinta = !0);
	}
