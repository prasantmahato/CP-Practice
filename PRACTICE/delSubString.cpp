#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int index_str1,index_str2,k;
int c[100];

int str_del_loc(char *,char *, int *);

int str_del_loc(char *s1, char *s2, int c[])
{
    int j,count=0;
    int i,l=0;

    for(index_str1=0; s1[index_str1]; index_str1++)
    {
        for(index_str2=index_str1, k=0; s1[index_str2] == s2[k] && s1[index_str1]; index_str2++, k++)
        {
            if(!s2[k+1])
            {
                count++;
                c[l++]=index_str1;
                for(j=index_str1, i=strlen(s2)+index_str1; s1[i]; j++,i++)
                    s1[j]=s1[i];
                s1[j]=NULL;
                cout<<"\n\nAfter Delete Operation The  Output: "<<s1;
            }
        }
    }
    return(count);
}

int main()
{
    int c[100];
    char s1[100];
    char s2[30];

    int count;
    
    cout<<"\nEnter the Sentence: "<<endl;
    cin.getline(s1,100);

    cout<<"\nEnter the word you want to delete: "<<endl;
    cin.getline(s2,30);

    count=str_del_loc(s1,s2,c);
    cout<<"\n\nNumber of Occurances= "<<count<<endl;

    return 0;
}