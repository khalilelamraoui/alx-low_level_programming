# PRINTF function 
<hr>
## function that produces output according to a format.
<ul>
  <li>
    Prototype: <code>int _printf(const char *format, ...);</code>
  </li>
  <li>
    Returns: the number of characters printed (excluding the null byte used to end output to strings)
  </li>
  <li>
    Write output to stdout, the standard output stream
  </li>
  <li>
    Format is a character string. The format string is composed of zero or more directives. See <a href="https://man7.org/linux/man-pages/man3/printf.3.html" target="_blank">man 3 printf</a> for more detail.
  </li>
  <li>
    You need to handle the following conversion specifiers:
    <ul>
      <li>c</li>
      <li>s</li>
      <li>%</li>
    </ul>
  </li>
  <li>
    You don’t have to reproduce the buffer handling of the C library printf function
  </li>
  <li>
    You don’t have to handle the flag characters
  </li>
  <li>
    You don’t have to handle field width
  </li>
  <li>
    You don’t have to handle precision
  </li>
  <li>
    You don’t have to handle the length modifiers
  </li>
</ul>
