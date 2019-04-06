#ifndef RV_PHYS_H
#define RV_PHYS_H

#define DLLExport __declspec(dllexport)

extern "C"
{
	DLLExport int testAdd(int a, int b);
}

#endif // !RV_PHYS_H