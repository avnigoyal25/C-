//GFG solution of -Find all factorial numbers less than or equal to N


class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> result;
        computeFactorial(N, result, 1);
        return result;
    }
    
private:
    void computeFactorial(long long N, vector<long long>& result, long long currentNum) {
        if (factorial(currentNum) <= N) {
            result.push_back(factorial(currentNum));
            computeFactorial(N, result, currentNum + 1);
        }
    }

    long long factorial(long long num) {
        if (num <= 1) {
            return 1;
        }
        return num * factorial(num - 1);
    }
};
