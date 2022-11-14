#ifndef ZUUL_TYPES_H
#define ZUUL_TYPES_H

#include <cctype>
#include <map>
#include <vector>

using namespace std;

struct ZuulItem {
  char* name;
  char* description;
  ZuulItem(char nameIn[51], char descriptionIn[101]);
  ~ZuulItem();
};

typedef vector<ZuulItem *> Items;

struct ZuulPuzzle {
  char* name;
  char* solution;
  char* description;
  ZuulItem* reward;
  ZuulPuzzle(char nameIn[51], char descriptionIn[101], char solutionIn[11], ZuulItem* itemIn);
  ~ZuulPuzzle();
};

#endif // ZUUL_TYPES_H