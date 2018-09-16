#include <iostream>
using namespace std;

int main(){
    short short1 = 4;    
    cout << bitset<8>(short1) << endl; 
    short short2 = short1 << 1; 
    cout << bitset<8>(short2) << endl;   
    short short3 = short1 >> 2;  
    cout << bitset<8>(short3) << endl; 
}