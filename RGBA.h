#include <iostream>
#include <cstdint>
using namespace std;

class RGBA{
private:
	const uint8_t m_red;
	const uint8_t m_green;
	const uint8_t m_blue;
	const uint8_t m_alpha;
public:
	RGBA(uint8_t red = 0, uint8_t green = 0, uint8_t blue = 0, uint8_t alpha = 255);
	void print();
};
