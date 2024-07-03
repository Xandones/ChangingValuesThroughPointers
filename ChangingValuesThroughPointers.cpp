#include <iostream>

void ChangeNumbers(int* ptrX, int* ptrY); 

int main()
{
	int Number, Number2;

	std::cout << "Type one number: ";
	std::cin >> Number;
	std::cout << "Type another number: ";
	std::cin >> Number2;
	std::cout << "Memory address of Number: " << &Number << " | Memory address of Number2: " << &Number2 << "\n";
	std::cout << "\nValues before change\n";
	std::cout << "First number:" << Number << "| Second number:" << Number2 << "\n";
	std::cout << "Values after change\n";
	ChangeNumbers(&Number, &Number2); // To use the pointers inside the function we must set the attributes of the function as the variables addresses.
	std::cout << "First number: " << Number << " | Second number: " << Number2 << "\n";
}

void ChangeNumbers(int* ptrX, int* ptrY)
{
	// This function uses two pointers to swap the values of varibles declared in the main function.
	int Temp{ *ptrX }; // It's possible to use a common integer varible to access the variable received through a pointer.
	std::cout << "Memory address of pointer ptrX: " << &ptrX << " | Memory address of pointer ptrY:  " << &ptrY << "\n";
	*ptrX = *ptrY;
	*ptrY = Temp;
}
