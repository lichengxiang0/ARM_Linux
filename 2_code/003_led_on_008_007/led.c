/*
*   文件名：led.c
*   时间：2019-03-23
*   作者：lcx
*/


int main()
{
    unsigned int *pGPFCON = (unsigned int *)0x56000050;
    unsigned int *pGPFDAT = (unsigned int *)0x56000054;

    /* 配置GPF4为输出引脚 */
    *pGPFCON = 0x100;

    /* 设置GPF4输出0 */
    *pGPFDAT = 0;

        return 0;
}
