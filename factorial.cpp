#include<bits/stdc++.h>
using namespace std;

 unsigned long long iterativeFactorial (unsigned long long n)
 {   unsigned long long f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}
 unsigned long long recursiveFactorial (unsigned long long n)
{
     if (n==0)
    return 1;
    return n*recursiveFactorial(n-1);
}
main()
{
    unsigned long long n;
    cout<<"Please enter the value of n to calculate the factorial "<<endl;
    cin>>n;

    auto start = std::chrono::high_resolution_clock::now();

    cout<<iterativeFactorial(n)<<endl;
   // cout<<recursiveFactorial(n)<<endl;

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<chrono::microseconds>(end - start);
    // Print the elapsed time
    cout << "Elapsed time: " << duration.count() << " microseconds" << endl;
    return 0;
}

