#include<bits/stdc++.h>
using namespace std;
#include<vector>

struct Workshop {
    int start;
    int end;
    int duration;
};

struct Available_Workshops {
    int n;
    vector<Workshop> shops;
} ;

Available_Workshops* initialize (int start_time[], int duration[], int n) {
    Available_Workshops* ashops = new Available_Workshops();
    ashops->n = n;

    for(int i = 0; i< n; i++){
        Workshop shop;
        shop.start = start_time[i];
        shop.duration = duration[i];
        shop.end = start_time[i] + duration[i];
        ashops->shops.push_back(shop);
    }
    return ashops;
}

int CalculateMaxWorkshops(Available_Workshops* ptr){
    int max = 0;
    int last_end_time = -1;
    sort(ptr->shops.begin(), ptr->shops.end(), [](Workshop a, Workshop b)
        {return a.end < b.end;});
    for(int i = 0; i<ptr->n; i++){
         if(ptr->shops[i].start >= last_end_time){
             last_end_time = ptr->shops[i].end;
             max++;
         }   
    }
    return max;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
