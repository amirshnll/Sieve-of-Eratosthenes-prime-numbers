#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include "cmath"
using namespace std;

bool *primes;

void primeNumber(int N) 
{
	primes = new (nothrow) bool[N + 1];
	if (primes == nullptr)
    cout << "Memory not Allocated";
	else
	{
		memset(primes, true, sizeof(primes));
		for (int i = 2; i * i <= N; i++)
			if (primes[i] == true)
				for (int j = i * 2 ; j <= N; j += i)
					primes[j] = false;
	}
} 



void main() {
	
	/* Prime Number Test */
	int N;
	cout << endl << "Insert number : ";
	std::cin >> N;
	primeNumber(N);

    for (int i = 2 ; i <= N ; i++)
       if (primes[i])
          cout << i << endl;

	delete[] primes;

	/* Stay Console */
	int stay;
	cin >> stay;
	return;

}