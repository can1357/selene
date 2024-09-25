#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_WHEA_PERSISTENCE_INFO.Signature", signature, 0x0, 0x10, true, 0x27b0d6069aaaeb6a, 16, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_WHEA_PERSISTENCE_INFO.Length", length, 0x10, 0x18, true, 0xcc7bbdf8da7598f3, 24, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_WHEA_PERSISTENCE_INFO.Identifier", identifier, 0x28, 0x10, true, 0xe208682a1124404d, 16, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_PERSISTENCE_INFO.Attributes", attributes, 0x38, 0x2, true, 0xf8f657ddc3852d51, 2, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PERSISTENCE_INFO.DoNotLog", do_not_log, 0x3a, 0x1, true, 0x9c70543676abc027, 1, uint64_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PERSISTENCE_INFO.AsULONGLONG", as_ulonglong, 0x0, 0x40, true, 0x56b52cd2152ba7d1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif