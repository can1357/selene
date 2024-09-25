#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS.ExceptionLevel", exception_level, 0x0, 0x1, true, 0x35ddbd0a850347c8, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS.NonSecure", non_secure, 0x1, 0x1, true, 0xc87bc7b77edd8236, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS.AArch64", a_arch64, 0x2, 0x1, true, 0xede604dc693db20b, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS.AsULONG", as_ulong, 0x0, 0x20, true, 0x926eee4bfb60e604)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif