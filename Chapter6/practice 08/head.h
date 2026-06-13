#pragma once
#include <iostream>
#include<string>
using namespace std;

class WordUtility {
public:
    static int wordCount(string text) {

        int count = 0;

        for (int i = 0; i < text.length(); i++) {

            if (text[i] == ' ') {
                count++;
            }
            if (i  == text.length() - 1) {
                count++;
            }
        }
        return count;
    }

    static string getWord(string text, int index) {
        int count = 0;
        int startIdx = 0; 

        
        for (int i = 0; i <= text.length(); i++) {
            if (i == text.length() || text[i] == ' ') {
               
                if (i - startIdx > 0) {
                    count++; 
                  
                    if (count == index) {
                        
                        return text.substr(startIdx, i - startIdx);
                    }
                }
                startIdx = i + 1;
            }
        }
        
    }
};
