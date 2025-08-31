#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    typedef struct
    {
        int accountNumber;
        std::string firstName;
        std::string lastName;
        std::string phoneNumber;
        std::string BVN;
        std::string email;
        float balance;
    }Customer;

    srand(time(0));

    Customer customer; 

    customer.accountNumber = rand()*rand()+rand()*rand();

    std::cout << "Enter your first name: ";
    std::cin >> customer.firstName;

    std::cout << "Enter your last name: ";
    std::cin >> customer.lastName;

    std::cout << "Enter your phone number: ";
    std::cin >> customer.phoneNumber;

    std::cout << "Enter your BVN: ";
    std::cin >> customer.BVN;

    std::cout << "Enter your email: ";
    std::cin >> customer.email;

    std::cout << "Enter your deposit amount: ";
    std::cin >> customer.balance;

    std::cout << "Welcome " << customer.firstName << "\n\tAccount Number: " << customer.accountNumber << std::endl;

    std::fstream file("customers.txt", std::ios::out | std::ios::app);

    file << customer.accountNumber << "\t" << customer.firstName << "\t" << customer.lastName << "\t" << customer.phoneNumber << "\t" <<  customer.BVN << "\t" << customer.email << "\t" << customer.balance << std::endl;

    file.close();

    return 0;
}