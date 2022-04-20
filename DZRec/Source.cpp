#include<iostream>
using namespace std;

//int main(int a)
//{
//	int b = 5;
//
//	if (a <= b)
//	{
//		cout << a << ", ";
//		main(a + 1);
//	}
//}

//2.

//int smaller(int al, int bl)
//{
//	if (al <= bl)
//	{
//		cout << al << endl;
//		smaller(al + 1, bl);
//	}
//	return al;
//}
//
//int more(int am, int bm)
//{
//	if (am >= bm)
//	{
//		cout << am << endl;
//		more(am - 1, bm);
//	}
//	return am;
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	system("cls");
//
//	if (a > b)
//	{
//		more(a, b);
//	}
//	else
//	{
//		smaller(a, b);
//	}
//}

//3.

//bool stepen(int ab, int b = 2)
//{
//	if ((double)ab / 2 != ab / 2 )
//	{
//		return false;
//	}
//	if (ab == b)
//	{
//		return true;
//	}
//	else 
//	{
//		stepen(ab, b * 2);
//	}
//	
//}
//int main()
//{
//	int a;
//	cin >> a;
//	if (stepen(a) == true)
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}

//4.

/*int Sum(int a)
{
	if (a < 10) {
		return a;
	}

	else {
		return (a % 10) + Sum(a / 10);
	}
}

int main()
{
	int b;
	cin >> b;

	cout << Sum(b) << endl;
}*/

//5.

//int Num(int a)
//{
//	if (a < 10)
//	{
//		cout << a;
//		return a;
//	}
//	else
//	{
//		cout << (a % 10) << " ";
//		Num(a / 10);
//	}
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	Num(a);
//}