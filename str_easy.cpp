#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_hello_str(string name){
    return "Hello, " + name;
}
long long itc_len(string str){
    int i = 0;
    int k = 0;
    while(str[i] != '\0'){
        k = k + 1;
    i++;
    }
    return k;
}
void itc_print_copy_str(string str, int number){
    while(number != '\0'){
        cout << str;
        number = number - 1;
    }
}
void itc_first_end_three(string str){
     int i = 0;
    int k = 0;
    while(str[i] != '\0'){
        k = k + 1;
    i++;
    }
    if(k > 5){
            int i = 0;
        while(str[i] != '\0'){
            cout << str[0];
    i++;

        }
    }
    cout << str[0];
    cout << str[1];
    cout << str[3];
    cout << str[4];

}
int itc_count_char_in_str(char ch, string  str){
    int otvet = 0;
    int i = 0;
    while(str[i] != '\0'){
if(str[i] == '\0'){
    otvet = otvet + 1;
}
        i++;
    }   return otvet;
}                                                 
