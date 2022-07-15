// MidtermPracticalDCrane.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string Questions(std::string question, std::string a, std::string b, std::string c, std::string d);

int main()
{
	int score = 0;
	std::string input1 = Questions("1. What is the capital of Florida? ", "A. Orlando", "B. Miami", "C. Tallahassee", "D. Winter Park");
	if (input1 == "C" || input1 == "c")
	{
		std::cout << "CORRECT!!\n";
		score++;
	}
	else
		std::cout << "INCORRECT!\n";

	std::string input2 = Questions("\n2. When is Independence Day in the U.S.A? ", "A. May 5th", "B. July 4th", "C. Janurary 1st", "D. Feburary 14th");
	if (input2 == "B" || input2 == "b")
	{
		std::cout << "CORRECT!!\n";
		score++;
	}
	else
		std::cout << "INCORRECT!\n";

	std::string input3 = Questions("\n3. What is Full Sail? ", "A. Community College", "B. Middle School", "C. High School", "D. University");
	if (input3 == "D" || input3 == "d")
	{
		std::cout << "CORRECT!!\n";
		score++;
	}
	else
		std::cout << "INCORRECT!\n";

	std::string input4 = Questions("\n4. 8% of 25 is 2, so what is 25% of 8?", "A. 2", "B. 4", "C. 6", "D. 8");
	if (input4 == "A" || input4 == "a")
	{
		std::cout << "CORRECT!!\n";	
		score++;
	}
	else
		std::cout << "INCORRECT!\n";

	std::string input5 = Questions("\n5. When do Full Sail students start their Summer Break? ", "A. May 31st", "B. June 5th", "C. August 10th", "D. July 25th");
	if (input5 == "D" || input5 == "d")
	{
		std::cout << "CORRECT!!\n";
		score++;
	}
	else
		std::cout << "INCORRECT!\n";

	double percent = score / 5.0;
	std::cout << "\n" << "Final Score: " << score << "/5" << " or " << (percent * 100) << "%" << std::endl;
}


std::string Questions(std::string question, std::string a, std::string b, std::string c, std::string d)
{
	std::string input;
	std::cout << question << std::endl;
	std::cout << a << "\n" << b << "\n" << c << "\n" << d << std::endl;
	std::getline(std::cin, input);
	return input;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
