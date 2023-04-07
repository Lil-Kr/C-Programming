#include <stdio.h>

// \n : newline
// \b : backspace
// \r : return
// \t : table

/**
 *  \n : newline
 *  \b : backspace
 *  \r : return
 *  \t : table
 * @return
 */

int main() {
  // 字符集 ASCII编码(美国标准)
  char a = 'a';      // 97
  char char_1 = '1'; // 49
  char char_0 = '0'; // 48

  char i = 0; // \0
  printf("char i: %d\n", i);
  printf("char a: %d \n", a);
  printf("char char_1: %d \n", char_1);

  char char_2 = '2';
  printf("char_2: %c\n", char_2);

  /**
   * Unicode CJK
   * L 宽字符
   */
  wchar_t zhong = L'中';
  wchar_t zhong_hex = L'\u4E2D';
  printf("中 : %d \n", zhong);
  printf("中 : %d \n", zhong_hex);

  // 字符串
  char *string = "中";

  return 0;
}