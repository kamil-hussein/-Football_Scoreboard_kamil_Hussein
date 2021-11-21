#include <iostream>
#include <string>

using namespace std;

class Team
{
  private:
  string Name;
  string Coach_Name;
  string Home_Status;
  int Score;
  int  Timeout_Count;


  public:

  void setName(string n){
Name=n;

  }
  void setCouch_Name(string n){
  Coach_Name=n;
  }
  void setHome_Status(string n){
    Home_Status=n;
  }
  void setScore(int n){
    Score=n;
  }
  void setTimeout_Count(int n){
     Timeout_Count=n;
  }
string getName(){

  return Name;

}
string getCouch_Name(string n){
  return Coach_Name;
}
string getHome_Status(){
  return Home_Status;
}
int getScore(){
  return Score;
}
int getTimeout_Count(){
  return  Timeout_Count;
}
};

class Scoreboard{
  private:
  int Home;
  int Visitor;
  int Down;
  int ToGO;
  int QTR;
  int Time;

  public:

  void setHome(int m){
    Home=m;
  }
  void setVisitor(int m){
    Visitor=m;
  }
  void setDown(int m){
    Down=m;
  }
  void setQTR(int m){
    QTR=m;
  }
  void setTime(int m){
    Time=m;
  }
  int getHome(){
    return Home;
  }
  int getVisitor(){
    return Visitor;
  }
  int getDown(){
    return Down;
  }
 int getQTR(){
   return QTR;

  }
  int getTime(){
    return Time;
  }



};




int main(){
  
  string Name;
  int Score;

 int  Home=0;


  

}
// Rectangle box;        // Define an instance of the Rectangle class 
   // double rectWidth;     // Local variable for width 
   // double rectLength;    // Local variable for length 
 
    // Get the rectangle's width and length from the user. 
   // cout << "This program will calculate the area of a\n"; 
   // cout << "rectangle. What is the width? "; 
   // cin >> rectWidth; 
   // cout << "What is the length? "; 
   // cin >> rectLength;
//In int main()

       //Create 2 instances of the Team Class (Objects) //(any two teams you like, any home team set you like)

      // Show the scoreboard with the various values //initialized to zero

      // Make the scoreboard functional and able to be //updated with your input from the keyboard