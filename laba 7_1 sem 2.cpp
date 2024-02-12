//
//  main.cpp
//  лаба 7_1 сем 2
//
//  Created by Andrey Scherbakov on 12.02.2024.
//

#include <iostream>
#include <string>
using namespace std;
const int n = 10;
int NechetEl(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int KolvoSlov(string str) {
    int count = 0;
    bool b = false;
    for (char c : str) {
        if (c == ' ' || c == '\t' || c == '\n') {
            b = false;
        } else if (!b) {
            b = true;
            count++;
        }
    }
    return count;
}

int main() {
    int a[n];
    cout<<"Исходный массив: "<<"\n";
    for(int i = 0; i<n; i++){
        a[i] = rand() % 50;
        cout<<a[i]<<"\t";
    }
    cout<<endl;

    cout << "Количество нечетных элементов в массиве: " << NechetEl(a, n) << endl;

    string str = "Это пример строки с несколькими словами";
    cout<<"Исходная строка: "<<"\n"<<str << "\n";

    cout << "Количество слов в строке: " << KolvoSlov(str) << endl;

    return 0;
}
