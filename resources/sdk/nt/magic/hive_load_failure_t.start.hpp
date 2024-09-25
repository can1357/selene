#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hhive_t*), "_HIVE_LOAD_FAILURE.Hive", hive, 0x0, 0x40, true, 0x41d30189332182ec)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.Index", index, 0x40, 0x10, true, 0x6ed1ff27fa2393ad, 0, uint32_t,uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.RecoverableIndex", recoverable_index, 0x50, 0x10, true, 0x53970fe744a767d3, 0, uint32_t,uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum cm::load_failure_type_t), "_HIVE_LOAD_FAILURE.Locations.Failure", failure, 0x0, 0x20, true, 0x3143d29be5dd67b0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HIVE_LOAD_FAILURE.Locations.Status", status, 0x20, 0x20, true, 0xee58f586d6bf8b3c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.Locations.Point", point, 0x40, 0x20, true, 0x817806b1d516afaa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u0_locations_t, 8>), "_HIVE_LOAD_FAILURE.Locations", locations, 0x60, 0x0, true, 0x38732354c463216e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum cm::load_failure_type_t), "_HIVE_LOAD_FAILURE.RecoverableLocations.Failure", failure, 0x0, 0x20, true, 0xda001e25661de0b5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HIVE_LOAD_FAILURE.RecoverableLocations.Status", status, 0x20, 0x20, true, 0xe27e7675dec5e337)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.RecoverableLocations.Point", point, 0x40, 0x20, true, 0x7b30fdb31e8746c0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u0_locations_t, 8>), "_HIVE_LOAD_FAILURE.RecoverableLocations", recoverable_locations, 0x360, 0x0, true, 0x76d31245220e4f79)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.RegistryIO.Action", action, 0x0, 0x20, true, 0xfcca795b6680d5d3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HIVE_LOAD_FAILURE.RegistryIO.Handle", handle, 0x40, 0x40, true, 0x6bbff3d02ecaaebc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HIVE_LOAD_FAILURE.RegistryIO.Status", status, 0x80, 0x20, true, 0x5c23478024f1ce17)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_registry_io_t), "_HIVE_LOAD_FAILURE.RegistryIO", registry_io, 0x680, 0xc0, true, 0x7ab1064a99afa683)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HIVE_LOAD_FAILURE.CheckRegistry2.CheckStack", check_stack, 0x0, 0x40, true, 0xe2b834ecfaf0474)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_check_registry2_t), "_HIVE_LOAD_FAILURE.CheckRegistry2", check_registry2, 0x740, 0x40, true, 0xacd076edd2b888fd)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.CheckKey.Cell", cell, 0x0, 0x20, true, 0xd4c17aca7e7159c6)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cell_data_t*), "_HIVE_LOAD_FAILURE.CheckKey.CellPoint", cell_point, 0x40, 0x40, true, 0xa5363364506c2f90)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HIVE_LOAD_FAILURE.CheckKey.RootPoint", root_point, 0x80, 0x40, true, 0x84c1f61f7d9893b0)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.CheckKey.Index", index, 0xc0, 0x20, true, 0x46df791361c6b2f6)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_check_key_t), "_HIVE_LOAD_FAILURE.CheckKey", check_key, 0x780, 0x0, true, 0xe567096d2c2ace5b)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cell_data_t*), "_HIVE_LOAD_FAILURE.CheckValueList.List", list, 0x0, 0x40, true, 0x666ddca60bc0380)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.CheckValueList.Index", index, 0x40, 0x20, true, 0x8345bc8ad8e5f7e1)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.CheckValueList.Cell", cell, 0x60, 0x20, true, 0x80ff0c3ee09d6a18)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cell_data_t*), "_HIVE_LOAD_FAILURE.CheckValueList.CellPoint", cell_point, 0x80, 0x40, true, 0xd934fb258b4a450b)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_check_value_list_t), "_HIVE_LOAD_FAILURE.CheckValueList", check_value_list, 0x880, 0xc0, true, 0x63b32215d2e85f73)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.CheckHive.Space", space, 0x0, 0x20, true, 0x8ddcbf6ab68d3405)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.CheckHive.MapPoint", map_point, 0x20, 0x20, true, 0xc46a45b4d17964b)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hbin_t*), "_HIVE_LOAD_FAILURE.CheckHive.BinPoint", bin_point, 0x40, 0x40, true, 0xc29b32afd5d0853b)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u15_check_hive_t), "_HIVE_LOAD_FAILURE.CheckHive", check_hive, 0x940, 0x80, true, 0xe0b2ea3b0e0b3c6f)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.CheckHive1.Space", space, 0x0, 0x20, true, 0xca556443fd2ef3c2)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.CheckHive1.MapPoint", map_point, 0x20, 0x20, true, 0xd7aa9ed096aae2c7)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hbin_t*), "_HIVE_LOAD_FAILURE.CheckHive1.BinPoint", bin_point, 0x40, 0x40, true, 0xb9575b30b26d7dd1)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u15_check_hive_t), "_HIVE_LOAD_FAILURE.CheckHive1", check_hive1, 0x9c0, 0x80, true, 0xdc4a1c1ec107e3f8)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hbin_t*), "_HIVE_LOAD_FAILURE.CheckBin.Bin", bin, 0x0, 0x40, true, 0x7de99a5aa4732e)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hcell_t*), "_HIVE_LOAD_FAILURE.CheckBin.CellPoint", cell_point, 0x40, 0x40, true, 0x5cd1757a42918cb2)
#define _m37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u18_check_bin_t), "_HIVE_LOAD_FAILURE.CheckBin", check_bin, 0xa40, 0x80, true, 0xb8c91de67a77a680)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LOAD_FAILURE.RecoverData.FileOffset", file_offset, 0x0, 0x20, true, 0x4b585af609c145c3)
#define _m39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u21_recover_data_t), "_HIVE_LOAD_FAILURE.RecoverData", recover_data, 0xac0, 0x20, true, 0x8a019a200063a416)
#define _m40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::parse_debug_info_t), "_HIVE_LOAD_FAILURE.LinkDebug", link_debug, 0xb00, 0x80, true, 0xc35b3fe66f72b680)
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
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#endif