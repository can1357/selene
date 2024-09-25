#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMR.iType", i_type, 0x0, 0x20, true, 0x948383027bcf964)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMR.nSize", n_size, 0x20, 0x20, true, 0x25dc3cb76adbf524)
#else
#define _m00
#define _m01
#endif