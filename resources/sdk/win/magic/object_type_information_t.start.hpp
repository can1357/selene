#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_OBJECT_TYPE_INFORMATION.TypeName", type_name, 0x0, 0x80, true, 0x6d28b6eced1f7ebc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.TotalNumberOfObjects", total_number_of_objects, 0x80, 0x20, true, 0x2b695b89e5567f26)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.TotalNumberOfHandles", total_number_of_handles, 0xa0, 0x20, true, 0xd5ecdfc0b6aa71f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.TotalPagedPoolUsage", total_paged_pool_usage, 0xc0, 0x20, true, 0x55579fc87760a882)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.TotalNonPagedPoolUsage", total_non_paged_pool_usage, 0xe0, 0x20, true, 0xbac6b96f2b2fca2c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.TotalNamePoolUsage", total_name_pool_usage, 0x100, 0x20, true, 0x7cf6f6d277a4fdf5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.TotalHandleTableUsage", total_handle_table_usage, 0x120, 0x20, true, 0x2c7009974a435c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.HighWaterNumberOfObjects", high_water_number_of_objects, 0x140, 0x20, true, 0x10f318fd48e6729d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.HighWaterNumberOfHandles", high_water_number_of_handles, 0x160, 0x20, true, 0x6a30fc2a0a0fbeb3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.HighWaterPagedPoolUsage", high_water_paged_pool_usage, 0x180, 0x20, true, 0x9690581cd8413880)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.HighWaterNonPagedPoolUsage", high_water_non_paged_pool_usage, 0x1a0, 0x20, true, 0xf32d244b8743e73c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.HighWaterNamePoolUsage", high_water_name_pool_usage, 0x1c0, 0x20, true, 0x8bfab77717b78831)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.HighWaterHandleTableUsage", high_water_handle_table_usage, 0x1e0, 0x20, true, 0xaa9c0454287c87d5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.InvalidAttributes", invalid_attributes, 0x200, 0x20, true, 0xaf6dc52db5158486)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::generic_mapping_t), "_OBJECT_TYPE_INFORMATION.GenericMapping", generic_mapping, 0x220, 0x80, true, 0xadb02485b54f8fba)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.ValidAccessMask", valid_access_mask, 0x2a0, 0x20, true, 0x989c85f56e46d017)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_TYPE_INFORMATION.SecurityRequired", security_required, 0x2c0, 0x8, true, 0x687764ebdb4d0029)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_TYPE_INFORMATION.MaintainHandleCount", maintain_handle_count, 0x2c8, 0x8, true, 0xaea95c252f1c6784)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_TYPE_INFORMATION.TypeIndex", type_index, 0x2d0, 0x8, true, 0x8ef2ae365e2b9bcb)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_OBJECT_TYPE_INFORMATION.ReservedByte", reserved_byte, 0x2d8, 0x8, true, 0x619fd776eb6a2b03)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.PoolType", pool_type, 0x2e0, 0x20, true, 0x596abcd57d057a58)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.DefaultPagedPoolCharge", default_paged_pool_charge, 0x300, 0x20, true, 0x62b8d10bcff94a17)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INFORMATION.DefaultNonPagedPoolCharge", default_non_paged_pool_charge, 0x320, 0x20, true, 0x65dcac51c28fb564)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif