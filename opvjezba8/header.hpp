#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class timer
{
    int h, m;
    double s;
public:
    double avg = 0;
    timer()
    {
        h = 0;
        m = 0;
        s = 0;
    }

    timer(int x, int y, double z)
    {
        h = x;
        m = y;
        s = z;
    }

    timer& operator+=(const timer& other)
    {
        h += other.h;
        m += other.m;
        s += other.s;

        if (s >= 60)
        {
            m++;
            s -= 60;
        }

        if (m >= 60)
        {
            h++;
            m -= 60;
        }

        return *this;
    }

    timer& operator/=(int n)
    {
        double avg;
        avg = h * 3600 + m * 60 + s;
        avg /= n;
        h = avg / 3600;
        m = (avg - (h * 3600)) / 60;
        s = avg - ((h * 3600) + (m * 60));

        return *this;
    }

    friend ostream& operator<<(ostream& os, timer& p)
    {
        os << p.h << ":" << p.m << ":" << p.s;
        return os;
    }

    friend bool operator<(const timer& a, const timer& b)
    {
        if (a.h < b.h)
            return (a.h < b.h);
        else if (a.m < b.m)
            return (a.m < b.m);
        else
            return (a.s < b.s);
    }

    operator double()
    {
        if (m == 7)
            return (s + 60);
        return s;
    }

    timer operator-()
    {
        s = -(s);
        return timer(h, m, s);
    }

    void time(int m)
    {
        s += m;
    }
};

class penalty
{
public:
    double sec;
    penalty(double m)
    {
        sec = m;
    }

    double operator() (timer& obj)
    {
        obj.time(sec);
        return sec;
    }
};
