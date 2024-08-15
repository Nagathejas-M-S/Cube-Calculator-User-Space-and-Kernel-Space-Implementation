# Cube-Calculator-User-Space-and-Kernel-Space-Implementation

## Overview
This project demonstrates two different implementations of a cube calculator: one in user-space using standard C programming and another in kernel-space using a Linux kernel module. The project serves as an educational example to showcase the difference between user-space applications and kernel-space modules in Linux.

## Features
User-Space Implementation: A simple C program that calculates the cube of a number.
Kernel-Space Implementation: A Linux kernel module that computes and prints the cube of a number using printk.

## Project Structure
cube.c: The user-space C program that calculates the cube of a number.
cube_kernal.c: The Linux kernel module that calculates the cube of a number and logs it using printk.
Makefile: Used to compile the kernel module.

## Getting Started
### Prerequisites
GCC: Required for compiling the user-space program.
Linux Kernel Headers: Needed to build the kernel module.
### Compiling and Running
#### User-Space Program
Compile the cube.c file using GCC:
bash
Copy code
gcc -o cube cube.c
Run the program:
bash
Copy code
./cube
#### Kernel-Space Module
Compile the kernel module using the provided Makefile:
bash
Copy code
make
Insert the kernel module:
bash
Copy code
sudo insmod cube_kernal.ko
Check the kernel log to see the output:
bash
Copy code
dmesg | tail -n 10
Remove the kernel module:
bash
Copy code
sudo rmmod cube_kernal

## Code Explanation
### User-Space Program (cube.c)
The program initializes an integer variable number with the value 5.
It then calculates the cube by multiplying the number three times.
Finally, it prints the result to the standard output using printf.
### Kernel-Space Module (cube_kernal.c)
The module defines two main functions: cube_init and cube_exit.
cube_init: This function is called when the module is loaded. It calculates the cube of the number and prints the result to the kernel log using printk.
cube_exit: This function is called when the module is removed. It simply logs a message indicating that the module is being removed.
The module is registered using module_init and module_exit.
