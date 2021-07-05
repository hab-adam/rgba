#include "RGBA.h"
RGBA::RGBA() : m_red {0}, m_green {0}, m_blue {0}, m_alpha {255}
	{}
RGBA::RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) 
                : m_red{red}, m_green {green}, m_blue {blue}, m_alpha {alpha}
        {}
void RGBA::print(){
        cout<<endl;
	cout<<"red:"<<(int)m_red<<endl;
        cout<<"green:"<<(int)m_green<<endl;
        cout<<"blue:"<<(int)m_blue<<endl;
        cout<<"aplha:"<<(int)m_alpha<<endl;
}
