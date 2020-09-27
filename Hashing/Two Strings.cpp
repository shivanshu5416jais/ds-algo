#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    int a[26]={0},b[26]={0};
    for(int i=0;i<s1.size();i++)
    a[s1[i]-'a']++;
    for(int i=0;i<s2.size();i++)
    b[s2[i]-'a']++;
    string s="NO";
    for(int i=0;i<26;i++)
    {
        if(a[i]&&b[i])
        s="YES";
    }
    
    return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
