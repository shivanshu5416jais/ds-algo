#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    int a[26]={0},n=s.size();
    for(int i=0;i<n;i++)
    a[s[i]-'a']++;
    vector<int>v;
    for(int i=0;i<26;i++)
     {
         if(a[i])
        v.push_back(a[i]);
     }
   sort(v.begin(),v.end());
   n=v.size();
   if(v.size()==1)
   return"YES";
   if(v[n-1]-v[0]<=1 && v[0]==v[n-2])
   return "YES";
   if(v[0]==1 && v[1]==v[n-1])
   return "YES";
   return "NO";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
