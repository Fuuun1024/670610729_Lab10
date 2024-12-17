//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int i = 0;
    double sum1 = 0;
    double sum2 = 0;
    double mean = 0;
    double Standard = 0;
    ifstream source;
	source.open("score.txt");
	string textline;
	while(getline(source, textline)){
	     i++;
	     sum1+= stod(textline);
	     sum2+= pow(stod(textline),2);
	}
	
    mean = sum1/(i);
    
    Standard = pow( ((sum2/i) - pow(mean,2) ),0.5);
    
    cout << "Number of data = "<< i << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean << "\n";
    cout << "Standard deviation = "<< Standard;
}