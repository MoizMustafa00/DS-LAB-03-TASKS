#include<iostream>
using namespace std;

int main() {
	int attendacePer[] = {55, 61, 67, 72, 78, 81, 80, 85};
	int n = sizeof(attendacePer)/4;
	int passes = 0;
	int comparisons = 0;
	int swaps = 0;
	
	for(int i=0; i<n-1; i++) {
		passes = i+1;
		bool isSwapped = false;
		for(int j=0; j<n-i-1; j++) {
			comparisons += 1;
			if(attendacePer[j] > attendacePer[j+1]) {
				int temp = attendacePer[j];
				attendacePer[j] = attendacePer[j+1];
				attendacePer[j+1] = temp;
				swaps += 1;
				isSwapped = true;
			}
		}
		if(!isSwapped) {
			break;
		}
	}
	
	cout << "Array Becomes Sorted After Pass: " << passes << endl;
	cout << "No of Comparisons Performed Before Algorithm Termination: " << comparisons << endl;
	cout << "No of Swaps: " << swaps << endl;
	cout << "Standard Bubble Sort would Perform n-1 Passes that is 7" << endl;
	cout << "Standard Bubble Sort would Perform n-i-1 Comparisons Per Pass that is 7+6+5+4+3+2+1 = 28" << endl;
	return 0;
}
