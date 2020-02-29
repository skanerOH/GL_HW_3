#include "BucketSort.h"

BucketSort::BucketSort()
{
    buckets=new std::list<double>[intervalCount];
}

BucketSort::~BucketSort()
{
    delete [] buckets;
}

void BucketSort::Add(double element)
{
    int index=static_cast<int>(element);
    if (index>=0 && index<intervalCount)
    {
        buckets[index].push_back(element);
    }
}

void BucketSort::PrintResult()
{
    std::list<double>::iterator iter;
    for (int i=0; i<intervalCount; ++i)
    {
        buckets[i].sort();
        for (iter=buckets[i].begin(); iter!=buckets[i].end(); ++iter)
        {
            std::cout << *iter << ' ';
        }
    }
}