    #include<iostream>
    using namespace std;
    int main()
    {
        int a[3][2]={
                   {1,2},
                   {2,4},
                    {5,6}

                   };

                   cout<<"printing the fucking array \n";

                   for(int i=0;i<3;i++)
                   {
                       for(int j=0;j<2;j++)
                       {
                           cout<<"\nthe elements of a["<<i<<"]["<<j<<"] is "<<a[i][j] ;
                       }
                   }
                   return 0;

    }
