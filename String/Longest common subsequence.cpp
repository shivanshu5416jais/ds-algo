#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string s1, string s2) {
  int n1=s1.size(),n2=s2.size();
  int a[n1+1][n2+1];
  for(int i=0;i<=n1;i++){
      for(int j=0;j<=n2;j++)
      {
          if(i==0 || j==0)
          a[i][j]=0;
          else if(s1[i-1]==s2[j-1])
          a[i][j]=a[i-1][j-1]+1;
          else
          a[i][j]=max(a[i-1][j],a[i][j-1]);

      }
  }
  return a[n1][n2];

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
