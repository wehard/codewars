#include <math.h>

double discoverOriginalPrice(double discounted_price, double sale_percentage) {
  return round(100 * (discounted_price / (1 - (sale_percentage / 100)))) / 100;
}