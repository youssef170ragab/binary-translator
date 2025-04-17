#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
#include <algorithm>
#include <deque>
#include <string>
void decimaltobinary( int x );
char binaryToChar(string eightNm);


int main(){
    bool x = true ;
    while ( x == true ){
        int continueOption = 1;
        int selectTheOPeration ;
        cout << "** welocme to binary translator ** \n" ;
        cout << "1- binary to text\n2- text to binary\n" ;
        cin >> selectTheOPeration ;
        if ( selectTheOPeration == 2 ){
            int charWithDecimal ;
            string textToBInary ;
            cin.ignore( 1 , '\n') ;
            getline ( cin , textToBInary) ;
            int wordChars = textToBInary.size() ;
            for ( int i = 0 ; i < wordChars ; i++ ){
                string s ="" ;
                charWithDecimal = int(textToBInary[i]) ;
                decimaltobinary(charWithDecimal) ;
                cout << " " ;
            }
            cout << "\n" ;
        }



        if ( selectTheOPeration == 1 ){
            int q = 0 ;
            string binaryText ;
            string finalText = "" ;
            cin.ignore(1 , '\n') ;
            getline (cin , binaryText) ;   
            string eightNm = "";
            for ( int i = 0 ; i < binaryText.size() ; i++ ){
                if( binaryText[i] != ' ' ){
                    eightNm += binaryText[i];
                }

                if ( binaryText[i] == ' ' || i == binaryText.size()-1 ){
                    finalText+= binaryToChar(eightNm);
                    eightNm = "" ;
                }
            }
            cout << finalText ;
        }

        cout << "\nif you want to translate more texts choose 1\nif you want to close the app choose 0 " ;
        cin >> continueOption ;
        if ( continueOption == 0 ){
            x == false ;
            break;
        }
    }
}


void decimaltobinary(int x){
    string s ="" ;
    int m = 8 ;
    while( x != 0 || m!= 0){
        if ( x % 2  == 0 ){
            s = "0" + s ;
        }
        else {
            s = "1" + s ;
        }
        x /= 2 ;
        m-- ;
    }
    cout << s ;
}

char binaryToChar(string eightNm){
    int n = 0 ;
    for ( int j = eightNm.size()-1 ; j >= 0 ; j-- ){
        if (eightNm[j] == '1'){
            n += pow(2 , eightNm.size()-j-1) ;
        }
    }
    return char(n) ;
}