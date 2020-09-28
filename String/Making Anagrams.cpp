#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
int n1=a.size(),n2=b.size();
int s=0;
int a1[26]={0};
for(int i=0;i<n1;i++)
a1[a[i]-'a']++;
for(int i=0;i<n2;i++)
{a1[b[i]-'a']--;
}
for(int i=0;i<26;i++)
{
 s+=abs(a1[i]);
}
return s;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
