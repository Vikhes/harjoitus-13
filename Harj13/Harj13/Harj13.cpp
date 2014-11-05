/**************************
*Ohjelman nimi:Harjoitus 13
*Tekijä:Ville Hakola
*lyhyt kuvaus
*Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
*yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
*lopuksi naytölle.
*Versio:1.0
*PVM:12.10.2014
******************************/
#include <iostream>
using namespace std;
int main()
#include <cstring>
{
	char etunimi[20];
	char sukunimi[20];
	cout << "anna etunimi ja sukunimi\n";
	cout << "(etunimi sukunimi)\n";
	cin >> etunimi >> sukunimi;
	strncat_s (etunimi, sukunimi, 20);
	cout << "Nimesi: " << etunimi<< endl;
	return 0;

}