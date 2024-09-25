#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_HIBERFILE_INFORMATION.NumberOfMcbPairs", number_of_mcb_pairs, 0x0, 0x20, true, 0xe349d246842540b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 1>), "_SYSTEM_HIBERFILE_INFORMATION.Mcb", mcb, 0x40, 0x40, true, 0xb84590a7aea19063)
#else
#define _m00
#define _m01
#endif