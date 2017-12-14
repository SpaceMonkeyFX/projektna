#include <iostream>
#include <stdlib.h> 
#include <time.h>
//#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

struct rezultati {
	string ime;
	int st_tock;
	int st_tock_moz;
} igralec;

int odgovor(int);

//Zamenjava '/n' z novo vrstico
string &fix_newlines(string &s)
{
    size_t start_pos = 0;
    while((start_pos = s.find("\\n", start_pos)) != string::npos) {
         s.replace(start_pos, 2, "\n");
         start_pos += 1;
    }
    return s;
}

int main() {
	
	int tem, vpr, odg, rez;
	int vel = 10 , r, i, tmp;
	int ran[vel];
	igralec.st_tock_moz = 0;
	ifstream f("vprasanja.txt");
    string s;
	ofstream myfile;
	
	cout << "////////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "                                    kviz" << endl;
	cout << endl;
	cout << "////////////////////////////////////////////////////////////////////////////////" << endl;
	
	cout << "Vnesite svoje ime: ";
	getline(cin, igralec.ime);
	cout << "Pozdravljen " << igralec.ime << "!" << endl;
	cout << endl;
	
	do {
	cout << "////////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "Napisite 0 za izhod iz kviza" << endl;
	cout << endl;
	
	cout << "Izberite tematiko:" << endl;
	cout << "  * 1 - slovenska mesta" << endl;
	cout << "  * 2 - zgodovina racunalnistva" << endl;
	cout << "  * 3 - ???" << endl;
	cout << endl;
	
	do {
		cout << "Vnesite zeljeno tematiko: ";
		cin >> tem;
		cout << endl;
		
	} while (tem!=1 && tem!=2 && tem!=3 && tem!=0);
		
	if (tem == 1) {
		rez=0;
			
		for(tmp=0, i=1; tmp<vel; i++,tmp++)
        	ran[tmp] = i;
        
        		
    	srand( time(NULL) );

   		//Fisher Yates shuffle algorithm
    	for(i=vel-1; i>0; i--) {
			r = rand()%i;
        	tmp = ran[i];
        	ran[i] = ran[r];
        	ran[r] = tmp;
    	}
        	
        for(i=0; i<5; i++) {
        	vpr=ran[i];
			cout << i+1 << ". vprasanje: " << endl;
			//cout << "ran[i]" << ran[i] << endl; //test
			
			switch (vpr) {
				
				case 1:
				for (int i = 1; i <= 1; i++)
					getline(f, s);

				fix_newlines(s);		
				cout << s;
				
				//Resetiranje pozicije kurzurja
				f.clear();
				f.seekg(0, ios::beg);
						
				odg = odgovor(3);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
					
				case 2:
				for (int i = 1; i <= 2; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
				odg = odgovor(4);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
					
				case 3: 				
				for (int i = 1; i <= 3; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
				odg = odgovor(1);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
					
				case 4:				
				for (int i = 1; i <= 4; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
				odg = odgovor(4);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
					
				case 5: 				
				for (int i = 1; i <= 5; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
				odg = odgovor(3);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
					
				case 6: 				
				for (int i = 1; i <= 6; i++)
					getline(f, s);
				
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
					
				odg = odgovor(1);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
					
				case 7: 				
				for (int i = 1; i <= 7; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
				odg = odgovor(4);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
					
				case 8:				
				for (int i = 1; i <= 8; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
				odg = odgovor(1);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
					
				case 9: 				
				for (int i = 1; i <= 9; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
				odg = odgovor(2);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
					
				case 10:				
				for (int i = 1; i <= 10; i++)
					getline(f, s);
				
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
					
				odg = odgovor(2);
							
				if (odg == 1) rez++;
					
				cout << endl;
				break;
			}
		}
	}


	if (tem == 2) {
		rez=0;

		for(tmp=0, i=1; tmp<vel; i++,tmp++)
        	ran[tmp] = i;
        		
    	srand( time(NULL) );

    	for(i=vel-1; i>0; i--) {
			r = rand()%i;
        	tmp = ran[i];
        	ran[i] = ran[r];
        	ran[r] = tmp;
    	}
        	
        for(i=0; i<5; i++) {
        vpr=ran[i];
		cout << i+1 << ". vprasanje: " << endl;
			
			switch (vpr) {
				case 1: 
				for (int i = 1; i <= 11; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(2);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 2: 
				for (int i = 1; i <= 12; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(3);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 3: 
				for (int i = 1; i <= 13; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(1);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 4:
				for (int i = 1; i <= 14; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(4);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 5:
				for (int i = 1; i <= 15; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(3);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 6: 
				for (int i = 1; i <= 16; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
					
						odg = odgovor(2);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 7: 
				for (int i = 1; i <= 17; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(1);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 8: 
				for (int i = 1; i <= 18; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(1);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 9: 
				for (int i = 1; i <= 19; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(4);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 10: 
				for (int i = 1; i <= 20; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(3);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
			}
		}
	}

	if (tem == 3) {
		rez=0;

		for(tmp=0, i=1; tmp<vel; i++,tmp++)
        	ran[tmp] = i;
        		
    	srand( time(NULL) );

    	for(i=vel-1; i>0; i--) {
			r = rand()%i;
        	tmp = ran[i];
        	ran[i] = ran[r];
        	ran[r] = tmp;
    	}
        	
        for(i=0; i<5; i++) {
        vpr=ran[i];
		cout << i+1 << ". vprasanje: " << endl;
			
			switch (vpr) {
				case 1: 
				for (int i = 1; i <= 21; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(2);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 2: 
				for (int i = 1; i <= 22; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(1);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 3: 
				for (int i = 1; i <= 23; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(4);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 4: 
				for (int i = 1; i <= 24; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(3);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 5: 
				for (int i = 1; i <= 25; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(2);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 6: 
				for (int i = 1; i <= 26; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
					
						odg = odgovor(4);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 7: 
				for (int i = 1; i <= 27; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(1);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 8: 
				for (int i = 1; i <= 28; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(3);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 9: 
				for (int i = 1; i <= 29; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(1);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
					
				case 10: 
				for (int i = 1; i <= 30; i++)
					getline(f, s);
					
				fix_newlines(s);
				cout << s;
				
				f.clear();
				f.seekg(0, ios::beg);
						
						odg = odgovor(2);
							
						if (odg == 1) rez++;
					
						cout << endl;
					break;
			}
		}
	}

	
	if (tem!=0){
	cout << igralec.ime << " v tem poskusu ste dosegli " << rez << " od 5 tock." << endl;
	igralec.st_tock+=rez;
	igralec.st_tock_moz+=5;
	cout << endl;
	}
	
} while (tem!=0);
	
	cout << "SKUPNO STEVILO TOCK: " << igralec.st_tock << " OD " << igralec.st_tock_moz << endl;
	
	myfile.open ("rezultati.txt", std::ofstream::out | std::ofstream::app);
	myfile << "Igralec: " << igralec.ime << endl;
	myfile << "Stevilo tock: " << igralec.st_tock << " / " << igralec.st_tock_moz << endl;
    myfile << "-----------------------------------------------------"  << endl;
    myfile.close();
	
	return 0;
}			


int odgovor(int p_odg) {
	int odg;
	do {
		cout << "Odgovor: ";
		cin >> odg;
	} while (odg!=1 && odg!=2 && odg!=3 && odg!=4);
						
	if (odg==p_odg){
		cout << "Pravilno!" << endl;
		return 1;
	} 
	
	else {
		cout << "Napacno!"<< endl;
		return 0;
	}
}

