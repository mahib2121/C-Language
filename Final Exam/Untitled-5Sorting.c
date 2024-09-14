// #include <stdio.h>
// int main()
// {
//     int test;
//     scanf("%d", &test);
//     for (int i = 0; i < test; i++)
//     {

//         int n;
//         scanf("%d", &n);
//         int arr[n];
//         for (int i; i < n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }

//         int arr1[n];
//         for (int i = 0; i < n; i++)
//         {
//             arr1[i] = arr[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr1[i] > arr1[j])
//                 {
//                     int temp = arr1[i];
//                     arr1[i] = arr1[j];
//                     arr1[j] = temp;
//                 }
//             }
//         }

//         int arr3 [n];
//         for (int i =0;i<n;i++){
//             arr3[i]=arr[i]-arr1[i];
//         }

//        // int x [n];
//         for (int i = 0; i < n; i++)
//         {
//             // x[i]=;
//              if (arr3[i]<0){
//                arr3[i]= (-1)*arr3[i];
             
//                 printf("%d ",arr3[i]);
//              }
//              else {
//                 printf("%d ",arr3[i]);
//              }

//         }
//         // for (int i = 0; i < n; i++)
//         // {
//         //     int arr3 = arr[i] - arr1[i];
//         //     if (arr3 < 0)
//         //         arr3 = -arr3; // Manual absolute value computation
//         //     printf("%d ", arr3);
//         // }
//         // printf("\n");
//    }

//     return 0;
// }



#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int arr1[n];
        for (int i = 0; i < n; i++) {
            arr1[i] = arr[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr1[i] > arr1[j]) {
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }

        int arr3[n];
        for (int i = 0; i < n; i++) {
            arr3[i] = arr[i] - arr1[i];
            if (arr3[i] < 0) {
                arr3[i] = -arr3[i];
            }
            printf("%d ", arr3[i]);
        }
        printf("\n");
    }

    return 0;
}

