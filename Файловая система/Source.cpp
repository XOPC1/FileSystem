//Персональный шаблон проекта С++
#include <iostream>
#include <fstream> // Библиотека позволяющая работать с файловой системой. Содержит в себе классы ofstream, ifstrea, fstream
#include <string>
using namespace std;

bool statistic(string str) {
	ofstream out;
	out.open("stat.txt", ios::app);
	if (out.is_open()) {
		out << str << str.size() << "\n";
		out.close();
		return true;
	}
	out.close();
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1
	cout << "Введите слово:\n";
	string word;
	cin >> word;
	if (statistic(word))
		cout << "Слово записано\n";
	else
		cout << "Ошибка записи\n";
	cout << "Введите слово:\n";
	cin >> word;
	if (statistic(word))
		cout << "Слово записано\n";
	else
		cout << "Ошибка записи\n";
	cout << "Введите слово:\n";
	cin.ignore();


	/*string path = "fileSysC++.txt"; // строка содержащая путь к файлу
	ofstream out; // Обьект класса ofstream, который позволяет записывать данные в файл
	out.open(path, ios::app); // открываем файл в режиме ios::app, чтобы добавлять в него записи

	if (out.is_open()) { // Проверка на то удалось ли открыть файл
		cout << "Файл открыт для записи\n";
		string input;
		for (int i = 0; i < 3; i++) {
			cout << "Введите строку:\n";
			getline(cin, input);
			out << input << "\n"; // Записать данных в файл
		}
	}
	else
		cout << "Ошибка открытия файла\n";
	out.close(); // Закрытие файла (обнуление обьекта out)
	cout << endl;



	ifstream in; // Обьект класса ifstream, который позволяет считывать данные из файла
	in.open(path); // открываем файл для считывания 

	if (in.is_open()) {
		cout << "Файл открыт для чтения\n";
		string str;
		// Считывание из файла посимвольно
		/ *char sym; // Символьная переменная, хранящая в себе символы из файла
		while (in.get(sym)) // Метод get считывает символ из файла и помещает его в sym. Возвращает false, если считывание не удалось
			str += sym;
		cout << str;* /
		string tmp;
		// Пословное считывание из файла
		/ *while (!in.eof()) {
			tmp = "";
			in >> tmp;
			cout << tmp << endl;
			str += tmp + "\n";
		}* /
		// построчное считывание из файла
		while (!in.eof()) {
			getline(in, tmp);
			cout << tmp << endl;
			str += tmp + "\n";
		}
	}
	else
		cout << "Ошибка открытия файла\n";

	in.close();

	if (remove("fileSysC++.txt")) // 0 - удаление прошло успешно. Любое другое число - удаление не выполнено
		cout << "Ошибка удаления файла\n";
	else
		cout << "Файл удален\n";*/

	return 0;
}