// Profile a Serial Application - Array Processing
// ArrayProcessing.cpp

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

void init(float** a, int n) {
	for (int i = 0; i < n; i++)
		a[i] = new float[n];
}

void generateRandom(float** a, int n) {
	std::srand(std::time(nullptr));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = std::rand() / 100;
			//uncomment these lines to see the numbers 
			//assigned to each element
			//std::cout << "array[" << i << "," << j << "] : " 
			//<< a[i][j] << std::endl;
		}
	}
}

int main(int argc, char* argv[]) {

	// interpret command-line argument
	if (argc != 2) {
		std::cerr << argv[0] << ": invalid number of arguments\n";
		std::cerr << "Usage: " << argv[0] << "  size_of_matrices\n";
		return 1;
	}
	int n = std::atoi(argv[1]);   // size of matrices

	float** a = new float*[n];
	
	init(a, n);
	
	generateRandom(a, n);

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;

	return 0;
}
