#include <cstdlib>

const size_t SIZE = 1 << 12;

int main() {
	u_char *malloc_ptr = (u_char*)malloc(SIZE);
	u_char *new_char_ptr = new u_char();
	u_char *new_arr_ptr = new u_char[SIZE];

	free(malloc_ptr);
	delete new_char_ptr;
	delete[] new_arr_ptr;
	
	return 0;
}