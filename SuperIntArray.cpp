#include "SuperIntArray.h"

SuperIntArray::SuperIntArray(int array[], int size) {

numberOfNums = size;
nums =  new int[size];

for(int i = 0; i < size; i++)
  nums[i] = array[i];
}

SuperIntArray::SuperIntArray(int num)
{
numberOfNums = 1;
nums = new int[1];
nums[0] = num;
}

SuperIntArray::SuperIntArray(vector<int> values){
numberOfNums = values.size();
nums = new int [numberOfNums];

for(int i = 0; i < numberOfNums; i++)
  nums[i] = values[i];
}

SuperIntArray::SuperIntArray(const SuperIntArray &other){
numberOfNums = other.numberOfNums;
nums = new int[numerOfNums];
}

SuperIntArray::~SuperIntArray() {
delete[] nums;
}
int* SuperIntArray::getNums() const {
return nums;
}

int SuperIntArray::getSize() const
{
  return numberOfNums;
}

void SuperIntArray::setNums(int array[], int size){
delete[] nums;

numberOfNums = size;
nums = new int[size];

for (int i = 0; i < size; i++)
  nums[i] = array[i];
}

void SuperIntArray::add(int num){
  int *temp = new int[numerOfNums +1];
for (int i = 0l i< numberOfNums; i++)
  temp[i] = nums[i];
temp[i] = nums[i];
temp[numberOfNums];

delete[] nums;

nums=temp;
numberOfNums++;
}

int SuperIntArray::get(int index) const{
return nums[index];
}

void SuperIntArray::getMin(int nums[], int size){

  int min = nums[0];
for (int i = 1; i<size; i++){
if (nums[i] < min)
  min = nums[i];
}
return min;
}

double SuperIntArray:: getMean(int nums[], int size){

  int total = 0;
for (int i = 0; i <size; i++)
  total += nums[i];

return (double)total/size;
}


