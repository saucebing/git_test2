#include<stdio.h>
void a() {
  FILE* f = fopen("a.txt","r");
}

void b() {
}

int main() {
  a();
  b();
  return 0;
}
