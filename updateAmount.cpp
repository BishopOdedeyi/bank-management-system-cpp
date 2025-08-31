#include <iostream>
#include <fstream>
#include <stdlib.h>

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

    Customer customer;
    int accountNumber;
    int newAmount;

    std::cout << "Enter your account number: ";
    std::cin >> accountNumber;

    std::cout << "Enter your deposit amount: ";
    std::cin >> newAmount;

    std::fstream file("customers.txt", std::ios::in);
    std::fstream tempFile("tempData.txt", std::ios::out);

    file >> customer.accountNumber >> customer.firstName >> customer.lastName >> customer.phoneNumber >> customer.BVN >> customer.email >> customer.balance;

    while(!file.eof())
    {
        if(customer.accountNumber == accountNumber)
        {
            std::cout << "Former balance: " << customer.balance << std::endl;
            customer.balance += newAmount;
            std::cout << "New balance: " << customer.balance << std::endl;
            tempFile << customer.accountNumber << "\t" << customer.firstName << "\t" << customer.lastName << "\t" << customer.phoneNumber << "\t" << customer.BVN << "\t" << customer.email << "\t" << customer.balance << std::endl;
        }
        else
        {
            tempFile << customer.accountNumber << "\t" << customer.firstName << "\t" << customer.lastName << "\t" << customer.phoneNumber << "\t" << customer.BVN << "\t" << customer.email << "\t" << customer.balance << std::endl;
        }
        file >> customer.accountNumber >> customer.firstName >> customer.lastName >> customer.phoneNumber >> customer.BVN >> customer.email >> customer.balance;
    }

    file.close();
    tempFile.close();

    remove("customers.txt");
    rename("tempData.txt", "customers.txt");

    return 0;
}