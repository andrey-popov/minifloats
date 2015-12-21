# minifloats

This project provides a custom implementation of 16-bit floating point numbers for storage. It does not implement any arithmetic operations with such numbers.

Encoded numbers are represented using the `uint16_t` type. Two approaches for encoding are used. In the simpler one, a linear transformation with a predefined range is performed. The other, more advanced method loosely implements the [IEEE 754 standard](https://en.wikipedia.org/wiki/IEEE_floating_point), including subnormal numbers. User can adjust several parameters of the transformation:

 * specify if the number is signed or not,
 * set the number of bits to be used to encode the significand,
 * set the bias of the exponent.

A particular choice of settings allows to reproduce the `binary16` type from the standard.

Detailed documentation is provided in the [minifloats.hpp](https://github.com/andrey-popov/minifloats/blob/master/minifloats.hpp) header file.
