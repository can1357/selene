#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PMC_SAMPLE_INFORMATION.InstructionPointer", instruction_pointer, 0x0, 0x40, true, 0x1f0e6e49b7aed66c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PMC_SAMPLE_INFORMATION.ThreadId", thread_id, 0x40, 0x20, true, 0xc6f5d98e204503de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_PMC_SAMPLE_INFORMATION.ProfileSource", profile_source, 0x60, 0x10, true, 0xe31380b3b0150213)
#else
#define _m00
#define _m01
#define _m02
#endif