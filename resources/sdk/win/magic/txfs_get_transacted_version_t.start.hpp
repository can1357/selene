#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_GET_TRANSACTED_VERSION.ThisBaseVersion", this_base_version, 0x0, 0x20, true, 0xa373706834cb5e66)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_GET_TRANSACTED_VERSION.LatestVersion", latest_version, 0x20, 0x20, true, 0xec8edcaeed2a13b0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_GET_TRANSACTED_VERSION.ThisMiniVersion", this_mini_version, 0x40, 0x10, true, 0xefdd6da749c0bcac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_GET_TRANSACTED_VERSION.FirstMiniVersion", first_mini_version, 0x50, 0x10, true, 0x7fc6507a0a6949fa)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_GET_TRANSACTED_VERSION.LatestMiniVersion", latest_mini_version, 0x60, 0x10, true, 0xbbecf0dc99c5e68d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif