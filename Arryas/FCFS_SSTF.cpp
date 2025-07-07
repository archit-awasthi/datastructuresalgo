#include <iostream>
#include <vector>
#include <cmath>
#include <climits>  // For INT_MAX

using namespace std;

// Function for FCFS Disk Scheduling
void FCFS(vector<int> requests, int head) {
    int total_seek = 0;
    cout << "FCFS Order: " << head;

    for (int i = 0; i < requests.size(); i++) {
        total_seek += abs(requests[i] - head);
        head = requests[i];
        cout << " -> " << head;
    }

    cout << "\nTotal Seek Time (FCFS): " << total_seek << endl << endl;
}

// Function for SSTF Disk Scheduling
void SSTF(vector<int> requests, int head) {
    int total_seek = 0;
    vector<bool> visited(requests.size(), false);
    int n = requests.size();

    cout << "SSTF Order: " << head;

    for (int count = 0; count < n; count++) {
        int min_dist = INT_MAX;
        int index = -1;

        for (int i = 0; i < n; i++) {
            if (!visited[i] && abs(requests[i] - head) < min_dist) {
                min_dist = abs(requests[i] - head);
                index = i;
            }
        }

        visited[index] = true;
        total_seek += abs(requests[index] - head);
        head = requests[index];
        cout << " -> " << head;
    }

    cout << "\nTotal Seek Time (SSTF): " << total_seek << endl << endl;
}

// Main function
int main() {
    vector<int> requests = {82, 170, 43, 140, 24, 16, 190};
    int head = 50;

    FCFS(requests, head);
    SSTF(requests, head);

    return 0;
}
