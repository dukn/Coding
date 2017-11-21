#include <iostream>
int main(){
  /* Declare an array */
  int arr[100];
  int i;
  /* Enter 10 first elements */
  /* 0 1 2 3 4 5 6 7 8 9 */
  for (i = 0; i < 10; i++){
    std::cin>> arr[i];
  }
  /* Edit i-th element */
  /* 0 1 2 3 4 5 6 10 8 9 */
  i = 7;
  arr[i] = 10;
  /* Insert an element */
  /* 0 1 2 3 4 -5 6 10 8 9 */
  int index = 5;
  int value = -5;
  for(i = 99; i > index; i --){
    arr[i] = arr[i-1];
  }
  arr[index] = value;
  /* Remove an element */
  /* 0 1 2 4 -5 6 10 8 9 */
  index = 3;
  for(i = index; i< 100-1; i++){
    arr[i] = arr[i+1];
  }
  arr[99] = 0; // padding
  /* Find an element */
  value = 8;
  for( i = 0; i< 100; i++){
    if (arr[i] == value){
      std::cout<<"arr["<<i<<"] = "<<value<<std::endl;
      break;
    }
  }
  /* Print 10th first elements */
  for (i =0; i < 10; i++){
    std::cout<<arr[i]<<" ";
  }
  return 0;
}
