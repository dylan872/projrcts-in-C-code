#include <iostream>
using std::string;
class employee{
    //members of a cless..blueprint of all employees
    //these are the attributes of employees
    //class members and functions are private in default i.e access modifiers
public: 
   string name;
   string company;
   int age;
   //function for employeee to introduce himself
   public:
   void introduce(){
    std::cout<<"My name is "<<name<<std::endl;
    std::cout<<"I work for "<<company<<std::endl;
    std::cout<<"I am "<<age<<" years old"<<std::endl;
   }
   //what are constructors
   //wheneever an object is called then a constructor is called
   //the compiler usually has default constructors
   //consructors dont ave a return type and mostly are public and have same name as class
   public:
   employee(string Name,string Company,int Age)
   {
    name=Name;
    company=Company;
    age=Age;
   }
};
int main()
{
    employee emp1=employee("Dylan","AWS(Amazon Web Service)",21);
    emp1.introduce();
return 0;
}