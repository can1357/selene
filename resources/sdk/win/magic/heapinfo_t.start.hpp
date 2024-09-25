#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_heapinfo._pentry", pentry, 0x0, 0x40, true, 0x131a2eb8797cc796)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_heapinfo._size", size, 0x40, 0x40, true, 0x83664c46ea2d654b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_heapinfo._useflag", useflag, 0x80, 0x20, true, 0x7ff687f5daecf720)
#else
#define _m00
#define _m01
#define _m02
#endif