#include<bits/stdc++.h>

using namespace std;

bool isMonotonic(vector<int> array) {
  if(array.size() == 1  || array.size() == 0 || array.size() == 2) return 1;
  bool dec = 0;
  bool is =0;
  
  for (int i = 1; i < array.size(); i++)
  {
    if(is){
      if(array[i] > array[i-1]){
        if(dec != 0){
          return 0;
        }
      }else if(array[i] < array[i-1]){
        if(dec != 1){
          return 0;
        }
      }
    }else{
      if(array[i] > array[i-1]){
        dec = 0;
        is = 1;
      }else if(array[i] < array[i-1]) {
        dec = 1;
        is = 1;
      }
    }
  }
  


  return true;
}

//* another solution

bool isMonotonic(vector<int> array) {
  if(array.size() == 1  || array.size() == 0 || array.size() == 2) return 1;
  bool dec = 0;
  bool inc =0;
  for (int i = 1; i < array.size(); i++)
  {
    if(array[i] > array[i-1]){
      dec = 0;
      break;
    }
    else if(i == array.size() -1){
      dec = 1;
    }
  }
  for (int i = 1; i < array.size(); i++)
  {
    if(array[i] < array[i-1]){
      inc = 0;
      break;
    }
    else if(i == array.size() -1){
      inc = 1;
    }
  }
  


  return (inc || dec);
}
