// ConsoleApplication7.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include<Windows.h>
#include"Header1.h"

using namespace std;


void automobil::Gesamtpreis(float x, float y)
{
	cout << x*y;
}

int main()
{
	automobil vw;
	vw.PreispK = 18; 
	vw.Gewicht = 1400;
	
	vw.Gesamtpreis(vw.PreispK, vw.Gewicht);

	system("Pause");
	return 0;
}

