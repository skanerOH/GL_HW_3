#include <iostream>
#include <list>
#include <vector>

class BucketSort
{
    const int intervalCount=101;
    std::vector<std::list<double>> buckets;
public:
    BucketSort();

    void Add(double);

    void PrintResult();

};
