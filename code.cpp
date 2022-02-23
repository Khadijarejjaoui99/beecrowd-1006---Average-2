// Solution of 1006 - Average 2 in beecrowd
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double A, B, C, MEDIA; 
    cin>>A >> B>>C;
    MEDIA =(( A*2)+(B*3)+(C*5))/(2+3+5);
    cout << "MEDIA = " <<fixed<<setprecision(1)<< MEDIA <<"\n";
    system("pause");
    return 0;
}