#include <iostream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void removeFLletters(char* text) {
    int l = strlen(text);
    int firstletterindex = 0;
    char firstletter = *(text + 0);
    char newString[100];
    for (int i = 0; i <= l - 1; i++) {
        if (*(text + i + 1) == ' ') {
            if (*(text + i) == firstletter) {
                for (int j = firstletterindex; j <= strlen(text) - 1; j++) {
                    *(text + j) = *(text + j + i - firstletterindex + 1);
                }
            }
            firstletter = *(text + i);
         }
        if (*(text + i - 1) == ' ') {
            firstletterindex = i;
            firstletter = *(text + i);
        }
        
    }
}
char* returnNextWord(char* text, char lastLetter) {
    int l = strlen(text);
    char word[20];
    int n = 0;
    int wordLength = 0;
    for (int i = 0; i <= l - 1; i++) {
        if (*(text + i - 1) && *(text + i) == lastLetter) {
            for (int j = i; j <= l; j++) {
                word[n] = *(text + j);
                n++;
                if (*(text + j + 1) == ' ')break;
            }
            for (int j = i; j <= l; j++) {
                if (*(text + j) == ' ') { break; }
                else { wordLength++; }
            }
            for (int j = i; j <= strlen(text) - 1; j++) {
                *(text + j) = *(text + j + wordLength - i + 1);
            }
        }
    }
    return(word);
}
int main()
{
    srand(time(0));
    char lastLetter;
    char bararan[100] = {"aysorg  garnan amenagexecik hiasqanch bazmajpit orn nuynqan barin imastun nrbankat mardik tann"};
    removeFLletters(bararan);
    for (int i = 0; i <= 100; i++) {
        lastLetter = bararan[i];
        if (bararan[i + 1] == ' ')break;
    }
   

  
    return 0;
}

