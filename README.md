# Libft
### Recreating Libft at 42 Silicon Valley
Currently a Work in Progress

I spent extra time doing some code golf-- I'm sure some things can be improved but I learned a lot about writing cleaner code and using less memory. I didn't focus on speed this time.

I also practiced writing some test cases even though that's not required-- I thought that was a pretty useful thing to do while we could still compare vs 42FileChecker. It taught me what to test for on future projects, like when to check for NULLS/navigating memory properly/some little nuances about C.

**Project Specs:** 
`LibftWorkFiles/libft.en copy.pdf` + 
Project must also follow the standards of the Norm pdf.

#### Test Cases
The `JemLibftTests` folder is designed to be dropped into a libft project and compare vs libc. It's primative compared to 42 File Checker but it has been good practice for writing robust test cases.

#### Function Notes
1.) To keep `ft_memmove` short it calls on mempcy. `ft_memcpy` needs to move from the front of the string to pass the memmove overlap tests. While memmove has to have a case to move from the back of the string for src < dst. 
