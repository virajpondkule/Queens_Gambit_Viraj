#include<simplecpp>
main_program
{
int n[1000],k;
cin>>k;
for(int i=0;i<k;i++)
	 {int j;
	 cin>>j;
	 n[i]=j;
	 }
int a[1000],b[1000];
int q=k,w=0,y=0,u=0;
for(int i=0;i<k;i++)
	 {
	 if(k%2==0)
		  {
		  if(n[w]>n[q])
		  	{
			a[y]=n[w];
			y=y+1;
			w=w+1;
			}
		  else
			    {
                        a[y]=n[q];
                        y=y+1;
                        q=q-1;
                        }
		  }
	 else
	                   {
                  if(n[w]>n[q])
                        {
                        b[u]=n[w];
                        u=u+1;
                        w=w+1;
                        }
                  else
                            {
                        b[u]=n[q];
                        u=u+1;
                        q=q-1;
                        }
                  }
	 }
int sum1=0,sum2=0;
for(int i=0;i<=y;i++)
	sum1=sum1+a[i];
for(int i=0;i<=u;i++)
        sum2=sum2+b[i];
if(sum1>sum2)
	cout<<"a is the winner";
else if (sum2>sum1)
        cout<<"b is the winner";
else
	cout<<"draw";
}
