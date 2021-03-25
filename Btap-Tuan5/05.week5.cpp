#include <iostream>
using namespace std;

int main()
{
	int a=1, b=2;
	int &thamChieu = a;
	cout << &a << ' ' << &thamChieu << endl;
	// Bien tham chieu va bien la 1 bien trong bo nho

	// Khong the khai bao 1 tham chieu ma chua chieu ngay no toi 1 bien thuong

	thamChieu = b;
	cout << &b << ' ' << &thamChieu << endl;
	// bien tham chieu tro ve dia chi bien ban dau
	return 0;
}
