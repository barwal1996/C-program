//to check given character is vowel or not.
#include<iostream>
using namespace std;
int main()
{
    int islowercaseVowel,isUppercaseVowel;

    char n;
    cout<<"enter the alphabet "<<endl;
    cin>>n;
     //using of islower and isUpper
     islowercaseVowel = (n =='a'|| n=='e' || n=='i' || n=='o' ||n=='u');
      isUppercaseVowel = ( n=='A'||n=='E'||n=='I'||n=='O'||n=='U');

      if(islowercaseVowel||isUppercaseVowel)
        cout<<"given character is vowel "<<n<<endl;
      else
        cout<<"given character is consonant"<<n<<endl;
      return 0;


}
