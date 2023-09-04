#include <bits/stdc++.h>
using namespace std;

int main()
{
    clock_t t1 = clock(); //start Clock Time
    freopen("input.txt","r",stdin); // for input a notepad file that's why txt file
    freopen("output.txt","w",stdout); // output a result From get input file. and make a txt file
    int n, i, j; // get 3 integer value
    cin>>n; //
    int arr[n], brr[n];
    for(i=1;i<=n;i++) cin>>arr[i]>>brr[i];
//    for(i=1;i<=n;i++) cout<<arr[i]<<" "<<brr[i]<<endl;
    for(i=1;i<n;i++){
        for(j=1;j<=n-i;j++){
            if(arr[j]<arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swap(brr[j],brr[j+1]);
            }
            else if(arr[j]==arr[j+1]){
                    if(brr[j]<brr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swap(brr[j],brr[j+1]);
            }
            }

        }
    }
    for(i=1;i<=n;i++) cout<<arr[i]<<" "<<brr[i]<<endl;
    clock_t t2 = clock(); //End Clock Time
    clock_t t = (t2-t1)/CLOCKS_PER_SEC; //Clock time start-End and get secend velu
    cout<<"Total Time="<<t<< endl; //Print Time count
    return 0; // Retuen valu & end
}

