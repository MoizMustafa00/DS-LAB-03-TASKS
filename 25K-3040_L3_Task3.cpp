#include<iostream>
using namespace std;

int main() {
	int prodQuan[] = {10, 20, 30, 40, 5, 50, 60, 70};
	int n = sizeof(prodQuan)/4;
	int gap = n;
	int iteration = 0;
	bool isSwapped = true;
	
	while(gap > 1 || isSwapped) {
		gap = gap/1.3;
		if(gap < 1) {
			gap = 1;
		}
		
		isSwapped = false;
		iteration++;
		cout << "Gap in Iteration " << iteration << " = " << gap << endl;
		for(int i=0; i<n-gap; i++) {
			if(prodQuan[i] > prodQuan[i+gap]) {
				int temp = prodQuan[i];
				prodQuan[i] = prodQuan[i+gap];
				prodQuan[i+gap] = temp;
				isSwapped = true;
			}
		}
	}
	
	cout << "Sorted Array:" << endl;
	for(int i=0; i<n; i++) {
		cout << prodQuan[i] << " ";
	}
	return 0;
}
