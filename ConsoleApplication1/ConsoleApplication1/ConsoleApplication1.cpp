﻿#include <iostream>//заголовочный файл с классами, функциями и переменными для организации ввода-вывода
#include <string>//заголовочный файл для работы со строками
#include <malloc.h>//заголовочный файл для выделения памяти под массив

using namespace std;// пространство имен, где определяются идентификаторы
int main() {
	setlocale(0, "russian"); //установка вывода сообщений на русском языке
	const int i = 20;//индекс для массива
	int kol = 0;//количество вершин с количеством букв больше 7
	int kob = -1;//индекс для нового массива
	int is = 0;//индекс для нового массива
	string temp;//переменная для сортировки по алфавиту
	string array[i] = { "Эверест","Чогори","Макалу","Дхаулагири","Манаслу","Броуд-Пик","Аннапурна",
	"Дастогхил","Нупцзе","Машербрум","Чомолонзо","Ракапоши","Канджут","Жанну","Тиричмир","Конгур","Тривор","Гунгашань","Чангзе","Ношак" };//содержимое массива
	cout << "ГОРНЫЕ ВЕРШИНЫ:\n";
	for (int i = 0; i < 20; i++) {
		cout << i + 1 << ": " << array[i] << '\n';
	}//вывод массива
	for (int i = 0; i < 20; i++) {
		if (array[i].size() > 7) {
			kol += 1;
		}
	}//поиск слов с количеством букв боьше 7
	string* A;
	A = new string[kol];//объвление массива A
	cout << endl;
	cout << "НОВЫЙ МАССИВ: \n";

	for (int i = 0; i < 20; i++) {
		if (array[i].size() > 7) {
			kob += 1;
			is = kob;
			A[is] = array[i];
			cout << is + 1 << ": " << A[is] << '\n';
		}
	}//запись найденных слов в новый массив
	cout << endl;
	cout << "ПО АЛФАВИТУ: \n";
	for (is = 0; is < kol - 1; is++) {
		for (int j = is + 1; j < kol; j++) {
			if (A[is] > A[j]) {
				temp = A[is];
				A[is] = A[j];
				A[j] = temp;
			}
		}
	}//сортировка по алфавиту нового массива
	for (is = 0; is < kol; is++) {
		cout << is + 1 << ": " << A[is] << '\n';
	}//вывод измененного массива
	cout << endl;
	system("pause");
	return 0;
}
