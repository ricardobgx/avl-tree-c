#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED

struct info
{
  int value;
} typedef Info;

Info *createInfo(int value);

void destroyInfo(Info **info);

#endif