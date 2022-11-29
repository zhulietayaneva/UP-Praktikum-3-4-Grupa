#include <iostream>
#include <string>
#include <limits>
#include "UP-Praktikum-3Gr.h"
using namespace std;
constexpr int MAX_SIZE = 255;

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


//pointers
void swap(int &x, int &y) {
	
	int *a,*b, temp;

	a = &x;
	b = &y;

	temp = *a;
	*a = *b;
	*b = temp;
	
	/*int x, y, z;
	cin >> x >> y>>z;
	swap(x, y);
	cout<<x<<' '<<y;*/

}

int sum(int &x, int &y, int &z) {
	
	int* a = &x;	
	int* b = &y;
	int* c = &z;

	*c = *a + *b;
	
	return z;

	/*int x, y, z;
	cin >> x >> y>>z;
	swap(x, y);
	cout<<sum(x, y, z);*/
}

void findLength(int* first, int* last) {

	
	while (last!=first)
	{
		cout << *first<<' ';
		first++;
	}
	cout << *first++;

	/*
	int arr[5] = { 1,2,3,4,5 };
	findLength(&arr[0],&arr[4]);
	*/

}

int main()
{
	
	
	
	





	
}

