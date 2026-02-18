#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
#include <algorithm>
#include <deque>
#include <string>
#include <map>
#include <cctype>

void vignereCipher();
void morseAlpha() ;
map < char , string > morseMap;

int main (){
    morseAlpha() ;
    cout << "WELOCEME TO CIPHER TRANSLATOR APP :)\n" ;
    bool z = true ;
    while ( z == true ){
        int appContinue;
        int cipherLang;
        cout << "PLEASE CHOOSE FROM\n1_morse cipher\n0_vignere cipher\n" ;
        cin >> cipherLang ;
        if ( cipherLang == 0 ){
            vignereCipher();
        }
        if ( cipherLang == 1 ){
            int choose ;
            cout << "CHOOSE FROM \n1_morse to message \n0_message to morse\n" ;
            cin >> choose ;
            if ( choose == 0 ){
                string message ;
                cout << "PLEASE ENTER YOUR MESSAGE\n" ;
                cin.ignore(1 , '\n' ) ;
                getline (cin , message) ;
                for ( int i = 0 ; i < message.size() ; i++  ){
                    if ( isalpha(message[i]) ){
                        cout << morseMap[message[i]] << " " ;
                    }
                    else{
                        cout << "  " ;
                    }
                }
            }
        }
        cout << "\n1_if you want to unlock more ciphers\n0_if you want to close the app\n" ;
        cin >> appContinue ;
        if ( appContinue == 0 ){
            z = false ;
        }
    }
}


        //                   code el vignere                      //


void vignereCipher(){
    cout << "PLEASE CHOOSE YOUR OPERATION FROM\n 0_MESSAGE TO Cipher\n 1_cipher to message\n" ;
    int chooseTheOp ;
    cin >> chooseTheOp ;
    if ( chooseTheOp == 0 ){
        string message , messageKey;
        cout << "PLEASE ENTER YOUR MASSEGE\n";
        cin.ignore(1 , '\n' ) ;
        getline(cin , message) ;
        cout << "PLEASE ENTER YOUR KEY\n" ;
        cin >> messageKey ;
        string encryptedMeesage = "" ;
        for ( int i = 0 ; i < message.size() ; i++ ){
            if( isalpha(message[i]) ){
                int messagekeyindex= i %messageKey.size() ;
                encryptedMeesage +=  ((message[i]+messageKey[messagekeyindex]) % 26 ) + 'A' ;
            }
            else{
                encryptedMeesage += message[i] ;
            }
        }
        cout << encryptedMeesage << "\n" ;
    }
    if ( chooseTheOp == 1 ){
        string Key , encryptedMs;
        cout << "PLEASE ENTER YOUR KEY\n" ;
        cin >> Key ;
        cout << "PLEASE ENTER YOUR encryptedMs\n" ;
         cin.ignore(1 , '\n') ;
        getline( cin , encryptedMs ) ;
        string orignalMs = "" ;
        for ( int i = 0 ; i < encryptedMs.size() ; i++ ){
            if ( isalpha(encryptedMs[i])){  
                int x = encryptedMs[i] - Key[i%Key.size()] ;
                if ( x >= 0){
                    x += 65 ;
                }
                if ( x < 0){
                    x+= 90 + 1 ;
                }
                orignalMs+= char(x) ;
            }
            else{
                orignalMs += encryptedMs[i] ;
            }
        }
        cout << orignalMs << "\n" ;
    }
}

      //                morse                //

void morseAlpha(){
    morseMap['A'] = ".-" ;
    morseMap['b'] = "-..." ;
    morseMap['C'] = "-.-." ;
    morseMap['D'] = "-.." ;
    morseMap['E'] = "." ;
    morseMap['F'] = "..-." ;
    morseMap['G'] = "--." ;
    morseMap['H'] = "...." ;
    morseMap['I'] = ".." ;
    morseMap['J'] = ".---" ;
    morseMap['K'] = "-.-" ;
    morseMap['L'] = ".-.." ;
    morseMap['M'] = "--" ;
    morseMap['N'] = "-." ;
    morseMap['O'] = "---" ;
    morseMap['P'] = ".--." ;
    morseMap['Q'] = "--.-" ;
    morseMap['R'] = ".-." ;
    morseMap['S'] = "..." ;
    morseMap['T'] = "-" ;
    morseMap['U'] = "..-" ;
    morseMap['V'] = "...-" ;
    morseMap['W'] = ".--" ;
    morseMap['X'] = "-..-" ;
    morseMap['Y'] = "-.--" ;
    morseMap['Z'] = "--.." ;
}
