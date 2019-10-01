#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> breakElement(int inputElement){
    vector<int> digits;
    inputElement = abs(inputElement);
    while(inputElement > 0){
        digits.push_back(inputElement % 10);
        inputElement = inputElement / 10;
    }
    
    // unique vector
    vector<int>::iterator it;
    it = unique(digits.begin(), digits.begin() + digits.size());
    digits.resize(distance(digits.begin(), it));
    
    // print broker element
    for(int i = 0; i < digits.size(); i++){
        cout << digits[i] << ":";
    }
    
    return digits;
}

int main(int argc[], char *a[])
{
    int size, inputElement;
    cin >> size;
    
    vector<int> arr, brokenElements;
    vector<int>::iterator itArr, itMap;
    vector<vector<int> > mapping(10);
    
    for (int i = 0; i < size; i++){
        cin >> inputElement;
        arr.push_back(inputElement);
        brokenElements = breakElement(inputElement);
        
        // adding the value of broken element into mapping vector
        for(int j = 0; j < brokenElements.size(); j++){
            mapping[brokenElements[j]].push_back(i);
        }
    }
    
    for(int i = 0; i < mapping.size(); i++){
        cout << endl << i << "-";
        for(int j = 0; j < mapping[i].size(); j++){
            cout << mapping[i][j] << " ";
        }
    }
    
    int sum = 0, max;
    
    for(int i = 0; i < size; i++){
        itArr = max_element(arr.begin(), arr.begin() + arr.size());
        max = *itArr;
        if (max > 0){
            sum = sum + max;
            
            vector<int> digitsOfMax = breakElement(max);
            
            for(int j = 0; j < digitsOfMax.size(); j++){
                vector<int> indexToDel = mapping[digitsOfMax[j]];
                for(int k = 0; k < indexToDel.size(); k++){
                    arr[indexToDel[k]] = INT_MIN;
                }
            }
        }else{
            break;
        }
    }
    
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    
    cout << sum;
    return 1;
}
