#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint28_t), "SCOPE_ID.Zone", zone, 0x0, 0x1c, true, 0xc6558db70dd1b4f4, 28, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "SCOPE_ID.Level", level, 0x1c, 0x4, true, 0x96d8afe8122835f1, 4, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "SCOPE_ID.Value", value, 0x0, 0x20, true, 0x311aa5292874e342)
#else
#define _m00
#define _m01
#define _m02
#endif