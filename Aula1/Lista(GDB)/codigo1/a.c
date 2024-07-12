/* a) Depure o c ́odigo para descobrir quantas vezes o fibonacci(5)  ́e calculado (requisitado).
*/

#include<stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    fibonacci(15);
}

/* Comandos utilizados:

(gdb) break fibonacci if n == 5
Breakpoint 1 at 0x14000145e: file fibonacci.c, line 4.
(gdb) set $count = 0
(gdb) commands
Type commands for breakpoint(s) 1, one per line.
End with a line saying just "end".
>silent
>set $count =$count + 1 
>continue
>end
(gdb) run
Starting program: C:\Users\kauec\Documents\ProgramaþÒo\Estruturas de  Dados II\Algoritmos-e-Estruturas-de-Dados-II\Aula1\Lista(GDB)\codigo1\fibonacci.exe
[New Thread 9712.0xa48]
[Thread 9712.0xa48 exited with code 0]
[Inferior 1 (process 9712) exited normally]
(gdb) print $count
$1 = 89
*/