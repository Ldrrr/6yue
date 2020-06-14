int* getRow(int rowIndex, int* returnSize)
{
    * returnSize=rowIndex+1;
    int *s=(int *)malloc(sizeof(int)*(rowIndex+1));
    for(int i=0;i<=rowIndex;i++)
    {
        for(int j=i;j>=0;--j)
        {
            if(j==0||j==i)
            {
                s[j]=1;
            }
            else
            {
                s[j]=s[j]+s[j-1];
            }
        }
    }
    return s;
}
