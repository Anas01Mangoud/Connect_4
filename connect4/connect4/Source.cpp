#include <iostream>
using namespace std;
#include <string>
int main()
{
	string matrix[6][7] = { " " };
	bool end = 1;//to end the loop when player wins
	string player1, player2; //to take the name of players
	cout << " \t\t Hello  \" Have Fun Guys \".......let's start:\n";
	cout << "\t\t\tplayer1,enter your name please: \n";
	getline(cin, player1);
	cout << "\t\t\tplayer2,enter your name please: \n";
	getline(cin, player2);
	system("cls");
	cout << "\t\t\t   1    2    3    4    5    6    7   \n";
	cout << "\t\t\t  ____ ____ ____ ____ ____ ____ ____   \n ";
	for (int i = 0; i < 6; i++)
	{
		cout << "\t\t\t";
		for (int j = 0; j < 7; j++)
		{
			cout << " |  " << matrix[i][j];
		}
		cout << " |" << endl;
		cout << "\t\t\t  ____ ____ ____ ____ ____ ____ ____   \n";
	}


	for (int i = 0; end; i++)//this loop for who will play
	{
		int x = 0, z = 5;//x=col   and z= row
		system("color 4b");
		if (i % 2 == 0) //when i%2==0 player1 will play
		{
			cout << "\t\t playr1 \"" << player1 << "\"will play now!!\n";
			cin >> x;
			while (matrix[z][x - 1] == "X" || matrix[z][x - 1] == "O")
				z--;

			matrix[z][x - 1] = "X";
		}
		else//when not i % 2!=0 the player2 will play
		{
			system("color 4a");
			cout << "\t\t player \"" << player2 << "\" will play now !!\n";
			cin >> x;
			while (matrix[z][x - 1] == "X" || matrix[z][x - 1] == "O")
				z--;

			matrix[z][x - 1] = "O";
		}
		system("cls");
		{
			cout << "\t\t\t   1    2    3    4    5    6    7   \n";//this loop to print x or o;
			cout << "\t\t\t  ____ ____ ____ ____ ____ ____ ____   \n";
			for (int g = 0; g < 6; g++)
			{
				cout << "\t\t\t";
				for (int j = 0; j < 7; j++)
				{
					cout << " |  " << matrix[g][j];
				}
				cout << " |\n";
				cout << "\t\t\t ____ ____ ____ ____ ____ ____ ____   \n";
			}
		}
		if (i >= 5)
		{
			for (int q = 0; q < 6; q++)
			{
				for (int w = 0; w < 6; w++)
				{
					//condition for row
					if ((matrix[q][w] == "X" && matrix[q][w + 1] == "X" && matrix[q][w + 2] == "X" &&matrix[q][w + 3] == "X") || (matrix[q][w] == "X" && matrix[q + 1][w] == "X" &&matrix[q + 2][w] == "X" &&matrix[q + 3][w] == "X") || (matrix[q][w] == "X" && matrix[q + 1][w + 1] == "X" && matrix[q + 2][w + 2] == "X" &&matrix[q + 3][w + 3] == "X") || (matrix[q][w] == "X" &&matrix[q + 1][w - 1] == "X" &&matrix[q + 2][w - 2] == "X" &&matrix[q + 3][w - 3] == "X"))
					{
						cout << "\t\t \"" << player1 << "\" Wins .. Congratulations: \n";
						cout << "\t\t \"" << player2 << " lose ....... hardluck: \n";
						end = 0;
						break;
					}
					//condition for colomun
					else if ((matrix[q][w] == "o" && matrix[q][w + 1] == "O" &&matrix[q][w + 2] == "O" &&matrix[q][w + 3] == "O") || (matrix[q][w] == "O" && matrix[q + 1][w] == "O" &&matrix[q + 2][w] == "O" &&matrix[q + 3][w] == "O") || (matrix[q][w] == "O" && matrix[q + 1][w + 1] == "O" && matrix[q + 2][w + 2] == "O" &&matrix[q + 3][w + 3] == "O") || (matrix[q][w] == "O" &&matrix[q + 1][w - 1] == "O" &&matrix[q + 2][w - 2] == "O" &&matrix[q + 3][w - 3] == "O"))
					{
						cout << "\t\t \"" << player2 << "\" Wins .. Congratulations: \n";
						cout << "\t\t \"" << player1 << "\" lose ....... hardluck: \n";
						end = 0;
						break;
					}
				}
			}

		}
	}
	cout << endl;
	system("pause");
	return 0;


}