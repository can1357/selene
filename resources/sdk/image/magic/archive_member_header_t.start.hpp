#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IMAGE_ARCHIVE_MEMBER_HEADER.Name", name, 0x0, 0x80, true, 0xc851833cad9cf786)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "_IMAGE_ARCHIVE_MEMBER_HEADER.Date", date, 0x80, 0x60, true, 0x89bb99c2af2dd2e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_IMAGE_ARCHIVE_MEMBER_HEADER.UserID", user_id, 0xe0, 0x30, true, 0xcd05bf8e9490d72a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_IMAGE_ARCHIVE_MEMBER_HEADER.GroupID", group_id, 0x110, 0x30, true, 0xbcec6998e3a986d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_IMAGE_ARCHIVE_MEMBER_HEADER.Mode", mode, 0x140, 0x40, true, 0xd177964b3d877bbf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 10>), "_IMAGE_ARCHIVE_MEMBER_HEADER.Size", size, 0x180, 0x50, true, 0xa07d5b58853d2c9d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_IMAGE_ARCHIVE_MEMBER_HEADER.EndHeader", end_header, 0x1d0, 0x10, true, 0x5a4d9548b82fcb9f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif