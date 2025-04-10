#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

//void Q1()
//{
//    char word[100];
//    printf("Veuillez entrer votre mot\n");
//    scanf_s("%s", &word);
//    vector<char> letters(26);
//    iota(letters.begin(), letters.end(), 'a');
//    auto it = find(letters.begin(), letters.end(), 'z');
//    for (int i = 0; word[i] != NULL; i++) {
//            word[i] = letters[i + 1];
//        printf("%s", &word[i]);
//    }
//}
//void Q2() {
//    char word[100];
//    char up = 'a';
//    printf("Veuillez entrer votre mot\n");
//    scanf_s("%s", &word);
//    vector<char> letters(26);
//    iota(letters.begin(), letters.end(), 'a');
//    auto it = find(letters.begin(), letters.end(), 'z');
//    for (int i = 0; i < letters[0]; i++) {
//        char up = toupper(up);
//    }
//}
void Q3() {
    const char* word[100];
    const char* emptySpace = " ";
    printf("Veuillez entrer vos mots\n");
    scanf_s("%s", &word);
    vector<char> letters(26);
    iota(letters.begin(), letters.end(), 'a');
    auto it = find(letters.begin(), letters.end(), 'z');
    for (int i = 0; word != NULL; i++) {
        int length = strlen(word[i]);
        if (word[i] = emptySpace) {
            word[i] = NULL;
        }
    }
}
void Q4() {

}
void Q5() {

}
int main() {
    //Q1();
    //Q2();
    Q3();
    //Q4();
    //Q5();
}


