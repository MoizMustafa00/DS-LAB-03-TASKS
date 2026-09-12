#include<iostream>
using namespace std;

int main() {
	int loadValues[] = {90, 20, 80, 30, 70, 40, 60, 50, 10};
	int n = sizeof(loadValues)/4;
	int totalComparisons = 0;
	int totalShifts = 0;
	
	for(int gap=n/2; gap>=1; gap/=2) {
		int gapComparisons = 0;
		int gapShifts = 0;
		
		for(int i=gap; i<n; i++) {
			int temp = loadValues[i];
			int j = i;
			
			while(j >= gap) {
				gapComparisons++;
				if(loadValues[j-gap] > temp) {
					loadValues[j] = loadValues[j-gap];
					gapShifts++;
					j -= gap;
				}
				else {
					break;
				}
			}
			loadValues[j] = temp;
		}
		
		totalComparisons += gapComparisons;
		totalShifts += gapShifts;
		cout << "Array After Gap = " << gap << ":" << endl;
		for(int i=0; i<n; i++) {
			cout << loadValues[i] << " ";
		}
		cout << endl;
		cout << "Gap Comparisons: " << gapComparisons << endl;
        cout << "Gap Shifts: " << gapShifts << endl << endl;
	}
	
	cout << "Total Comparisons: " << totalComparisons << endl;
    cout << "Total Shifts: " << totalShifts << endl;
	return 0;
}
