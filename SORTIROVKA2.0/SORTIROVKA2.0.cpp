#include <iostream>
#include <windows.h>// для SetConsoleCP, SetConsoleOutputCP
#include <conio.h> // для использования _kbhit, _getch
#include <random>
using namespace std;

//рекурсия минимального числа для массива
int min_chislo(int massiv[],int razmer)
{
	if (razmer <= 0)
		return massiv[0];
	int min = min_chislo(massiv, razmer - 1);
	if (massiv[razmer - 1] < min)
		return massiv[razmer - 1];
	else
	return min;
}



//рекурсиваная функция суммы чисел от первого до последнего 
void summa_chisla(int nachalo, int kones) {
	/*int summa = 0;
	for (int i = nachalo; i < kones; ++i) {
		summa += i;
	}return summa;}*/

	//рекурсивный способ внизу,обычный способ через цикл сверху.
	int summa = 0;
	if (nachalo > kones)
		return summa;
		//	summa = nachalo + summa_chisla(nachalo+1,kones);	
		//	return summa;
	//можно две верхнии строки записать в одну
	return nachalo + summa_chisla(nachalo + 1, kones);
}

//рекурсивная функия которая будет вызывать делитель.Вызов этой функции пример : cout<<delitel (9,3)
void deliteli(int chislo, int delitel) {
	if (delitel > chislo)
		return;
	if (chislo % delitel == 0) //если две эти строки перенести ниже,то будет в обратном порядке
		cout << delitel << " ";
	deliteli(chislo, delitel + 1);
}

//Разбор рекурсивной функции факторила числа (факториал числа 4! = 1*2*3*4)
//Вызов функции факториала запись : fuctorial (4) в скобках ставится число факториал которого хочешь получить
double fuctorial(int chislo)
{
	if (chislo == 1)
		return 1;
	return chislo* fuctorial(chislo-1);
}


//заполнение массива и вывод на экран.
	int vivvod(int massiv[], int razmer) {
		random_device Rand;
		for (int i = 0; i < razmer; ++i) {
			massiv[i] = Rand() % 100;
			cout << massiv[i] << " ";
		}
		return 0;
	}

	//модернезировать пузырьковаую сортировку - сделать функицю или шаблон.
	template<typename kek>
	kek pyzirki(kek massiv[], int razmer) {
		random_device Rand;
		int i = 0;
		for (; i < razmer; ++i) {
			bool flag = true;
			
			for (int j = i; j < razmer - 1 - i; ++j) {
				if (massiv[j] > massiv[j + 1])
				{
					int tmp = massiv[j];
					massiv[j] = massiv[j + 1];
					massiv[j + 1] = tmp;
					flag = false;
				}
			}
			if (flag)
				break;
			for (int k = razmer - 1 - i; k > i; --k) {
				if (massiv[k - 1] > massiv[k])
				{
					int tmp = massiv[k - 1];
					massiv[k - 1] = massiv[k];
					massiv[k] = tmp;
					flag = false;
				}
			}
			if (flag)
				break;
		}
	}

	int main() {

		//Cортировка пузырьком(из дз)
		/* {
			random_device Rand;
			setlocale(LC_ALL, "Russian");
			const int size = 20;
			int abc[size] = {};
			for (int i = 0; i < size; ++i) {
				abc[i] = Rand() % 100;
				cout << abc[i] << " ";
			}
			cout << endl;
			int i = 0;
			for (; i < size; ++i) {
				bool flag = true;

				for (int j = i; j < size - 1 - i; ++j) {
					if (abc[j] > abc[j + 1])
					{
						int tmp = abc[j];
						abc[j] = abc[j + 1];
						abc[j + 1] = tmp;
						flag = false;
					}
				}
				if (flag)
					break;
				for (int k = size - 1 - i; k > i; --k) {
					if (abc[k - 1] > abc[k])
					{
						int tmp = abc[k - 1];
						abc[k - 1] = abc[k];
						abc[k] = tmp;
						flag = false;
					}
				}
				if (flag)
					break;
			}
			cout << "the end:" << i << endl;
			cout << "----after---\n";
			for (int i = 0; i < size; ++i) {
				cout << abc[i] << " ";
			}
			cout << endl;
		}*/
		//Cортировка выбором
					/*const int count_sportmens = 20;
					int numbers[count_sportmens] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17, 18,19,20 };
					int times[count_sportmens] = {};
					for (int i = 0; i < count_sportmens; ++i) {
						times[i] = Rand() % 1000+1;
						cout << numbers[i] << "\t" << times[i] << endl;
					}
					cout << "-------after sorting----\n";
					for (int i = 1; i < count_sportmens; ++i) {
						for (int j = i; j > 0; j--) {
							if (times[j] < times[j - 1]) {
								int tmp_t = times[j];
								times[j] = times[j - 1];
								times[j - 1] = tmp_t;

								int tmp_n = numbers[j];
								numbers[j] = numbers[j - 1];
								numbers[j - 1] = tmp_n;
							}
						}
					}
					for (int i = 0; i < count_sportmens; ++i) {
						cout << numbers[i] << "\t" << times[i] << endl;
					}
				*/

				// Создать следующие функции
				// 1. Заполнение массива
				// 2. Вывод массива на экран
				// 3. Модернизированная пузырьковая сортировака


	}