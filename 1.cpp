#include <iostream>
using namespace std;
char  a[3][3] = { '1','2','3','4','5','6','7','8','9'};
char k = 'X'; char d = 'O';
void print()
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	/* 1 2 3
	   4 5 6
	   7 8 9 */

}
void valueX()
{
	
	int b = 0; 
	cout << " nhap vi tri cho X : ";
	cin >> b;
	if (b == 1 || b == 2 || b == 3)
	{
		a[0][b - 1] = k;

	}
	else if (b == 4 || b == 5 || b == 6)
	{
		a[1][b - 4] = k;
	}
	else if (b == 7 || b == 8 || b == 9)
	{
		a[2][b - 7] = k;
	}
	
}

void valueO()
{
	
	int b = 0;
	cout << " nhap vi tri cho O : ";
	cin >> b;
	if (b == 1 || b == 2 || b == 3)
	{
		a[0][b - 1] = d;

	}
	else if (b == 4 || b == 5 || b == 6)
	{
		a[1][b - 4] = d;
	}
	else if (b == 7 || b == 8 || b == 9)
	{
		a[2][b - 7] = d;
	}

}

char check()
{
	/*00 01 02
	* 10 11 12
	* 20 21 22
	*/
	if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
		return 'X';
	if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
		return 'X';
	if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
		return 'X';

	if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
		return 'X';
	if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
		return 'X';
	if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
		return 'X';

	if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
		return 'X';
	if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
		return 'X';
}

char check2()
{
	if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')
		return 'O';
	if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')
		return 'O';
	if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')
		return 'O';

	if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')
		return 'O';
	if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')
		return 'O';
	if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')
		return 'O';

	if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
		return 'O';
	if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
		return 'O';
}

int main()
{
	while (1) {
		
		print();
		valueX();		
		valueO();
		if (check() == 'X')
		{
			cout << "X win " << endl;
			break;
		}
		if (check2() == 'O')
		{
			cout << "O win " << endl;
			break;
		}
	}
	system("pause");
	return 0;
}