#include <iostream>
#include <vector>

using namespace std;

        //Sorting Function
void sort(vector<int> vect){
    for (int i = 0; i < vect.size() - 1; i++) {
        for (int j = 0; j < vect.size() - i - 1; j++) {
            if (vect[j] > vect[j+1]) {
                int temp = vect[j];
                vect[j] = vect[j+1];
                vect[j+1] = temp;
                }
            }
    }
    cout << "This is the sorted vector" << endl;
    for (int k = 0; k < vect.size(); k++){
        cout << vect[k] << ' ';
    }
}

int main() {

    vector<int> vect;

    //INPUT elements for vector
    int element;
    cout << "Enter the elements for the vector. Press Q to stop: ";
    
    while (cin >> element) {
        vect.push_back(element);
    }

    sort(vect);

    return 0;
}