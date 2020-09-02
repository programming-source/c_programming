//Given 2 arrays of the same length determine if all their elements are equal or not

#include<stdio.h>

void read(int v[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("v[%d]: ",i);
        scanf("%d",&v[i]);
    }
}

int equal(int *v1,int *v2,int n)
{
    int i,k=0; //we will use k to determine if the elements are equal or not
    for(i=0;i<n;i++)
    if(v1[i]!=v2[i]) k++; //if 1 element is different then we change the value of k
    if(k==0) return 1; //if k has the same value as in the declaration after the execution, all elements are equal
    return 0;
}

int main()
{
    int v1[10],v2[10],n;
    printf("Length of the arrays: ");
    scanf("%d",&n);
    read(v1,n);
    printf("\n");
    read(v2,n);
    if(equal(v1,v2,n)==1) printf("All elements are equal\n");
    else
    printf("Some elements differ\n");
    return 0;
}