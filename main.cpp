#include<iostream>
#include "questions.h"
using namespace std;
int askquestions(int index)
{
    cout<< "\n Questions"<<index+1<< ":"<< questions[index]<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<" "<< i+1<< "."<< options[index][i]<<endl;
    }
    
    int userAnswer;
    cout<< "Enter your answer (1-4):";
    cin>>userAnswer;

    while(userAnswer<1||userAnswer>4)
   {
    cout<< "Invalid input !!"<< "please select between (1-4)"<<endl;
    cin>>userAnswer;
   }

   if(userAnswer-1==correctAnswers[index])
    {
     cout<< "✅ correctAnswer\n"<<endl;
     return 1;
   }
   else{
    cout<< "❌ incorrectAnswer\n"<<options[index]<< correctAnswers[index]<<endl;
        return 0;
    }
}
int main()
{

    cout<< "==============================\n."<<endl;
    cout<< "Wellcome to Quizgame"<<endl;
    cout<< "==============================\n."<<endl;

    int score=0;
    for(int i=0; i<TOTAL_QUESTIONS; i++)
    {
        score +=askquestions(i);
    }
    cout<< "\n==============================\n."<<endl;
    cout<< "Congratulation !! Quiz complete ,Your Soce: "<<score <<"/"<<TOTAL_QUESTIONS<<endl;
    cout<< "==============================\n."<<endl;

    return 0;
     }
    
