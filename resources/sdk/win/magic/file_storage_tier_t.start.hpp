#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_FILE_STORAGE_TIER.Id", id, 0x0, 0x80, true, 0x9ae098cddb790bed)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_FILE_STORAGE_TIER.Name", name, 0x80, 0x0, true, 0xc9c0bf95b3cba693)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_FILE_STORAGE_TIER.Description", description, 0x1080, 0x0, true, 0x2d3fa56c492c7a09)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_STORAGE_TIER.Flags", flags, 0x2080, 0x40, true, 0x76d95457aeccd40e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_STORAGE_TIER.ProvisionedCapacity", provisioned_capacity, 0x20c0, 0x40, true, 0xd1e470492999cfb5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::file_storage_tier_media_type_t), "_FILE_STORAGE_TIER.MediaType", media_type, 0x2100, 0x20, true, 0x55945449a421f564)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::file_storage_tier_class_t), "_FILE_STORAGE_TIER.Class", _class, 0x2120, 0x20, true, 0x8189a9a0000bf772)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif