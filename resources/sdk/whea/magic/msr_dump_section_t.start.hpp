#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_MSR_DUMP_SECTION.MsrDumpBuffer", msr_dump_buffer, 0x0, 0x8, true, 0xaae0c414db3f98e3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_MSR_DUMP_SECTION.MsrDumpLength", msr_dump_length, 0x8, 0x20, true, 0x7ba85a295f206de5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_WHEA_MSR_DUMP_SECTION.MsrDumpData", msr_dump_data, 0x28, 0x8, true, 0x69f4d18e76b2e2e2)
#else
#define _m00
#define _m01
#define _m02
#endif