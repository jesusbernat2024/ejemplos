#include <iostream>
#include <windows.h>
using namespace std;

typedef void (*tipoFuncion1)();

int main() {
  HMODULE hModule = LoadLibraryA("operacionesIniciales.dll");
  tipoFuncion1 operacionesIniciales = (tipoFuncion1)GetProcAddress(hModule, "operacionesIniciales");

  operacionesIniciales();
  cout << "Hello World!";
  return 0;
}