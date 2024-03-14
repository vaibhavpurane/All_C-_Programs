#include <iostream>
using namespace std;
int numOfJumps(int x, int y, int N, int heights[]) {
   int numJumps = 0;
   // When the height is less than jump length
   for (int j = 0; j < N; j++) {
      if (x >= heights[j]) {
         numJumps++;
         continue;
      }
      // When the height is more than jump length
      int h = heights[j];
      while (h > x) {
         ++numJumps;
         h = h - (x - y);
      }
      ++numJumps;
      printf("%d\t",numJumps);   }
   
   return numJumps;
}
int main() {
   int N = 4; // Number of walls
   int x = 8; // jump height
   int y = 2; // length after he slips back
   int heights[] = {10,24,32,33};
   int minJumpsRequired = numOfJumps(x, y, N, heights);
   cout << "Minimum number of jumps required: " << minJumpsRequired << endl;
   return 0;
}
