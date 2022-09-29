#include <iostream>
using namespace std;
class Student
{
 private:
 char name[20];
 int Roll_No;
 public:
 void input()
 {
 cout<<"Enter Name and Roll_NO: ";
 cin>>name;
 cin>>Roll_No;
 }
 void display(void);
};
void Student::display()
{
 cout<<"Name: "<<name<<endl<<"Roll No: "<<Roll_No<<"\n";

}
int main(int args, char const *argv[])
{
 Student st;
 st.input();
 st.display();
 return 1;
}