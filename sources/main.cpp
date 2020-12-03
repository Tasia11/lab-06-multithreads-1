// Copyright 2020 Dolbnin Mikhail dolbnin@protonmail.com

#include "hashCalc.hpp"

int main(int, char*[]){
  hashCalc A("/Users/mishadolbnin/lab-06-multithreads/map.json");
  A.initLogs();
  A.initThreads();
  return 0;
}
