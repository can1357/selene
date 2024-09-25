#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RAID_FIXED_POOL.Buffer", buffer, 0x0, 0x40, true, 0xb201e1bb31158b54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_FIXED_POOL.NumberOfElements", number_of_elements, 0x40, 0x20, true, 0xe2cd2af4a9238ed4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_FIXED_POOL.SizeOfElement", size_of_element, 0x80, 0x40, true, 0x7320d179bd62d734)
#else
#define _m00
#define _m01
#define _m02
#endif