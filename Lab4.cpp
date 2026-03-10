#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {

    bool select = 1;
	while(select){
	    string filename;
        cout << "Input a filename: ";//получаем от пользователя название файла для открытия
        cin >> filename;
    
        ifstream inpfile(filename); // открываем файл для чтеения
        if (!(inpfile.is_open())) {
            cout << "Error file open";
        }
    
        else {
            char ch;
            int vowels = 0;
            int consonants = 0;
            
            while (inpfile.get(ch)) { //по элеиенту считывает данные из файла
                if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') { // проверка на то, что символ буква
                    string vow = "AOUEYIaoueyi";
                    string conson = "QWRTPSDFGHJKLZXCVBNMqwrtpsdfghjklzxcvbnm";
                    int i = 0;
                    while (i < conson.size()){ // сравниваем со строкой согласных и, если найдём, увеличиваем счётчик для согласных
                        if (ch == conson[i]) consonants++;
                        i++;
                    }
                    i = 0;
                    while(i < vow.size()){ // сравниваем со строкой гласных и, если найдём, увеличиваем счётчик для гласных
                        if (ch == vow[i]) vowels++;
                        i++;
                    }
                } 
            }
        
            cout << "Vowels: " << vowels << endl << "Consonants: " << consonants << endl; // выводим значения
        }
	
	
	    cout << "Continue:\n" << "0. No  " << "1. Yes\n";//пременная для продолжения программы
        cin >> select;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error input. Try again"; cin >> select;
        }
	}
    cout << "Exit";
    return 0;
}

