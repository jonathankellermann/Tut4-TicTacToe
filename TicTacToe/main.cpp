#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe()
{
	reset();
}

//Clear Table
void TicTacToe::reset()
{
	for (int i = 0; i < 3; i++)
	{
		for (int t = 0; t < 3; t++)
		{
			grid[i][t] = ' ';
		}

	}
}
//Make Move
bool TicTacToe::move(int x, int y)
{
	if (grid[x][y] != ' ')
	{
		if (int i = 1)
		{
			grid[x][y] = 'x';
		}
		else
		{
			grid[x][y] = 'o';
		}
		return true;
	}
	else
	{
		return false;
	}
}
//Prints Table
void TicTacToe::print()
{
	for (int i = 0; i < 3; i++)
	{
		for (int t = 0; t < 3; t++)
		{
			cout << grid[i][t] << " " << endl;
		}
		cout << endl;
	}
}
// result discover draw,x,o or not complete
bool TicTacToe::over()
{
	char checkx = wincheck('x');
	char check0 = wincheck('o');
	if (check0 == 'o'&& check0 == 'x')
	{
		player = 'd';
		return false;
	}
	if (checkx == 'x')
	{
		player = 'x';
		return true;
	}
	if (checkx == 'o')
	{
		player = 'o';
		return true;
	}
	return false;
}
//Checks for matches 
char TicTacToe::wincheck(char p)
{
	//rows
	for (int z = 0; z < 3; z++)
	{
		if (grid[z][0] &= grid[z][1] &= grid[z][2])
		{
			return p;
		}
	}
	//colomns
	for (int z = 0; z < 3; z++)
	{
		if (grid[0][z] &= grid[1][z] &= grid[1][z])
		{
			return p;
		}
	}
	//Diagonal
	if (grid[0][0] &= grid[1][1] &= grid[2][2])
	{
		return p;
	}
	//No Match 
	return ' ';

}