#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_STORAGE_TIER.Id", id, 0x0, 0x80, true, 0x7f8773d97a261e52)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_STORAGE_TIER.Name", name, 0x80, 0x0, true, 0xac241f2c31b62d56)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_STORAGE_TIER.Description", description, 0x1080, 0x0, true, 0x6856779d17a15077)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_TIER.Flags", flags, 0x2080, 0x40, true, 0x6740547d919440a3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_TIER.ProvisionedCapacity", provisioned_capacity, 0x20c0, 0x40, true, 0xf90458491d81848b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_tier_media_type_t), "_STORAGE_TIER.MediaType", media_type, 0x2100, 0x20, true, 0x92991ed5dbf993ae)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_tier_class_t), "_STORAGE_TIER.Class", _class, 0x2120, 0x20, true, 0xa3e5081167226f24)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif