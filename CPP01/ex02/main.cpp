#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& ref = str;
    
    std::cout << "Adress str : " << &str << std::endl;
    std::cout << "Adress ptr : " << ptr << std::endl;
    std::cout << "Adress ref : " << &ref << std::endl;

    std::cout << std::endl;
    std:: cout << "Var value : " << str << std::endl;
    std:: cout << "ptr value : " << *ptr << std::endl;
    std:: cout << "ref value : " << ref << std::endl;
    return(0);
}