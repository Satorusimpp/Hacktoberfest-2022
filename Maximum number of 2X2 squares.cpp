class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
       long long int n=base/2;

        return (n*(n-1))/2;
    }
};
