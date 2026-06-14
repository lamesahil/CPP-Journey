#include<iostream>
using namespace std;
#include<vector>

//tilling problem is a combinatorial problem that asks for the number of ways to tile a 2 x n board using 2 x 1 tiles. The function below calculates the number of ways to tile a 2 x n board using recursion. The base cases are when n is 0 or 1, where there is only one way to tile the board (either by not placing any tiles or by placing one tile). For larger values of n, the function recursively calls itself to calculate the number of ways to tile the board by placing a vertical tile (which reduces the problem to tiling a 2 x (n-1) board) and by placing two horizontal tiles (which reduces the problem to tiling a 2 x (n-2) board). The total number of ways to tile the board is the sum of these two cases.
int tp(int n){
if(n==0 || n==1){
    return 1;
}
int ans1= tp(n-1);//vertical tile
int ans2= tp(n-2); //horizontal tile
return ans1+ans2;
}
//remove dupliactes
//forward approach: we process the string from left to right, and we build the answer string as we go. We use a map (or an array in this case) to keep track of which characters have already been added to the answer string. When we encounter a character, we check if it has been added to the answer string before. If it has not, we add it to the answer string and mark it as added in the map. If it has already been added, we simply skip it and move on to the next character. This way, we ensure that each character is added to the answer string only once, effectively removing duplicates while preserving the order of first occurrences.
void removeDuplicates(string s, string ans,int i, int map[26]){
    if(i==s.length()){ //base case, when we have processed all characters in the string, we print the answer and return
        cout<<ans<<endl;
        return;
    }
    char ch= s[i]; //short: we get the current character from the string using its index i
    if(map[ch-'a']==0){ //short: we check if the current character has not been encountered before by checking the map array at the index corresponding to the character (ch-'a' gives us the index for lowercase letters). If it is 0, it means this character has not been added to the answer string yet.
        map[ch-'a']=1;
        removeDuplicates(s, ans+ch, i+1, map);
    }
    else{
        removeDuplicates(s, ans, i+1, map);
    }
}

/*
//backward approach: we process the string from right to left, and we build the answer string as we go. We use a map (or an array in this case) to keep track of which characters have already been added to the answer string. When we encounter a character, we check if it has been added to the answer string before. If it has not, we add it to the answer string and mark it as added in the map. If it has already been added, we simply skip it and move on to the next character. This way, we ensure that each character is added to the answer string only once, effectively removing duplicates while preserving the order of first occurrences.
void removeDuplicates(string s, string ans, int map[26]){
    int n= s.length();
    if(n==0){ //base case, when we have processed all characters in the string, we print the answer and return
        cout<<ans<<endl;
        return;
    }
    char ch= s[n-1]; 
    int mapidx = (int)(s[n-1]-'a'); //short: we get the current character from the string using its index n-1 (since we are processing from right to left) and calculate the corresponding index in the map array.
    s = s.substr(0, n-1); //short: we remove the last character from the string by taking a substring that excludes the last character. This allows us to process the next character in the next recursive call.
    if(map[mapidx]==0){ //short: we check if the current character has not been encountered before by checking the map array at the index corresponding to the character. If it is 0, it means this character has not been added to the answer string yet.
        map[mapidx]=1;
        removeDuplicates(s, ch+ans, map); //short: we add the current character to the front of the answer string (since we are processing from right to left) and make a recursive call with the updated string and answer.
    }
    else{
        removeDuplicates(s, ans, map); //short: if the character has already been added to the answer string, we simply make a recursive call with the updated string and the same answer, effectively skipping the duplicate character.
    }   
}
*/

//freindship problem: we have n friends and we want to find the number of ways they can remain single or pair up. The function below calculates the number of ways n friends can remain single or pair up using recursion. The base case is when n is 0 or 1, where there is only one way for the friends to remain single (either by not pairing up or by being the only friend). For larger values of n, the function recursively calls itself to calculate the number of ways for the first friend to remain single (which reduces the problem to n-1 friends) and for the first friend to pair up with any of the remaining n-1 friends (which reduces the problem to n-2 friends). The total number of ways for the friends to remain single or pair up is the sum of these two cases.

int fp(int n){
    if(n==1 || n==2){
        return n;
    }
    int ans1= fp(n-1); //first friend remains single
    int ans2= (n-1)*fp(n-2); //first friend pairs up with any of the remaining n-1 friends
    return ans1+ans2;
}

//binary strings: we want to generate all binary strings of length n. The function below generates all binary strings of length n using recursion. The base case is when n is 0, where there is only one binary string (the empty string). For larger values of n, the function recursively calls itself to generate binary strings of length n-1 and then appends '0' and '1' to each of those strings to create the binary strings of length n.

void generateBinaryStrings(int n, int lastplace,string ans){
    if(n==0){ //base case, when we have generated all binary strings of the desired length, we print the answer and return
        cout<<ans<<endl;
        return;
    }
    if(lastplace!=1){
        generateBinaryStrings(n-1, 0, ans+'0'); //short: if the last placed character is not '1', we can place '1' at the current position and make a recursive call with n-1 (since we have placed one character), lastplace set to 1 (indicating that the last placed character is '1'), and the answer string updated with '1'.
        generateBinaryStrings(n-1, 1, ans+'1'); //short: we can also place '0' at the current position and make a recursive call with n-1, lastplace set to 0 (indicating that the last placed character is '0'), and the answer string updated with '0'.
    } else{
        generateBinaryStrings(n-1, 0, ans+'0'); //short: if the last placed character is '1', we can only place '0' at the current position to avoid consecutive '1's. We make a recursive call with n-1, lastplace set to 0, and the answer string updated with '0'.
    }


}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Number of ways for friends to remain single or pair up: " << fp(n) << endl;

    string s;
    cout << "Enter a string: ";
    cin >> s;
    int map[26] = {0}; //short: we initialize an array of size 26 to keep track of which characters have been encountered. Each index corresponds to a lowercase letter (0 for 'a', 1 for 'b', etc.). Initially, all values are set to 0, indicating that no characters have been added to the answer string yet.
    cout << "String after removing duplicates: ";
    removeDuplicates(s, "", 0, map); //short: we call the removeDuplicates function with the input string s, an empty string for the answer, and the map array to keep track of encountered characters.

    cout << "Binary strings of length " << n << ":" << endl;
    generateBinaryStrings(n, 0, ""); //short: we call the generateBinaryStrings function with the desired length n, lastplace set to 0 (indicating that no character has been placed yet), and an empty string for the answer.
    return 0;
}