#include <string>
#include <iostream>
//onathan Kellermann 214502067 
using namespace std;

class TicTacToe
{
private: 
	char player;//which players turn and winner
	int move;// what move we on max 9
	char grid[3][3];
	
public:
	TicTacToe();
	void reset();
	bool move(int,int);
	void print();
	bool over();
	char wincheck(char);
	~TicTacToe();

};

int main()
{
	TicTacToe myGame;
	int x;
	int y;
	cout << "Welcome to Tic Tac Toe" << endl;
	while (true)
	{
		myGame.print();
		cout << "Enter Collum";
		cin >> x;
		cout << "Enter Row";
		cin >> y;
		bool play =myGame.move(x,y);

	}
}

