#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dump_header64_t), "_MEMORY_DUMP64.Header", header, 0x0, 0x0, true, 0x8dccff9c2dc34502)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::full_dump64_t), "_MEMORY_DUMP64.Full", full, 0x10000, 0x8, true, 0xe3f570e23c252525)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::summary_dump64_t), "_MEMORY_DUMP64.Summary", summary, 0x10000, 0x40, true, 0xe8aab93612f06f69)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::triage_dump64_t), "_MEMORY_DUMP64.Triage", triage, 0x10000, 0x0, true, 0xd4936e14c2362a63)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif