class Solution {
public:

    bool findElem(vector<int>& arr, int start, int end, int target){
        if(end - start <= 1) 
            return (target == arr[start] || target == arr[end]) ? true : false;
        int mid = (start + end)/ 2;
        return (target > arr[mid]) ? findElem(arr, mid, end, target) : findElem(arr, start, mid, target);
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i < matrix.size(); i ++){
            if(matrix[i][0] <= target && matrix[i][matrix[i].size() - 1] >= target){
                if(findElem(matrix[i], 0, matrix[i].size() - 1, target))
                    return true;
            }
        }
        return false;
    }
};
