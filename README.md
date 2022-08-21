<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl4qxms4g001609l49j835g66/project/2574182" alt="joslopez's 42 ft_printf Score" /></a>
# ft_printf
<p>Function printf (derivated of the name "print formatted") prints a screen message using a "format chain" that includes instructions to mix multiple chains in the final chain to show on the screen. In this project, we have to replicate how the function works to implement on our libft.</p>
<p>
</p>
<b>MANDATORY PART</b>
<p>You have to recode the printf() function from libc.<p/>
<p>The prototype of ft_printf() is:</p>
<p>  int ft_printf(const char *, ...);</p>
<p>
</p>
<p>Here are the requirements:</p>
<p>• Don’t implement the buffer management of the original printf().</p>
<p>• Your function has to handle the following conversions: cspdiuxX%</p>
<p>• Your function will be compared against the original printf().</p>
<p>• You must use the command ar to create your library. Using the libtool command is forbidden.</p>
<p>• Your libftprintf.a has to be created at the root of your repository.</p>
<p>
</p>
<p>You have to implement the following conversions:</p>
<p>• %c Prints a single character.</p>
<p>• %s Prints a string (as defined by the common C convention).</p>
<p>• %p The void * pointer argument has to be printed in hexadecimal format.</p>
<p>• %d Prints a decimal (base 10) number.</p>
<p>• %i Prints an integer in base 10.</p>
<p>• %u Prints an unsigned decimal (base 10) number.</p>
<p>• %x Prints a number in hexadecimal (base 16) lowercase format.</p>
<p>• %X Prints a number in hexadecimal (base 16) uppercase format.</p>
<p>• %% Prints a percent sign.</p>
