#include <iostream>
#include <graphics.h>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int MARGIN_X = 50;
const int MARGIN_Y = 50;

void drawRectangle(int x1, int y1, int x2, int y2, const char* text) {
  rectangle(x1, y1, x2, y2);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy((x1 + x2) / 2, (y1 + y2) / 2, text);
}

void drawDiamond(int x, int y, int size, const char* text) {
  line(x - size, y, x, y - size);
  line(x + size, y, x, y + size);
  line(x, y - size, x, y + size);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(x, y, text);
}

void drawDecisionNode(int x, int y, const char* text) {
  drawDiamond(x, y, 20, text);
}

int main() {
  initwindow(WINDOW_WIDTH, WINDOW_HEIGHT);
  rectangle(MARGIN_X, MARGIN_Y, WINDOW_WIDTH - MARGIN_X, WINDOW_HEIGHT - MARGIN_Y);

  drawRectangle(MARGIN_X, MARGIN_Y + 100, MARGIN_X + 100, 
          MARGIN_Y + 150, "Temperature > 115°C");
  drawRectangle(MARGIN_X + 200, MARGIN_Y + 100, MARGIN_X + 300, 
          MARGIN_Y + 150, "Cooling water <= 120 litres/hour");

  drawDecisionNode(MARGIN_X + 150, MARGIN_Y + 200, "AND");

  drawRectangle(MARGIN_X + 150, MARGIN_Y + 300, MARGIN_X + 250, 
          MARGIN_Y + 350, "Warning Signal");

  drawRectangle(MARGIN_X, MARGIN_Y + 400, MARGIN_X + 100, 
          MARGIN_Y + 450, "Temperature <= 115°C");

  drawDecisionNode(MARGIN_X + 150, MARGIN_Y + 500, "AND");

  drawRectangle(MARGIN_X + 200, MARGIN_Y + 400, MARGIN_X + 300, 
          MARGIN_Y + 450, "Reactor pressure > 15 bar");

  line(MARGIN_X + 150, MARGIN_Y + 175, MARGIN_X + 150, 
          MARGIN_Y + 200);
  line(MARGIN_X + 250, MARGIN_Y + 175, MARGIN_X + 250, 
          MARGIN_Y + 200);
  line(MARGIN_X + 150, MARGIN_Y + 250, MARGIN_X + 150, 
          MARGIN_Y + 300);
  line(MARGIN_X + 300, MARGIN_Y + 425, MARGIN_X + 250, 
          MARGIN_Y + 500);
  line(MARGIN_X + 150, MARGIN_Y + 450, MARGIN_X + 150, 
          MARGIN_Y + 500);
  line(MARGIN_X + 200, MARGIN_Y + 525, MARGIN_X + 250, 
          MARGIN_Y + 500);

  getch();
  closegraph();

  return 0;
}
