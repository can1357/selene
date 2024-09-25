#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSAVE_AREA_HEADER.Mask", mask, 0x0, 0x40, true, 0x2ab9e50666a57565)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSAVE_AREA_HEADER.CompactionMask", compaction_mask, 0x40, 0x40, true, 0x6a1ff5b343da2a86)
#else
#define _m00
#define _m01
#endif