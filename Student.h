class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
    private:
    int studentId; 
    char name[20];

  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
  
    public:
    void assignDetails(int StuId , const char stName[]); 
    void display(); 

};