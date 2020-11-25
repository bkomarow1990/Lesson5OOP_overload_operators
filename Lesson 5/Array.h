#pragma once
class Array
{
	Array(size_t size = 0, int filler = 0);
	Array()=default;
private:
	size_t size = 0;
	int* array = nullptr;
};

