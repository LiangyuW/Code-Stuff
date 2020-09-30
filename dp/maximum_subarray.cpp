vector<int> maxSubarray(vector<int> arr) {
    int local_max=0;
    int global_max=INT_MIN;
   
    int max_sequence=INT_MIN;
    for(int i=0; i<arr.size(); i++){
       
        local_max=max(arr[i], local_max+arr[i]);
        global_max=max(global_max, local_max);
        if(max_sequence<max_sequence+arr[i]){
            max_sequence=max(arr[i], max_sequence+arr[i]);
        } else{
            max_sequence=max(max_sequence, arr[i]);
        }

    }

   return {global_max, max_sequence};
}
