#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYDISPLAYIDOUT.Length", length, 0x0, 0x20, true, 0x583360d47a40e1e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_DXGK_QUERYDISPLAYIDOUT.pDescriptor", p_descriptor, 0x40, 0x40, true, 0x4750b580ed0c30a4)
#else
#define _m00
#define _m01
#endif