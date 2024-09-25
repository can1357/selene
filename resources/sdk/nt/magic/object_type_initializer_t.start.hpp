#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_TYPE_INITIALIZER.Length", length, 0x0, 0x10, true, 0x6da7708d2b6e0bda)
#define _m001 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_OBJECT_TYPE_INITIALIZER.ObjectTypeFlags", object_type_flags, 0x10, 0x10, true, 0x1382f3f00f5b33a6, 0, uint8_t,uint16_t)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_TYPE_INITIALIZER.CaseInsensitive", case_insensitive, 0x10, 0x1, true, 0x61c0f69b6107e590, 1, uint8_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_TYPE_INITIALIZER.UnnamedObjectsOnly", unnamed_objects_only, 0x11, 0x1, true, 0x2fdcc40fbe92b80f, 1, uint8_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_TYPE_INITIALIZER.UseDefaultObject", use_default_object, 0x12, 0x1, true, 0x1e2f9b382eb9d74d, 1, uint8_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_TYPE_INITIALIZER.SecurityRequired", security_required, 0x13, 0x1, true, 0x8bc071f6f363d375, 1, uint8_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_TYPE_INITIALIZER.MaintainHandleCount", maintain_handle_count, 0x14, 0x1, true, 0xf6ddd28cc304f644, 1, uint8_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_TYPE_INITIALIZER.MaintainTypeList", maintain_type_list, 0x15, 0x1, true, 0x6a4a3747c6c19169, 1, uint8_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_TYPE_INITIALIZER.SupportsObjectCallbacks", supports_object_callbacks, 0x16, 0x1, true, 0x7ce174f7b2eac3b0, 1, uint8_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_TYPE_INITIALIZER.CacheAligned", cache_aligned, 0x17, 0x1, true, 0x21fcbfb2b58da717, 1, uint8_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECT_TYPE_INITIALIZER.UseExtendedParameters", use_extended_parameters, 0x18, 0x1, true, 0x7eb652bdf702326, 1, uint8_t)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INITIALIZER.ObjectTypeCode", object_type_code, 0x20, 0x20, true, 0x27887c4e6c199ea0)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INITIALIZER.InvalidAttributes", invalid_attributes, 0x40, 0x20, true, 0x75bb758b8bdc811b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::generic_mapping_t), "_OBJECT_TYPE_INITIALIZER.GenericMapping", generic_mapping, 0x60, 0x80, true, 0x722c2df4e1d56dc4)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INITIALIZER.ValidAccessMask", valid_access_mask, 0xe0, 0x20, true, 0xe1a5bc185a43b0f0)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INITIALIZER.RetainAccess", retain_access, 0x100, 0x20, true, 0xc05442d1e5776b68)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "_OBJECT_TYPE_INITIALIZER.PoolType", pool_type, 0x120, 0x20, true, 0xd536e4c3d221c4c5)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INITIALIZER.DefaultPagedPoolCharge", default_paged_pool_charge, 0x140, 0x20, true, 0xf5220a9d17851525)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INITIALIZER.DefaultNonPagedPoolCharge", default_non_paged_pool_charge, 0x160, 0x20, true, 0xc20f3d1f3f5af86e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct nt::object_dump_control_t*)>*), "_OBJECT_TYPE_INITIALIZER.DumpProcedure", dump_procedure, 0x180, 0x40, true, 0x6e37f22ac58bdd69)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(enum ob::open_reason_t, char, struct nt::eprocess_t*, void*, uint32_t*, uint32_t)>*), "_OBJECT_TYPE_INITIALIZER.OpenProcedure", open_procedure, 0x1c0, 0x40, true, 0x4e1c52a710d57be4)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::eprocess_t*, void*, uint64_t, uint64_t)>*), "_OBJECT_TYPE_INITIALIZER.CloseProcedure", close_procedure, 0x200, 0x40, true, 0xfa8ffebc0418461a)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_OBJECT_TYPE_INITIALIZER.DeleteProcedure", delete_procedure, 0x240, 0x40, true, 0x9307a1895fe4d6b4)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct nt::access_state_t*, char, uint32_t, nt::unicode_view*, nt::unicode_view*, void*, struct sec::quality_of_service_t*, void**)>*), "_OBJECT_TYPE_INITIALIZER.ParseProcedure", parse_procedure, 0x280, 0x40, true, 0xd6f44f8598784a71)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct nt::access_state_t*, char, uint32_t, nt::unicode_view*, nt::unicode_view*, void*, struct sec::quality_of_service_t*, struct ob::extended_parse_parameters_t*, void**)>*), "_OBJECT_TYPE_INITIALIZER.ParseProcedureEx", parse_procedure_ex, 0x280, 0x40, true, 0x26aed73f53db46cc)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, enum sec::operation_code_t, uint32_t*, void*, uint32_t*, void**, enum nt::pool_type_t, struct nt::generic_mapping_t*, char)>*), "_OBJECT_TYPE_INITIALIZER.SecurityProcedure", security_procedure, 0x2c0, 0x40, true, 0xa775c19d98740ec6)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, struct nt::object_name_information_t*, uint32_t, uint32_t*, char)>*), "_OBJECT_TYPE_INITIALIZER.QueryNameProcedure", query_name_procedure, 0x300, 0x40, true, 0x4eb2057211ad5feb)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::eprocess_t*, void*, void*, char)>*), "_OBJECT_TYPE_INITIALIZER.OkayToCloseProcedure", okay_to_close_procedure, 0x340, 0x40, true, 0xc40882c3c9f4a207)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE_INITIALIZER.WaitObjectFlagMask", wait_object_flag_mask, 0x380, 0x20, true, 0x203ae9824d3f77c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_TYPE_INITIALIZER.WaitObjectFlagOffset", wait_object_flag_offset, 0x3a0, 0x10, true, 0xda84dfa50fa037d2)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_TYPE_INITIALIZER.WaitObjectPointerOffset", wait_object_pointer_offset, 0x3b0, 0x10, true, 0x189cb32f1100123a)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_TYPE_INITIALIZER.ObjectTypeFlags2", object_type_flags2, 0x0, 0x0, false, 0xdea59718e3d1d2ec)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#endif