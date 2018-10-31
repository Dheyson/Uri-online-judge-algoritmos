/*
Salário com Bônus
https://www.urionlinejudge.com.br/judge/pt/problems/view/1009
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string nome;
	double A,B,TOTAL;

	cin >> nome;
	cin >> A >> B;

    TOTAL = A + (0.15*B);

    cout.precision(2);
	cout << "TOTAL = R$ " << fixed << TOTAL << "\n";
	

	return 0; 
}