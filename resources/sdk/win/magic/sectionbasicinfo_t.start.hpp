#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SECTIONBASICINFO.BaseAddress", base_address, 0x0, 0x40, true, 0xf9b7c1c247142b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTIONBASICINFO.AllocationAttributes", allocation_attributes, 0x40, 0x20, true, 0x1a45250be0024252)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SECTIONBASICINFO.MaximumSize", maximum_size, 0x80, 0x40, true, 0xc71bd9b73bc22be1)
#else
#define _m00
#define _m01
#define _m02
#endif