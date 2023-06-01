#include <unistd.h>
#include <cstdio>

// #define _POSIX_C_SOURCE

void* malloc() {
	return sbrk(getpagesize());
}

int main() {
	void *page = malloc();

	int page_size = getpagesize();
	printf("page size: %d\n", page_size);

	for (int i = 0; i < page_size; ++i) {
		*((char*)page + i) = 0xff;
	}
}