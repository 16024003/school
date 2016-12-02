for(i=0;i<10;i++)
{
    if(str1[i]=='\0') break;
    else
    {
        if((str1[i]>='a')&&(str1[i]<='z'))
        {
            str1[i]-=32;
        }
    }
}
