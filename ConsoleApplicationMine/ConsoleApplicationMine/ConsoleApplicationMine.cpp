#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>

#define endl "\n"

int main()
{
	int arr[4][4] = { 0 };

	srand(time(nullptr));

	int x = (rand() % 3) + 1;
	int y = (rand() % 3) + 1;

	arr[y][x] = 1;

	while (true)
	{
		std::cout << "Enter a value for x: ";
		std::cin >> x;
		std::cout << "Enrer a value for y: ";
		std::cin >> y;

		if (arr[y-1][x-1] == 1)
		{
			break;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int l = 0; l < 4; l++)
		{
			if (arr[i][l] == 0)
			{
				std::cout << "| |";
			}
			else
			{
				std::cout << "|X|";
			}
		}

		std::cout << endl;
	}
}
