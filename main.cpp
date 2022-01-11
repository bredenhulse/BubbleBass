#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
  vector<int> nums;
  int a, temp, swaps = 0;
  //Open File
  ifstream infile;
  ofstream outfile;
  infile.open("input.txt");
  outfile.open("output");
  infile >> a;
  cout << a;
  //Loop to Make Vertex
  for(int i = 0; i < a; i++){
      infile >> temp;
      cout << temp << endl;
      nums.push_back(temp);
  }
  //Loop To Sort It 
  for(int i = 0; i < a; i++){
    for(int j = i + 1; j < a; j++){
      if(nums[j] < nums[i]){
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        swaps++;
      }
    }
  }
  //Print
  for(int i = 0; i < a; i++){
    outfile << nums[i] << endl;
  }
  outfile << "\nSwaps: " << swaps;
}