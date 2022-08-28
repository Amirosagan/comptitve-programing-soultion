
#include <iostream>
#include <cmath>

using namespace std;

struct colors
{
	char color[100];
	int loops{0};
	int sum_of_same_color{0};
};

int main()
{

   colors a{ 'c',0,0 };
   cin >> a.loops;

  
   
	   cin.get();
	   cin.getline(a.color, (a.loops+1));
   
   for (int i = 0; i < a.loops; i++)
   {
	   int j{ 0 };
	   if (a.color[i+(j)] == a.color[i+(j+1)])
	   {
		   a.sum_of_same_color ++ ;
	   }
	   j++;
   }

   cout <<  a.sum_of_same_color;

}
