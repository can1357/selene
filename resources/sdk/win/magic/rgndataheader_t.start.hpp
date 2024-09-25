#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RGNDATAHEADER.dwSize", dw_size, 0x0, 0x20, true, 0x47bb090a0fb1bec6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RGNDATAHEADER.iType", i_type, 0x20, 0x20, true, 0xaad577a6604d1a6f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RGNDATAHEADER.nCount", n_count, 0x40, 0x20, true, 0x1df9656eb0e95a6a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RGNDATAHEADER.nRgnSize", n_rgn_size, 0x60, 0x20, true, 0xbafae242ac486a4a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_RGNDATAHEADER.rcBound", rc_bound, 0x80, 0x80, true, 0x7d3ace95592f7d49)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif