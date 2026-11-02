#include "test_base16.h"

//定义base16编码表
static const std::string base16_enc_tab = "0123456789ABCDEF";

std::string Base16Encode(const std::vector<unsigned char>& data) 
{
	std::string base16_enc;
	for (unsigned char c : data)
	{
		base16_enc += base16_enc_tab[(c >> 4) & 0x0F];
		base16_enc += base16_enc_tab[c & 0x0F];
	}

	return base16_enc;
}

std::vector<unsigned char> Base16Decode(const std::string& str) 
{
	std::string base16_dec;
	for (int i = 0; i < str.size(); i += 2)
	{
		unsigned char c = (unsigned char)((base16_enc_tab.find(str[i]) << 4) | base16_enc_tab.find(str[i + 1]));
		base16_dec.push_back(c);
	}

	return std::vector<unsigned char>(base16_dec.begin(), base16_dec.end());
}