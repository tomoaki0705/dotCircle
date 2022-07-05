#include <iostream>
#include <vector>
#include <random>

const size_t kArrayLength = 100;

int main(int argc, char** argv)
{
	std::mt19937 mt(20010101); 
	std::vector<uint32_t> v;
	for ( size_t i = 0;i < kArrayLength;i++ )
	{
		v.push_back(i);
	}
	for ( size_t i = 0;i < 1000;i++)
	{
		size_t a = (size_t)mt() % v.size();
		size_t b = (size_t)mt() % v.size();
		std::swap(v[a], v[b]);
	}
	for ( size_t i = 0;i < kArrayLength;i++ )
	{
		std::cout << i << "->" << v[i] << std::endl;
	}
}
