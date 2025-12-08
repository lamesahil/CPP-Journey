#include <iostream>
#include <string>
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

    //STRING LIBRARY FUNCTIONS
    char str1[20] = "Hello";
    char str2[20] = "World";
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "Length of str1: " << strlen(str1) << endl;
    cout << "Concatenation: " << strcat(str1, str2) << endl; // str1 now contains "HelloWorld"
    cout << "Comparison: " << strcmp(str1, str2) << endl; // returns positive, negative or zero
    cout << "Copy str2 to str1: " << strcpy(str1, str2) << endl; // str1 now contains "World"
*/

    /*STRING CLASS IN C++ --> OOPS=> Class, Object, Member Functions & Properties 
    Class is a user-defined data type that acts as a blueprint for creating objects.
    It encapsulates data for the object and methods to manipulate that data.
    
    object is an instance of a class. When a class is defined, no memory is allocated until an object of that class is created.
    Example:
    Class: String {
        public:
            // properties
            // member functions
    };

    String str; // str is an object of class String 
    STL = Standard Template Library
    STL provides a set of C++ template classes to provide general-purpose classes and functions with templates
    1. Vector
    2. List
    3. Deque
    4. Stack
    5. Queue
    6. Set
    7. Map
    8. String
    9. etc.
    1. String Class:
    The String class in C++ is part of the Standard Template Library (STL) and provides a way to work with sequences of characters.
    It offers various member functions to manipulate strings easily.
    Example:
    #include <iostream>
    #include <string>   
    using namespace std;
    int main() {
        string str1 = "Hello";
        string str2 = "World";
        cout << "String 1: " << str1 << endl;
        cout << "String 2: " << str2 << endl;
        cout << "Length of str1: " << str1.length() << endl;
        cout << "Concatenation: " << str1 + str2 << endl; // str1 remains "Hello"
        cout << "Comparison: " << (str1 == str2) << endl; // returns 0 (false) or 1 (true)
        str1 = str2; // Copy str2 to str1
        cout << "After copying, str1: " << str1 << endl;
        return 0;
    }
        C++ String class provides a more convenient and safer way to handle strings compared to C-style strings (character arrays).

        C++ strings are dynamic and can grow or shrink as needed, whereas C-style strings have a fixed size.

        C++ strings support various operations like concatenation, comparison, and substring extraction through member functions. 


    */
   string str1 = "Hello";
   string str2 = "World";
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // to take input with spaces
    cout << "Your name is: " << name << endl;
    for (int i=0; i<name.length(); i++){
        cout << name[i] << "-";
    }
    cout << "\n";

    //FOR EACH LOOP
    for(char c : name){
        cout << c << "*";
    }
    cout << "\n";
    
    //STRING MEMBER FUNCTIONS
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Concatenation: " << str1 + str2 << endl; // str1 remains "Hello"
    cout << "Comparison: " << (str1 == str2) << endl; // returns 0 (false) or 1 (true)
    cout << "After copying, str1: " << (str1 = str2) << endl;
    str1 = "Hello";
    str2 = "World";
    cout << "Substring of name (0, 3): " << name.substr(7, 3) << endl; // first 3 characters
    cout << "Find 'lo' in str1: " << str1.find("lo") << endl; // position of 'lo'
    cout << "Replace 'World' with 'C++' in str2: " << str2.replace(0, 5, "C++") << endl; // str2 is now "C++"
    cout << "Uppercase name: ";
    for(char &c : name){
        c = toupper(c);
    }
    cout << name << endl;
    cout << "Lowercase name: ";
    for(char &c : name){
        c = tolower(c);
    }
    cout << name << endl;

    cout<<"Accessing character at index 1 in name: " << name.at(1) << endl; // second character 
    areAnagrams("listen", "silent");  
    return 0;
}
//Valid anagram

bool areAnagrams(string str1, string str2){
    if(str1.length() != str2.length()){
        cout << "Not an anagram" << endl;
        return false;
    }
    int count[26]={0};
    for(int i=0; i<str1.length(); i++){
        int idx = str1[i] - 'a';
        count[idx]++;
    }
    for(int i=0; i<str2.length(); i++){
        int idx = str2[i]-'a';
        if(count[idx]==0){
            cout << "Not an anagram" << endl;
            return false;
        }
        count[idx]--;   
    }
    cout << "Is an anagram" << endl;
    return true;
}