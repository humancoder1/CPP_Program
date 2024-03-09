#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_case;
    cin >> test_case ;
	while(test_case != 0){
        int kiln_temp;
        int melt_point;
        cin >>  melt_point >> kiln_temp;
        
        int i = 1;
        while (kiln_temp < melt_point){
            kiln_temp += i;
            if (kiln_temp >= melt_point){
                break;
            }
            i++;
        }
        cout << i << endl;
        test_case -= 1;
    }
	return 0;
}
