#include "main.h"

int printTypeChecker(char car, va_list arg)
{
	int arrIndex;

	TypeStruct argArr[] = {
		{"c", ret_char},
		{"s", ret_str},
		{"d", ret_int},
		{"i", ret_int},
		{NULL, NULL}
	};

	for (arrIndex = 0; argArr[arrIndex].t != NULL; arrIndex++)
	{
		if (argArr[arrIndex].t[0] == car)
		{
			return (argArr[arrIndex].out(arg));
		}
	}

	return (0);
}


