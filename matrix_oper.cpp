//addition and transpose
#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,a[100][100],b[100][100],sum[100][100],t[100][100];
    cout<<"\nEnter number of rows in a matrix ";
    cin>>r;

    cout<<"\nEnter number of columns in a matrix ";
    cin>>c;

for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
        cout << "Enter elements a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
    }

    // Displaying the matrix a[][]
    cout << endl << "Entered Matrix: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << " " << a[i][j];
            if(j == c - 1)
                cout << endl << endl;
        }
/*
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
                       cout << "\nEnter element b " << i + 1 << j + 1 << " : ";

            cin>>b[i][j];
        }
    }

    cout<<"\n -----Sum of matrix ------- ";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           sum[i][j]= a[i][j] + b[i][j];
        }
    }

           cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
    {


        for(j = 0; j < c; ++j)
        {
            cout <<"\t"<< sum[i][j] << "  ";
    }
    }
*/
    cout<<"\n-----Transpose ki baari ab ------ ";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];

        }
    }
        for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {

        cout<<" "<<t[i][j];
       if(j == r - 1)
                cout << endl << endl;
        }
    }

    return 0;
}
