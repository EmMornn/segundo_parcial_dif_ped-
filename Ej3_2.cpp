
int Primero(const int values[], int n, int target) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (values[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (values[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int Ultimo(const int values[], int n, int target) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (values[mid] == target) {
            last = mid;
            low = mid + 1; 
        } else if (values[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int CountOccurrences(const int values[], int n, int target) {
    if (n <= 0) return 0;

    int first = Primero(values, n, target);
    
    if (first == -1) {
        return 0;
    }

    int last = Ultimo(values, n, target);
    
    return last - first + 1;
}