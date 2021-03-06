#include "BucketSort.h"

BucketSort::BucketSort()
{
    for (int i=0; i<intervalCount; ++i)
    {
        buckets.emplace_back(std::list<double>());
    }
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
    int maxColl=INT32_MIN;
    int currSize;
    std::list<double>::iterator iter;
    for (int i=0; i<intervalCount; ++i)
    {
        buckets[i].sort();
        currSize=buckets[i].size();
        if (currSize>maxColl)
            maxColl=currSize;
        for (iter=buckets[i].begin(); iter!=buckets[i].end(); ++iter)
        {
            std::cout << *iter << ' ';
        }
    }
    std::cout << std::endl;
    std::cout << maxColl <<std::endl;
}
