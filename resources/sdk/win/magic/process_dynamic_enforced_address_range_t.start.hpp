#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE.BaseAddress", base_address, 0x0, 0x40, true, 0x7f278274ae34edd6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE.Size", size, 0x40, 0x40, true, 0x2d8ceb9f26df48b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE.Flags", flags, 0x80, 0x20, true, 0xa32ceadf4eaba090)
#else
#define _m00
#define _m01
#define _m02
#endif