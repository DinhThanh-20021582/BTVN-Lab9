#include<iostream>

using namespace std;

int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
}
//Lenh cerr thu 3 kh�ng chay ��ng vi theo code muc ti�u output la: -ccc-
// Ta nen truyen cac phan tu cua xau 1 vao xau 2 va xoa cac phan cua c di

