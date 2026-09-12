#include<iostream>
using namespace std;

int main() {
	int prodPrices[] = {45, 12, 78, 34, 23, 90};
	int n = sizeof(prodPrices)/4;
	int passes = 0;
	int comparisons = 0;
	int swaps = 0;
	
	for(int i=0; i<n-1; i++) {
		passes = i+1;
		for(int j=0; j<n-i-1; j++) {
			comparisons += 1;
			if(prodPrices[j] > prodPrices[j+1]) {
				int temp = prodPrices[j];
				prodPrices[j] = prodPrices[j+1];
				prodPrices[j+1] = temp;
				swaps += 1;
			}
		}
		cout << "Array After Pass " << passes << ":" << endl;
		for(int l=0; l<n; l++) {
			cout << prodPrices[l] << " ";
		}
		cout << "\n\n";
	}
	
	cout << "No of Passes: " << passes << endl;
	cout << "No of Comparisons: " << comparisons << endl;
	cout << "No of Swaps: " << swaps << endl;
	return 0;
}
