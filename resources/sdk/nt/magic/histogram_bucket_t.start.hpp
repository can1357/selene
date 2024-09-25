#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HISTOGRAM_BUCKET.Reads", reads, 0x0, 0x20, true, 0xd56f4aadf80b49db)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HISTOGRAM_BUCKET.Writes", writes, 0x20, 0x20, true, 0x8191d1b8524d099a)
#else
#define _m00
#define _m01
#endif