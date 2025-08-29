#include<iostream>
// #include<conio.h>
using namespace std;

class ClassA{
  public:
    virtual void Test()=0;
    // virtual void Test(){
    //     cout<<"\n\n\t\t Hello A";
    // }
};
class ClassB: public ClassA{
  public:
    void Test(){
      cout<<"\n\n\t\t Hello B";
    }
};
class ClassC: public ClassA{
  public:
    void Test(){
      cout<<"\n\n\t\t Hello c";
    }
};

int main(){
//   ClassA *obj1 = new ClassA();
//   obj1->Test();
  
  
  ClassA *obj2 = new ClassB();
  obj2->Test();
  
  
  ClassA *obj3 = new ClassC();
  obj3->Test();
  
//   getch();
  return 0;
}