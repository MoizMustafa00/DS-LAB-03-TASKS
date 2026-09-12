#include<iostream>
using namespace std;

int main() {
	int n;
	do {
		cout << "Enter No of Students (5-15): ";
		cin >> n;
		if(n < 5 || n > 15) {
			cout << "Invalid Student Input!" << endl;
		}
	} while(n < 5 || n > 15);
	
	int marks[n];
	cout << "Enter Marks for Each Student (0-100):" << endl;
	for(int i=0; i<n; i++) {
		do {
			cout << "Student " << i+1 << ": ";
			cin >> marks[i];
			if(marks[i] < 0 || marks[i] > 100) {
				cout << "Invalid Input! Enter Marks Again (0-100): ";
			}
		} while(marks[i] < 0 || marks[i] > 100);
	}
	
	int totalComparisons = 0;
	int totalShifts = 0;
	
	for(int i=1; i<n; i++) {
		int temp = marks[i];
		int j = i-1;
		
		while(j >= 0) {
			totalComparisons++;
			if(marks[j] < temp) {
				marks[j+1] = marks[j];
				totalShifts++;
				j--;
			}
			else {
				break;
			}
		}
		marks[j+1] = temp;
	}
	
	int highest = marks[0];
	int lowest = marks[n-1];
	
	int sum = 0;
	float avg = 0;
	
	for(int i=0; i<n; i++) {
		sum += marks[i];
	}
	avg = (float)sum / n;
	
	cout << "\nTotal Comparisons: " << totalComparisons << endl;
    cout << "Total Shifts: " << totalShifts << endl;
    cout << "Highest Marks: " << highest << endl;
    cout << "Lowest Marks: " << lowest << endl;
	cout << "Average Marks: " << avg << endl;
	cout << "Sorted Marks: ";
	for(int i=0; i<n; i++) {
		cout << marks[i] << " ";
	}
	cout << endl;
	
	int count = 0;
	for(int i=0; i<n; i++) {
		if(marks[i] >= 90) {
			count++;
		}
	}
	if(count == 1) {
		cout << "High Achiever Present!" << endl;
	}
	else if(count > 1) {
		cout << "High Achievers Present!" << endl;
	}
	else {
		cout << "No High Achiever!" << endl;
	}
	return 0;
}
