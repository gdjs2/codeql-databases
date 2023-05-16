#include <cstdlib>

const size_t SIZE = 1 << 12;

void f(size_t len, char *buf) {
	buf[0] = 0x3f;
	for (int i = 1; i < len; ++i)
		buf[i] = buf[i-1] << 1;
}

int main() {
	char *buf = new char[SIZE];
	f(SIZE, buf);
	delete[] buf;

	buf[0] = 0xff;
	return 0;
}