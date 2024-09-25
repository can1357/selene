#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::wake_source_header_t), "_PO_WAKE_SOURCE_FIXED.Header", header, 0x0, 0x40, true, 0x86db10fc6a180766)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum po::fixed_wake_source_type_t), "_PO_WAKE_SOURCE_FIXED.FixedWakeSourceType", fixed_wake_source_type, 0x40, 0x20, true, 0xc7c26e05c9d95033)
#else
#define _m00
#define _m01
#endif