class Solution
{
    public:
    void sort012(int a[], int n)
    {
       int l=0;
       int m=0,h=n-1;
       while(m<=h)
       {
           if(a[m]==0)
           {
               swap(a[l],a[m]);
               l++;
               m++;
           }
           else if(a[m]==1)
           m++;
           else
           {
               swap(a[m],a[h]);
              //m++;
               h--;
           }
       }
    }
    
};