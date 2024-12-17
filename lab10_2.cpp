#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string textline;
	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ
	cout << "-------------------- BOOM ---------------------\n";
	//bool havetext;
	//havetext = getline(source, texline);
	while(getline(source, textline)){
	    cout << textline << '\n';
	}
	
	cout << "-------------------- HA!! ---------------------";
    
    source.close();
    dest.close();
	return 0;
}
