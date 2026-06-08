#include <raylib.h>

int main() {
  InitWindow(600, 600, "Snake");

  while (WindowShouldClose() == 0) {
    BeginDrawing();
    ClearBackground(BLACK);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
