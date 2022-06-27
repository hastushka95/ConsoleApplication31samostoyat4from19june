// ConsoleApplication31samostoyat4from19june.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>
#include<windows.h>
#include <time.h>

int main()
{
	int a, b, round, number;
	int choice, life, points, trying;
	points = 0;
	trying = 0;
	srand(time(NULL));
	do{
		cout<< "choice your level\n";
		cout << "1 your number 1-10\n ";
		cout << " 2- your number 10-100\n";
		cout << "3-exit\n";
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "its 1 level \n";
			a = 1;
			b = 10;
			life = (b - a + 1) / 2;
			round = a + rand() % (b - a);
			do {
				cout << "your life\n";
				cout << life;
				cout << " your choice of number\n";
				cin >> number;
				if (number == round) {
					cout << "win\n";
					trying = 1;
				}
				else {
					cout << "u lost -1 life\n";
						life--;
						cout << "your life\n";
						cout << life << "\n";
						do {
							cout << "need help???\n";
							cout << "1 yes 0 no\n";
							cin >> choice;
							if (choice == 1) {
								if (number > round) {
									cout << "number less\n";
									life--;
								}
								else {
									cout << "number is over\n";
									life--;

								}
							}
						} while ((choice != 1) && (choice != 0));
				}
			} while ((life > 0) && (trying == 0));
			points = life * 5;
			if (points == 0) {
				cout << "u lost\n";
			}
			else {
				cout << "u got" << points << "\n";

			}
			break;
		}
		case 2: {
			cout << "its 2 level \n";
			a = 10;
			b = 100;
			life = (b - a + 1) / 4;
			round = a + rand() % (b - a);
			do {
				cout << "your life\n";
				cout << life;
				cout << " your choice of number\n";
				cin >> number;
				if (number == round) {
					cout << "win\n";
					trying = 1;
				}
				else {
					cout << "u lost -1 life\n";
					life--;
					cout << "your life\n";
					cout << life << "\n";
					do {
						cout << "need help???\n";
						cout << "1 yes 0 no\n";
						cin >> choice;
						if (choice == 1) {
							if (number > round) {
								cout << "number less\n";
								points--;
							}
							else {
								cout << "number is over\n";
							points--;

							}
						}
					} while ((choice != 1) && (choice != 0));
				}
			} while ((life > 0) && (trying == 0));
			points = life * 10;
			if (points == 0) {
				cout << "u lost\n";
			}
			else {
				cout << "u got" << points << "\n";

			}
			break;
			
		}
		case 3: {
			cout << "bye\n";
			break;
		}
		default:
			cout << "try again\n";
		}

	}while (choice != 3);
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
