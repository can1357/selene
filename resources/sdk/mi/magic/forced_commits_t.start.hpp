#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_FORCED_COMMITS.Regular", regular, 0x0, 0x20, true, 0xa96b6a072bf6456a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_FORCED_COMMITS.Wrap", wrap, 0x20, 0x20, true, 0x399aa3f66d9783cb)
#else
#define _m00
#define _m01
#endif