#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    int numb = 0;
    float sum = 0;
    string textline;
    double mean,standard1,sum2;
    ifstream source ("score.txt");
    while (getline(source,textline))
    {
        sum += stod(textline.c_str());
        sum2 += pow(stod(textline.c_str()),2);
        numb++;
    }
    mean = sum / (double)numb;
    standard1 = sqrt(((1/(double)numb)*sum2) - pow(mean,2));
    cout << "Number of data = " << numb << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << standard1;
    source.close();
}
