
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int loop{ 0 }; int num{ 0 };

    string word = "asddasd";
    char firstword = 'c';
    char secendword = 'c';

    cin >> loop;
    
    
    while (loop)
    {

        cin >> word;
        if (word.length() > 10)
        {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        
        }
        else
        {
            cout << word << endl;
        }
        loop--;
    }




}
