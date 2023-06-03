#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   /*
    #char[] or string
    #always avoid scanf("");printf("");
    #string input output e loop চালাতে হয়না।
    # size= character সংখ্যা+'\0'

  */

// compile_time initialize
    char str_a[]="i love Bangladesh";
    string str_b="i love Pakistan";


// output
    cout<<str_a<<endl;
    cout<<str_b<<endl;





// runtume input way-1
    char str[50];
    cin.getline(str,50);

    cout<<str<<endl;


// runtume input way-2
    string strr;
    getline(cin,strr);
    
    cout<<strr<<endl;








    return 0;
}