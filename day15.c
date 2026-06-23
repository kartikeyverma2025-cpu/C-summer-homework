//Question 57
#include <stdio.h>

int main() {
    int i,a[10],n;
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf("array in reverse order");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
//Question 58
#include <stdio.h>

int main() {
    int i,a[10],n,l;
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf("array shifted to left");
    l=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=l;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
    
    
}
//Question 59
#include <stdio.h>

int main() {
    int i,a[10],n,l;
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf("array shifted to right");
    l=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=l;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
    
    
}
//Question 60
#include <stdio.h>

int main() {
    int a[10],n,i,j=0,temp;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++) 
    {
        if(a[i] != 0) 
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }

    printf("Array after moving zeroes to the end");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}