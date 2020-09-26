#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
    int n=arr.size();
    bool visited[100005];
    pair<int,int>p[n];
    for(int i=0;i<n;i++)
    {
        p[i].first=arr[i];
        p[i].second=i;
    }
    sort(p,p+n);
    int ans=0;
    for(int i=0;i<n;i++){

            if(visited[i] || p[i].second==i)
               continue;
            int cycle_size=0;
            int j=i;
            while(!visited[j]){
                visited[j]=1;
                j=p[j].second;
                cycle_size++;
            }
            ans+=(cycle_size-1);
    }
    return ans;


}

int main()
{

    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int ans = minimumSwaps(a);
    printf("%d\n", ans);
    return 0;
    
}