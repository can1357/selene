#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dump_header32_t), "_MEMORY_DUMP32.Header", header, 0x0, 0x0, true, 0xe06f84a72dc43b99)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::full_dump32_t), "_MEMORY_DUMP32.Full", full, 0x8000, 0x8, true, 0xf7f7e9f7355d2902)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::summary_dump32_t), "_MEMORY_DUMP32.Summary", summary, 0x8000, 0x0, true, 0xf8da00776c32ba9a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::triage_dump32_t), "_MEMORY_DUMP32.Triage", triage, 0x8000, 0x40, true, 0x52c2391407296d80)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif