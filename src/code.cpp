#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int res = (left - right);

    return res * res;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 || bit_pos < 0) {
      return false;
    }
    int t = mask & (1 << bit_pos);
    t = t >> bit_pos;
    if ((t % 2) == 0) return false;
    return true;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int max = left;
    if (max < middle) {
      max = middle;
    }
    if (max < right){
      max = right;
    }
    return max;
  }


  // Task 4
  void swap_args(int *left, int *right) {
    if (left == 0 or right == 0) {
      return;
    }
    int temp = *left;

    *left = *right;
    *right = temp;
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (length <= 0){
      return 0;
    }else{
      if(arr == nullptr){
        return 0;
      }else{
        int sum = 0;
        for (int i = 0; i<length; i++){
          sum += arr[i];
        }
        return sum;
      }
    }
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (length <= 0 or arr == nullptr){
      return nullptr;
    }else{
      int max = 0;

      for (int i = 0; i < length; i++) {
        if (arr[max] < arr[i]) {
          max = i;
        }
      }
      return &arr[max];
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {



    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
