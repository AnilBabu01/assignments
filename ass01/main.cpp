#include <bits/stdc++.h>
using namespace std;

void Rearr_Max_Min(int arr[], int n){
   int maxx = n - 1;
   int minn = 0;

   int max_val = arr[n- 1] + 1;

   for (int i = 0; i < n; i++){
      if (i % 2 == 0){
         arr[i] += (arr[maxx] % max_val) * max_val;
         maxx--;
      }
      else{
         arr[i] += (arr[minn] % max_val) * max_val;
         minn++;
      }
   }
   for(int i = 0; i < n; i++){
      arr[i] = arr[i] / max_val;
   }
}

void sort_array(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){

      int arr[1000],n;
      cout<<"Enter the size of array"<<endl;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }

      sort_array(arr,n);

      cout<<"Before Arramgement";

      for (int i = 0; i < n; i++){
         cout << arr[i] << " ";
      }


      Rearr_Max_Min(arr, n);


      cout<<"\n Rearrangement of an array in maximum minimum form is: ";


      for(int i = 0; i < n; i++){
         cout<< arr[i] << " ";
      }
   return 0;
}
