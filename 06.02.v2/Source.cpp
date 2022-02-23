#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
//вывод массива на экран
void showArr(int array[], int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++) 
		cout << array[i] << ", ";
	
	cout << "\b\b]";
}
//возвращение индекса первого вхождения элемента в массив
template<typename T> int serchIndex(T array[], int lenght, T key, int begin = 0) {
	for (int i = begin; i < lenght; i++)
		if (array[i] == key)
			return i;
	return -1;
}
//возвращение индекса последнего вхождения элемента в массив
template <typename T> int searchLactIndex(T array[], int lenght, T key, int begin=0 ) {
	begin = lenght - 1;
	for (int i = begin; i >= 0; i--)
		if (array[i] == key)
			return i;
	return -1;
}
//возвращение максимального элемента массива
int maxElement(int array[],int lenght) {
	int max = array[0];
	for (int i = 0; i < lenght; i++) {
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
//возвращение минимального элемента массива
int minElement(int array[], int lenght) {
	int min = array[0];
	for (int i = 0; i < lenght; i++) {
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
//возвращение среднее арифмитическое всеъ элементов массива
int meanValue(int array[], int lenght) {
	int arif = 0;
	for (int i = 0; i < lenght; i++) {
		arif += array[i];
	}
	return arif/lenght;
}
//вывод элемнетов входящих в диапазон
void range(int array[],int lenght, int num1, int num2) {
	cout << "Элементы массива, входящие в указанный диапазон: ";
	for (int i = 0; i < lenght; i++) {
		if ((array[i] >= num1) && (array[i] <= num2))
		cout <<array[i] << ", ";
	}
	cout <<"\b\b.";
			

}
//возвращение количества вхождений числа в массиве
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
	cout << "\nВведите элемент массива: ";
	cin >> n;
	cout<<"Индекс первого вхождения элемента в массив = " << serchIndex(arr, lenght, n);
	cout <<"\nВведите элемент массива: ";
	cin >> n;
	cout << "Индекс последнего  вхождения элемента в массив = " << searchLactIndex(arr, lenght, n);
	cout<<"\nМаксимальный элемнет массива= "<< maxElement(arr, lenght);
	cout <<"\nМинимальный элемнет массива= " << minElement(arr, lenght);
	cout << "\nСреднее арифметическое всех элементов массива= " << meanValue(arr, lenght);
	cout << "\nВведите начало диапазона: ";
	cin >> n1;
	cout << "Введите конец диапазона: ";
	cin>> n2;
	range(arr,lenght, n1, n2);
	cout << "\nВведите элемнет массива: ";
	cin >> n3;
	cout << "Введенный элемент встречается в массиве = " << counter(arr, lenght, n3)<<" раз";


	return 0;
}