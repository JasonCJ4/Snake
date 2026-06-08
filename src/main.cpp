#include <raylib.h>

int main() {
  InitWindow(1280, 720, "Snake");

  while (WindowShouldClose() == 0) {
    BeginDrawing();
    ClearBackground(BLACK);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
