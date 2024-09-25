#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_MDL.Next", next, 0x0, 0x40, true, 0x671d39d4d03c18c2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_MDL.Size", size, 0x40, 0x10, true, 0xdb8895d4220421e4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_MDL.MdlFlags", mdl_flags, 0x50, 0x10, true, 0xa861e26704537a19)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_MDL.Process", process, 0x80, 0x40, true, 0xcf067a4d9758ad7b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MDL.MappedSystemVa", mapped_system_va, 0xc0, 0x40, true, 0x5833a16c40af4a5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MDL.StartVa", start_va, 0x100, 0x40, true, 0x8c13f50c50462669)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MDL.ByteCount", byte_count, 0x140, 0x20, true, 0x7a8862560348ae17)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MDL.ByteOffset", byte_offset, 0x160, 0x20, true, 0x902871af6b69b938)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MDL.AllocationProcessorNumber", allocation_processor_number, 0x60, 0x10, true, 0xc34120fc9301bfda)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif