#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBSTRBLOB.cbSize", cb_size, 0x0, 0x20, true, 0x565ff862b9330ab9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagBSTRBLOB.pData", p_data, 0x40, 0x40, true, 0x805196d2eb7377f7)
#else
#define _m00
#define _m01
#endif