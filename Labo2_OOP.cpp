#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void Q1()
{
    char word[100];
    printf("Veuillez entrer votre mot\n");
    scanf_s("%s", &word);
    vector<char> letters(26);
    iota(letters.begin(), letters.end(), 'a');
    auto it = find(letters.begin(), letters.end(), 'z');
    for (int i = 0; i < 1; i++) {
        if (word[i] >= 'a' && word[i] <= 'y') {
            word[i] = letters[i]++;
        }
        else {
            while (letters[25] <= 'z')
            {
                letters[i]++;
            }
        }
        printf("%s", &word[i]);
    }
}
void Q2() {
    char word[100];
    printf("Veuillez entrer votre mot\n");
    scanf_s("%s", &word);
    vector<char> letters(26);
    iota(letters.begin(), letters.end(), 'a');
    auto it = find(letters.begin(), letters.end(), 'z');
    for (int i = 0; i < letters[0]; i++) {
        int up = toupper(up);
    }
}
void Q3() {

}
void Q4() {

}
void Q5() {

}
int main(){
    //Q1();
    //Q2();
    //Q3();
    //Q4();
    //Q5();
}
