#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
 int k=0,t=0;
 for(int i=0;i<n;i++)
 {  
     if(s[i]=='U')
     {k++;
     
     }

     if (s[i] == 'D') {
       
       k--;

     }
     if(k==0 &&s[i]=='U')
     t++;

 }

return t;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
