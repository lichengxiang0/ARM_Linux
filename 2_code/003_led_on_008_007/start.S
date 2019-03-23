/*
*   文件名：start.S 
*   创建时间：2019-03-23
*   作者：lcx
*/

/*
*使用C语言点亮LED
*LED1:GPF4  LED2:GPF5  LED3:GPF6
*/

.text
.global _start

_start:
  
  /* 设置内存：sp 栈 */
  ldr sp, =4096  /*nand启动*/
// ldr sp, =0x40000000+4096  /* nor启动 */

    /* 调用main */
    bl main

    /* 死循环 */
halt:
    b halt
