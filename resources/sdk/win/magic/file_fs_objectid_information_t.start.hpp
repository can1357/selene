#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILE_FS_OBJECTID_INFORMATION.ObjectId", object_id, 0x0, 0x80, true, 0x5e949b18728018b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 48>), "_FILE_FS_OBJECTID_INFORMATION.ExtendedInfo", extended_info, 0x80, 0x80, true, 0xbec0e84bb0592db1)
#else
#define _m00
#define _m01
#endif