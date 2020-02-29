#include <iostream>
#include <list>

class BucketSort
{
    const int intervalCount=101;
    std::list<double>* buckets;
public:
    BucketSort();

    ~BucketSort();

    void Add(double);

    void PrintResult();

};
