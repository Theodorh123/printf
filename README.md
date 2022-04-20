<h1>The Awesome _printf() function</h1>
<h4>_printf - formatted output conversion</h4>

<h2>Description</h2>
<h4>The <b>_printf()</b> function produce output according to a format as described below. Also, write output to stdout, the standard output stream.

The <b>_printf()</b> function write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3) are converted for output.</h4>

<h2>Format of the format string</h2>
<h4>The format string is a character string, beginning and ending inits initial shift state, if any. The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character % and ends with conversion specifier.</h4>

<h2>Conversion specifiers</h2>
<h4>A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:

<ul>
<li>d, i: The int argument should be signed decimal notation, and the resulting number is written.</li>
<li>c: The int argument is converted to a char, and the resulting character is written.</li>
<li>s: The const char * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to (but not including) a terminating null byte ('\0').</li>
<li>%: A '%' is written. No argument is converted. The complete conversion specification is '%%'.</li>
</ul>
</h4>
