#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AENTRY.dwCollision", dw_collision, 0x0, 0x20, true, 0x57b06e5a2442617c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "AENTRY.pAllocation", p_allocation, 0x40, 0x40, true, 0xaf00e5cfafd966c7)
#else
#define _m00
#define _m01
#endif