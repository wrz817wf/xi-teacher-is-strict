#include<bits/stdc++.h>
using namespace std;
int i,n,a[100];
int ssort(int a[],int xx,int dd)
{
	int k;
	k=a[xx];
	while(xx<dd)
	{
		while(xx<dd&&a[dd]>=k)
          dd--;
          a[xx]=a[dd];
		while(xx<dd&&a[xx]<=k)		
		xx++;
		a[dd]=a[xx];
	
	}	
	a[xx]=k;
	return xx;
	
	
}

void quick_sort(int a[],int min,int max)
{
	if(min<max)
	{
		int o=ssort(a,min,max);
		quick_sort(a,min,o-1);
		quick_sort(a,o+1,max);
	}
	
	
}


int main()
{cin>>n;
for(i=1;i<=n;i++)
	cin>>a[i];
quick_sort(a,1,n);
for(i=1;i<=n;i++)
cout<<a[i];
return 0;
	
} 
