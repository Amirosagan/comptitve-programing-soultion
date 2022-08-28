
#include <iostream>

#include <string>
#include <string.h>


using namespace std;

int main()
{
    string original_word;
    float  uppercase_num{0}, loop{ 0 };
    cin >> original_word;

    loop = original_word.length();

    for (int i = 0; i < loop; i++)
    {
        if (original_word[i] < 91)
        {
            uppercase_num++;
        }
        else
        {
            continue;
        }
    }
    float im;

    im = (uppercase_num / loop);
    
    if ( im<=0.5)
    {
        for (int i = 0; i < loop; i++)
        {
            original_word[i] = tolower(original_word[i]);
        }
    }
    else
    {
        for (int i = 0; i < loop; i++)
        {
            original_word[i] = toupper(original_word[i]);
        }
    }

    cout << original_word;





}
