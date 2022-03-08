# ft_printf

Resources

ON variadic functions.

1. https://www.geeksforgeeks.org/variadic-functions-in-c/
2. https://medium.com/@SergioPietri/what-are-variadic-functions-in-c-6205e26c729f
3. https://www.gnu.org/software/libc/manual/html_node/Argument-Macros.html
4. https://medium.com/swlh/variadic-function-in-c-programming-d3632315a48e
5. https://azrael.digipen.edu/~mmead/www/Courses/CS120/VariadicFunctions.html

ON printf testers:

1. https://github.com/paulo-santana/ft_printf_tester
2. https://github.com/Tripouille/printfTester

Command for main

1. make re && gcc main.c libftprintf.a && ./a.out && make fclean

what is Makefile relink and how to avoid it?

Ans. When you run gcc -Wall -Wextra -Werror <*.c>, each time the compilation happens 
even if there is no change. But when you run Makefile with ar rcs $(NAME) $(OBJS) the 
compilation is only done once after this only changes will be updated in the libft file
when you run make.

Why the Makefile works without cc?

Ans.
The makefile works without cc because it does not make the object file directly. it runs
ar rcs $(NAME) $(OBJS) and make libftprintf.a file. This is a library file of object file 
don't need gcc to compile it.


