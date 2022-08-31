#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>

#define MAX 46350

using namespace std;

int PrimeArray[MAX];
int counter;
int numbers[MAX];

void sieve (){

    int i, j;
    counter=0;

    for(j = 4 ; j < MAX ; j+=2)
    {
        numbers[j] = 1;
    }
    PrimeArray[counter++] = 2;
    for(i = 3 ; i <= MAX ; i++)
    {
        if(numbers[i] == 0)
        {
            PrimeArray[counter++] = i;
            for(j = i*i ; j < MAX  && j > 0; j+= i*2)
            {
                numbers[j] = 1;
            }
        }
    }
}

int main(void){
    //freopen("583-input.txt", "r", stdin);
    sieve();
    int X;

    while(cin>>X && X != 0){
        cout<<X<<" = ";
        if(X<0){
            cout<<"-1";
            X = -1*X;
            if(X != 1){
                cout<<" x ";
            }
        }

        int cnt = sqrt(X);
        bool foundAll = false;
        int multP = 1;
        int tmp = X;

        for(int p=0; p < counter && PrimeArray[p] <= cnt; p++){
            if(foundAll) break;
            while(X%PrimeArray[p] == 0){
                cout<<PrimeArray[p];
                X /= PrimeArray[p];
                if(X>1)
                    cout<<" x ";

                multP *= PrimeArray[p];
                if(multP == tmp){
                    foundAll = true;
                    break;
                }
            }
            //cout<<endl<<"loop end"<<endl;
        }
        if(X>1){
            cout<<X<<endl;
        }
        else
            cout<<endl;
    }

    return 0;
}