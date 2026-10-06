#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
    double x;
    double y;
};

void move_by(Point* p, double dx, double dy)
{
    p->x += dx;
    p->y += dy;
}

double dist(const Point* a, const Point* b)
{
    double dx = a->x - b->x;
    double dy = a->y - b->y;

    return sqrt(dx * dx + dy * dy);
}

void move_by_ref(Point& p, double dx, double dy)
{
    p.x += dx;
    p.y += dy;
}

double dist_ref(const Point& a, const Point& b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;

    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1{ 3, 4 };
    Point p2{ 1, 2 };

    move_by(&p1, 1, 1);

    cout << "p1: " << p1.x << ", " << p1.y << endl;
    cout << dist(&p1, &p2) << endl;

    move_by_ref(p2, 1, 1);

    cout << "p2: " << p2.x << ", " << p2.y << endl;
    cout << dist_ref(p1, p2) << endl;

    Point tocke[5] =
    {
    {-73, 24},
    {59, -36},
    {-41, 90},
    {64, -78},
    {32, 15}
    };

    Point glavna{ 0, 0 };

    int n = 0;

    for (int i = 1; i < 5; i++)
    {   
        if (dist(&tocke[i], &glavna) < dist(&tocke[n], &glavna))
        {
            n = i;
        }
    }

    cout << "Najblizi: ";
    cout << tocke[n].x << " " << tocke[n].y << endl;

    return 0;
}