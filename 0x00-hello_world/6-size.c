#include <stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of int8_t: %zu byte(s)\n", sizeof(int8_t));
    printf("Size of uint8_t: %zu byte(s)\n", sizeof(uint8_t));
    printf("Size of int16_t: %zu byte(s)\n", sizeof(int16_t));
    printf("Size of uint16_t: %zu byte(s)\n", sizeof(uint16_t));
    printf("Size of int32_t: %zu byte(s)\n", sizeof(int32_t));
    printf("Size of uint32_t: %zu byte(s)\n", sizeof(uint32_t));
    printf("Size of int64_t: %zu byte(s)\n", sizeof(int64_t));
    printf("Size of uint64_t: %zu byte(s)\n", sizeof(uint64_t));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    return(0);
}
