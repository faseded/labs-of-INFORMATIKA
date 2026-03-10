#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    bool select = 1;
	while(select){
        int size;
        cout << "Enter size of vector: ";
        cin >> size;
        while(cin.fail() || size <= 0) { 
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "incorect input, size must be a number > 0. try again \n"; 
            cin >> size; 
        } 

        vector<pair<int, int>> numbers(size);
        for (int i = 0; i < size; ++i) {
            cout << "Input the integer #" << i + 1 << ' ';
            cin >> numbers[i].first;
            while(cin.fail()) { 
                cin.clear(); 
                cin.ignore(10000, '\n'); 
                cout << "incorect input, integer must be a number. try again \n"; 
                cin >> numbers[i].first; 
            }
            numbers[i].second = i + 1;
        }

        sort(numbers.begin(), numbers.end());

        cout << "Index: ";
        for (int i = 0; i < size; ++i) {
            cout << numbers[i].second << ' ';
        }
        cout << endl;
    
	    cout << "Continue:\n" << "0. No  " << "1. Yes\n";
        cin >> select;
        while (cin.fail()) { 
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "incorect input. try again \n"; 
            cin >> select; 
        } 
	}
    cout << "Exit";
    return 0;
}