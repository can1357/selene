#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_ENDPOINT_STATUS.AsUshort16", as_ushort16, 0x0, 0x10, true, 0x631e1c2fd1ba32ff)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_ENDPOINT_STATUS.Halt", halt, 0x0, 0x1, true, 0xa59f09d7eb942028, 1, uint16_t)
#else
#define _m00
#define _m01
#endif