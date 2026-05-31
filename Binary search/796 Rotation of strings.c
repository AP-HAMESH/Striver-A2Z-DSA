bool rotateString(char* s, char* goal)
 {
    if(strlen(s)!=strlen(goal))
        return false;
    
    int n=strlen(s);

    for(int shift=0;shift<n;shift++)    
    {
        int m=1;
        for (int i=0;i<n;i++)
        {
            if(s[(i+shift)%n]!=goal[i])
            {
                m=0;
                break;
            }
        }
        if(m==1)
        {
            return true;
        }
        
        
        
    } 
    
    return false;
}