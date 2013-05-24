/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

short tag[20];
short monat[20];
int   jahr[20];

void cin_datum( int index )
{
	cout << "Jahr:  "; cin  >> jahr[index];
	cout << "Monat: "; cin  >> monat[index];
	cout << "Tag:   "; cin  >> tag[index];
}

void cout_datum( int index )
{
	cout << tag[index] << "." << monat[index]	<< "." << jahr[index]  << endl;
}

int main()
{
	int datum1 = 0;
	
	cin_datum( datum1 );
	cout_datum( datum1 );
	
	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void cin_datum( int d[3] )
{
	cout << "Jahr:  "; cin  >> d[0];
	cout << "Monat: "; cin  >> d[1];
	cout << "Tag:   "; cin  >> d[2];
}

void cout_datum( int d[3] )
{
	cout << d[2] << "." << d[1]	<< "." << d[0]  << endl;
}

int main()
{
	int datum1[3];
	
	cin_datum( datum1 );
	cout_datum( datum1 );
	
	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <time.h>
using namespace std;

struct datum
{
	short tag;
	short monat;
	int   jahr;
};

datum cin_datum()
{
	datum d;

	cout << "Jahr:  "; cin  >> d.jahr;
	cout << "Monat: "; cin  >> d.monat;
	cout << "Tag:   "; cin  >> d.tag;

	return d;
}

void cout_datum( datum d )
{
	cout << d.tag << "." << d.monat	<< "." << d.jahr  << endl;
	return;
}

int main()
{
	datum datum1, datum2;
	
	datum1 = cin_datum();
	cout_datum( datum1 );

	system("pause");
	return 0;

    // Profi: Wie kann man eine Variable einsparen und 2-3 Zeilen Quellcode?
}


/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

//#include <iostream>
//using namespace std;
//
//double tag[20];
//int monat[20];
//int jahr[20];
//
//void cin_datum(int index)
//{
//	cout << "Jahr:  "; cin  >> jahr[index];
//	cout << "Monat: "; cin  >> monat[index];
//	cout << "Tag:   "; cin  >> tag[index];
//}
//
//void cout_datum( int index )
//{
//	cout << tag[index] << "." << monat[index]	<< "." << jahr[index]  << endl;
//}
//
//void zufallsdatum( int index)
//{
//	jahr[index]  = rand() % 20 + 1995;
//	monat[index] = rand() % 12 + 1;
//	tag[index]   = rand() % 28 + 1;
//}
//
//int main()
//{
//	int datum1 = 0;
//	
//	// ein Datum per Hand einlesen
//	cin_datum( datum1 );
//	cout_datum( datum1 );
//	
//	// 10mal ein Zufallsdatum erzeugen
//	for ( int i = 1; i < 11; i++ )
//	{
//		zufallsdatum( i );
//		cout_datum( i );
//	}
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void cin_datum(int d[3])  // keine Rückgabe von Arrays als Rueckgabewert
//{
//	cout << "Jahr:  "; cin  >> d[0];  // interessant wird es, wenn
//	cout << "Monat: "; cin  >> d[1];  // nicht mehr als Bestandteile
//	cout << "Tag:   "; cin  >> d[2];  // den gleichen Datentyp haben
//}
//
//void cout_datum( const int d[3] ) // verhindern von Aenderungen mit const
//{
//	cout << d[2] << "." << d[1]	<< "." << d[0]  << endl;
//}
//
//void zufallsdatum( int d[3]) // keine Rückgabe von Arrays als Rueckgabewert
//{
//	d[0] = rand() % 20 + 1995; // man kann ggf nur raten, was welcher Wert
//	d[1] = rand() % 12 + 1;    // bedeutet. 
//	d[2] = rand() % 28 + 1;
//}
//
//int main()
//{
//	int datum1[3]; // Deklaration veraet nichts ueber den Zweck der Variable
//	
//	// ein Datum per Hand einlesen
//	cin_datum( datum1 );
//	cout_datum( datum1 );
//	
//	// 10mal ein Zufallsdatum erzeugen
//	for ( int i = 0; i < 10; i++ )
//	{
//		zufallsdatum( datum1 );
//		cout_datum( datum1 );
//	}
//
//	system("pause");
//	return 0;
//}


//#include <iostream>
//#include <time.h>
//using namespace std;
//
//struct datum
//{
//	short tag;
//	short monat;
//	int jahr;
//};
//
//datum cin_datum()
//{
//	datum d;
//
//	cout << "Jahr:  "; cin  >> d.jahr;
//	cout << "Monat: "; cin  >> d.monat;
//	cout << "Tag:   "; cin  >> d.tag;
//
//	return d;
//}
//
//void cout_datum( datum d )
//{
//	cout << d.tag << "." << d.monat	<< "." << d.jahr  << endl;
//	return;
//}
//
//datum zufallsdatum()
//{
//	datum d;
//
//	d.jahr  = rand() % 20 + 1995;
//	d.monat = rand() % 12 + 1;
//	d.tag   = rand() % 28 + 1;
//
//	return d;
//}
//
//int datums_differenz( datum d1, datum d2 ) 
//{   // Vorsicht !! vereinfachte Rechnung !! TODO !!
//	int t1 = 360 * d1.jahr + 30 * d1.monat + d1.tag;
//	int t2 = 360 * d2.jahr + 30 * d2.monat + d2.tag;
//	return t1 - t2;
//}
//
//int main()
//{
//	datum datum1, datum2;
//	
//	// zweimal ein Datum per Hand einlesen und Differenz berechnen.
//	datum1 = cin_datum();
//	cout_datum( datum1 );
//	
//	datum2 = cin_datum();
//	cout_datum( datum2 );
//
//	cout << "Differenz in Tagen zwischen den " << endl;
//	cout << "eingegebenen Datumsangaben: ";
//	cout << datums_differenz( datum1, datum2 ) << endl;
//	
//	// 10mal ein Zufallsdatum erzeugen
//	for ( int i = 0; i < 10; i++ )
//	{
//		datum1 = zufallsdatum();
//		cout_datum( datum1 );
//	}
//
//	system("pause");
//	return 0;
//
//    // Profi: Wie kann man eine Variable einsparen und 2-3 Zeilen Quellcode?
//}

/*
Aufgaben:

Hinweise:
- im Folgenden geht es fast immer darum Quellcode zu erstellen
- versuchen Sie Ihren Quellcode so fehlerfrei zu bekommen, dass
  er sich vom Compiler uebersetzen laesst
- stellen Sie Ihre Quellcodestuecke in Moodle ein

Basis:
======

1. Üben Sie Strukturen (Verbuende) zu deklarieren anhand der hier
   aufgelisteten Anwendungsfaelle (waehlen Sie aus, aber probieren
   Sie mehrere):
   - Adressen - Kunden - Rechnungsposition - Rechnung - Bankkonto
   - Login - Punkte (Mathematik) - Komplexe Zahlen (Mathematik)
   - Brüche (Mathematik) - RGB Farben
   (Ergebnis: mehrere C++ Quellcodestuecke zum Vorstellen)

2. Schreiben Sie zum Testen ein kleines Programm rund um eine (oder 
   mehrere) Ihrer Strukturen (zB Eingabe ueber cin /Ausgabe ueber cout)
   (Ergebnis: C++ Quellcode / Ausführung zeigen)

3. Deklarieren Sie einen Array mit 20 Elementen vom Typ Ihrer
   ausgewählten Struktur.
   (Ergebnis: C++ Quellcodestueck mit Deklaration zum Vorstellen)

4. Wie können Sie Ihre neu erlernte Fähigkeit für das Projekt
   "Wahlanalyse" nutzen? Schreiben Sie die benötigten Deklarationen 
   als C++ Quellcode auf.
   (Ergebnis: C++ Quellcodestuecke mit Deklarationen zum Vorstellen)

Profi:
======

1. Verlagern Sie die Funktionaliät zur Ein- und Ausgabe des Inhalts
   einer Struktur in ein Unterprogramm.
   (Ergebnis: C++ Quellcode der Funktionen und ein Aufrufbeispiel)

2. Erzeugen Sie den Inhalt einer Struktur statt durch manuelle
   Eingabe auf zufällige Weise (automatische Befuellung einer Struktur)
   (Tipp: srand(time(0)) und rand(), nicht vergessen: #include <time.h>)
   (Ergebnis: C++ Quellcode einer Funktion, die eine Struktur zufaellig
   befuellt)

3. Definieren Sie einen Array von Strukturen und befüllen Sie ihn.
   (Ergebnis: C++ Quellcode der Array Deklaration und der Befuellung)

Experte:
========

1. Planen Sie ein Programm, bei dem verschachtelte Strukturen
   verwendet werden. Erfinden Sie dazu ein eigenes Beispiel oder
   nutzen Sie die Anregungen unter Basis 1. für eigene Kombinationen.
   (Ergebnis: C++ Quellcodestueck mit Deklarationen)

2. Analysieren Sie die main() Funktion. Wie kann man bei dieser Funktion
   Variablen und Quellcode-Zeilen einsparen und dabei die Funktionalität
   erhalten. Schreibe deine kuerzeste Version von main().
   (Ergebnis: C++ Quellcode von main())
*/
