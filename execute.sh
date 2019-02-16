g++ -pg -g -O2 -std=c++11 ArrayProcessing.cpp -o ArrayProcessing
ArrayProcessing 500
gprof -q -b ArrayProcessing > ArrayProcessing.500.clg
cat ArrayProcessing.500.clg
