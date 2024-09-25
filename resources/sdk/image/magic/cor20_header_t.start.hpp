#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR20_HEADER.cb", cb, 0x0, 0x20, true, 0x766fd96ccf3fb6b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMAGE_COR20_HEADER.MajorRuntimeVersion", major_runtime_version, 0x20, 0x10, true, 0xf5d338e189ee24b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMAGE_COR20_HEADER.MinorRuntimeVersion", minor_runtime_version, 0x30, 0x10, true, 0x9988397d75bc8bac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::data_directory_t), "IMAGE_COR20_HEADER.MetaData", meta_data, 0x40, 0x40, true, 0x2239d56c1e8790fe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR20_HEADER.Flags", flags, 0x80, 0x20, true, 0x87d1f01f6ff4d13a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR20_HEADER.EntryPointToken", entry_point_token, 0xa0, 0x20, true, 0x8627fe8a9ad849ed)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR20_HEADER.EntryPointRVA", entry_point_rva, 0xa0, 0x20, true, 0x91186ab1493ea7a1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::data_directory_t), "IMAGE_COR20_HEADER.Resources", resources, 0xc0, 0x40, true, 0x7554522b949a4e7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::data_directory_t), "IMAGE_COR20_HEADER.StrongNameSignature", strong_name_signature, 0x100, 0x40, true, 0x9777ad7add5ed9bf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::data_directory_t), "IMAGE_COR20_HEADER.CodeManagerTable", code_manager_table, 0x140, 0x40, true, 0xf38b525a3a1bb7d6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::data_directory_t), "IMAGE_COR20_HEADER.VTableFixups", v_table_fixups, 0x180, 0x40, true, 0xf695e4f6eff12ffb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::data_directory_t), "IMAGE_COR20_HEADER.ExportAddressTableJumps", export_address_table_jumps, 0x1c0, 0x40, true, 0x99d972f77c14598)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::data_directory_t), "IMAGE_COR20_HEADER.ManagedNativeHeader", managed_native_header, 0x200, 0x40, true, 0xa05d480e3f135af6)
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
#endif