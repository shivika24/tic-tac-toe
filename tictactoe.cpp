#include<iostream>
using namespace std;
char board[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
void initialise()
{
	int i,j;
	//system("cls");
	cout<<"~~ Welcome to TIC TAC TOE ~~~"<<endl<<endl<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<board[i][j]<<" | ";
		}
		cout<<board[i][2];
		cout<<endl<<endl;
	}
}
void input()
{
	int a;
	cout<<"Turn of "<<player<<". Press the number at which you want to play: ";
	cin >> a;
	if(a==1)
		board[0][0]=player;
	else if(a==2)
		board[0][1]=player;
	else if(a==3)
		board[0][2]=player;
	else if(a==4)
		board[1][0]=player;
	else if(a==5)
		board[1][1]=player;
	else if(a==6)
		board[1][2]=player;
	else if(a==7)
		board[2][0]=player;
	else if(a==8)
		board[2][1]=player;
	else
		board[2][2]=player;

}
char win()
{
	if(board[0][0]=='X' && board[0][1]=='X' && board[0][2]=='X')
	return 'X';

	if(board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X')
	return 'X';

	if(board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X')
	return 'X';

	if(board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X')
	return 'X';

	if(board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X')
	return 'X';

	if(board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X')
	return 'X';

	if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X')
	return 'X';

	if(board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X')
	return 'X';

		if(board[0][0]=='O' && board[0][1]=='O' && board[0][2]=='O')
			return 'O';

	if(board[1][0]=='O' && board[1][1]=='O' && board[1][2]=='O')
		return 'O';

	if(board[2][0]=='O' && board[2][1]=='O' && board[2][2]=='O')
		return 'O';

	if(board[0][0]=='O' && board[1][0]=='O' && board[2][0]=='O')
		return 'O';

	if(board[0][1]=='O' && board[1][1]=='O' && board[2][1]=='O')
	return 'O';

	if(board[0][2]=='O' && board[1][2]=='O' && board[2][2]=='O')
	return 'O';

	if(board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O')
	return 'O';

	if(board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O')
	return 'O';

	return '/';
}
void TogglePlayer()
{
	if(player=='X')
		player='O';
	else
		player='X';
}
int main()
{
	int n=0;
	initialise();
	while(1)
	{
		n++;
		input();
		initialise();
		if(win()=='X')
		{
			cout<<"X wins!"<<endl;
			break;
		}
		else if(win()=='O')
		{
			cout<<"O wins!"<<endl;
			break;
		}
		else if(win()=='/' && n==9)
		{
			cout<<"It's a draw!"<<endl;
			break;
		}
		TogglePlayer();
	}
//	system("pause");
	return 0;
}
