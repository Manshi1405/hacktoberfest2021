#include <stdio.h>

void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
    printf ("Following activities are selected n");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}

int main()
{
    int n;
    printf("Enter no. of activities: ");
    scanf("%d", &n);
    int start[n], end[n];
    printf("Enter start time: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &start[i]);
    }
    printf("Enter end time in sorted order: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &end[i]);
    }
    // start {1, 3, 0, 5, 8, 5};
    // end {2, 4, 6, 7, 9, 9};
    printMaxActivities(start, end, n);
    return 0;
}
