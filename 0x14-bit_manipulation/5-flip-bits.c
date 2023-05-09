unsigned int flip_bits(unsigned long int n, unsigned long int m) {
    unsigned long int diff = n ^ m;  // bitwise XOR to get the differences
    unsigned int count = 0;

    while (diff)
    {
	   count += diff & 1;
	diff >>= 1;
    }
    return count;
}
