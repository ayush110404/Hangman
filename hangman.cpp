#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
#define debug(x) cout<<#x<< <<x ;

void welcome(){
    cout<<"=================WELCOME TO====================";
    cout<<"==============HANGMAN THE GAME=================";
}

void lives(int incorrect)
{
  if(incorrect==0)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(incorrect==1)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(incorrect==2)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(incorrect==3)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(incorrect==4)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(incorrect==5)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\ | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(incorrect==6)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\ | \n";
    cout<<" / \\ | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
}

void status(int incorrect,string answer){
    cout<<"INCORRECT WORDS :\n";
    cout<<incorrect<<'\n';
    cout<<"GUESS THE WORD : \n";
    for(int i=0;i<answer.size();i++){
        cout<<answer[i];
    }cout<<'\n';

}

void ending(string ans,string word){
    if(ans==word){
        cout<<"CONGRATULATION YOUR FRIEND IS SAVED"<<'\n';
    }
    else{
        cout<<"OHH!! YOU CAN'T SAVE YOUR FREIND"<<'\n';
        // cout<<"THE CORRECT ANS IS"<<word;
    }
}




int main(){
    welcome();
    string arr[4] {"codingw","hathway","awesome","courses"};
    string word ="awesome";
    string ans ="_______";
    int incorrect =0;
    vector<char> incword;
    bool guess = false;
    char letter;

    while (ans!= word && incorrect<6)
    {
        lives(incorrect);
        status(incorrect,ans);

        cout<<"PLEASE ENTER THE LETTER: ";
        cin>>letter;

        for(int i=0;i<word.size();i++){
            if(letter==word[i]){
                ans[i]=letter;
                guess=true;
            }
        }
        if(guess){
            cout<<"WOOH!! IT IS CORRECT"<<"\n";
        }
        else{
            cout<<"NAAH!! IT'S NOT CORRECT"<<"\n";
            incorrect++;
        }

        guess=false;
    }

    ending(ans,word);
    return 0;
}