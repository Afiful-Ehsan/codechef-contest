#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int j = 0; j < T; j++)
    {
        int N, M;
        cin >> N >> M;

        int A[N];

        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        for(int i = 0; i < N; i++)
        {
            for(int k = i + 1; k < N; k++)
            {
                if(A[i] > A[k])
                {
                    int temp = A[i];
                    A[i] = A[k];
                    A[k] = temp;
                }
            }
        }

        int P = 0, count = 0;

        for(int i = 0; i < N; i++)
        {
            P = P + A[i];

            int handshake = P * (P - 1) / 2;

            if(handshake <= M)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}
