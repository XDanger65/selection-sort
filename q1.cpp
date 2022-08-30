void bubbleSort(std::vector<int>& arr)
{
    bool swap = true;
    while(swap)
    {
        swap = false;
        for (int i = 0; i < arr.size()-1; i++)
        {
            if (arr[i]>arr[i+1] )
            {
                arr[i] += arr[i+1];
                arr[i+1] = arr[i] - arr[i+1];
                arr[i] -=arr[i+1];
                swap = true;
            }
        }
    }
}