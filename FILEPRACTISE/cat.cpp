#include <iostream>
using  std::string;
class AskForPromotion{
virtual void askPromotion()=0;
};
class employee:AskForPromotion{
//attributes
private:
string name;
string company;
int age;
public:
void setName(string Name){
name=Name;
}
string getName(){
return name;
}
void setCompany(string Company){
company=Company;
}
string getCompany(){
return company;
}
void setAge(int Age){
age=Age;
}
int getAge(){
return age;
}

void askPromotion()
{
    if (age>=18)
    {
        std::cout<<"You Have Been Promoted"<<std::endl;

    }
    else
    std::cout<<"Sorry you do not qualify for Promotion"<<std::endl;
}
employee(string Name,string Comp,int Age){
    name=Name;
    company=Comp;
    age=Age;
}

};
int main()
{
employee employee1=employee("Dylan","Microsoft",16);
employee1.setAge(20);
employee1.askPromotion();
    return 0;
}