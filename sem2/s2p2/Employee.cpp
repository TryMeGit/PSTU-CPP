#include "employee.h"
#include <iostream>
#include <string>

// ����������� ��� ����������
Employee::Employee() {
	fio = "";
	post = "";
	salary = 0;
	cout << "====����������� ��� ����������====" << endl;
}

// ����������� c �����������
Employee::Employee(string _fio, string _post, double _salary) {
	fio = _fio;
	post = _post;
	salary = _salary;
	cout << "===����������� c �����������===" << endl;
}

// ����������� �����������
Employee::Employee(const Employee &e) {
	fio = e.fio;
	post = e.post;
	salary = e.salary;
	cout << "===����������� �����������===" << endl;
}

// ����������
Employee::~Employee() {
	cout << "���������� ��� �������: " << this << endl;
}

// ���������
string Employee::getFIO() {	return fio; }
string Employee::getPost() { return post; }
double Employee::getSalary() { return salary; }

// ������������
void Employee::setFIO(string _fio) { fio = _fio; }
void Employee::setPost(string _post) { post = _post; }
void Employee::setSalary(double _salary) { salary = _salary; }

//����� ��� �������� ���������
void Employee::show() {
	cout << "" << fio << endl;
	cout << "" << post << endl;
	cout << "" << salary << endl;
}