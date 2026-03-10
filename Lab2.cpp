#include <iostream>
using namespace std;

int main() {
    double force, t, mass, x_0 = 0, v_0 = 0, v, x, a;// инициализируем переменные
    bool flag = 1;
    
    cout << "input a mass of body: ";// ввод массы
    cin >> mass;
    while(cin.fail() || mass <= 0) { 
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "incorect input, mass must be a number > 0. try again \n"; 
            cin >> mass; 
        }
    while (flag) {// цикл для продолжения программы
        cout << "input force (positive or negative): ";// ввод силы
        cin >> force;
        while(cin.fail()) { 
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "incorect input, forse must be a number. try again \n"; 
            cin >> force; 
        }
        
        cout << "input time of influence: ";// ввод времени
        cin >> t;
        while(cin.fail() || t <= 0) { 
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "incorect input, time must be a number > 0. try again \n"; 
            cin >> t; 
        }
    
        a = force / mass;// рассчёт
        v = v_0 + (a * t);
        x = x_0 + (v_0 * t) + (a * (t * t)) / 2;
        x_0 = x;
        v_0 = v;
        
        
        cout << "Current position: " << x_0 << endl;// вывод позиции
        
        
        
        cout << "continue?: 0.No 1.Yes\n";
        cin >> flag;
        while(cin.fail()) { 
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "incorect input. try again \n"; 
            cin >> flag; 
        }
    }
    return 0;
}