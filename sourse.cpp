#include <iostream>

int main() {
	int n;
	do {
		std::cin >> n;
	} while (0 > n || n > 2000000);
	int sh = 0;
	int mx = 0;
	while (n != 1) { 
		if (mx < n) { 
			mx = n; 
		}
		
		sh += 1;

		if (n % 2 == 1) { 
			n = n * 3 + 1; 
		} 
		else { 
			n = n / 2; 
		}
		
	}
	std::cout << sh << " " << mx;

}