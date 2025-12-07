#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char word[], int n){
    for(int i= 0; i<n; i++){
        char ch = word[i];
        if(ch>='A' && ch<='Z'){
            continue; // already uppercase
        }else{
            word[i] = ch - 'a' + 'A'; // convert to uppercase
        }
    }
}

void toLower(char word[], int n){
    for(int i=0; i<n; i++){
        char ch = word[i];
        if(ch>='a' && ch<='z'){
            continue; // already lowercase
        }else{
            word[i] = ch - 'A' + 'a'; // convert to lowercase
        }
    }
}

void toReverse(char word[], int n){
    int st = 0;
    int end = n-1;
    while(st<end){
        swap(word[st], word[end]); // swap characters also we can do it like this--> swap(word[st++], word[end--]);
        st++;
        end--;  
    }
}

bool isPalindrome(char word[], int n){
    int st = 0;
    int end = n-1;
    while(st<end){
        if(word[st++] != word[end--]){
            cout << "Not a palindrome" << endl;
            return false;
        }
    }
    cout << "Is a palindrome" << endl;
    return true;
}

int main() {
    /*
    char letter = 'a';
    cout << "Letter: " << letter << endl;
    
    // Casting char to int shows its ASCII value
    int number = int(letter); 
    cout << "ASCII Value: " << number << endl; 
    
    // Magic: You can do math with letters!
    char next = letter + 1; 
    cout << "Next Letter: " << next << endl;
    
    //Input a character from user
    char ch1[20], ch2[20];
    //cout << "Enter a string: ";
    //cin >> ch1; // stops at whitespace
    //cout << "You entered: " << ch1 << endl;
    cout << "Enter a string: ";
    cin.getline(ch2, 20); // reads the whole line including whitespace
    cout << "You entered: " << ch2 << endl;
    cout << "Length of string is: " << strlen(ch2) << endl;
    */
   char word[100];
   cout << "Enter a string: ";
    cin.getline(word, 100);
    int n = strlen(word);
    toUpper(word, n);
    cout << "Uppercase: " << word << endl;
    toLower(word, n);
    cout << "Lowercase: " << word << endl;
    toReverse(word, n);
    cout << "Reversed: " << word << endl;
    isPalindrome(word, n);


    
    return 0;
}