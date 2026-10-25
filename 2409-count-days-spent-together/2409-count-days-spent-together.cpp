class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {

        int m1 = arriveAlice[0] - '0';
        m1 = m1 * 10 + arriveAlice[1] - '0';

        int d1 = arriveAlice[3] - '0';
        d1 = d1 * 10 + arriveAlice[4] - '0';

        int m2 = leaveAlice[0] - '0';
        m2 = m2 * 10 + leaveAlice[1] - '0';

        int d2 = leaveAlice[3] - '0';
        d2 = d2 * 10 + leaveAlice[4] - '0';

        int m3 = arriveBob[0] - '0';
        m3 = m3 * 10 + arriveBob[1] - '0';

        int d3 = arriveBob[3] - '0';
        d3 = d3 * 10 + arriveBob[4] - '0';

        int m4 = leaveBob[0] - '0';
        m4 = m4 * 10 + leaveBob[1] - '0';

        int d4 = leaveBob[3] - '0';
        d4 = d4 * 10 + leaveBob[4] - '0';

        int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};

        int a1 = d1, a2 = d2, b1 = d3, b2 = d4;

        for (int i = 0; i < m1 - 1; i++)
            a1 += days[i];

        for (int i = 0; i < m2 - 1; i++)
            a2 += days[i];

        for (int i = 0; i < m3 - 1; i++)
            b1 += days[i];

        for (int i = 0; i < m4 - 1; i++)
            b2 += days[i];

        int start = max(a1, b1);
        int end = min(a2, b2);

        return max(0, end - start + 1);
    }
};