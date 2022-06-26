public class Kata
{
  public int Min(int[] list)
  {
    int min = list[0];
    foreach (int item in list)
    {
      if (item < min)
      {
        min = item;
      }
    }

    return min;
  }

  public int Max(int[] list)
  {
    int max = list[0];
    foreach (int item in list)
    {
      if (item > max)
      {
        max = item;
      }
    }

    return max;
  }
}