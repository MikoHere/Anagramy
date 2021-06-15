#include <iostream>
#include <fstream>
#include <string>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class anagramy{
	ifstream wejscie;
	ofstream wyjscie;
	string s1[1000], s2[1000];
	bool jednolity(string s)
	{ 
 		for(int i=1; i<s.length(); i++)
 		if (s[i]!=s[0]) return false;
 		return true;
} 
public:
	void open();
	void loop();
	void close();
};
void anagramy::open()
{
	wejscie.open("dane_napisy.txt");
	wyjscie.open("wyniki_anagramy.txt");
}
void anagramy::loop()
{
	int ileZ1=0;
	for (int i=0; i<1000; i++)
	{
		wejscie>>s1[i];
		wejscie>>s2[i];	
	
	if (jednolity(s1[i]))
	if (s1[i]==s2[i]) ileZ1++; 

	}
	wyjscie<<"68.1: "<<ileZ1;
}
void anagramy::close()
{
	wejscie.close();
	wyjscie.close();
}

int main(int argc, char** argv) {
	anagramy a;
	a.open();
	a.loop();
	a.close();
	return 0;
}
