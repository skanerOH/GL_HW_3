#include "BucketSort.h"


int main() {
    BucketSort bucket;
    double t;

    std::cin >> t;
    while (t!=0)
    {
        bucket.Add(t);
        std::cin >> t;
    }

    bucket.PrintResult();
    return 0;
}
