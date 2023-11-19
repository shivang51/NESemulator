#include "Sprite.h"

#include <iostream>

namespace Gui {

Sprite::Sprite(int width, int height) : mWidth(width), mHeight(height) {
  mPixels = std::vector<Pixel>(width * height);
  for (int i = 0; i < mPixels.size(); i++) {
    mPixels[i] = Pixel(i % width, i / width, color);
  }
}

void Sprite::draw(int x, int y, int scale) {
  for (int i = 0; i < mPixels.size(); i++) {
    mPixels[i].draw(x, y, scale);
  }
}

void Sprite::setColor(Color color) {
  for (int i = 0; i < mPixels.size(); i++) {
    mPixels[i].setColor(color);
  }
}

void Sprite::setPixel(int x, int y, Color &color) {
  int ind = x + y * mWidth;
  if (ind >= mPixels.size())
    return;
  mPixels[ind].setColor(color);
}
} // namespace Gui
