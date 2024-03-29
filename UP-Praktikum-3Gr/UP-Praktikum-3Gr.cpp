﻿#include <iostream>
#include <cstring>
#include <limits>
#include "UP-Praktikum-3Gr.h"
using namespace std;

//char[]
/*
bool isCorrectFormat(int hours, int minutes, int minutesToAdd) {
	if (hours >= 0 && hours <= 24 && minutes <= 59 && minutes >= 0 && minutesToAdd <= minutes)
	{

		return true;
	}
	return false;
}
void addMinnutes() {
	int hours, minutes, minutesToAdd;
	

	cin >> hours >> minutes;
	cin >> minutesToAdd;

	while (isCorrectFormat(hours, minutes, minutesToAdd) != true) {

		cin >> hours >> minutes;
		cin >> minutesToAdd;
	}

	if (minutes+minutesToAdd>=60)
	{
		minutes = minutes + minutesToAdd - 60;
		 ++hours;
	}
	else
	{
		minutes = minutes + minutesToAdd;
		
	}
	cout << hours << ":" << minutes;
}
bool isPowerOf2(int n) {
	if (n % 2 != 0)
	{
		return false;
	}
	while (n)
	{
		if (n == 2)
		{
			return true;
		}
		n /= 2;
	}
	return false;
}
bool isPrime(int num) {
	if (num < 2)
	{
		return false;
	}
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
void printAllPrimeNumbersInInterval(int a, int b) {
	for (int i = a; i < b; i++)
	{
		if (isPrime(i))
		{
			cout << i << " ";
		}
	}
}
int findOccurences(int n, int digit) {
	int count = 0;

	while (n)
	{

		if (n % 10 == digit)
		{
			count++;
		}
		n /= 10;
	}
	return count;

}
int findMostCommonDigit(int n) {
	int mostCommonDigit = 0;
	int mostOccurences = 0;
	string num = to_string(n);
	for (size_t i = 0; i < num.length(); i++)
	{
		if (findOccurences(n, (int)num[i] - '0') > mostOccurences)
		{
			mostCommonDigit = int(num[i]) - '0';
			mostOccurences = findOccurences(n, (int)num[i] - '0');
		}
	}
	return mostCommonDigit;
}
int minNumber(int a, int b, int c, int d) {
	int min = numeric_limits<int>::max();
	int arr[4] = { a,b,c,d };
	for (size_t i = 0; i < 4; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;

}
int maxNumber(int a, int b, int c, int d) {
	int max = numeric_limits<int>::min();
	int arr[4] = { a,b,c,d };
	for (size_t i = 0; i < 4; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;

}
void printNumbers(int a, int b, int c, int d) {
	cout << "Min: " << minNumber(a, b, c, d) << endl << "Max: " << maxNumber(a, b, c, d);
}
string isLeap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return "Yes";
	}
	return "No";
}
char sign(int n) {
	if (n == 0)
	{
		return '0';
	}
	else if (n < 0)
	{
		return '-';
	}
	return '+';
}
int absolute(int input) {
	return abs(input);
}
void printInput()
{
	char str[100];
	cin.getline(str,100);
	cout << str;
}
void swapCase()
{
	char str[100];
	cin.getline(str, 100);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i]>='A' && str[i]<='Z')
		{
			str[i] += 32;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i] -= 32;
		}
	}
	cout << str;

}
void copyString()
{
	char str1[100];
	char str2[100];
	cin.getline(str1, 100);
	cin.getline(str2, 100);

	strcpy_s(str1, str2);
	cout << "First string: " << str1 << endl;
	cout << "Second string: " << str2 << endl;


}
void concatStrings()
{
	char str1[100];
	char str2[100];
	char str3[100];
	cin.getline(str1, 100);
	cin.getline(str2, 100);
	cin.getline(str3, 100);

	strcat_s(str1, str2);
	strcat_s(str1, str3);

	cout << str1;
}
void reverseString()
{
	char str1[100];
	char str2[100];
	cin.getline(str1, 100);
	int index = 0;
	for (int i = strlen(str1)-1; i >=0; i--)
	{
		str2[index] = str1[i];
		index++;
	}
	str2[strlen(str1)] = '\0';
	cout << str2;
}
bool isVowel(char a) 
{	
	if (a=='a' || a=='A' || a=='y' || a=='Y' || a=='O' || a=='o' || a=='u' ||a=='U'||a=='e' ||a=='E' || a=='i' ||a=='I')
	{
		return true;
	}
	return false;
}
void countOfVowels() 
{
	char str[100];
	cin.getline(str, 100);
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isVowel(str[i]))
		{
			count++;
		}
	}
	cout << count;

}
int lengthOfWord(char word[])
{
	return strlen(word);
}
void printLongestWord() {
	char str[256];
	cin.getline(str, 256);
	
	int firstWordIndex = 0;
	int lastWordIndex = 0;
	int maxWordLength = 0;
	char maxWord[256];
	for (int i = 0; i < strlen(str); i++)
	{
		if ( !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z') )
		{
			lastWordIndex = i;
			char temp[256];
			int count = 0;
			for (int j = firstWordIndex; j < i; j++)
			{
				temp[count] = str[j];
				count++;
			}
			temp[count] = '\0';
			firstWordIndex = i + 1;
			if (lengthOfWord(temp)>maxWordLength)
			{
				maxWordLength == lengthOfWord(temp);
				strcpy_s(maxWord, temp);
			}
		}
	}
	cout << maxWord;
}
*/

/*pointers*/

//
//void swap(int &x, int &y) {
//	
//	int *a,*b, temp;
//
//	a = &x;
//	b = &y;
//
//	temp = *a;
//	*a = *b;
//	*b = temp;
//	
//	/*int x, y, z;
//	cin >> x >> y>>z;
//	swap(x, y);
//	cout<<x<<' '<<y;*/
//
//}
//int sum(int &x, int &y, int &z) {
//	
//	int* a = &x;	
//	int* b = &y;
//	int* c = &z;
//
//	*c = *a + *b;
//	
//	return z;
//
//	/*int x, y, z;
//	cin >> x >> y>>z;
//	swap(x, y);
//	cout<<sum(x, y, z);*/
//}
//void findLength(int* first, int* last) {
//
//	
//	while (last!=first)
//	{
//		cout << *first<<' ';
//		first++;
//	}
//	cout << *first++;
//
//	/*
//	int arr[5] = { 1,2,3,4,5 };
//	findLength(&arr[0],&arr[4]);
//	*/
//
//}
//int* findMidEl(int* first, int* last) {
//
//	int count = 1;
//	while (last!=first)
//	{
//		count++;
//		first++;
//	}
//
//	int* a = last - count/2;
//
//	return a;
//
//	/*
//	int arr[5] = { 1,2,3,4,5 };
//	findLength(&arr[0],&arr[4]);
//	*/
//
//}
//bool isLetter(char a) {
//
//	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
//	{
//		return true;
//	}
//	return false;
//}
//bool isVowel(char a) {
//
//	if (a=='a' || a=='y' || a == 'o' || a == 'u' || a == 'e' || a == 'i')
//	{
//		return true;
//	}
//	return false;
//}
//void countOfConsAndVowels(char* arr, char* last) {
//
//	int countOfConsonants=0;
//	int countOfVowels=0;
//
//	char *first = arr;
//
//	while (last!=first)
//	{
//		if (isLetter(*last))
//		{
//			if (isVowel(*last))
//			{
//				countOfVowels++;
//			}
//			else
//			{
//				countOfConsonants++;
//			}
//		}
//		last--;
//	}
//
//	cout << "glasni: " << countOfVowels << endl;
//	cout << "suglasni: " << countOfConsonants << endl;
//	
//
//
//	/*char arr[] = "Hello";
//	countOfConsAndVowels(arr, &arr[strlen(arr)]);*/
//
//}
//int findSize(int* first, int* last) {
//	int count = 1;
//	while (first != last)
//	{
//		count++;
//		first++;
//	}
//	return    count;
//}
//
//void sortArray(int* first, int* last) {
//
//
//	int size = findSize(first, last);
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if ((first + i) > (first + j))
//			{
//				int temp = *(first + i);
//				(first + i) = (first + j);
//				*(first + j) = temp;
//
//			}
//
//		}
//
//	}
//
//
//}


/*recursion*/
//int power(int a, int p) {
//
//	if (p==1)
//	{
//		return a;
//	}
//	return a*pow(a, p-1);
//	//cout << pow(2,3)<<endl;
//}
//int fact(int num) {
//	if (num==1)
//	{
//		return num;
//	}
//	return num*fact(num - 1);
//	//cout << fact(5) << endl;
//}
//int fib(int pos) {
//	if (pos==1 || pos==2)
//	{
//		return 1;
//	}
//	return fib(pos - 1) + fib(pos - 2);
//	//cout << fib(5) << endl;
//}
//int countOfDigits(int n) {
//	if (n==1)
//	{
//		return 1;
//	}
//	return 1+countOfDigits(n / 10);
//	//cout << countOfDigits(1200);
//}
//int reverseDigits(int n) {
//	//todo
//	
//	if (n<10)
//	{
//		return n;
//	}
//
//	return reverseDigits(n / 10);
//}
//int sumOfArr(int* first, int* last) {
//
//	if (first+1 == last) {
//		return *last+*(first-1);
//	}
//	 
//	return *first + sumOfArr(++first,last);
//
//	/*
//	int arr[] = { 1,2,30 };
//	cout << sumOfArr(arr,&arr[2]);*/
//
//}
//void PrintRow(int n, char c) {
//	if (n == 0) {
//		std::cout << std::endl;
//		return;
//	}
//
//	std::cout << c;
//	PrintRow(n - 1, c);
//}
//void PrintFigure(int n) {
//	if (n == 0) {
//		return;
//	}
//
//	PrintRow(n, '*');
//
//	PrintFigure(n - 1);
//
//	PrintRow(n, '#');
//}


/*backtracking*/
//int maxSum(int arr[], int index,int size) {
//
//	if (index==size-1)
//	{
//		return 0;
//	}
//
//
//
//
//}


/*structs*/

struct Vector3D
{
	double x = 0, y = 0, z = 0;
};
/*
* Пресмята дължината на 1 вектор
* @param V - векторът, чиято дължина търсим
* @return the vector length
* Формула: Корен от (X^2 + Y^2 + Z^2)
*/
double Length(const Vector3D& V) 
{
	return sqrt( (pow(V.x, 2) + pow(V.y, 2) + pow(V.z, 2)) );
}

/*
* Пресмята скаларното произведение на два вектора
* @param V1 - Първият вектор
* @param V2 - Вторият вектор
* @return Скаларното произведение, което се пресмята по следната формула: X1 * X2 + Y1 * Y2 + Z1 * Z2
*/
double DotProduct(const Vector3D& V1, const Vector3D& V2)
{
	return V1.x * V2.x + V1.y * V2.y + V1.z * V2.z;
}

/*
* Пресмята векторното произведение на 2 вектора
* @param V1 - Първият вектор
* @param V2 - Вторият вектор
* @return Вектор, представящ векторното произведение
* ФОРМУЛА:
*            | Y1 Y2 |, | Z1 Z2 |, | X1 X2 |
  V1 x V2 = (|       |, |       |, |       |)
			 | Z1 Z2 |, | X1 X2 |, | Y1 Y2 |
*/
Vector3D CrossProduct(const Vector3D& V1, const Vector3D& V2)
{
	Vector3D vec;
}

/*
* Пресмята смесеното произведение на 3 вектора
* @param V1 - Първият вектор
* @param V2 - Вторият вектор
* @param V3 - Третият вектор
* @return Смесеното произведение, което се пресмята по следната формула: Скаларното на V1 с векторното на V2 и V3
*/
double Triple(const Vector3D& V1, const Vector3D& V2, const Vector3D& V3);

/*
* Умножава x, y, z на вектора по скалара
* @param V - вектор
* @param scalar - скалара
*/
void MultiplyByScalar(Vector3D& V, double scalar);

/*
* Нормализийра подаден вектор. (Един вектор е нормализиран, когато дължината му е 1)
* @param V - Векторът, който ще нормализираме
*/
void NormalizeVector(Vector3D& V);

/*
* Връща противоположния вектор (тоест всеки елемент е отрицателният си)
*/
Vector3D GetNegative(const Vector3D& V);

/*
* Намира сбора на два вектора
* @param V1 - Първият вектор
* @param V2 - Вторият вектор
* @return Сборът на 2та вектора
*/
Vector3D Sum(const Vector3D& V1, const Vector3D& V2);

/*
* Намира разликата на 2 вектора (за тази функция използвайте само вече написаните функции)
*/
Vector3D Difference(const Vector3D& V1, const Vector3D& V2);


//------------------------------------------------------------------------//

struct Employee
{
	char name[1024]{};
	double salary=0;
	Employee *boss;

	bool operator==(Employee& other)
	{
		return strcmp(name, other.name) == 0 && salary == other.salary && boss == other.boss;
	}
};

struct Team
{	
	char name[1024]{};
	Employee employees[100];
	int employeeCount = sizeof(employees) / sizeof(employees[0]);

};

struct Company
{

};



int main()
{
	
	Employee emp;
	
}

