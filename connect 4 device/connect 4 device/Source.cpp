#include<iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'x';
void printmatrix()
{
	system("cls");
	system("COLOR 3F");  // to add color
	system("TIME /t");   // to add time
	cout << "_________" << endl;
	cout << "\t\t\t\t\t\tX O " << endl;
	cout << "\t\t\t\t\t       _____" << endl;
	cout << "\t\t\t\t\t        ___" << endl;
	cout << "\t\t\t\t\t         _ " << endl;
	cout << "\t\t\t\t\t _____ _____ _____" << endl;
	cout << "\t\t\t\t\t|     |     |     |" << endl;
	cout << "\t\t\t\t\t|  " << matrix[0][0] << "  |  " << matrix[0][1] << "  |  " << matrix[0][2] << "  |  " << endl;
	cout << "\t\t\t\t\t|_____|_____|_____|" << endl;
	cout << "\t\t\t\t\t|     |     |     |" << endl;
	cout << "\t\t\t\t\t|  " << matrix[1][0] << "  |  " << matrix[1][1] << "  |  " << matrix[1][2] << "  |  " << endl;
	cout << "\t\t\t\t\t|_____|_____|_____|" << endl;
	cout << "\t\t\t\t\t|     |     |     |" << endl;
	cout << "\t\t\t\t\t|  " << matrix[2][0] << "  |  " << matrix[2][1] << "  |  " << matrix[2][2] << "  |  " << endl;
	cout << "\t\t\t\t\t|_____|_____|_____|" << endl;
	//cout << "     |     |     " << endl;
	/*for(int i=0 ; i<3 ; i++)
	{for (int j=0 ; j<3 ; j++)
	{
	Console.foregroundColor=ConsoleColor.DarkRed;
	cout<<"  "<<matrix[i][j]<<"  | ";}
	cout<<endl;
	}*/
}
void play()
{
	char pos;
	cout << "\n\t\t\t\t choose the position " << " - (" << player << ") : ";
	cin >> pos;
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			{
				if (matrix[i][j] == pos)  // to replace num of box with index >> x || o
				{
					if (matrix[i][j] != 'x' && matrix[i][j] != 'o') // to make sure the cell is not used
						matrix[i][j] = 'x';


					if (matrix[0][0] == 'o'&&matrix[0][1] == 'o'&&matrix[0][2] != 'x'&&matrix[0][2] != 'o')
						matrix[0][2] = 'o';
					else if
						(matrix[0][0] == 'o'&&matrix[0][2] == 'o'&&matrix[0][1] != 'x'&&matrix[0][1] != 'o')
						matrix[0][1] = 'o';
					else if
						(matrix[0][1] == 'o'&&matrix[0][2] == 'o'&&matrix[0][0] != 'x'&&matrix[0][0] != 'o')
						matrix[0][0] = 'o';//first row
					else if
						(matrix[1][0] == 'o'&&matrix[1][1] == 'o'&&matrix[1][2] != 'x'&&matrix[1][2] != 'o')
						matrix[1][2] = 'o';
					else if
						(matrix[1][2] == 'o'&&matrix[1][1] == 'o'&&matrix[1][0] != 'x'&&matrix[1][0] != 'o')
						matrix[1][0] = 'o';
					else if
						(matrix[1][2] == 'o'&&matrix[1][0] == 'o'&&matrix[1][1] != 'x'&&matrix[1][1] != 'o')
						matrix[1][1] = 'o';//second row
					else if
						(matrix[2][0] == 'o'&&matrix[2][1] == 'o'&&matrix[2][2] != 'x'&&matrix[2][2] != 'o')
						matrix[2][2] = 'o';
					else if
						(matrix[2][2] == 'o'&&matrix[2][1] == 'o'&&matrix[2][0] != 'x'&&matrix[2][0] != 'o')
						matrix[2][0] = 'o';
					else if
						(matrix[2][0] == 'o'&&matrix[2][2] == 'o'&&matrix[2][1] != 'x'&&matrix[2][1] != 'o')
						matrix[2][1] = 'o';//third row
					else if
						(matrix[0][0] == 'o'&&matrix[2][0] == 'o'&&matrix[1][0] != 'x'&&matrix[1][0] != 'o')
						matrix[1][0] = 'o';
					else if
						(matrix[1][0] == 'o'&&matrix[2][0] == 'o'&&matrix[0][0] != 'x'&&matrix[0][0] != 'o')
						matrix[0][0] = 'o';
					else if
						(matrix[0][0] == 'o'&&matrix[1][0] == 'o'&&matrix[2][0] != 'x'&&matrix[2][0] != 'o')
						matrix[2][0] = 'o';//first col
					else if
						(matrix[0][1] == 'o'&&matrix[1][1] == 'o'&&matrix[2][1] != 'x'&&matrix[2][1] != 'o')
						matrix[2][1] = 'o';
					else if
						(matrix[2][1] == 'o'&&matrix[1][1] == 'o'&&matrix[0][1] != 'x'&&matrix[0][1] != 'o')
						matrix[0][1] = 'o';
					else if
						(matrix[2][1] == 'o'&&matrix[0][1] == 'o'&&matrix[1][1] != 'x'&&matrix[1][1] != 'o')
						matrix[1][1] = 'o';//second col
					else if
						(matrix[0][2] == 'o'&&matrix[1][2] == 'o'&&matrix[2][2] != 'x'&&matrix[2][2] != 'o')
						matrix[2][2] = 'o';
					else if
						(matrix[2][2] == 'o'&&matrix[0][2] == 'o'&&matrix[1][2] != 'x'&&matrix[1][2] != 'o')
						matrix[1][2] = 'o';
					else if
						(matrix[2][2] == 'o'&&matrix[1][2] == 'o'&&matrix[0][2] != 'x'&&matrix[0][2] != 'o')
						matrix[0][2] = 'o';//thrid col
					else if
						(matrix[0][0] == 'o'&&matrix[1][1] == 'o'&&matrix[2][2] != 'x'&&matrix[2][2] != 'o')
						matrix[2][2] = 'o';
					else if
						(matrix[0][0] == 'o'&&matrix[2][2] == 'o'&&matrix[1][1] != 'x'&&matrix[1][1] != 'o')
						matrix[1][1] = 'o';
					else if
						(matrix[2][2] == 'o'&&matrix[1][1] == 'o'&&matrix[0][0] != 'x'&&matrix[0][0] != 'o')
						matrix[0][0] = 'o';//slope to right
					else if
						(matrix[1][1] == 'o'&&matrix[0][2] == 'o'&&matrix[2][0] != 'x'&&matrix[2][0] != 'o')
						matrix[2][0] = 'o';
					else if
						(matrix[2][0] == 'o'&&matrix[1][1] == 'o'&&matrix[0][2] != 'x'&&matrix[0][2] != 'o')
						matrix[0][2] = 'o';
					else if
						(matrix[2][0] == 'o'&&matrix[0][2] == 'o'&&matrix[1][1] != 'x'&&matrix[1][1] != 'o')
						matrix[1][1] = 'o';//slope to left

					else if (pos == '1')
					{
						if (pos == '1'&&matrix[0][1] == 'x'&&matrix[0][2] != 'x'&& matrix[0][2] != 'o')    matrix[0][2] = 'o';

						else if (pos == '1'&&matrix[0][2] == 'x'&&matrix[0][1] != 'x'&& matrix[0][1] != 'o')    matrix[0][1] = 'o';

						else if (pos == '1'&&matrix[1][1] == 'x'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')    matrix[2][2] = 'o';

						else if (pos == '1'&&matrix[2][2] == 'x'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')    matrix[1][1] = 'o';

						else if (pos == '1'&&matrix[1][0] == 'x'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')    matrix[2][0] = 'o';

						else if (pos == '1'&&matrix[2][0] == 'x'&&matrix[1][0] != 'x'&& matrix[1][0] != 'o')    matrix[1][0] = 'o';

						else if (pos == '1'&&matrix[1][1] != 'x'&&matrix[1][1] != 'o')           matrix[1][1] = 'o';

						else if (pos == '1'&&matrix[0][1] != 'x'&&matrix[0][1] != 'o')           matrix[0][1] = 'o';

						else if (pos == '1'&&matrix[0][2] != 'x'&&matrix[0][2] != 'o')           matrix[0][2] = 'o';

						else if (pos == '1'&&matrix[1][0] != 'x'&&matrix[1][0] != 'o')           matrix[1][0] = 'o';

						else if (pos == '1'&&matrix[1][2] != 'x'&&matrix[1][2] != 'o')           matrix[1][2] = 'o';

						else if (pos == '1'&&matrix[2][0] != 'x'&&matrix[2][0] != 'o')           matrix[2][0] = 'o';

						else if (pos == '1'&&matrix[2][1] != 'x'&&matrix[2][1] != 'o')           matrix[2][1] = 'o';

						else if (pos == '1'&&matrix[2][2] != 'x'&&matrix[2][2] != 'o')           matrix[2][2] = 'o';
					}
					else if (pos == '2')
					{
						if (pos == '2'&&matrix[0][0] == 'x'&&matrix[0][2] != 'x'&& matrix[0][2] != 'o')     matrix[0][2] = 'o';

						else if (pos == '2'&&matrix[0][2] == 'x'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')     matrix[0][0] = 'o';

						else if (pos == '2'&&matrix[1][1] == 'x'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')     matrix[2][1] = 'o';

						else if (pos == '2'&&matrix[2][1] == 'x'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')     matrix[1][1] = 'o';

						else if (pos == '2'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')          matrix[1][1] = 'o';

						else if (pos == '2'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')          matrix[0][0] = 'o';

						else if (pos == '2'&&matrix[0][2] != 'x'&& matrix[0][2] != 'o')          matrix[0][2] = 'o';

						else if (pos == '2'&&matrix[1][0] != 'x'&& matrix[1][0] != 'o')          matrix[1][0] = 'o';

						else if (pos == '2'&&matrix[1][2] != 'x'&& matrix[1][2] != 'o')          matrix[1][2] = 'o';

						else if (pos == '2'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')          matrix[2][0] = 'o';

						else if (pos == '2'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')          matrix[2][1] = 'o';

						else if (pos == '2'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')          matrix[2][2] = 'o';
					}

					else if (pos == '3')
					{
						if (pos == '3'&&matrix[0][0] == 'x'&&matrix[0][1] != 'x'&& matrix[0][1] != 'o')     matrix[0][1] = 'o';

						else if (pos == '3'&&matrix[0][1] == 'x'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')     matrix[0][0] = 'o';

						else if (pos == '3'&&matrix[1][1] == 'x'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')     matrix[2][0] = 'o';

						else if (pos == '3'&&matrix[1][2] == 'x'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')     matrix[2][2] = 'o';

						else if (pos == '3'&&matrix[2][0] == 'x'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')     matrix[1][1] = 'o';

						else if (pos == '3'&&matrix[2][2] == 'x'&&matrix[1][2] != 'x'&& matrix[1][2] != 'o')     matrix[1][2] = 'o';

						else if (pos == '3'&&matrix[1][1] != 'x'&&matrix[1][1] != 'o')           matrix[1][1] = 'o';

						else if (pos == '3'&&matrix[0][0] != 'x'&&matrix[0][0] != 'o')           matrix[0][0] = 'o';

						else if (pos == '3'&&matrix[0][1] != 'x'&&matrix[0][1] != 'o')           matrix[0][1] = 'o';

						else if (pos == '3'&&matrix[1][0] != 'x'&&matrix[1][0] != 'o')           matrix[1][0] = 'o';

						else if (pos == '3'&&matrix[1][2] != 'x'&&matrix[1][2] != 'o')           matrix[1][2] = 'o';

						else if (pos == '3'&&matrix[2][0] != 'x'&&matrix[2][0] != 'o')           matrix[2][0] = 'o';

						else if (pos == '3'&&matrix[2][1] != 'x'&&matrix[2][1] != 'o')           matrix[2][1] = 'o';

						else if (pos == '3'&&matrix[2][2] != 'x'&&matrix[2][2] != 'o')           matrix[2][2] = 'o';
					}

					else if (pos == '4')
					{
						if (pos == '4'&&matrix[0][0] == 'x'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')     matrix[2][0] = 'o';

						else if (pos == '4'&&matrix[2][0] == 'x'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')     matrix[0][0] = 'o';

						else if (pos == '4'&&matrix[1][1] == 'x'&&matrix[1][2] != 'x'&& matrix[1][2] != 'o')     matrix[1][2] = 'o';

						else if (pos == '4'&&matrix[1][2] == 'x'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')     matrix[1][1] = 'o';

						else if (pos == '4'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')           matrix[1][1] = 'o';

						else if (pos == '4'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')           matrix[0][0] = 'o';

						else if (pos == '4'&&matrix[0][1] != 'x'&& matrix[0][1] != 'o')           matrix[0][1] = 'o';

						else if (pos == '4'&&matrix[0][2] != 'x'&& matrix[0][2] != 'o')           matrix[0][2] = 'o';

						else if (pos == '4'&&matrix[1][2] != 'x'&& matrix[1][2] != 'o')           matrix[1][2] = 'o';

						else if (pos == '4'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')           matrix[2][0] = 'o';

						else if (pos == '4'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')           matrix[2][1] = 'o';

						else if (pos == '4'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')           matrix[2][2] = 'o';
					}

					else if (pos == '5')
					{
						if (pos == '5'&&matrix[0][0] == 'x'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')      matrix[2][2] = 'o';

						else if (pos == '5'&&matrix[0][1] == 'x'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')       matrix[2][1] = 'o';

						else if (pos == '5'&&matrix[0][2] == 'x'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')       matrix[2][0] = 'o';

						else if (pos == '5'&&matrix[1][0] == 'x'&&matrix[1][2] != 'x'&& matrix[1][2] != 'o')       matrix[1][2] = 'o';

						else if (pos == '5'&&matrix[1][2] == 'x'&&matrix[1][0] != 'x'&& matrix[1][0] != 'o')       matrix[1][0] = 'o';

						else if (pos == '5'&&matrix[2][0] == 'x'&&matrix[0][2] != 'x'&& matrix[0][2] != 'o')       matrix[0][2] = 'o';

						else if (pos == '5'&&matrix[2][1] == 'x'&&matrix[0][1] != 'x'&& matrix[0][1] != 'o')       matrix[0][1] = 'o';

						else if (pos == '5'&&matrix[2][2] == 'x'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')       matrix[0][0] = 'o';

						else if (pos == '5'&&matrix[0][0] != 'x'&&matrix[0][0] != 'o')            matrix[0][0] = 'o';

						else if (pos == '5'&&matrix[0][1] != 'x'&&matrix[0][1] != 'o')            matrix[0][1] = 'o';

						else if (pos == '5'&&matrix[0][2] != 'x'&&matrix[0][2] != 'o')            matrix[0][2] = 'o';

						else if (pos == '5'&&matrix[1][0] != 'x'&&matrix[1][0] != 'o')            matrix[1][0] = 'o';

						else if (pos == '5'&&matrix[1][2] != 'x'&&matrix[1][2] != 'o')            matrix[1][2] = 'o';

						else if (pos == '5'&&matrix[2][0] != 'x'&&matrix[2][0] != 'o')            matrix[2][0] = 'o';

						else if (pos == '5'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')           matrix[2][1] = 'o';

						else if (pos == '5'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')           matrix[2][2] = 'o';
					}

					else if (pos == '6')
					{
						if (pos == '6'&&matrix[1][0] == 'x'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')       matrix[1][1] = 'o';

						else if (pos == '6'&&matrix[1][1] == 'x'&&matrix[1][0] != 'x'&& matrix[1][0] != 'o')       matrix[1][0] = 'o';

						else if (pos == '6'&&matrix[0][2] == 'x'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')       matrix[2][2] = 'o';

						else if (pos == '6'&&matrix[2][2] == 'x'&&matrix[0][2] != 'x'&& matrix[0][2] != 'o')       matrix[0][2] = 'o';

						else if (pos == '6'&&matrix[1][1] != 'x'&&matrix[1][1] != 'o')           matrix[1][1] = 'o';

						else if (pos == '6'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')           matrix[0][0] = 'o';

						else if (pos == '6'&&matrix[0][1] != 'x'&& matrix[0][1] != 'o')           matrix[0][1] = 'o';

						else if (pos == '6'&&matrix[0][2] != 'x'&&matrix[0][2] != 'o')           matrix[0][2] = 'o';

						else if (pos == '6'&&matrix[1][0] != 'x'&&matrix[1][0] != 'o')           matrix[1][0] = 'o';

						else if (pos == '6'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')           matrix[2][0] = 'o';

						else if (pos == '6'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')           matrix[2][1] = 'o';

						else if (pos == '6'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')           matrix[2][2] = 'o';
					}

					else if (pos == '7')
					{
						if (pos == '7'&&matrix[1][0] == 'x'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')       matrix[0][0] = 'o';

						else if (pos == '7'&&matrix[0][0] == 'x'&&matrix[1][0] != 'x'&& matrix[1][0] != 'o')       matrix[1][0] = 'o';

						else if (pos == '7'&&matrix[2][1] == 'x'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')       matrix[2][2] = 'o';

						else if (pos == '7'&&matrix[2][2] == 'x'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')       matrix[2][1] = 'o';

						else if (pos == '7'&&matrix[1][1] == 'x'&&matrix[0][2] != 'x'&& matrix[0][2] != 'o')       matrix[0][2] = 'o';

						else if (pos == '7'&&matrix[0][2] == 'x'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')       matrix[1][1] = 'o';

						else if (pos == '7'&&matrix[1][1] != 'x'&&matrix[1][1] != 'o')          matrix[1][1] = 'o';

						else if (pos == '7'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')          matrix[0][0] = 'o';

						else if (pos == '7'&&matrix[0][1] != 'x'&& matrix[0][1] != 'o')          matrix[0][1] = 'o';

						else if (pos == '7'&&matrix[0][2] != 'x'&&matrix[0][2] != 'o')          matrix[0][2] = 'o';

						else if (pos == '7'&&matrix[1][0] != 'x'&&matrix[1][0] != 'o')          matrix[1][0] = 'o';

						else if (pos == '7'&&matrix[1][2] != 'x'&&matrix[1][2] != 'o')          matrix[1][2] = 'o';

						else if (pos == '7'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')          matrix[2][1] = 'o';

						else if (pos == '7'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')          matrix[2][2] = 'o';
					}

					else if (pos == '8')
					{
						if (pos == '8'&& matrix[0][1] == 'x'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')       matrix[1][1] = 'o';

						else if (pos == '8'&& matrix[1][1] == 'x'&&matrix[0][1] != 'x'&& matrix[0][1] != 'o')       matrix[0][1] = 'o';

						else if (pos == '8'&& matrix[2][0] == 'x'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')       matrix[2][2] = 'o';

						else if (pos == '8'&& matrix[2][2] == 'x'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')       matrix[2][0] = 'o';

						else if (pos == '8'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')           matrix[1][1] = 'o';

						else if (pos == '8'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')           matrix[0][0] = 'o';

						else if (pos == '8'&&matrix[0][1] != 'x'&& matrix[0][1] != 'o')           matrix[0][1] = 'o';

						else if (pos == '8'&&matrix[0][2] != 'x'&&matrix[0][2] != 'o')           matrix[0][2] = 'o';

						else if (pos == '8'&&matrix[1][0] != 'x'&&matrix[1][0] != 'o')           matrix[1][0] = 'o';

						else if (pos == '8'&&matrix[1][2] != 'x'&&matrix[1][2] != 'o')           matrix[1][2] = 'o';

						else if (pos == '8'&&matrix[2][0] != 'x'&&matrix[2][0] != 'o')           matrix[2][0] = 'o';

						else if (pos == '8'&&matrix[2][2] != 'x'&& matrix[2][2] != 'o')           matrix[2][2] = 'o';
					}

					else if (pos == '9')
					{
						if (pos == '9'&&matrix[0][0] == 'x'&&matrix[1][1] != 'x'&& matrix[1][1] != 'o')        matrix[1][1] = 'o';

						else if (pos == '9'&&matrix[0][2] == 'x'&&matrix[1][2] != 'x'&& matrix[1][2] != 'o')        matrix[1][2] = 'o';

						else if (pos == '9'&&matrix[1][1] == 'x'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')        matrix[0][0] = 'o';

						else if (pos == '9'&&matrix[1][2] == 'x'&&matrix[0][2] != 'x'&& matrix[0][2] != 'o')        matrix[0][2] = 'o';

						else if (pos == '9'&&matrix[2][0] == 'x'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')        matrix[2][1] = 'o';

						else if (pos == '9'&&matrix[2][1] == 'x'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')        matrix[2][0] = 'o';

						else if (pos == '9'&&matrix[1][1] != 'x'&&matrix[1][1] != 'o')           matrix[1][1] = 'o';

						else if (pos == '9'&&matrix[0][0] != 'x'&& matrix[0][0] != 'o')           matrix[0][0] = 'o';

						else if (pos == '9'&&matrix[0][1] != 'x'&& matrix[0][1] != 'o')           matrix[0][1] = 'o';

						else if (pos == '9'&&matrix[0][2] != 'x'&&matrix[0][2] != 'o')           matrix[0][2] = 'o';

						else if (pos == '9'&&matrix[1][0] != 'x'&&matrix[1][0] != 'o')           matrix[1][0] = 'o';

						else if (pos == '9'&&matrix[1][2] != 'x'&& matrix[1][2] != 'o')           matrix[1][2] = 'o';

						else if (pos == '9'&&matrix[2][0] != 'x'&& matrix[2][0] != 'o')           matrix[2][0] = 'o';

						else if (pos == '9'&&matrix[2][1] != 'x'&& matrix[2][1] != 'o')           matrix[2][1] = 'o';
					}



				}
				else if (matrix[i][j] == 'x' || matrix[i][j] == 'o') // if cell used , do not switch between the 2 players
					matrix[i][j] = matrix[i][j];
			}
		}
	}
}
char winner()
{
	int cx = 0, co = 0, cp = 0; //cx>>counter of x player,co>>counter of o player,cp>>counter of position;
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			if (matrix[i][j] != 'x' && matrix[i][j] != 'o')
				cp++;
			else if (matrix[i][j] == 'x')
				cx++;
			else if (matrix[i][j] == 'o')
				co++;
			if (cx == 3 || co == 3)
				return cx > co ? 'x' : 'o'; // if cx>co cout<<'x'; else cout<<'o';
		}
		cx = 0; co = 0;

	}

	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			if (matrix[j][i] == 'x')
				cx++;
			else if (matrix[j][i] == 'o')
				co++;
			if (cx == 3 || co == 3)
				return cx > co ? 'x' : 'o'; // if cx>co cout<<'x'; else cout<<'o';
		}
		cx = 0; co = 0;
	}
	if (matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] == 'x')
		return'x';
	else if (matrix[0][0] == 'o' && matrix[1][1] == 'o' && matrix[2][2] == 'o')
		return'o';
	if (matrix[0][2] == 'x' && matrix[1][1] == 'x' && matrix[2][0] == 'x')
		return'x';
	else if (matrix[0][2] == 'o' && matrix[1][1] == 'o' && matrix[2][0] == 'o')
		return'o';
	if (cp == 0)
		return '*';
	return '>';

}
int main()
{

	while (winner() == '>')
	{
		printmatrix();
		play();
	}
	printmatrix();

	if (winner() == '*')
	{
		system("COLOR 1F");
		cout << "\n\t\t\t\t\t  Ooooops no winer  " << endl;

	}
	else
	{
		system("COLOR 1B");
		if (winner() == 'x')
		{
			cout << "\n\t\tThe winer is " << "(" << 'X' << ")" << " Congratulation X :D , sorry O Good luck onther time :) " << endl;
		}
		else
		{
			cout << "\n\t\tThe winer is " << "(" << 'O' << ")" << " Congratulation O :D , sorry X Good luck onther time :) " << endl;
		}

	}

	//system("pause");

	return 0;
}