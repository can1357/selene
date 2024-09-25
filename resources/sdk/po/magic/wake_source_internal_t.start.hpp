#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::wake_source_header_t), "_PO_WAKE_SOURCE_INTERNAL.Header", header, 0x0, 0x40, true, 0x10ce8317c16682ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum po::internal_wake_source_type_t), "_PO_WAKE_SOURCE_INTERNAL.InternalWakeSourceType", internal_wake_source_type, 0x40, 0x20, true, 0x1e645b24153e56b3)
#else
#define _m00
#define _m01
#endif