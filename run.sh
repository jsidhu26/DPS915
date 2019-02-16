g++ -pg -g -O2 -std=c++11 ArrayProcessing.cpp -o ArrayProcessing
ArrayProcessing 150
gprof -q -b triples > ArrayProcessing.callgraph.txt
cat ArrayProcessing.callgraph.txt

