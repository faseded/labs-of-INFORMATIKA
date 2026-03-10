#include<iostream>
#include <cmath>
using namespace std;


int main() { 
    
    int inp_data, sum1, sum2;
    bool select = 1;
	while(select) {
        cout << "Enter even number length\n";
	    cin >> inp_data;
	    
        while (cin.fail() || inp_data % 2 !=0 ||inp_data <= 0) // проверка длины
	    {
		    cin.clear();
		    cin.ignore(1000, '\n');
		    cout << "incorrect input\n" << "Enter even number length\n"; cin >> inp_data;
	    }
	    
        int count = 0;
        for(int first_half = 0; first_half < pow(10, inp_data / 2); first_half++){ //цикл для чисел первой половины
            for(int second_half = 0;second_half < pow(10, inp_data / 2); second_half++){ //цикл для чисел второй половины
                sum1 = 0;
                sum2 = 0;
                int tmp_1st = first_half;
                int tmp_2nd = second_half;
                for(int digit = 0; digit < inp_data / 2; ++digit) { //цикл для разбиения на числа
                    sum1 += tmp_1st % 10;
                    sum2 += tmp_2nd % 10;
                    tmp_1st /= 10;
                    tmp_2nd /= 10;
                }
                if (sum1 == sum2) { // если сумма первой половины равна сумме второй, то прибавляем счётчик
                    count++;
                }
            }
        }
        
        cout << "count of happy ticket = "<< count << endl 
        << "continue?: 0.No 1.Yes\n";
        cin >> select;
        while (cin.fail()) { // проверка ввода
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "incorect input. try again \n"; 
            cin >> select; 
        }
	}
	cout << "Exit";
    return 0;
} 