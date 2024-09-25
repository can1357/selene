#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECTTYPE_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xffa1af9ed5215087)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECTTYPE_INFORMATION.NumberOfObjects", number_of_objects, 0x20, 0x20, true, 0x6d663bfb0207b1e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECTTYPE_INFORMATION.NumberOfHandles", number_of_handles, 0x40, 0x20, true, 0x1d562f8ccdb58932)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECTTYPE_INFORMATION.TypeIndex", type_index, 0x60, 0x20, true, 0x1c92319745a704be)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECTTYPE_INFORMATION.InvalidAttributes", invalid_attributes, 0x80, 0x20, true, 0x6848e325577ec7a2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::generic_mapping_t), "_SYSTEM_OBJECTTYPE_INFORMATION.GenericMapping", generic_mapping, 0xa0, 0x80, true, 0x90b59c3b3a064de3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECTTYPE_INFORMATION.ValidAccessMask", valid_access_mask, 0x120, 0x20, true, 0x94a88b3d295828a6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_OBJECTTYPE_INFORMATION.PoolType", pool_type, 0x140, 0x20, true, 0x3976c6b74709b949)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_OBJECTTYPE_INFORMATION.SecurityRequired", security_required, 0x160, 0x8, true, 0xf0984c2179941177)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_OBJECTTYPE_INFORMATION.WaitableObject", waitable_object, 0x168, 0x8, true, 0x43abddf3e93ded1c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_OBJECTTYPE_INFORMATION.TypeName", type_name, 0x180, 0x80, true, 0xfc6c6b41dde3c1fb)
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
#define _m10
#endif