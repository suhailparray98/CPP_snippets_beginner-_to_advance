/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */
#include<iostream>
#include<string>
#include<sstream>
int main()
{
    std::string length;
    std::string width;
    int area;
    int l=0;
    int w=0;
    std::getline(std::cin,length);
    std::getline(std::cin,width);
    std::stringstream(length)>>l;
    std::stringstream(width)>>w;
    area=l*w;
    std::cout<<"area of the room: "<<area<<"\n";
    return 0;

}

Code contributed by suhail ahmad parray
