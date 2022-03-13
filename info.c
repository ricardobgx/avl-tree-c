#include <stdio.h>
#include <stdlib.h>
#include "info.h"

Info *createInfo(int value)
{
  Info *info = (Info *)malloc(sizeof(Info));
  info->value = value;

  return info;
}

void destroyInfo(Info **info)
{
  free(*info);

  *info = NULL;
}