#include <iostream>
using namespace std;

int main(){
    // char arr[] = {'a', 'b', 'c', '\0'};
    // char arr[100];
    char arr[] = "anubhooti pandey";
    int len = 0;

    // cout << "Enter char array : ";
    // cin >> arr; //---> if we input "hello world" means there is a space between two words so it will not take the word after the space
    // cin.getline(arr, 100, '$');
    // cin.getline(str, len, delim?); --> delim limits the words like using particular things---\n, $
    // cin.getline(arr, 100);

    // for(char ch : arr){
    //     cout << ch << " ";
    // }
    // cout << endl;

    for(int i = 0; i<arr[i] != '\0'; i++){
        len++;
    }

    cout << "length of string: " << len << endl;

    // cout<< arr << endl;
    // cout<< arr[3] << endl;
    return 0;
}
