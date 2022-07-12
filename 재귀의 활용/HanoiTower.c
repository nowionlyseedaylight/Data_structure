void HanoiTowerMove(int num, char from, char by, char to)  // num개의 원반, from/to = 양끝, by = 사이
{
  if(num==1) // 이동할 원반의 수가 1개일 때
  {
    printf("원반1을 %c에서 %c로 이동 \n", from, to);
  }
  else
  {
    HanoiTowerMove(num-1, from, to, by);
    printf("원반%d을(를) %c에서 %c로 이동 \n", num, from, to);
    HanoiTowerMove(num-1, by, from, to);
  }
}
