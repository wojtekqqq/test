#include <iostream>
using namespace std;

int main() {
    int ile_liczb;
    int pierwsza;
    int kolejne;
    cout << "Ile liczb chcesz podac ? " << endl;
    cin >>ile_liczb;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> pierwsza;
    int max = pierwsza;
    for (int i = 1; i < ile_liczb ; ++i) {
        cout << "Podaj kolejna liczbe" << endl;
        cin >> kolejne;
        if (kolejne > max)
        {
            max = kolejne;
        }

    }
    cout << max;
    //testowy
    //drugi commit

    return 0;
}
