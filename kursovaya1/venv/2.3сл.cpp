#include <iostream>

using namespace std;

int main() {
    cout << "Заказ гостиницы на курорте Трускавец" << endl;
    cout << "Количество звезд: " << endl;
    int stars;
    cin >> stars;
    while ((stars < 3) || (stars > 5)) {
        cout << "Ошибка. Введите количество звезд от 3 до 5. Количество звезд: " << endl;
        cin >> stars;
    }
    if (stars == 3) {
        cout << "Количество мест в номере: " << endl;
        int rooms;
        cin >> rooms;
        while ((rooms < 1) || (rooms > 2)){
            cout << "Ошибка. Введите количество мест в номере от 1 до 2. Количетво мест в номере: " << endl;
            cin >> rooms;
        }
        if (rooms == 1){
            cout << "Выберите тип проживания: 1. С питанием 2. Без питания. " << endl;
            int c;
            cin >> c;
            while ((c < 1) or (c > 2)){
                cout << "Ошибка. Выберите тип проживания от 1 до 2. Тип проживания: " << endl;
                cin >> c;
            }
            if (c == 1)
                cout << "Стоимость проживания 500гр. Гостиница забронирована." << endl;
            if (c == 2)
                cout << "Стоимость проживания 300гр. Гостиница забронирована." << endl;
        }
        if (rooms == 2){
            cout << "Выберите тип проживания: 1. С питанием 2. Без питания. " << endl;
            int c;
            cin >> c;
            while ((c < 1) or (c > 2)){
                cout << "Ошибка. Выберите тип проживания от 1 до 2. Тип проживания: " << endl;
                cin >> c;
            }
            if (c == 1)
                cout << "Стоимость проживания 800гр. Гостиница забронирована." << endl;
            if (c == 2)
                cout << "Стоимость проживания 450гр. Гостиница забронирована." << endl;
        }
    }

    if (stars == 4) {
        cout << "Количество мест в номере: " << endl;
        int rooms;
        cin >> rooms;
        while ((rooms < 1) || (rooms > 2)){
            cout << "Ошибка. Введите количество мест в номере от 1 до 2. Количетво мест в номере: " << endl;
            cin >> rooms;
        }
        if (rooms == 1){
            cout << "Выберите тип проживания: 1. С питанием 2. Без питания. " << endl;
            int c;
            cin >> c;
            while ((c < 1) or (c > 2)){
                cout << "Ошибка. Выберите тип проживания от 1 до 2. Тип проживания: " << endl;
                cin >> c;
            }
            if (c == 1)
                cout << "Стоимость проживания 900гр. Гостиница забронирована." << endl;
            if (c == 2)
                cout << "Стоимость проживания 600гр. Гостиница забронирована." << endl;
        }
        if (rooms == 2){
            cout << "Выберите тип проживания: 1. С питанием 2. Без питания. " << endl;
            int c;
            cin >> c;
            while ((c < 1) or (c > 2)){
                cout << "Ошибка. Выберите тип проживания от 1 до 2. Тип проживания: " << endl;
                cin >> c;
            }
            if (c == 1)
                cout << "Стоимость проживания 1500гр. Гостиница забронирована." << endl;
            if (c == 2)
                cout << "Стоимость проживания 900гр. Гостиница забронирована." << endl;
        }
    }

    if (stars == 5) {
        cout << "Количество мест в номере: " << endl;
        int rooms;
        cin >> rooms;
        while ((rooms < 1) || (rooms > 2)){
            cout << "Ошибка. Введите количество мест в номере от 1 до 2. Количетво мест в номере: " << endl;
            cin >> rooms;
        }
        if (rooms == 1){
            cout << "Выберите тип проживания: 1. С питанием 2. Без питания. " << endl;
            int c;
            cin >> c;
            while ((c < 1) or (c > 2)){
                cout << "Ошибка. Выберите тип проживания от 1 до 2. Тип проживания: " << endl;
                cin >> c;
            }
            if (c == 1)
                cout << "Стоимость проживания 1500гр. Гостиница забронирована." << endl;
            if (c == 2)
                cout << "Стоимость проживания 1000гр. Гостиница забронирована." << endl;
        }
        if (rooms == 2){
            cout << "Выберите тип проживания: 1. С питанием 2. Без питания. " << endl;
            int c;
            cin >> c;
            while ((c < 1) or (c > 2)){
                cout << "Ошибка. Выберите тип проживания от 1 до 2. Тип проживания: " << endl;
                cin >> c;
            }
            if (c == 1)
                cout << "Стоимость проживания 2500гр. Гостиница забронирована." << endl;
            if (c == 2)
                cout << "Стоимость проживания 1500гр. Гостиница забронирована." << endl;
        }
    }
}
