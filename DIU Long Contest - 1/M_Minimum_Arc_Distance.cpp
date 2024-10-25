#include <bits/stdc++.h>
using namespace std;
#define db double
#define PI 3.14159265358979323846

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cnt++;
        db Ox, Oy, Ax, Ay, Bx, By;
        cin >> Ox >> Oy >> Ax >> Ay >> Bx >> By;

        // Calculate radius r
        db r = sqrt((Ox - Ax) * (Ox - Ax) + (Oy - Ay) * (Oy - Ay));

        // Calculate the cosine of the central angle theta
        db dotProduct = (Ax - Ox) * (Bx - Ox) + (Ay - Oy) * (By - Oy);
        db theta = acos(dotProduct / (r * r)); // theta in radians

        // Calculate minimum arc length
        db arcLength = r * min(theta, 2 * PI - theta);

        // Output the result
        cout << "Case " << cnt << ": " << fixed << setprecision(8) << arcLength << endl;
    }
    return 0;
}
