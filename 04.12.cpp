1)
  
#include <iostream>
#include <string>
int minElement (int arr[], int size){
    
     int min=arr[0];
     for (int i=1; i<size; i++){
       if (arr[i]<min)
        min=arr[i];
     }
         return min;
         }
         
int main()
{
  int a[8]={3,9,-4,7,6,1,10,20};
  std::cout<<"Min= "<<minElement(a,8);
}

2) 
#include <iostream>
#include <string>
double averageElement(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}
         
int main()
{
  int a[8]={3,9,-4,7,6,1,10,20};
  std::cout << "Average = " << averageElement(a, 8) << std::endl;
}
+
