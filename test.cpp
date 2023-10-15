// // #include<iostream>
// // using namespace std;

// //     //binary search function

// //     int binary_src(int arr[],int high,int low,int target){
// //         int mid;
// //         while(high>low){
// //             mid = (high + low) / 2;
// //             if(arr[mid]==target){
// //                 return mid;
// //             }
// //             if(arr[mid]>target){        //complexity O(log n)
// //                 high = mid - 1;
// //             }
// //             if(arr[mid]<target){
// //                 low = mid + 1;
// //             }
// //         }
// //         return -1;
// //     }

// // int main(){
// //     int arr[7] = {4, 7, 9, 1, 20, 71, 66};
// //     int target = 41,temp,high=7,low=0;

// //     //linear search

// //     // for (int i = 0; i < 7;i++){
// //     //     if(arr[i]==target){             //complexity O( n)
// //     //         cout << "Linear src: " << i << endl;
// //     //         break;
// //     //     }
// //     // }

// // //insertion sorting

// //     // for (int i = 0; i < 7;i++){
// //     //     temp = arr[i];
// //     //     int j = i - 1;

// //     //     while (j >= 0&&arr[j]>temp){        ////complexity O(n*n)
// //     //         arr[j + 1] = arr[j];
// //     //         j--;
// //     //     }
// //     //     arr[j + 1] = temp;
// //     // }

// //     // cout << "insertion  sort result: ";
// //     //     for (int i = 0; i < 7;i++){
// //     //         cout << arr[i] << " ";
// //     //     }

// //         // selection sort

// //         //  for (int i = 0; i < 7;i++){
// //         //      for (int j = i + 1; j < 7;j++){
// //         //          if(arr[i]>arr[j]){
// //         //              temp = arr[i];
// //         //              arr[i] = arr[j];
// //         //              arr[j] = temp;
// //         //          }
// //         //      }
// //         //  }

// //         // cout << "selection sort result: ";
// //         // for (int i = 0; i < 7;i++){
// //         //     cout << arr[i] << " ";
// //         // }
// //         int val = 9;

// //         //bubble sort

// //         for (int i = 0; i < 7;i++){
// //             for (int j = 0; j < 7 - 1 - i;j++){
// //                 cout << arr[j] << " ";
// //                 if(arr[j]>arr[j+1]){
// //                     swap(arr[j], arr[j + 1]);
// //                 }
// //             }
// //             cout << endl;
// //         }

// //         cout << "selection sort result: ";
// //         for (int i = 0; i < 7;i++){
// //             cout << arr[i] << " ";
// //         }

// //             cout << endl;
// //         cout << "binary src result: " << binary_src(arr, high, low, val) << endl;
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9] = {7,8,1,5,3,0,2,6,4};
//     int temp = 0;
//      int count = 1;
//     for (int i = 0; i < 9;i++){
//         cout << count++<<"st step: "<<endl;
//         for (int j = i+1; j < 9 ;j++){

//                 if(arr[i]>arr[j]){
//                     temp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;

//             }
//              for (int i = 0; i < 9; i++)
//         {
//             cout << arr[i] << " ";
//          }
//          cout << endl;

//         }

//     }

//     //bubble sort

//     // for (int i = 0; i < 10;i++){
//     //     for (int j = 0; j < 10 - 1-i;j++){
//     //         if(arr[j]>arr[j+1]){
//     //             temp = arr[j];
//     //             arr[j] = arr[j + 1];
//     //             arr[j + 1] = temp;
//     //         }
//     //     }
//     // }

//     //insertion sort
//     // int j = 0;
//     // for (int i = 0; i < 10;i++){
//     //     temp = arr[i];
//     //     j = i - 1;

//     //     while(j>=0&&arr[j]>temp){
//     //         arr[j + 1] = arr[j];
//     //         j--;
//     //     }
//     //     arr[j + 1] = temp;
//     // }

//         for (int i = 0; i < 10; i++)
//         {
//             cout << arr[i] << " ";
//          }

// }

#include <iostream>
using namespace std;
int main()
{
    int ar[40] = {45, 70, 55, 75, 73, 70, 65, 68, 60, 74, 83, 80, 58, 68, 85, 90, 64, 75, 82, 62, 78, 79, 63, 72, 77, 88,
                  71, 67, 76, 69, 81, 66, 61, 84, 87, 86, 89, 59, 57, 56};
    int target = 9, temp = 0, store = 0, j = 0, count = 0;

    // linear search
    //  for (int i = 0; i < 6;i++){
    //      if(ar[i]==target){
    //          cout << i << endl;
    //          break;
    //      }
    //      count++;
    //  }
    //  if(count==5){
    //       cout << "Not found" << endl;
    //  }

    // bubble sorting

    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 40 - 1 - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    // insertion sorting

    // for (int i = 0; i < 5;i++){
    //     store = ar[i];
    //     j = i - 1;

    //     while(j>=0&&ar[j]>store){
    //         ar[j + 1] = ar[j];
    //         j--;
    //     }
    //     ar[j + 1] = store;
    // }

    // selection sort

    // for (int i = 0; i < 6;i++){
    //     for (int k = i+1; k < 5;k++){
    //         if(ar[i]>ar[k]){

    //             temp = ar[k];
    //             ar[k] = ar[i];
    //             ar[i] = temp;
    //         }
    //     }
    // }
    // binary search

    // int high = 5, low = 0, mid = 0;

    // while(high>=low){
    //     mid = (high + low) / 2;

    //     if(ar[mid]==target){
    //         cout << mid << endl;
    //         break;
    //     }
    //     if(ar[mid]>target){
    //         high = mid - 1;
    //     }
    //     else{
    //         low = mid + 1;
    //     }
    // }

    // if(high<low){
    //     cout << "Not found" << endl;
    // }
    int coun = 1;
    for (int i = 0; i < 40; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    // output loop
    for (int i = 0; i < 40; i++)
    {
        if (ar[i] >= 85 && ar[i] <= 91)
        {
            coun++;
        }
    }

    cout << endl;
    cout << coun;
}