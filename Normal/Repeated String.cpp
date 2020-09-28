#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
long a,b=0;
int k=s.size();
int t=n%k;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='a')
    b++;
}
b=b*(n/k);
for(int i=0;i<t;i++)
{
    if(s[i]=='a')
    b++;
}
return b;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
