#include <stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

/*
int is_match(char *a, char *b, int i, int j, int k, int l)
{
	if (k >= l)
		return 1;
	if (i >= j)
		return 0;
	if (a[i] == b[k])
		return is_match(a, b, i+1, j, k+1, l);
	else
		return is_match(a, b, i+1, j, k, l);
}

int main()
{
	char foo[] = {"abcNjhgAhGjhfhAljhRkhgRbhjbevfhO"};
	char bar[] = {"NAGARRO"};
	int i, j, k, l;
	i = k = 0;
	j = strlen(foo);
	l = strlen(bar);
	printf("%d\n", is_match(foo, bar, i, j, k, l));
	return 0;
}
*/
bool isSubsequence(char str1[],char str2[],int m, int n)
{
    if(m==0)
        return true;
    if(n==0)
        return false;

    if(str1[m-1]==str2[n-1])
        return isSubsequence(str1,str2,m-1,n-1);
    else
        return isSubsequence(str1,str2,m,n-1);

}
int main()
{
    char str1[]="NAGARRO";
    char str2[]= "abcNjhgAhGjhfhAljhRkhgRbhjbevfhO"

    int m=strlen(str1);
    int n= strlen(str2);
    isSubsequence(str1,str2,m,n)?cout<<" yes ": cout<<"no";
    return 0;
}




















