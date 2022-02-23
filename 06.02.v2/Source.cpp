#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
//����� ������� �� �����
void showArr(int array[], int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++) 
		cout << array[i] << ", ";
	
	cout << "\b\b]";
}
//����������� ������� ������� ��������� �������� � ������
template<typename T> int serchIndex(T array[], int lenght, T key, int begin = 0) {
	for (int i = begin; i < lenght; i++)
		if (array[i] == key)
			return i;
	return -1;
}
//����������� ������� ���������� ��������� �������� � ������
template <typename T> int searchLactIndex(T array[], int lenght, T key, int begin=0 ) {
	begin = lenght - 1;
	for (int i = begin; i >= 0; i--)
		if (array[i] == key)
			return i;
	return -1;
}
//����������� ������������� �������� �������
int maxElement(int array[],int lenght) {
	int max = array[0];
	for (int i = 0; i < lenght; i++) {
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
//����������� ������������ �������� �������
int minElement(int array[], int lenght) {
	int min = array[0];
	for (int i = 0; i < lenght; i++) {
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
//����������� ������� �������������� ���� ��������� �������
int meanValue(int array[], int lenght) {
	int arif = 0;
	for (int i = 0; i < lenght; i++) {
		arif += array[i];
	}
	return arif/lenght;
}
//����� ��������� �������� � ��������
void range(int array[],int lenght, int num1, int num2) {
	cout << "�������� �������, �������� � ��������� ��������: ";
	for (int i = 0; i < lenght; i++) {
		if ((array[i] >= num1) && (array[i] <= num2))
		cout <<array[i] << ", ";
	}
	cout <<"\b\b.";
			

}
//����������� ���������� ��������� ����� � �������
template<typename T> T counter(T array[], int lenght, T num) {
	int count = 0;
	for (int i = 0; i < lenght; i++) {
		if (array[i] == num)
			count++;
	}
	return count;

}





int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, n1,n2,n3;
	const int lenght=100;
	int arr[lenght];

	for (int i = 0; i < lenght; i++) {
		arr[i] = rand() % (101-(-100))+(-100);
	}

	showArr(arr, lenght);
	cout << endl;
	cout << "\n������� ������� �������: ";
	cin >> n;
	cout<<"������ ������� ��������� �������� � ������ = " << serchIndex(arr, lenght, n);
	cout <<"\n������� ������� �������: ";
	cin >> n;
	cout << "������ ����������  ��������� �������� � ������ = " << searchLactIndex(arr, lenght, n);
	cout<<"\n������������ ������� �������= "<< maxElement(arr, lenght);
	cout <<"\n����������� ������� �������= " << minElement(arr, lenght);
	cout << "\n������� �������������� ���� ��������� �������= " << meanValue(arr, lenght);
	cout << "\n������� ������ ���������: ";
	cin >> n1;
	cout << "������� ����� ���������: ";
	cin>> n2;
	range(arr,lenght, n1, n2);
	cout << "\n������� ������� �������: ";
	cin >> n3;
	cout << "��������� ������� ����������� � ������� = " << counter(arr, lenght, n3)<<" ���";


	return 0;
}