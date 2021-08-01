
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

      //DECLARATION OF FUNCTIONS USED IN THE CODE

    void details();
    void welcome();
    void menu();
    void rules();
    void choosing();
    void category(int);
    void sports();
    void bollywood();
    void political();
    void scorecard(int score[5]);


class Game
{

    int age,score[5];
    long long mob;
    string name;
    char ch1;
    public:

     // CONSTRUCTOR FOR INITIALISING DATA MEMEBRS WITH DEFAULT VALUES

    Game()
    {
        for(int i=0;i<5;i++)
        score[i]=0;
    }

    // FUNCTION TO ENTER DETAILS OF PLAYERS

void details()
{
    cout<<"Enter your details correctly !!"<<endl;
    cout<<endl;
    cout<<"Enter your full name : ";
    fflush(stdin);
    getline(cin,name);
    cout<<endl;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<endl;
    cout<<"Enter your mobile number : ";
    cin>>mob;
    cout<<endl;
}

// FUNCTION TO DISPLAY WELCOME SCREEN

void welcome()
{
    char ch;
    cout<<"\t \t +++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\t \t +                                         +"<<endl;
    cout<<"\t \t +          WELCOME TO THE QUIZ GAME       +"<<endl;
    cout<<"\t \t +                                         +"<<endl;
    cout<<"\t \t +++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Enter any key to continue : ";
    getch();
    cout<<endl<<endl;
    cout<<"Do you want to start the game ? "<<endl;
    cout<<"Press Y/y to start or N/n to exit the game"<<endl;
    cin>>ch;
    if(ch=='Y' || ch=='y')
    {
        details();
        menu();
    }
    else
    exit(0);

}

// FUNCTION TO DISPLAY MENU

void menu()
{
    char d;
    cout<<"\t \t 1 . Press S to start the game . "<<endl;
    cout<<"\t \t 2 . Press H for help . "<<endl;
    cout<<"\t \t 3 . Press Q to quit . "<<endl<<endl;
    cout<<"\t \t Enter your choice : ";
    fflush(stdin);
    cin>>d;
    if(d=='H')
    rules();
    else if(d=='Q')
    {
        cout<<endl<<endl;
        cout<<"\t \t GAME ENDED !!"<<endl;
        exit(0);
    }
    else if(d=='S')
    {
        choosing();
    }

}

// FUNCTION TO DISPLAY RULES

void rules()
{
    cout<<"\t \t THE GAME CONSISTS OF FOLLOWING RULES : "<<endl;
    cout<<endl;
    cout<<"\t \t 1 . The game has five categories of questions ."<<endl;
    cout<<"\t \t 2 . Player can choose any one category at a time ."<<endl;
    cout<<"\t \t 3 . Each category has five questions ."<<endl;
    cout<<"\t \t 4 . Each correct answer carries 1 point and wrong answer is awarded 0 point ."<<endl;
    cout<<"\t \t 5 . Player can end the game in between ."<<endl;
    cout<<"\t \t 6 . Final scorecard will be displayed at the end of the game ."<<endl;
    cout<<endl;
    cout<<endl;
    menu();
}

// FUNCTION FOR CHOOSING PARTICULAR CATEGORY

void choosing()
{
    int choice=0;
    cout<<endl<<endl<<endl;
    cout<<"\t \t +++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\t \t +                                         +"<<endl;
    cout<<"\t \t +        !!!  ALL THE BEST !!!            +"<<endl;
    cout<<"\t \t +                                         +"<<endl;
    cout<<"\t \t +++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t \t  The game has following three categories of questions :"<<endl;
    cout<<"\t \t 1 . Sports Quiz"<<endl;
    cout<<"\t \t 2 . TV/Bollywood Quiz"<<endl;
    cout<<"\t \t 3 . Political Quiz"<<endl;
    cout<<"\t \t Enter your choice : ";
    fflush(stdin);
    cin>>choice;
    category(choice);

}

// FUNCTION TO CALL CHOOSEN CATEGORY FUNCTION

void category(int cho)
{
    if(cho==1)
    sports();
    else if(cho==2)
    bollywood();
    else if(cho==3)
    political();
    else
    {
        cout<<"\t \t Wrong choice entered !! Choose Again please . "<<endl;
        choosing();
    }
}

// SPORTS CATEGORY

void sports()
{
    int c=0;
    for(int i=0;i<5;i++)
    score[i]=0;
    cout<<endl<<endl<<"\t \t ALL THE BEST !!"<<endl<<endl;

    cout<<"Q1 . Who got FIFA best player 2019 award ? \n";
    cout<<"A. Neymar \t B. L.Messi \nC. Ronaldo \t D. Luca Mordic\n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'B' || ch1 == 'b')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n\n";
	  c++;
	}

    cout<<"Q2 . ______has cricket as its national sports ? \n";
    cout<<"A. India \t B. Sri lanka \nC. Jamacia \t D. United states \n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'C' || ch1 == 'c')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n\n";
	  c++;
	}

    cout<<"Q3 . Who has won cricket world cup for the maximum number of times ? \n";
    cout<<"A. Australlia \t B. India \nC. West Indies \t D. Sri lanka \n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'A' || ch1 == 'a')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n\n";
	  c++;
	}

    cout<<"Q4 . Football world cup has been won by which country for the maximum number of times ? \n";
    cout<<"A. Italy  \t    B. Uruguary \nC. West germany \t D. Brazil \n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'D' || ch1 == 'd')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n\n";
	  c++;
	}

    cout<<"Q5 . In which year Asian games were started ?\n";
    cout<<"A. 1951 \t B. 1954 \nC. 1958 \t D. 1962\n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'A' || ch1 == 'a')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n\n";
	  c++;
	}

    scorecard(score);

}

// BOLLYWOOD CATEGORY

void bollywood()
{
    int c=0;
    for(int i=0;i<5;i++)
    score[i]=0;
    char option;
    cout<<"\t \t ALL THE BEST !!"<<endl<<endl;

    cout<<"\nQ1 .First Indian movie submitted for oscar? ?\n";
    cout<<"A. The guide \t B. Mother India \nC. Madhumati \t D. Amarpali\n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'B' || ch1 == 'b')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

    cout<<"\nQ2. First Indian to win an oscar award? \n";
    cout<<"A. Bhanu Athiya \t B. A R Rahman \nC. Rasul Pookthy \t D. None of these \n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'A' || ch1 == 'a')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

    cout<<"\nQ3 . Film  and television institute of India located at ? \n";
    cout<<"A. Mumbai \t B. Kolkata \nC. Pune \t D. Dehli\n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'C' || ch1 == 'c')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

    cout<<"\nQ4. Doordarshan founded in India in the year?\n";
    cout<<"A. 1962 \t B. 1952 \nC. 1965 \t D. 1959\n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'D' || ch1 == 'd')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

    cout<<"\nQ5. First 3D animated film from India is ? \n";
    cout<<"A. Roadside romeo \t B. Hanuman \nC. Ghayab arya    \t D. Bal ganesh \n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'A' || ch1 == 'a')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

    scorecard(score);
}

// POLITICAL CATEGORY

void political()
{
    int c=0;
    for(int i=0;i<5;i++)
    score[i]=0;
    char option;
    cout<<"\t \t ALL THE BEST !!"<<endl<<endl;

    cout<<"\nQ1. Who is the first woman chief minister of India?\n";
    cout<<"A. Janaki Ramachandra \t B. Sucheta Kriplani \nC.Shakshikal Kakodkar \t D. Nandini Satpathy\n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'B' || ch1 == 'b')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

    cout<<"\nQ2. Present lok sabha is the \n";
    cout<<"A. 15th \t B. 13th \nC. 17th \t D. 14th \n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'C' || ch1 == 'c')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

    cout<<"\nQ3. Number of standing committees in the Indian Parliament \n";
    cout<<"A. 12 \t B. 38 \nC. 17 \t D. 45 \n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'D' || ch1 == 'd')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

    cout<<"\nQ4. Who is the chairman of Rajya sabha? \n";
    cout<<"A. Chief Justice \t B. Vice President \nC.President    \t    D. Attorney General \n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'B' || ch1 == 'b')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

    cout<<"\nQ5. Minimum duration to stay in India before applying for Indian citizenship? \n";
    cout<<"A. 3 years \t B. 5 years \nC. 6 years \t D. 7 years\n";
    fflush (stdin);
    cin>>ch1;
    if (ch1 == 'B' || ch1 == 'b')
	{
	  cout<<"\nCorrect Answer\n\n";
	  score[c++] = 1;
	}
      else if (ch1 == 'Q')
	{
	  cout<<"\nGame Ended\n";
	  exit (0);
	}
      else
	{
	  cout<<"\nwrong Answer\n";
	  c++;
	}

      scorecard (score);

}

// FUNCTION TO DISPLAY THE SCORECARD

void scorecard(int score[5])
{
    int i, s = 0;
    char choice;
    cout<<"\t SCORECARD\n\n";
    cout<<"\t NAME : "<<name<<"     "<<"MOBILE NUMBER : "<<mob<<endl<<endl;
    cout<<"QUESTION \t \t SCORE\n";
    for (i=0;i<5;i++)
    {
      cout<<(i+1)<<"\t \t \t"<<score[i]<<"\n\n";
      s = s + score[i];
    }
  cout<<"Your Total Score = "<<s<<endl;
  cout<<"\t \t Do you want to play again ? Press y to play again or n to exit"<<endl;
  cin>>choice;
  if (choice=='y' || choice=='Y')
  menu();
  else
  exit(0);

}
};

// MAIN FUNCTION

int main()
{
    Game g;
    g.welcome();
    return 0;
}
