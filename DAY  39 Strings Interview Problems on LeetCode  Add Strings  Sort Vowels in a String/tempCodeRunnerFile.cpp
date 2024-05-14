   int count=0;
     for(int i=0; i<s.size(); i++)
    {
        if( s[i]== 'a' || s[i]== 'e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
        {
            
            s[i]=temp[count];
            count++;
        }
    }