#include <iostream>
using namespace std;


int main()
{
    int i,j,foundd,count;
    int arr[5]={1,3,3,5,5};
    for(i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (i==j)
                continue;
            if (arr[i]==arr[j])
            {
                foundd=1;
            }
        }
        if (foundd!=1)
        {
            cout<<arr[i]<<endl;
            count++;
        }
        
        foundd=0;
    }

    return 0;
}
