#include <iostream>
#include <cstdint>
using namespace std;

class RGBA{
private:
	uint8_t m_red;
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_alpha;
public:
	RGBA();
	RGBA(uint8_t red = 0, uint8_t green = 0, uint8_t blue = 0, uint8_t alpha = 255);
	void print();
};
