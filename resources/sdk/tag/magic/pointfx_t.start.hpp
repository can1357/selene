#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::fixed_t), "tagPOINTFX.x", x, 0x0, 0x20, true, 0x1a9156ce7b376b60)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::fixed_t), "tagPOINTFX.y", y, 0x20, 0x20, true, 0xdab4d435eea313d8)
#else
#define _m00
#define _m01
#endif