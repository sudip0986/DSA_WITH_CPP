#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    cout << s.size() << endl;

    for (int i = 0; i < s.size(); i++) // Initialize i to 0
    {
        for (int j = i + 1; j <= s.size(); j++)
        {
            string temp;

            for (int k = i; k < j; k++)
            {
                cout << s[k] << " ";
                temp += s[k];
            }
            cout << endl;

            // Check for unique characters in temp
            int len = 0;
            bool unique = true;
            for (int l = 0; l < temp.size(); l++)
            {
                for (int m = l + 1; m < temp.size(); m++)
                {
                    if (temp[l] == temp[m])
                    {
                        unique = false;
                        break;
                    }
                }
                if (!unique)
                {
                    break;
                }
            }

            if (unique)
            {
                len = temp.size();
                cout << "Length of unique substring: " << len << endl;
            }
        }
    }

    return 0;
}
