class Solution {
public:
    void pattern7(int n) {
        for(int i = n; i >= 1; --i)
        {
            for(int j = 1; j <= (i-1); ++j)
            {
                cout << " ";
            }
            for(int k = 1; k <= 2*(n-i)+1; ++k)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};
