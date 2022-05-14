#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <utility>

using namespace std;
 
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m, k;
    std::cin >> n >> m >> k;
    
    std::unordered_map<string, std::pair<int, int>> destinations;
    
    string destination;
    int destinationCost;
    for(int i = 0; i < k; i++){
        std:cin >> destination >> destinationCost;
        destinations[destination]=std::pair<int, int>(destinationCost,0);
    }
    
    string customers[n];
    
    for(int i = 0; i < n; i++){
        // std::getline(std::cin, customers[i]);
        cin >> customers[i];
        destinations[customers[i]].second++;
    }
    
    cout << n << m << k << endl;
    
    for(const auto& d : destinations){
        cout << "Destination:["<< d.first << "] Cost:["<<d.second.first<<"] Count:["<<d.second.second<< "]"<<endl;
    }
    
    for(string x: customers){
        cout << x << endl;
    }
    
    int customersWindows[n];
    
    
    
    return 0;
}
 
 
 
 

