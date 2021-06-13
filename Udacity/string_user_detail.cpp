/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include<iostream>
#include<string>
 

 
int main()
{
    std::string name1,address1,phone_number1;
    std::string name2,address2,phone_number2;
    
    std::cout<"enter name,address and phone number";
    getline(std::cin,name1);
    getline(std::cin,address1);
    getline(std::cin,phone_number1);
    std::cout<"enter name,address and phone number";
    getline(std::cin,name2);
    getline(std::cin,address2);
    getline(std::cin,phone_number2);
    std::cout<<name1<<"\n"<<address1<<"\n"<<phone_number1<<"\n";
    std::cout<<name2<<"\n"<<address2<<"\n"<<phone_number2;
    return 0;

}
