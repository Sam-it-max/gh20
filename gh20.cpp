// gh20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	/*Пример №1

	for (int count = 1; count <= 5; count++)
	
	{
		cout << "The student squatted " << count <<
			" times\n";
	}
	
	return 0;
	*/
	
	/* Пример №2 
	for (int count = 0; count < 5; count++)
	{
		cout << "The student squatted " << count <<
			" time\n";
	}
	return 0;
	*/

	/* Пример №3
	int x;
	for (x = 0; x <= 10; x += 2)
	{
		cout << x << " ";
	}
	cout << endl;
	*/

	/* Пример №4 
	for (int x = 1; x <= 5; )
	{
		cout << x << " ";
		x++;
	}
	cout << endl;
	*/

	/* Пример №5
	* 
	for (int x = 1; ; x++)
	{
		cout << x << " ";
	}
	cout << endl;
	*/
	
	/*Пример №6
	for (int x = 1;; x++)
	{
		if (x == 105) break; 
		
		cout << x << " ";
	}
	cout << "Bye!\n";
	return 0;
	*/


	/**/
	
	int magicNum = 2;
	cout << "==================================\n\n";
	cout << " My magic number between 1 and 10\n";
	cout << "==================================\n\n";
	
	int user = 0;
	for (int n = 1; n <= 5; n++)
	{
		cout << "Your number is -> ";
		cin >> user;

		// проверяем, угадал ли пользователь наше
		// число если да, выводим поздравление
		// и прерываем цикл
		
		if (user == magicNum)
		{
			cout << "Congrats!!!\n";
			break;
		}

		else
		{
			// иначе пользователь еще не отгадал
			cout << "That’s not my number\n";
		}
		// если счетчик достиг 5, выводим сообщение
		// попробовать сыграть снова
		if (n == 5)
		{
			cout << "Try again later\n";
		}
	}
	
	return 0;
	
}
	


