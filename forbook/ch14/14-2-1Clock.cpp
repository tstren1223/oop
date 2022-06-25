class Clock{
  public:
    //Clock(){};//default constructor with empty body
    void setTime(int,int,int);
    void getTime(int &,int &,int &) const;
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
