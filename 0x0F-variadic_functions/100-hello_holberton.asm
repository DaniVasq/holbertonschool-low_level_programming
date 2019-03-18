section .data
	    laura db "Hello, Holberton", 0x0a
	size equ $ - laura


	section .text
	    global main
main:
	        mov eax, 4
	        mov ebx, 1
	        mov ecx, laura
	        mov edx, size
	        int 0x80

	        mov eax, 0
	        int 0x80
