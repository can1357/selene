#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_OBJECTID_INFORMATION.FileReference", file_reference, 0x0, 0x40, true, 0x60ece13843ff2b46)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILE_OBJECTID_INFORMATION.ObjectId", object_id, 0x40, 0x80, true, 0x65115fe373c84006)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILE_OBJECTID_INFORMATION.BirthVolumeId", birth_volume_id, 0xc0, 0x80, true, 0xba47cd9c9a65ddc8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILE_OBJECTID_INFORMATION.BirthObjectId", birth_object_id, 0x140, 0x80, true, 0xe52666c3c31482ce)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILE_OBJECTID_INFORMATION.DomainId", domain_id, 0x1c0, 0x80, true, 0x325d70e2e3d5e436)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 48>), "_FILE_OBJECTID_INFORMATION.ExtendedInfo", extended_info, 0xc0, 0x80, true, 0x98ad3df5520d63e5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif