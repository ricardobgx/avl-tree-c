#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED

/**********************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Struct of information of the AVL Tree
 ******************************************** */
struct info
{
  int value;
} typedef Info;

/**********************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Create an information for an AVL Tree
 * @param value Value to be stored
 ******************************************** */
Info *createInfo(int value);

/***********************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Destroy an information
 * @param info Pointer address of the information
 * to be destroyed
 ********************************************* */
void destroyInfo(Info **info);

#endif