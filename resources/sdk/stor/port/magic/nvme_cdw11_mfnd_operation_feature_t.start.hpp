#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW11_MFND_OPERATION_FEATURE.SEL", sel, 0x0, 0x0, false, 0x7511984cdd647869, 4, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_MFND_OPERATION_FEATURE.EnableFlag", enable_flag, 0x0, 0x0, false, 0xc09e33cc3e3177c8, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_MFND_OPERATION_FEATURE.NumberOfChildFunctions", number_of_child_functions, 0x0, 0x0, false, 0x5975f532c0234571, 8, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_MFND_OPERATION_FEATURE.AsUlong", as_ulong, 0x0, 0x0, false, 0xaf50c49b36f024e5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif