 #include <stdio.h>
#include "point_sort.h"

  void point_sort(struct point a[], int n){
    int i,j;
    int change1, change2;

    int zhong;
    for(i = 0; i < n; i++)
    {
      zhong = i;
      for(j = 0; j < n-i-1; j++)
      {
        if(a[j].x > a[j + 1].x)
        {
          change1 = a[j].x;
        change2 = a[j].y;
        a[j].x = a[j + 1].x;
        a[j].y = a[j + 1].y;
        a[j + 1].x = change1;
        a[j + 1].y = change2;
        }
        else if(a[j].x == a[j + 1].x)
        {
          if(a[j].y > a[j + 1].y)
          {
            change1 = a[j].x;
        change2 = a[j].y;
        a[j].x = a[j + 1].x;
        a[j].y = a[j + 1].y;
        a[j + 1].x = change1;
        a[j + 1].y = change2;
          }
        }
      }

      
    }

  }
