class MyCalendar {
public:
    vector<pair<int,int>>arr;
    MyCalendar() {}

    bool book(int start, int end) {
        for (int i = 0; i < arr.size(); i++) {
            int curr_start = arr[i].first;

            int curr_end = arr[i].second;

            if (end - 1 < curr_start || start > curr_end) {
                continue;
            }
            else {
                return false;
            }
        }
        arr.push_back({start, end - 1});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */