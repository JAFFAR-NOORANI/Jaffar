// using array and sort them 

#include<iostream>
using namespace std;
int main () {
    int arry[20];
    int i,num;
    cout << "Enter Number of Element of Array :";
    cin >> num;
    cout << "Enter Element Of Array: ";
    for (i=0;i<num;i++){
        cin >> arry[i];
    }
// print array
for (i=0;i<num;i++){
    cout << arry[i]<<"\t";
}
cout << "\n";
// sort array
for (i=0;i<num;i++){
    for (int j=0;j<num;j++){
        if (arry[i]<arry[j]){
            int temp=arry[j];
            arry[j]=arry[i];
            arry[i]=temp;
        }
    }
}
// After Sorrting Array
cout << "After Sorting Array.";
for (i=0;i<num;i++){
    cout << arry[i]<<"\t";
}


}
