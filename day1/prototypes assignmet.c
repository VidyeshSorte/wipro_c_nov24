#include <stdio.h>
// Input Functions
int scanf(const char *format, ...);
int getchar(void);
int getch(void);  // Non-standard
int getche(void); // Non-standard
char *fgets(char *str, int n, FILE *stream);

// Output Functions
int printf(const char *format, ...);
int putchar(int c);
int puts(const char *str);
int fprintf(FILE *stream, const char *format, ...);
int fputc(int c, FILE *stream);
int fputs(const char *str, FILE *stream);
