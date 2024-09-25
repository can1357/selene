#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_SCRUB_PARITY_EXTENT.Offset", offset, 0x0, 0x40, true, 0xe308503e36170cc5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_PARITY_EXTENT.Length", length, 0x40, 0x40, true, 0x70df3ac9a9556f35)
#else
#define _m00
#define _m01
#endif