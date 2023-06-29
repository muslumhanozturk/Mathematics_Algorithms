#include<iostream>
using namespace std;

int main(void)
{
	int toplam = 0;
	for (int sayi = 1; sayi < 1000; sayi++)
		if (sayi % 15 == 0 )
			toplam += sayi;
	cout << "1-1000 arasi sayilardan 3e ve 5e tam bolunenlerin toplami: <" << toplam << ">";
	getchar();
	return 0;
}
