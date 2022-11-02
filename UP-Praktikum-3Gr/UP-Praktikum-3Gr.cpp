#include <iostream>
#include <string>
#include <limits>
using namespace std;







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

int main()
{
	

}

