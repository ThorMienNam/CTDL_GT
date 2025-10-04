#include <iostream>
#include <vector>

/*
Cho mảng height độ dài n.

Mỗi phần tử height[i] biểu diễn độ cao của cột thẳng đứng tại vị trí i.

Hai cột bất kỳ có thể tạo thành 1 cái thùng chứa nước, với diện tích chứa được là:
diện_tıˊch=(j−i)×min(height[i],height[j])
Tìm diện tích lớn nhất có thể chứa.

*/

using namespace std;

int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        int width = right - left;
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, width * h);

        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << endl; 
    return 0;
}
