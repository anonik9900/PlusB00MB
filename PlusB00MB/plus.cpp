#include <iostream>
#include<windows.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <thread>
#include <chrono>
#include <conio.h>
#include<fstream>


using namespace std;


//***********************************//
// PLUSB00MB BY Nicholas Impieri     //
//                                   //
//Only for educational purpose         //
//***********************************//

/*
ITA
Mascheriamo il programma come un semplice quiz
*/



//Dichiariamo delle variabili//


int eta;
string risposta1;
string risposta2;
string risposta3;

float risultato1;
float risultato2;
float risultato3;

int mnp = 20;
float mnp_val = 7.99;

//Dichiariamo il main

int main ()
{

    cout<<"Simple quiz by Unknown Person ! \n"<<endl;
    cout<<"\n"<<endl;

    cout<<"Enter your age (only number)! "<<endl;
    cin>>eta;

    cout<<"\n"<<endl;

    cout<<"1) What is your name? "<<endl;
    cin>>risposta1;
    risultato1 = 0210240204; //primo valore per overflow

    cout<<"2) Who was the 1st  President of America?"<<endl;
    cin>>risposta2;
    risultato2 = 9354935935; //secondo valore per overflow

    cout<<"3) What are you doing now ?"<<endl;
    cin>>risposta3;
    risultato3 = 4953095359; //terzo valore per overflow

    cout<<"\n \n"<<endl;
    cout<<"Calculating the result, please Wait! .... \n"<<endl;

    float pter = (risultato1*risultato2*risultato3);
    float tot_mnp = (mnp_val*mnp);
    //Adesso inizio il loop

    ofstream fout("final.txt"); //creo fout e il file di testo
    int n;
    cout <<"digita un numero tra 1 o 2"<<endl;
    cin>>n;


    if (n==0) //se il numero inserito è 0
    {
        int n = 1; //aumento automaticamente il valore a 1, in modo da far funzionare il loop
        while(n!=0)
{
        fout<<pter<<""; //si scrive nel file il contenuto di pter
        n + 1; //rendo il loop infinito
}
    fout.close();
}

    while(n!=0)
{
        fout<<pter<<""; //si scrive nel file il contenuto di pter
        n + 1; //rendo il loop infinito
}
    fout.close();
}





