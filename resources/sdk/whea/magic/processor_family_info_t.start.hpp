#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_PROCESSOR_FAMILY_INFO.Stepping", stepping, 0x0, 0x4, true, 0x4366f0559ffbdff5, 4, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_PROCESSOR_FAMILY_INFO.Model", model, 0x4, 0x4, true, 0x325fd5f927aedab9, 4, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_PROCESSOR_FAMILY_INFO.Family", family, 0x8, 0x4, true, 0x65a5b7fbda90bbf2, 4, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_PROCESSOR_FAMILY_INFO.ProcessorType", processor_type, 0xc, 0x2, true, 0x26d01de4db0312fe, 2, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_PROCESSOR_FAMILY_INFO.ExtendedModel", extended_model, 0x10, 0x4, true, 0xeb81efc7e1e16a5c, 4, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_PROCESSOR_FAMILY_INFO.ExtendedFamily", extended_family, 0x14, 0x8, true, 0x39cfed883d51ca68, 8, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PROCESSOR_FAMILY_INFO.AsULONGLONG", as_ulonglong, 0x0, 0x40, true, 0xd112525aa5e9d9c6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PROCESSOR_FAMILY_INFO.NativeModelId", native_model_id, 0x20, 0x20, true, 0x61d64db52caceec6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif