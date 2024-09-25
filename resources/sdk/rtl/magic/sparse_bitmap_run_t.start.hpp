#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_RUN.StartingIndexLow", starting_index_low, 0x0, 0x20, true, 0xb4e951303db2a09f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_RUN.StartingIndexHigh", starting_index_high, 0x20, 0x20, true, 0xf1d9d032d862bfc2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_RUN.Length", length, 0x40, 0x20, true, 0x97720417bae28da4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_SPARSE_BITMAP_RUN.Metadata", metadata, 0x80, 0x40, true, 0xd2be3748f9db1f76)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif