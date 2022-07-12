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

int main(void)
{
  // 막대A의 원반 3개를 막대B를 경유해서 막대C로 옮기자
  HanoiTowerMove(3, 'A', 'B', 'C');
  return 0;
}
