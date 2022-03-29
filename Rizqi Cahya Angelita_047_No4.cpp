#include <iostream>
using namespace std;

int main(){
    string kata;
    int n, i;
    bool palindrome = true;
 
    cout << "Program Mengecek Kata Palindrom atau Bukan" << endl;
    cout << "Kalimat : ";
    getline(cin, kata);
    n = kata.length();

    for(i = 0; i < n; i++){
        if(kata[i] != kata[n-i-1])
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome == true)
        cout << "Kalimat tersebut adalah Palindrom";
    else
        cout << "Kalimat tersebut bukan Palindrom";

    cin.ignore();
    return 0;
}
