int BSearchRecur(int ar[], int first, int last, int target)
{
  int mid;
  if(first > last)
    return -1;
  mid = (first+last) / 2;
  
  if(ar[mid] == target)
    return mid;
  else if(target < ar[mid])
    return BSearchRecur(ar, first, mid-1, target);      // 앞부분을 대상으로 재탐색
  else 
    retrun BSearchRecur(ar, mid+1, last, target);       // 뒷부분을 대상으로 재탐색
}
