bool findPair(int arr[], int size, int n)
{
    // code
    bool ans = false;
    sort(arr, arr + size);
    int i = 0, j = i + 1;
    while (i < size and j < size)
    {

        if (((arr[j] - arr[i]) == n or (arr[i] - arr[j]) == n) and i != j)
        {
            ans = true;
            break;
        }
        else if (arr[j] - arr[i] > n)
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}