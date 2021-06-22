#include<iostream>
using namespace std;

void MakeBox(int num)
{
	for (int rows = 0; rows < num; rows++)
	{
		for (int col = 0; col < num; col++)
		{
			if (rows == 0 || rows == num - 1)
			{
				cout << "#";
				continue;
			}
			if (col == 0 || col == num - 1)
			{
				cout << "#";
				continue;
			}
			else
			{
				cout << " ";
				continue;
			}
		}
		cout << endl;

	}
}



int main()
{
	MakeBox(5);
}