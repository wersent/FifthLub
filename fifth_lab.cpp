#include <iostream>
#include <string>
#include <stdio.h>
using std::cin;
using std::endl;

int main(){
    // variant 7
    // task 1
    int size{}, sum{0}, min{1000}, index{};
    cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        if (arr[i] % 3 == 0 || arr[i] % 7 == 0) {
            sum += arr[i];
            if (arr[i] < min){
                min = arr[i];
            index = i;
            }
        }
    }
    std::cout << sum << " " << min << " " << index << endl;
    delete[] arr;
    // task 2
    std::string str{}; int mult{1};
    cin >> str;
    std::cout << str.size() << endl;
    for(int i = 0; i < str.size(); i++){
        std::cout << str[i] - '0' << endl;
        if ((str[i] - '0') % 2 == 0 && (str[i] - '0') != 0) mult *= (str[i] - '0');
    }
    std::cout << mult << endl;
}