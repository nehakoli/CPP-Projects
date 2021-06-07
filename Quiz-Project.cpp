#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int x=0;
 cout<<"                        "<<"HERE'S AN INTERESTING QUIZ FOR YOU"<<endl<<endl;
 cout<<"There are 5 questions"<<endl;
 cout<<"Each correct answer will increase your score by 20"<<endl<<endl;
 cout<<"According to your score you will get to know some facts";
getch();

clrscr();
 int a;
 cout<<"The quiz begins like this"<<endl<<endl;
 cout<<"Question 1"<<endl;
 cout<<"How many sides does a decagon have?"<<endl;
 cin>>a;
 if(a==10)
 {
  x=x+20;
  cout<<"Your answer is correct"<<endl<<"Your score is "<<x;
 }
 else
  cout<<"Oops! your answer is wrong"<<endl<<"Correct answer is 10";
getch();

clrscr();
 int b;
 cout<<"Question 2"<<endl;
 cout<<"How many straight edges does a cube have?"<<endl;
 cin>>b;
 if(b==12)
 {
  x=x+20;
  cout<<"Good job"<<endl<<"Your score is "<<x;
 }
 else
  cout<<"Sorry! Correct answer is 12";
getch();

clrscr();
 int c;
 cout<<"Question 3"<<endl;
 cout<<"How many hours  are there in 7 days?"<<endl;
 cin>>c;
 if(c==168)
 {
  x=x+20;
  cout<<"Well done"<<endl<<"Your score is "<<x;
 }
 else
 cout<<"Oh! wrong answer"<<endl<<"Correct answer is 168";
getch();

clrscr();
 int d;
 cout<<"Question 4"<<endl;
 cout<<"What is 60% of 40?"<<endl;
 cin>>d;
 if(d==24)
 {
  x=x+20;
  cout<<"Nice"<<endl<<"Your score is "<<x;
 }
 else
  cout<<"Bad luck"<<endl<<"Your answer is wrong";
getch();

clrscr();
 int e;
 cout<<"Question 5"<<endl;
 cout<<"What is two thirds of 960?"<<endl;
 cin>>e;
 if(e==640)
 {
  x=x+20;
  cout<<"Well done "<<endl;
  cout<<"Your score is "<<x;
 }
 else
  cout<<"Incorrect answer";
getch();

clrscr();
 if(x==100)
 {
  cout<<"Congratulations!!"<<endl;
  cout<<"Your score is "<<x;
  cout<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"                        "<<"DO YOU KNOW THE MAGIC OF 9?"<<endl<<endl;
  cout<<"STEP 1: Multiply any number with 9."<<endl;
  cout<<"STEP 2: Sum all individual digits  of the result to make it single digit"<<endl;
  cout<<"The single digit will always be 9"<<endl<<endl;
  cout<<"EXAMPLE: 4532 * 9 = 41328"<<endl;
  cout<<"4 + 1 + 3 + 2 + 8 = 18"<<endl;
  cout<<"1 + 8 = 9";
 }
 if(x==80)
 {
  cout<<"Nice Job"<<endl;
  cout<<"Your score is "<<x;
  cout<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"                        "<<"SEE THE MAGIC OF 1!!"<<endl<<endl;
  cout<<"111,111,111 * 111,111,111 = 12345678987654321"<<endl;
  cout<<"11,111 * 11,111 = 123454321"<<endl;
  cout<<"Notice the pattern of their product";
 }
 if(x==60)
 {
  cout<<"Good"<<endl;
  cout<<"Your score is "<<x;
  cout<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"                         A FUNNY FACT"<<endl<<endl;
  cout<<"For pizza,"<<endl;
  cout<<"Let radius = z,"<<endl;
  cout<<"    height = a"<<endl;
  cout<<"Then,"<<endl<<"    volume  = pi * z * z * a";
 }
 if(x==40)
 {
  cout<<"Not so bad"<<endl;
  cout<<"Your score is "<<x;
  cout<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"The mirror image of value of 'pi' i.e., 3.14 is PIE "<<endl;
  cout<<"Which is pronounced as pi";
 }
 if(x==20)
 {
  cout<<"Unexpected"<<endl;
  cout<<"Your score is "<<x;
  cout<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"Among all shapes with the same perimeter a circle has the largest area"<<endl;
  cout<<"&"<<endl;
  cout<<"Among all shapes with the same area a circle has the smallest perimeter";
 }
 if(x==0)
 {
  cout<<"Very Bad"<<endl;
  cout<<"Your score is "<<x<<endl;
  cout<<endl<<endl<<endl<<endl<<endl;
  cout<<"No fact for you";
 }
getch();
}
