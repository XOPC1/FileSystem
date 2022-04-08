//������������ ������ ������� �++
#include <iostream>
#include <fstream> // ���������� ����������� �������� � �������� ��������. �������� � ���� ������ ofstream, ifstrea, fstream
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

	//������ 1
	cout << "������� �����:\n";
	string word;
	cin >> word;
	if (statistic(word))
		cout << "����� ��������\n";
	else
		cout << "������ ������\n";
	cout << "������� �����:\n";
	cin >> word;
	if (statistic(word))
		cout << "����� ��������\n";
	else
		cout << "������ ������\n";
	cout << "������� �����:\n";
	cin.ignore();


	/*string path = "fileSysC++.txt"; // ������ ���������� ���� � �����
	ofstream out; // ������ ������ ofstream, ������� ��������� ���������� ������ � ����
	out.open(path, ios::app); // ��������� ���� � ������ ios::app, ����� ��������� � ���� ������

	if (out.is_open()) { // �������� �� �� ������� �� ������� ����
		cout << "���� ������ ��� ������\n";
		string input;
		for (int i = 0; i < 3; i++) {
			cout << "������� ������:\n";
			getline(cin, input);
			out << input << "\n"; // �������� ������ � ����
		}
	}
	else
		cout << "������ �������� �����\n";
	out.close(); // �������� ����� (��������� ������� out)
	cout << endl;



	ifstream in; // ������ ������ ifstream, ������� ��������� ��������� ������ �� �����
	in.open(path); // ��������� ���� ��� ���������� 

	if (in.is_open()) {
		cout << "���� ������ ��� ������\n";
		string str;
		// ���������� �� ����� �����������
		/ *char sym; // ���������� ����������, �������� � ���� ������� �� �����
		while (in.get(sym)) // ����� get ��������� ������ �� ����� � �������� ��� � sym. ���������� false, ���� ���������� �� �������
			str += sym;
		cout << str;* /
		string tmp;
		// ��������� ���������� �� �����
		/ *while (!in.eof()) {
			tmp = "";
			in >> tmp;
			cout << tmp << endl;
			str += tmp + "\n";
		}* /
		// ���������� ���������� �� �����
		while (!in.eof()) {
			getline(in, tmp);
			cout << tmp << endl;
			str += tmp + "\n";
		}
	}
	else
		cout << "������ �������� �����\n";

	in.close();

	if (remove("fileSysC++.txt")) // 0 - �������� ������ �������. ����� ������ ����� - �������� �� ���������
		cout << "������ �������� �����\n";
	else
		cout << "���� ������\n";*/

	return 0;
}