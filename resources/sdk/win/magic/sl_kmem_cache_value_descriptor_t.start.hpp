#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SL_KMEM_CACHE_VALUE_DESCRIPTOR.Size", size, 0x0, 0x10, true, 0x56d893b3661d56fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SL_KMEM_CACHE_VALUE_DESCRIPTOR.NameLength", name_length, 0x10, 0x10, true, 0xc243dba55c6e2615)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SL_KMEM_CACHE_VALUE_DESCRIPTOR.Type", type, 0x20, 0x10, true, 0xaeac7e794707f7bb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SL_KMEM_CACHE_VALUE_DESCRIPTOR.DataLength", data_length, 0x30, 0x10, true, 0xdc44510d39abb530)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_KMEM_CACHE_VALUE_DESCRIPTOR.Attributes", attributes, 0x40, 0x20, true, 0x4ff166f2501fcfa7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_SL_KMEM_CACHE_VALUE_DESCRIPTOR.Name", name, 0x80, 0x10, true, 0xcaacf257fa181de4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif