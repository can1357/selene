#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_COPIES_OUTPUT.Size", size, 0x0, 0x20, true, 0x7cbcb628bf9a0542)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_REPAIR_COPIES_OUTPUT.Status", status, 0x20, 0x20, true, 0xb8ac575c7e8de27f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_REPAIR_COPIES_OUTPUT.ResumeFileOffset", resume_file_offset, 0x40, 0x40, true, 0x7493ffe8aae7ae64)
#else
#define _m00
#define _m01
#define _m02
#endif