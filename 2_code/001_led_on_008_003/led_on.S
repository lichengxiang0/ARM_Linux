/*
*   文件名：led_on.S 
*   创建时间：2019-03-23
*   作者：lcx
*/

/*
*点亮LED1
*LED1:GPF4  LED2:GPF5  LED3:GPF6
*/

.text
.global _start

_start:
    /*
    * 配置GPF4为输出引脚
    * 即把0x100写到地址 0x56000050
    */
    ldr r1, =0x56000050
    mov r0, #0x100
    str r0, [r1]

    /* 设置GPF4输出为低电平
    *   把0写到地址0x56000054
     */
    ldr r1, =0x56000054
    mov r0, #0x0
    str r0, [r1]

    /* 死循环 */
halt:
    b halt
