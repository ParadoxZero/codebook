/*

    Index:
    
    (1) Prime Factors
    (2) Prime Sieve
    (3) Check if power of 2
*/

///////////////////////
// (1) Prime Factors //
///////////////////////

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
    if (n > 2)
        printf ("%d ", n);
}

/////////////////////
// (2) Prime Sieve //
/////////////////////

bool prime[NUM+1];
memset(prime, true, sizeof(prime));

for (int p=2; p*p<=NUM; p++)
{
    if (prime[p] == true)
    {
        for (int i=p*2; i<=n; i += p)
            prime[i] = false;
    }
}

/////////////////////////////
// (3) Check if Power of 2 //
/////////////////////////////

bool isPowerOfTwo (int x)
{
  return x && (!(x&(x-1)));
}
