def bubble_sort(arr: list, n: int) -> None:
    lower = 0
    upper = len(arr) - 1
    while lower <= upper:
        mid = (lower + upper) // 2
        if arr[mid] == n: return mid
        elif arr[mid] < n: lower = mid + 1
        else: upper = mid - 1
    return arr
if __name__ == "__main__":
    lst = [1, 3, 6, 9 12, 45, 100] # Needs Sorted Array
    print(bubble_sort(arr, 45))
