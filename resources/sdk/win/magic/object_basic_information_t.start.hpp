#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_BASIC_INFORMATION.Attributes", attributes, 0x0, 0x20, true, 0x6d50dcce260feac5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_BASIC_INFORMATION.GrantedAccess", granted_access, 0x20, 0x20, true, 0x7df0ef4fee3117db)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_BASIC_INFORMATION.HandleCount", handle_count, 0x40, 0x20, true, 0x30203e83bea76472)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_BASIC_INFORMATION.PointerCount", pointer_count, 0x60, 0x20, true, 0x688647c1e73526c4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_BASIC_INFORMATION.PagedPoolCharge", paged_pool_charge, 0x80, 0x20, true, 0x751a08190f4a8142)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_BASIC_INFORMATION.NonPagedPoolCharge", non_paged_pool_charge, 0xa0, 0x20, true, 0xb1a7d9831d44e046)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_BASIC_INFORMATION.NameInfoSize", name_info_size, 0x120, 0x20, true, 0x5fa2a190f78fe953)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_BASIC_INFORMATION.TypeInfoSize", type_info_size, 0x140, 0x20, true, 0x5921c75b67ab7d6a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_BASIC_INFORMATION.SecurityDescriptorSize", security_descriptor_size, 0x160, 0x20, true, 0xd414f23a8559f461)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_OBJECT_BASIC_INFORMATION.CreationTime", creation_time, 0x180, 0x40, true, 0x2da28f41f3d6ba8b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif