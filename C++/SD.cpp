#include <iostream>
#include <cmath>

using namespace std;

void cal();

int main(){
    cal();
    return 0;
}

void cal(){
// user input.
    int i;
    float arr[10],mean , sd, sum=0;
    cout << "Enter 10 numbers : " ;
    for (i=0;i<10;i++){
        cin >> arr[i];
    }

// calculation of mean.
for (i=0;i<10;i++){
    sum += arr[i];
}
mean = sum/10;

//calculation of standard deviation.
float temp[10],tempsum=0;
for(i=0;i<10;i++){
    temp[i] = pow(arr[i]-mean,2);
}

for(i=0;i<10;i++){
    tempsum += temp[i];
}
sd = sqrt(tempsum/10);

// Output :
cout << "Mean is : " << mean << endl;
cout << "SD is  :  " << sd << endl;
}