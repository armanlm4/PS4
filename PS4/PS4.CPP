#include<iostream.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<time.h>
#include<dos.h>



void draw_line(int n,char ch);
void introduce();
void clear();
void aneme();
void thank();
int menu();
void about();
//casino---------------------
void casino();
void rules();
void lose();
//tic-tac-tow----------------
void ttt();
char square[10] = {'O','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
//hangman--------------------
void hangman();
const int MAXLENGTH=25;
const int MAX_TRIES=5;
const int MAXROW=7;
int letterFill (char, char[], char[]);
void initUnknown (char[], char[]);
//catch the eggs-------------
void eggs();
int intro();
//speed test-----------------
void speed();
//calculator-----------------
void calc();


void main()
{int game;
introduce();
start:
clrscr();
aneme();
cout<<"********************************  Play Station  ********************************\n";
draw_line(80,'~');
game=menu();

switch(game)
      {case 0:cout<<"\n\nPress any key to exit!";
	      getch();
	      clear();
	      thank();
	      exit(0);
       case 1:clear();
	      casino();
	      clear();
	      goto start;
       case 2:clear();
	      ttt();
	      clear();
	      goto start;
       case 3:clear();
	      hangman();
	      clear();
	      goto start;
       case 4:clear();
	      eggs();
	      clear();
	      goto start;
       case 5:clear();
	      speed();
	      clear();
	      goto start;
       case 6:clear();
	      calc();
	      clear();
	      goto start;

       case 9:clear();
	      about();
	      clear();
	      goto start;
       default:cout<<"\n\n"<<game<<" is not in the options!!\nPress any key to start again!";
	       getch();
	       clear();
	       goto start;
      }

}

//Functions------------------------------------------------------------------------------------------------------------------------------------------

void draw_line(int n,char ch)
{
for(int i=0;i<n;i++)
   cout<<ch;
}

void introduce()
{clrscr();

 delay(1000);
 clrscr();
 cout<<"                                                  \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                               \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                              \2";
 sound(2000);

 delay(200);
 clrscr();
 cout<<"\n\n                                                    \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n  \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                             \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                            \2";
 nosound();
 sound(2005);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n                                                      \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n    \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                           \2";
 cout<<"\n\n\n\n\n\n\n\n                          \2";
 nosound();

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n                                                      \2";
 cout<<"\n\n\n\n\n\n             \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                  \2";
 cout<<"\n\n\n                          \2";
 sound(2005);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n";
 cout<<"\n\n\n\n\n\n                       \2	      			           \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 cout<<"                       \2	      			           \2";
 nosound();

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                            \2	      		      \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                            \2	      		      \2";
 sound(1500);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                   \2	       \2";
 cout<<"\n\n\n\n\n\n\n\n                                   \2	       \2";
 nosound();
 sound(2030);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n		                         \2\2";
 cout<<"\n                                         \2\2";
 nosound();

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n                                                                       \2\n";
 cout<<"        \2                                                             \2\n";
 cout<<"         \2\2                                                         \2\2\n";
 cout<<"          \2\2                                                       \2\2\n";
 cout<<"            \2\2                                                   \2\2\n";
 cout<<"              \2\2                                               \2\2\n";
 cout<<"              \2\2\2                                             \2\2\2\n";
 cout<<"                \2\2                                           \2\2\n";
 cout<<"                 \2\2\2                                       \2\2\2\n";
 cout<<"                   \2\2\2                                   \2\2\2\n";
 cout<<"                   \2\2\2                 \2                 \2\2\2\n";
 cout<<"                     \2\2\2              \2\2\2              \2\2\2\n";
 cout<<"                       \2\2\2\2           \2 \2           \2\2\2\2\n";
 cout<<"                         \2\2\2\2        \2\2 \2\2        \2\2\2\2\n";
 cout<<"                           \2\2\2\2\2    \2\2   \2\2    \2\2\2\2\2\n";
 cout<<"                             \2\2\2\2\2  \2\2 \2 \2\2  \2\2\2\2\2\n";
 cout<<"                           \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";
 cout<<"                         \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";//
 cout<<"                           \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";
 cout<<"                             \2\2\2\2\2  \2\2 \2 \2\2  \2\2\2\2\2\n";
 cout<<"                           \2\2\2\2\2    \2\2   \2\2    \2\2\2\2\2\n";
 cout<<"                         \2\2\2\2        \2\2 \2\2        \2\2\2\2\n";
 cout<<"                       \2\2\2\2           \2 \2           \2\2\2\2\n";
 cout<<"                     \2\2\2              \2\2\2              \2\2\2\n";
 cout<<"                   \2\2\2                 \2                 \2\2\2\n";
 cout<<"                   \2\2\2                                   \2\2\2\n";
 cout<<"                 \2\2\2                                       \2\2\2\n";
 cout<<"                \2\2                                           \2\2\n";
 cout<<"              \2\2\2                                             \2\2\2\n";
 cout<<"              \2\2                                               \2\2\n";
 cout<<"            \2\2                                                   \2\2\n";
 cout<<"          \2\2                                                       \2\2\n";
 cout<<"         \2\2                                                         \2\2\n";
 cout<<"        \2                                                             \2\n";
 cout<<"       \2                                                               \2\n";
 sound(3000);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n       \2                               \2                               \2\n";
 cout<<"        \2                                                             \2\n";
 cout<<"         \2\2                                                    \2    \2\2\n";
 cout<<"          \2\2        \2                \2                             \2\2\n";
 cout<<"            \2\2                 \2                                 \2\2\n";
 cout<<"              \2\2                                               \2\2\n";
 cout<<"              \2\2\2                                             \2\2\2\n";
 cout<<"                \2\2                           \2               \2\2\n";
 cout<<"                 \2\2\2                                       \2\2\2\n";
 cout<<"                   \2\2\2                                   \2\2\2\n";
 cout<<"                   \2\2\2                 \2                 \2\2\2\n";
 cout<<"                     \2\2\2       \2      \2\2\2              \2\2\2\n";
 cout<<"                       \2\2\2\2           \2 \2           \2\2\2\2\n";
 cout<<"                         \2\2\2\2        \2\2 \2\2        \2\2\2\2\n";
 cout<<"                           \2\2\2\2\2    \2\2   \2\2    \2\2\2\2\2\n";
 cout<<"                             \2\2\2\2\2  \2\2 \2 \2\2  \2\2\2\2\2\n";
 cout<<"                           \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";
 cout<<"                         \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";//
 cout<<"                           \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";
 cout<<"                             \2\2\2\2\2  \2\2 \2 \2\2  \2\2\2\2\2\n";
 cout<<"                           \2\2\2\2\2    \2\2   \2\2    \2\2\2\2\2\n";
 cout<<"                         \2\2\2\2        \2\2 \2\2        \2\2\2\2\n";
 cout<<"                       \2\2\2\2           \2 \2           \2\2\2\2\n";
 cout<<"                     \2\2\2              \2\2\2              \2\2\2\n";
 cout<<"                   \2\2\2                 \2                 \2\2\2\n";
 cout<<"                   \2\2\2     \2                             \2\2\2\n";
 cout<<"                 \2\2\2                        \2              \2\2\2\n";
 cout<<"                \2\2                                           \2\2\n";
 cout<<"              \2\2\2                                             \2\2\2\n";
 cout<<"              \2\2                                               \2\2\n";
 cout<<"            \2\2                 \2                \2                \2\2\n";
 cout<<"          \2\2           \2                                           \2\2\n";
 cout<<"         \2\2                                                         \2\2\n";
 cout<<"        \2                                                      \2      \2\n";
 cout<<"       \2                               \2                               \2\n";
 nosound();

 delay(600);
 clrscr();
 sound(1500);
 for(int f=1;f<4000;f++)
    cout<<"\2";

 delay(100);
 clrscr();
 delay(100);
 nosound();
 //music end----------------

 int zz=0;
 for(f=0;f<70;f++)
    {delay(100);
     clrscr();
     for(int h=0;h<=f;h++)
	cout<<" ";
     cout<<"==.____  \n";
     for(h=0;h<=f;h++)
	cout<<" ";
     cout<<"  }====]-\n";
     for(h=0;h<=f;h++)
	cout<<" ";
     cout<<"=='~~~~  \n";
     cout<<"\n\n\t\t\t\t    Loading";
     zz=f%4;
     switch(zz)
	   {case 0:cout<<"\n";
		   break;
	    case 1:cout<<".\n";
		   break;
	    case 2:cout<<"..\n";
		   break;
	    case 3:cout<<"...\n";
		   break;
	    default:break;
	   }
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
    }


 delay(100);
 clrscr();
 cout<<"                                                                      ==.____  \n";
 cout<<" 									}====]-\n";
 cout<<" 								      =='~~~~  \n";
 cout<<"\n\n\t\t\t\t    Loading..\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
 delay(100);
 clrscr();
 cout<<"                                                                       ==.____ \n";
 cout<<"  								         }====]\n";
 cout<<"  								       =='~~~~ \n";
 cout<<"\n\n\t\t\t\t    Loading...\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
 delay(100);
 clrscr();
 cout<<"                                                                        ==.____\n";
 cout<<"        							          }====\n";
 cout<<"	   							        =='~~~~\n";
 cout<<"\n\n\t\t\t\t    Loading\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
 delay(100);
 clrscr();
 cout<<"                                                                         ==.___\n";
 cout<<"	           							   }===\n";
 cout<<"		       						         =='~~~\n";
 cout<<"\n\n\t\t\t\t    Loading.\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
 delay(100);
 clrscr();
 cout<<"                                                                          ==.__\n";
 cout<<"			         					    }==\n";
 cout<<"				      				          =='~~\n";
 cout<<"\n\n\t\t\t\t    Loading..\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
 delay(100);
 clrscr();
 cout<<"                                                                           ==._\n";
 cout<<"					          			     }=\n";
 cout<<"						        		   =='~\n";
 cout<<"\n\n\t\t\t\t    Loading...\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
 delay(100);
 clrscr();
 cout<<"                                                                            ==.\n";
 cout<<"	           							      }\n";
 cout<<"		          						    =='\n";
 cout<<"\n\n\t\t\t\t    Loading\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
 delay(100);
 clrscr();
 cout<<"                                                                             ==\n";
 cout<<"				        				       \n";
 cout<<"					        			     ==\n";
 cout<<"\n\n\t\t\t\t    Loading.\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
 delay(100);
 clrscr();
 cout<<"                                                                              =\n";
 cout<<"			          					       \n";
 cout<<"				           				      =\n";
 cout<<"\n\n\t\t\t\t    Loading..\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
 delay(100);
 clrscr();
 cout<<"\n\n\n";
 cout<<"\n\n\t\t\t\tLoading Complete!\n";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<" ______ .      ______ .    .     ______ ______ ______ ______ ______ ______ _   _";
     cout<<" |    | |      |    | |    |     |        ||   |    |   ||     ||   |    | |   |";
     cout<<" |    | |      |    | |____|     |        ||   |    |   ||     ||   |    | ||  |";
     cout<<" |----+ |      |----|   ||       +----+   ||   |----|   ||     ||   |    | | | |";
     cout<<" |      |      |    |   ||            |   ||   |    |   ||     ||   |    | |  ||";
     cout<<" |      |_____ |    |   ||       _____|   ||   |    |   ||   __||__ |____| |   |";
     cout<<"\n\n Aman Srivastava   -   Arman Alam   -   Kamran Ahmad   -   Durgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t    Press any key to continue:";
     sound(2000);
     delay(100);
     nosound();
     delay(50);
     sound(2000);
     delay(300);
     nosound();
 getch();
 for(f=0;f<50;f++)
    {delay(50);
     cout<<"\n";
    }
 clrscr();
}

void thank()
{clrscr();

 delay(1000);
 clrscr();
 cout<<"                                                  \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                               \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                              \2";
 sound(2000);

 delay(200);
 clrscr();
 cout<<"\n\n                                                    \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n  \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                             \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                            \2";
 nosound();
 sound(2005);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n                                                      \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n    \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                           \2";
 cout<<"\n\n\n\n\n\n\n\n                          \2";
 nosound();

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n                                                      \2";
 cout<<"\n\n\n\n\n\n             \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                  \2";
 cout<<"\n\n\n                          \2";
 sound(2005);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n";
 cout<<"\n\n\n\n\n\n                       \2	      			           \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 cout<<"                       \2	      			           \2";
 nosound();

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                            \2	      		      \2";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                            \2	      		      \2";
 sound(1500);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                   \2	       \2";
 cout<<"\n\n\n\n\n\n\n\n                                   \2	       \2";
 nosound();
 sound(2030);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n		                         \2\2";
 cout<<"\n                                         \2\2";
 nosound();

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n                                                                       \2\n";
 cout<<"        \2                                                             \2\n";
 cout<<"         \2\2                                                         \2\2\n";
 cout<<"          \2\2                                                       \2\2\n";
 cout<<"            \2\2                                                   \2\2\n";
 cout<<"              \2\2                                               \2\2\n";
 cout<<"              \2\2\2                                             \2\2\2\n";
 cout<<"                \2\2                                           \2\2\n";
 cout<<"                 \2\2\2                                       \2\2\2\n";
 cout<<"                   \2\2\2                                   \2\2\2\n";
 cout<<"                   \2\2\2                 \2                 \2\2\2\n";
 cout<<"                     \2\2\2              \2\2\2              \2\2\2\n";
 cout<<"                       \2\2\2\2           \2 \2           \2\2\2\2\n";
 cout<<"                         \2\2\2\2        \2\2 \2\2        \2\2\2\2\n";
 cout<<"                           \2\2\2\2\2    \2\2   \2\2    \2\2\2\2\2\n";
 cout<<"                             \2\2\2\2\2  \2\2 \2 \2\2  \2\2\2\2\2\n";
 cout<<"                           \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";
 cout<<"                         \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";//
 cout<<"                           \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";
 cout<<"                             \2\2\2\2\2  \2\2 \2 \2\2  \2\2\2\2\2\n";
 cout<<"                           \2\2\2\2\2    \2\2   \2\2    \2\2\2\2\2\n";
 cout<<"                         \2\2\2\2        \2\2 \2\2        \2\2\2\2\n";
 cout<<"                       \2\2\2\2           \2 \2           \2\2\2\2\n";
 cout<<"                     \2\2\2              \2\2\2              \2\2\2\n";
 cout<<"                   \2\2\2                 \2                 \2\2\2\n";
 cout<<"                   \2\2\2                                   \2\2\2\n";
 cout<<"                 \2\2\2                                       \2\2\2\n";
 cout<<"                \2\2                                           \2\2\n";
 cout<<"              \2\2\2                                             \2\2\2\n";
 cout<<"              \2\2                                               \2\2\n";
 cout<<"            \2\2                                                   \2\2\n";
 cout<<"          \2\2                                                       \2\2\n";
 cout<<"         \2\2                                                         \2\2\n";
 cout<<"        \2                                                             \2\n";
 cout<<"       \2                                                               \2\n";
 sound(3000);

 delay(200);
 clrscr();
 cout<<"\n\n\n\n\n\n\n       \2                               \2                               \2\n";
 cout<<"        \2                                                             \2\n";
 cout<<"         \2\2                                                    \2    \2\2\n";
 cout<<"          \2\2        \2                \2                             \2\2\n";
 cout<<"            \2\2                 \2                                 \2\2\n";
 cout<<"              \2\2                                               \2\2\n";
 cout<<"              \2\2\2                                             \2\2\2\n";
 cout<<"                \2\2                           \2               \2\2\n";
 cout<<"                 \2\2\2                                       \2\2\2\n";
 cout<<"                   \2\2\2                                   \2\2\2\n";
 cout<<"                   \2\2\2                 \2                 \2\2\2\n";
 cout<<"                     \2\2\2       \2      \2\2\2              \2\2\2\n";
 cout<<"                       \2\2\2\2           \2 \2           \2\2\2\2\n";
 cout<<"                         \2\2\2\2        \2\2 \2\2        \2\2\2\2\n";
 cout<<"                           \2\2\2\2\2    \2\2   \2\2    \2\2\2\2\2\n";
 cout<<"                             \2\2\2\2\2  \2\2 \2 \2\2  \2\2\2\2\2\n";
 cout<<"                           \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";
 cout<<"                         \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";//
 cout<<"                           \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n";
 cout<<"                             \2\2\2\2\2  \2\2 \2 \2\2  \2\2\2\2\2\n";
 cout<<"                           \2\2\2\2\2    \2\2   \2\2    \2\2\2\2\2\n";
 cout<<"                         \2\2\2\2        \2\2 \2\2        \2\2\2\2\n";
 cout<<"                       \2\2\2\2           \2 \2           \2\2\2\2\n";
 cout<<"                     \2\2\2              \2\2\2              \2\2\2\n";
 cout<<"                   \2\2\2                 \2                 \2\2\2\n";
 cout<<"                   \2\2\2     \2                             \2\2\2\n";
 cout<<"                 \2\2\2                        \2              \2\2\2\n";
 cout<<"                \2\2                                           \2\2\n";
 cout<<"              \2\2\2                                             \2\2\2\n";
 cout<<"              \2\2                                               \2\2\n";
 cout<<"            \2\2                 \2                \2                \2\2\n";
 cout<<"          \2\2           \2                                           \2\2\n";
 cout<<"         \2\2                                                         \2\2\n";
 cout<<"        \2                                                      \2      \2\n";
 cout<<"       \2                               \2                               \2\n";
 nosound();

 delay(600);
 clrscr();
 sound(1500);
 for(int f=1;f<4000;f++)
    cout<<"\2";

 delay(100);
 clrscr();
 delay(100);
 nosound();
 //music end----------------
 for(int ss=4;ss>=0;ss--)
 {clrscr();
 cout<<"******************************** Play Station 4 ********************************\n";
 draw_line(80,'~');
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 cout<<"    _______ _     _ _______ __    _ _   _             _     _ _______ _     _ \n";
 cout<<"       |    |     | |     | | |   | |  |              |     | |     | |     | \n";
 cout<<"       |    |_____| |_____| |  |  | |_|      _____    |_____| |     | |     | \n";
 cout<<"       |    |     | |     | |   | | | |      ~~~~~       |    |     | |     | \n";
 cout<<"       |    |     | |     | |    || |  |                 |    |_____| |_____| \n";
 cout<<"       ~    ~     ~ ~     ~ ~     ~ ~   ~                ~    ~     ~ ~     ~ \n";
 cout<<"\n\n\n\nPROGRAM BY:\n\n\nAman Srivastava\n\nArman Alam\n\nKamran Ahmad\n\nDurgesh Kumar Mishra\n\n\n\n\n\n\n\t\t\t       Closing in "<<ss<<" seconds!";
 delay(1000);
 }
}

void aneme()
{clrscr();
 cout<<"   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"2: Tic-Tac-Tow\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\n2: Tic-Tac-Tow\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"1: Casino Game\n\n2: Tic-Tac-Tow\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\n\n1: Casino Game\n\n2: Tic-Tac-Tow\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"GAME MENU:\n\n\n1: Casino Game\n\n2: Tic-Tac-Tow\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"\n\nGAME MENU:\n\n\n1: Casino Game\n\n2: Tic-Tac-Tow\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 draw_line(80,'~');
 cout<<"GAME MENU:\n\n\n1: Casino Game\n\n2: Tic-Tac-Tow\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 delay(50);
 clrscr();
 cout<<"******************************** Play Station 4 ********************************\n";
 draw_line(80,'~');
 cout<<"\n\nGAME MENU:\n\n\n1: Casino Game\n\n2: Tic-Tac-Tow\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
 draw_line(22,'-');
 cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
 clrscr();
}

void clear()
{
for(int a=0;a<50;a++)
   {delay(50);
    cout<<"\n";}
}

int menu()
{
int game;
char in;
cout<<"\n\nGAME MENU:\n\n\n1: Casino Game\n\n2: Tic-Tac-Tow\n\n3: Hangman\n\n4: Catch the Eggs\n\n5: Response Speed Test\n\n6: The Calculator"<<endl<<endl;
draw_line(22,'-');
cout<<"\n\n9: About Program\n\n0: Exit\n\n   Press your choice:";
in=getch();
putch(in);
while(isdigit(in)==0)
{
cout<<"\n\nPlease press a valid digit from the menu!\n\n   Press your choice:";
in=getch();
putch(in);
}
game=in;
game=game-48;
return game;
}

void rules()
{
  clrscr();
  cout<<"******************************** Play Station 4 ********************************\n";
  draw_line(80,'~');
  cout<<"\n\n";
  draw_line(80,'-');
  cout<<"\n\t\tRULES OF THE GAME\n";
  draw_line(80,'-');
  cout<<"\n\t1. Choose any number between 1 to 12\n\t2. If you win you will get 10 times of money you bet\n\t3. If you bet on wrong number you will lose your betting amount\n\n";
  draw_line(80,'-');
  cout<<endl;
}

void lose()
{clrscr();
  cout<<"******************************** Play Station 4 ********************************\n";
  draw_line(80,'~');
  cout<<"\n\n\n";
  draw_line(80,'+');
  cout<<"\n\n\t\t     Sorry you lose the game and your money!";
  cout<<"\n\n\t     THANKS FOR COME TO CASINO YOUR BALANCE AMOUNT IS RS.0\n\n";
  draw_line(80,'+');
  getch();
}

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}

void board()
{
	clrscr();
	cout<<"******************************** Play Station 4 ********************************\n";
	draw_line(80,'~');
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl << endl;
}

int letterFill (char guess, char secretword[], char guessword[])
{
	int i;
	int matches=0;
	for (i = 0; secretword[i]!='\0'; i++)
	{
		if (guess == guessword[i])
			return 0;
		if (guess == secretword[i])
		{
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}

void initUnknown (char word[], char unknown[])
{
	int i;
	int length = strlen(word);
	for (i = 0; i < length; i++)
		unknown[i]='*';
	unknown[i]='\0';
}

int intro()
{int n;
clrscr();
cout<<"******************************** Play Station 4 ********************************\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"                                 Catch the Eggs\n\n\nRULES:\n";
cout<<"\nTry to catch the falling eggs in the basket.\n\nUse Numpad ArrowKeys (4 & 6) to move your basket.Use any other key to skip\nchances!\n\nIf number of Eggs catched will be more than the Eggs dropped, you will WIN!\n\nMake sure that NUMLOCK is ON!\n\n\nEnter the desired number of eggs you would like to play for:";
cin>>n;
return n;
}


void about()
{
clrscr();
cout<<"******************************** Play Station 4 ********************************\n";
draw_line(80,'~');
cout<<"                                 About  Program\n";
draw_line(80,'-');
cout<<"\n\nThis program is made by four students of standard XII (2012-13)";
cout<<"\n\nRoll No.\t\tName\n\n5617001\t\tAman Srivastava\n\n5617007\t\tArman Alam\n\n5617020\t\tDurgesh Kumar Mishra\n\n5617033\t\tKamran Ahmad\n\n\n";
cout<<"This program has been made to submit it as a project work by the group of these\n\nstudents for our final CBSE practical projects.\n\n\n\n\nThis project should not be edited or be tried to decompile in any way.\n\nThis project can be used by the end user as it is!\n\n";
draw_line(80,'-');
getch();
}


//Games----------------------------------------------------------------------------------------------------------------------------------------------

void casino()
{
  int balanceamt,amt,no,dice;
  char playername[80],ch;
  clrscr();
  cout<<"******************************** Play Station 4 ********************************\n";
  draw_line(80,'~');
  draw_line(80,'=');
  cout<<"\n\n\n\n\t\t\t\t  CASINO GAME\n\n\n\n";
  draw_line(80,'=');
  cout<<"\n\n\nEnter Your Name  :";
  gets(playername);
  cout<<"\n\n\Enter Deposit amount to play game :";
  cin>>balanceamt;
  while(balanceamt<0)
  {cout<<"\n\nHey don't try to borrow money. Enter any positive amount:";
  cin>>balanceamt;
  }
  while(!(isdigit(balanceamt)))
  {cout<<"\n\nHey don't try to borrow money. Enter any positive amount:";
  cin>>balanceamt;
  }
  do
  {
    clrscr();
    rules();
    cout<<"\n\nYour current balance is Rs."<<balanceamt;
    do
    {   if (balanceamt==0)
	   {lose();
	    goto casinoend;
	   }
	cout<<"\n\n"<<playername<<" enter money to bet";
	cin>>amt;
	if(amt>balanceamt)
	   cout<<"Your betting amount is more than your current balance\n\nRe-enter data\n ";
	else
	   break;
    }while(1);
    do
    {
	cout<<"Enter your lucky number to bet between 1 to 12 :";
	cin>>no;
	if(no<=0||no>12)
	   cout<<"Please check the number!! should be between 1 to 12\n\nRe-enter data\n ";
	else
	   break;
    }while(1);
  randomize();
  dice=random(12)+1;
  if(dice==no)
  {
    cout<<"\n\nGood Luck!! You won Rs."<<amt*10;
    balanceamt=balanceamt+amt*10;
  }
  else
  {
     cout<<"Bad Luck this time !! You lose Rs."<<amt;
     balanceamt=balanceamt-amt;
  }
  cout<<"\n\nThe winning number was : "<<dice;

  cout<<"\n\n\t"<<playername<<" You have Rs. "<<balanceamt<<endl;
  cout<<"\n\n-->Do you want to play (y/n)? ";
  cin>>ch;
  }while(ch=='Y'|| ch=='y');
  clrscr();
  cout<<"******************************** Play Station 4 ********************************\n";
  draw_line(80,'~');
  cout<<"\n\n\n";
  draw_line(80,'+');
  cout<<"\n\n\t     THANKS FOR COME TO CASINO YOUR BALANCE AMOUNT IS RS."<<balanceamt<<"\n\n";
  draw_line(80,'+');
  getch();
  casinoend:
}

void ttt()
{
	int player = 1,i,choice;
	char mark,press;
	clrscr();
	do
	{
		board();
		player=(player%2)?1:2;
		cout << "Player " << player << ", press your choice:  ";
		press=getch();
		putch(press);
		while(isdigit(press)==0)
		{
		cout<<"\n\nPlease press a valid digit!\n\nPlayer " << player << ", press your choice: ";
		press=getch();
		putch(press);
		}
		choice=press;
		choice=choice-48;


		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
			player--;

		i=checkwin();
		player++;
	}while(i==-1);
	board();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";
	getch();
	square[1]='1';
	square[2]='2';
	square[3]='3';
	square[4]='4';
	square[5]='5';
	square[6]='6';
	square[7]='7';
	square[8]='8';
	square[9]='9';
}

void hangman()
{
	char unknown [MAXLENGTH];
	char letter;
	int num_of_wrong_guesses=0;
	char word[MAXLENGTH];
	char words[][MAXLENGTH] =
	{
		"india",
		"pakistan",
		"nepal",
		"malaysia",
		"philippines",
		"australia",
		"iran",
		"ethiopia",
		"oman",
		"indonesia",
		"america",
		"europe",
		"mexico",
		"argentina",
		"brazil",
		"egypt",
		"iran",
		"china",
		"japan",
		"france",
		"austria",
		"singapore",
		"canada",
		"alaska",
		"russia"
	};

	randomize();
	int n=random(25);
	strcpy(word,words[n]);

	initUnknown(word, unknown);

	clrscr();
	cout<<"******************************** Play Station 4 ********************************\n";
	draw_line(80,'~');
	cout << "\n\nWelcome to hangman...Guess a country Name!";
	cout << "\n\nEach letter is represented by a star.";
	cout << "\n\nYou have to type only one letter in one try.";
	cout << "\n\nYou have 5 total tries!";
	cout << "\n--------------------------------------------------------------------------------";
	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: ";
		letter=getch();
		if (letterFill(letter, word, unknown)==0)
		{       clrscr();
			cout<<"******************************** Play Station 4 ********************************\n";
			draw_line(80,'~');
			cout << "\n\nWelcome to hangman...Guess a country Name";
			cout << "\n\nEach letter is represented by a star.";
			cout << "\n\nYou have to type only one letter in one try";
			cout << "\n--------------------------------------------------------------------------------";
			cout << endl << "\nWhoops! That letter isn't in there!\n\n"<< endl;
			num_of_wrong_guesses++;
		}
		else
		{       clrscr();
			cout<<"******************************** Play Station 4 ********************************\n";
			draw_line(80,'~');
			cout << "\n\nWelcome to hangman...Guess a country Name";
			cout << "\n\nEach letter is represented by a star.";
			cout << "\n\nYou have to type only one letter in one try";
			cout << "\n--------------------------------------------------------------------------------";
			cout << endl << "\nYou found a letter! Isn't that exciting!\n\n" << endl;
		}
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if they guessed the word.
		if (strcmp(word, unknown) == 0)
		{
			cout <<endl<<endl<< word << endl<<endl;
			cout << "Yeah! You got it!";
			break;
		}

	}
	if(num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
		cout << "\nThe word was : " << word << endl;
	}
	getch();
}

void eggs()
{clrscr();
int p=0,score=0,drop=-1,left;
int n=0,i,j,c=0;
double con;
char d,egg[8]={'\0','\0','\0','\0','\0','\0','\0','\0',},egg2[8]={'\0','\0','\0','\0','\0','\0','\0','\0',},egg3[8]={'\0','\0','\0','\0','\0','\0','\0','\0',},egg4[8]={'\0','\0','\0','\0','\0','\0','\0','\0',},egg5[8]={'\0','\0','\0','\0','\0','\0','\0','\0',},egg6[8]={'\0','\0','\0','\0','\0','\0','\0','\0',},egg7[8]={'\0','\0','\0','\0','\0','\0','\0','\0',},egg8[8]={'\0','\0','\0','\0','\0','\0','\0','\0',},egg9[8]={'\0','\0','\0','\0','\0','\0','\0','\0',},egg0[8]={'\0','\0','\0','\0','\0','\0','\0','\0',};

con=left=intro();

while(1)
{clrscr();
randomize();
n=rand()%8;

if(left<0)
  left++;

cout<<"******************************** Play Station 4 ********************************\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"                                 Catch the Eggs\n";
cout<<"\n\nEggs Catched :"<<score;
cout<<"\n\nEggs Left    :"<<left;
cout<<"\n\nTotal Eggs   :"<<con;
cout<<"\n\n--------------------------------------------------------------------------------\n";
//-----------------------------------------
for(i=0;i<8;i++)
{egg0[i]='\0';
egg0[i]=egg9[i];
}
for(i=0;i<8;i++)
{egg9[i]='\0';
egg9[i]=egg8[i];
}
for(i=0;i<8;i++)
{egg8[i]='\0';
egg8[i]=egg7[i];
}
for(i=0;i<8;i++)
{egg7[i]='\0';
egg7[i]=egg6[i];
}
for(i=0;i<8;i++)
{egg6[i]='\0';
egg6[i]=egg5[i];
}
for(i=0;i<8;i++)
{egg5[i]='\0';
egg5[i]=egg4[i];
}
for(i=0;i<8;i++)
{egg4[i]='\0';
egg4[i]=egg3[i];
}
for(i=0;i<8;i++)
{egg3[i]='\0';
egg3[i]=egg2[i];
}
for(i=0;i<8;i++)
{egg2[i]='\0';
egg2[i]=egg[i];
}

for(i=0;i<8;i++)
egg[i]='\0';

if(c%5==0)
{
egg[n]='\2';
}

cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg[i]<<"     ";
}
cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg2[i]<<"     ";
}
cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg3[i]<<"     ";
}
cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg4[i]<<"     ";
}
cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg5[i]<<"     ";
}
cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg6[i]<<"     ";
}
cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg7[i]<<"     ";
}
cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg8[i]<<"     ";
}
cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg9[i]<<"     ";
}
cout<<endl<<endl;
for(i=0;i<8;i++)
{
cout<<"    "<<egg0[i]<<"     ";
}
cout<<endl<<endl;

//--------------------------------------------------
switch(p)
{
case 0:break;
case 1:cout<<"          ";
       break;
case 2:cout<<"                    ";
       break;
case 3:cout<<"                              ";
       break;
case 4:cout<<"                                        ";
       break;
case 5:cout<<"                                                  ";
       break;
case 6:cout<<"                                                            ";
       break;
case 7:cout<<"                                                                      ";
       break;
default:break;
}
cout<<"|_______|";
d=getch();

if(d=='4')
  {if(p!=0)
     {p--;
     }
   else p=7;
  }
else if(d=='6')
       {if(p!=7)
	  {p++;
	  }
	else p=0;
	}

c++;

if(c%5==0)
  {left--;
   if(egg0[p]=='\2')
     {score++;
     }
   else
     {drop++;
     }
  }


if(left==0)
  if((score+drop)==con)
    break;
}

clrscr();
cout<<"******************************** Play Station 4 ********************************\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"                                 Catch the Eggs\n";
cout<<"\n\nEggs Catched :"<<score;
cout<<"\n\nEggs Dropped :"<<drop;
cout<<"\n\nTotal Eggs   :"<<con;
cout<<"\n\n--------------------------------------------------------------------------------\n";

double per;
per=(score/con)*100;

if(score>drop)
{cout<<"\n\n\n\n                                 YOU WON IT!!!!";
 cout<<"\n\n                     Eggs Catched is more than Eggs Dropped";
}
else if(score<drop)
{cout<<"\n\n\n\n                               SORRY YOU LOSE!!!!";
 cout<<"\n\n                     Eggs Catched is less than Eggs Dropped";
}
else
{cout<<"\n\n\n\n                                GAME IS DRAW!!!!";
 cout<<"\n\n                      Eggs Catched is equalto Eggs Dropped";
}
cout<<"\n\n\n\n                           Your Percentage is "<<per;
getch();
cout<<"\n\n\n\n                           Press any key to continue!";
getch();
}

void speed()
{  clrscr();
   time_t first, second;
   int stop=0,n1=0,n2=0,cp=0,wp=0;
   double i,t=1;
   char pos;
   cout<<"******************************** Play Station 4 ********************************\n";
   draw_line(80,'~');
   cout<<"****************************** Response Speed Test *****************************\n";
   cout<<"\n\nIn this game you will see a NumPad. In which, one of the blocks will be white!\n\nTry to press the correct number of block and competete with the running time!\n\nUse the NumPad keys for easy gameplay!\n";
   cout<<"\n\nEnter the number of seconds you want to play:";
   cin>>t;
   while(isdigit(t)==1)
   {cout<<"\n\nWrong input! Enter again:";
   cin>>t;
   }
   clrscr();
   cout<<"******************************** Play Station 4 ********************************\n";
   draw_line(80,'~');
   cout<<"****************************** Response Speed Test *****************************\n";
   cout<<"\n\n\n\n\n\n\n                                        3";
   delay(1000);
   clrscr();
   cout<<"******************************** Play Station 4 ********************************\n";
   draw_line(80,'~');
   cout<<"****************************** Response Speed Test *****************************\n";
   cout<<"\n\n\n\n\n\n\n                                        2";
   delay(1000);
   clrscr();
   cout<<"******************************** Play Station 4 ********************************\n";
   draw_line(80,'~');
   cout<<"****************************** Response Speed Test *****************************\n";
   cout<<"\n\n\n\n\n\n\n                                        1";
   delay(1000);
   clrscr();
   cout<<"******************************** Play Station 4 ********************************\n";
   draw_line(80,'~');
   cout<<"****************************** Response Speed Test *****************************\n";
   cout<<"\n\n\n\n\n\n\n                                       GO!";
   delay(1000);
   clrscr();
   first = time(NULL);
   second = time(NULL);
   randomize();
   do
   {
//--------------------------------------------------------------------------
   clrscr();
   i=n1;
   cout<<"******************************** Play Station 4 ********************************\n";
   draw_line(80,'~');
   cout<<"\nCorrect Press :"<<cp;
   cout<<"\n\nWrong Press   :"<<wp;

   n1=random(9)+1;

   cout<<endl<<endl;
   draw_line(80,'-');
   cout<<"\n\n\n\n\n\n\n\t\t\t";

   switch(n1)
   {
   case 1:cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    7    |    8    |    9    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    4    |    5    |    6    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |    2    |    3    |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n";
       break;
   case 2:cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    7    |    8    |    9    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    4    |    5    |    6    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t|    1    | 0000000 |    3    |\n\t\t\t|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t";
       cout<<"----------+---------+----------\n";
       break;
   case 3:cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    7    |    8    |    9    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    4    |    5    |    6    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|    1    |    2    | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t";
       cout<<"----------+---------+----------\n";
       break;
   case 4:cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    7    |    8    |    9    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |    5    |    6    |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    1    |    2    |    3    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n";
       break;
   case 5:cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    7    |    8    |    9    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t|    4    | 0000000 |    6    |\n\t\t\t|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    1    |    2    |    3    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n";
       break;
   case 6:cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    7    |    8    |    9    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|    4    |    5    | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    1    |    2    |    3    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n";
       break;
   case 7:cout<<"----------+---------+----------\n\t\t\t";
       cout<<"| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |    8    |    9    |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t| 0000000 |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    4    |    5    |    6    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    1    |    2    |    3    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n";
       break;
   case 8:cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t|    7    | 0000000 |    9    |\n\t\t\t|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t|         | 0000000 |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    4    |    5    |    6    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    1    |    2    |    3    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n";
       break;
   case 9:cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|    7    |    8    | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t|         |         | 0000000 |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    4    |    5    |    6    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n\t\t\t";
       cout<<"|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|    1    |    2    |    3    |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t|         |         |         |\n\t\t\t";
       cout<<"----------+---------+----------\n";
       break;
   default:break;
   }
   n2=getch();
   n2=n2-48;
   if(n2==n1)
     cp++;
   else
     wp++;

//--------------------------------------------------------------------------
   second = time(NULL);
   if(difftime(second,first)>=t)
     {stop=1;
     t=difftime(second,first);
     break;
     }
   }while(stop==0);

   clrscr();
   cout<<"******************************** Play Station 4 ********************************\n";
   draw_line(80,'~');
   cout<<"\nCorrect Press :"<<cp;
   cout<<"\n\nWrong Press   :"<<wp;
   cout<<endl<<endl;
   draw_line(80,'-');
   i=cp/t;
   cout<<"\n\n\n\n\n\n\n\t\tYour Speed is "<<i<<" correct presses per second!";
   cout<<"\n\n\n\n\n\n\n\t\t\t     Press any key to continue!";
   getch();

}

void calc()
{clrscr();
randomize();
time_t first, second;
int opt,a,b,c,i,cp=0,wp=0,ans,n;
double t;
char level;
cout<<"******************************** Play Station 4 ********************************\n";
draw_line(80,'~');
cout<<"******************************** The Calculator ********************************\n";
cout<<"\n\nIn this game you have to calculate the randomly given mathemetical equations!\n\nAfter 10 questions you are rated according to the time you use according to the\ndifficulty mode selected.\n\nUse NumPad keys for easy gameplay!\n\n\nSelect a Difficulty Level:\n\n\t1: Easy\t\t(1 sum per 1 sec)\n\n\t2: Normal\t(1 sum per 2 sec)\n\n\t3: Hard\t\t(1 sum per 5 sec)\n\nPress your choice:";

level=getch();
putch(level);
while(isdigit(level)==0)
{
cout<<"\n\nPlease press a valid digit from the menu!\n\nPress your choice:";
level=getch();
putch(level);
}
n=level-48;
switch(n)
{
case 1:n=10;
       cout<<"\n\nEasy mode selected!\n\nPress any key to continue!";
       break;
case 2:n=100;
       cout<<"\n\nNormal mode selected!\n\nPress any key to continue!";
       break;
case 3:n=1000;
       cout<<"\n\nHard mode selected!\n\nPress any key to continue!";
       break;
default:cout<<"\n\n"<<level<<" is not in options!\n\nProceding with Hard mode!\n\nPress any key to continue!";
	n=1000;
	break;
}
getch();
first = time(NULL);
for(i=0;i<10;i++)
{clrscr();
 cout<<"******************************** Play Station 4 ********************************\n";
 draw_line(80,'~');
 cout<<"******************************** The Calculator ********************************\n\n\n";
 draw_line(80,'-');
 cout<<"\n\nGame Level     :"<<level-48;
 cout<<"\n\nRight Answers  :"<<cp;
 cout<<"\n\nWrong Answers  :"<<wp;
 cout<<"\n\nQuestions Left :"<<(10-(cp+wp))<<endl<<endl;
 draw_line(80,'-');
 cout<<"\n\n";
 opt=random(3);
 a=random((n)+1);
 b=random((n)+1);
 switch(opt)
 {case 0:cout<<"ADD\n\n"<<a<<" + "<<b<<" = ";
	 c=a+b;
	 break;
  case 1:if(a>b)
	 {
	 cout<<"SUBTRACT\n\n"<<a<<" - "<<b<<" = ";
	 c=a-b;
	 }
	 else
	 {
	 cout<<"SUBTRACT\n\n"<<b<<" - "<<a<<" = ";
	 c=b-a;
	 }
	 break;
  case 2:b=b%9;
	 cout<<"MULTIPLY\n\n"<<a<<" x "<<b<<" = ";
	 c=a*b;
	 break;
  default:break;
 }
cout<<"\n\n";
cin>>ans;
if(ans==c)
  {cout<<"\nCorrect Answer!";
   cp++;
  }
else
  {cout<<"\nWrong answer!\n\nCorrect Answer is "<<c;
   wp++;
  }
cout<<"\n\nPress any key to continue!";
getch();
}
second = time(NULL);
t=difftime(second,first);
clrscr();
cout<<"******************************** Play Station 4 ********************************\n";
draw_line(80,'~');
cout<<"******************************** The Calculator ********************************\n\n\n";
draw_line(80,'-');
cout<<"\n\nGame Level     :"<<level-48;
cout<<"\n\nRight Answers  :"<<cp;
cout<<"\n\nWrong Answers  :"<<wp;
cout<<"\n\nTime taken     :"<<t<<endl;
draw_line(80,'-');

switch(n)
{
case 100:t=t/2;
	 break;
case 1000:t=t/5;
	  break;
default:break;
}

cout<<"\n\n\n\n\t\t\t  Your accuracy is "<<(cp/t)*100<<"%\n\n\n\n\t\t\t  Press any key to continue!";
getch();
}