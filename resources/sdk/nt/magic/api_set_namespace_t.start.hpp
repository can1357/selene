#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_API_SET_NAMESPACE.Version", version, 0x0, 0x20, true, 0xd85a264d7892a0bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_API_SET_NAMESPACE.Size", size, 0x20, 0x20, true, 0x9d6d85c67dea73d3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_API_SET_NAMESPACE.Flags", flags, 0x40, 0x20, true, 0xe7197d998cad4447)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_API_SET_NAMESPACE.Count", count, 0x60, 0x20, true, 0x1d94543d01f42ea6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_API_SET_NAMESPACE.EntryOffset", entry_offset, 0x80, 0x20, true, 0xb55c67c9d2ef3c7c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_API_SET_NAMESPACE.HashOffset", hash_offset, 0xa0, 0x20, true, 0x9d0da9700c91e4c4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_API_SET_NAMESPACE.HashFactor", hash_factor, 0xc0, 0x20, true, 0xe6dae32284046932)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif