void bin_search(int L[],int N,int item);
void main()
{
    int A[]={12,14,15,12,53,65,87,89,92,96,99,100,102};
    int item=89;
    bin_search(A,12,item);

}
void bin_search(int L[],int N,int item)
{
    int l=0;
    int m, u=N-1;
    while(l<=u)
    {
        m=(l+u)/2;
        if(item==L[m])
           {

            printf("Search succesfull at index %d , item found ",m);
       return ; }
        else if(item>L[m])
            l=m-1;
        else
            u=m-1;

    }
    printf("Search unsuccessful");
}
