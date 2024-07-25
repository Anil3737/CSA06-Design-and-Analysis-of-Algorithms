#include <iostream>
using namespace std;
int min_(int a, int b, int c){
   if (a < b)
      return (a < c) ? a : c;
   else
      return (b < c) ? b : c;
}
int min_cost(int cost[4][4], int m, int n){
   int i, j;
   int tot_cost[4][4];
   tot_cost[0][0] = cost[0][0];
   for (i = 1; i <= m; i++)
   tot_cost[i][0] = tot_cost[i - 1][0] + cost[i][0];
   for (j = 1; j <= n; j++)
      tot_cost[0][j] = tot_cost[0][j - 1] + cost[0][j];
   for (i = 1; i <= m; i++)
      for (j = 1; j <= n; j++)
         tot_cost[i][j] = min_(tot_cost[i - 1][j - 1], tot_cost[i - 1][j], tot_cost[i][j - 1]) + cost[i][j];
      return tot_cost[m][n];
}
int main(){
   int cost[4][4] = {
      { 9, 9, 4 },
      { 8, 0, 9 },
      {1, 2, 8}
   };
   cout<<" The minimum cost is "<<min_cost(cost, 2, 2);
   return 0;
}
