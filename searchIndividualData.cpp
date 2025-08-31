#include <iostream>
#include <fstream>

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

    int accountNumber;
    Customer customer;

    std::cout << "Enter your account number: ";
    std::cin >> accountNumber;

    std::fstream file("customers.txt", std::ios::in);
    if(!file)
    {
        std::cout << "Could not open file to customer credentials" << std::endl;
    }

    file >> customer.accountNumber >> customer.firstName >> customer.lastName >> customer.phoneNumber >> customer.BVN >> customer.email >> customer.balance;

    while (!file.eof())
    {
        if(customer.accountNumber == accountNumber)
        {
            std::cout << "Hello " << customer.firstName << "\n\tAccount Number: " << customer.accountNumber << "\n\tEmail: " << customer.email << "\n\tBalance: " << customer.balance << std::endl;
        }
        file >> customer.accountNumber >> customer.firstName >> customer.lastName >> customer.phoneNumber >> customer.BVN >> customer.email >> customer.balance;
    }

    file.close();

    return 0;    
}