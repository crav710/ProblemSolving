    long long power(int N,int R)
    {
    	if(R==0){
    		return 1;
    	}
    	long long  y=power(N,R/2)%MOD;
    	y=((y%MOD)*(y%MOD))%MOD;
    	if(R%2==0)
    	{
    		return y;
    	}
    	else
    	{
    		return ((y%MOD)*(N%MOD))%MOD;
    	}
    
    }
