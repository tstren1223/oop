#include<iostream>
using namespace std;
class Clock{
  public:
    //Clock(){};//default constructor with empty body
    //the declare of cunction like const or & need to be added
    void setTime(int,int,int);
    void getTime(int &,int &,int &)const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const Clock &) const;
  private:
    int hr;
    int min;
    int sec;
};
void Clock::setTime(int hours,int minutes,int seconds){
  if(0<=hours&&hours<24)
    hr=hours;
  else 
    hr=0;
  if(0<=minutes&&minutes<60)
    min=minutes;
  else
    min=0;
  if(0<=seconds&&seconds<60)
    sec=seconds;
  else
    sec=0;
}
void Clock::getTime(int &hours,int &minutes,int &seconds) const{
  hours=hr;
  minutes=min;
  seconds=sec;
}
void Clock::incrementHours(){
  hr++;
  if(hr>23)
    hr=0;
}
void Clock::incrementMinutes(){
  min++;
  if(min>59){
    min=0;
    incrementHours();
  }
}
void Clock::incrementSeconds(){
  sec++;
  if(sec>59){
    sec=0;
    incrementMinutes();
  }
}
void Clock::printTime()const{
  if(hr<10)
    cout<<"0";
  cout<<hr<<":";
  if(min<10)
    cout<<"0";
  cout<<min<<":";
  if(sec<10)
    cout<<"0";
  cout<<sec;
}
bool Clock::equalTime(const Clock&otherClock)const{
 /* otherClock.hr=0;
  otherClock.min=0;
  otherClock.sec=0;
  hr=0;
  min=0;
  sec=0;*///error part
  return (hr==otherClock.hr&&min==otherClock.min&&sec==otherClock.sec);
}
int main(){
  Clock myClock;
  Clock yourClock;
  int hours;
  int minutes;
  int seconds;
  //myClock.hr=5;//error
  myClock.setTime(5,4,30);
  cout<<"myClock:";
  myClock.printTime();
  cout<<endl;
  cout<<"yourClock";
  yourClock.printTime();
  cout<<endl;
  yourClock.setTime(5,45,16);
  cout<<"After setting,yourClock:";
  yourClock.printTime();
  cout<<endl;
  if(myClock.equalTime(yourClock)){
    cout<<"Both times are equal."<<endl;
  }
  else
    cout<<"The two times are not equal."<<endl;
  cout<<"Enter the hours,mintues, and seconds";
  cin>>hours>>minutes>>seconds;
  cout<<endl;
  myClock.setTime(hours,minutes,seconds);
  cout<<"New myClock:";
  myClock.printTime();
  cout<<endl;
  myClock.incrementSeconds();
  cout<<"After incrementing myClock by one second,"<<endl<<"myClock:";
  myClock.printTime();
  cout<<endl;
  myClock.getTime(hours,minutes,seconds);
  cout<<"hours = "<<hours<<",minutes = "<<minutes<<",seconds = "<<seconds<<endl;
  return 0;
}
