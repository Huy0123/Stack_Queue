#include "Stack.h"
#include <iostream>
#include"Queue.h"
#include"Matran.h"
using namespace std;

int main() {
    int choice,x;
    Stack* a = new Stack();
    Queue* b = new Queue();
    Matran c;
    while (true)
    {
        cout << "Menu" << endl;
        cout << "1. Stack" << endl;
        cout << "2. Queue" << endl;
        cout << "3. Chuyen he 10 sang he nhi phan" << endl;
        cout << "4. Tim duong di tu d1 den d2" << endl;
        cout << "5. Thoai" << endl;
        
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice)
        {

        case 1:
            for (int i = 0; i < 3; i++) {
                cout << "Nhap gia tri vao stack: ";
                cin >> x;
                a->push(x);
            }
            for (int i = 0; i < 4; i++) {
                int poppedValue = a->pop();
                if (poppedValue != NULL) {
                    cout << "Gia tri duoc lay ra tu stack: " << poppedValue << endl;
                }
                else {
                    cout << "STACK RONG, KHONG LAY DUOC PHAN TU" << endl;
                }
            }
            break;
        case 2:
            for (int i = 0; i < 3; i++) {
                cout << "Nhap gia tri vao queue: ";
                cin >> x;
                b->push(x);
            }
            cout << endl;

            for (int i = 0; i < 4; i++) {
                int poppedValue = b->pop();
                if (poppedValue != NULL) {
                    cout << "Gia tri duoc lay ra tu stack: " << poppedValue << endl;
                }
                else {
                    cout << "QUEUE RONG, KHONG LAY DUOC PHAN TU" << endl;
                }
            }
            break;
        case 3:
            cout << "Nhap he 10: ";
            cin >> x;
            a->henhiphan(x);
            cout << endl;
            break;
        case 4:
            if (c.kiemtra()) {
                cout << "d1 co the di qua d2"<<endl;
            }
            else cout << "d1 ko the di qua d2"<<endl;
            break;
        case 5:
            delete a;
            delete b;
            return 0;
        default:
            std::cout << "Lua chon khong hop le. Vui long chon lai." << std::endl;
        }
    }
    return 0;
}
