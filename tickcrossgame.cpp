#include<iostream>
using namespace std;
main()
{
	int choice;
	char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	
	cout<<"   ********T i c k   C r o s s   G a m e******** \n"<<endl;
	cout<<"\tPlayer[1] \n \tPlayer2[0]";
	

	cout<<"\n\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\n\t\t_____|_____|_____\n";
	cout<<"\n\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
	cout<<"\n\t\t_____|_____|_____\n";
	cout<<"\n\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
	cout<<"\n\t\t     |     |     \n";

    cout<<"\n\tPlayer1[X] turn:";
    cin>>choice;
    
    switch(choice){
    	case 1:
    		board[0][0]='X';
    		break;
    	case 2:
    		board[0][1]='X';
    		break;
   		case 3:
    		board[0][2]='X';
    		break;
    	case 4:
    		board[1][0]='X';
    		break;
    	case 5:
    		board[1][1]='X';
    		break;
   		case 6:
    		board[1][2]='X';
    		break;
    	case 7:
    		board[2][0]='X';
    		break;
    	case 8:
    		board[2][1]='X';
    		break;
   		case 9:
    		board[2][2]='X';
    		break;
    		
    		default:
    			cout<<"Invalid choice"<<endl;
    			break;
	}
	cout<<"   ********T i c k   C r o s s   G a m e******** \n"<<endl;
	cout<<"\tPlayer[1] \n \tPlayer2[0]";
	

	cout<<"\n\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\n\t\t_____|_____|_____\n";
	cout<<"\n\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
	cout<<"\n\t\t_____|_____|_____\n";
	cout<<"\n\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
	cout<<"\n\t\t     |     |     \n";

}
