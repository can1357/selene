#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILE_OBJECTID_BUFFER.ObjectId", object_id, 0x0, 0x80, true, 0x734bd500334fc0b7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILE_OBJECTID_BUFFER.BirthVolumeId", birth_volume_id, 0x80, 0x80, true, 0x6eb6d758ae66cda6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILE_OBJECTID_BUFFER.BirthObjectId", birth_object_id, 0x100, 0x80, true, 0xd1b26b8328348eb2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILE_OBJECTID_BUFFER.DomainId", domain_id, 0x180, 0x80, true, 0x144a57b1c694b38)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 48>), "_FILE_OBJECTID_BUFFER.ExtendedInfo", extended_info, 0x80, 0x80, true, 0x6fbd149e34cf3a0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif