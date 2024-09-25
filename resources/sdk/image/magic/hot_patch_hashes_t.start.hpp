#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_IMAGE_HOT_PATCH_HASHES.SHA256", sha256, 0x0, 0x0, true, 0x88be84959e77be82)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_IMAGE_HOT_PATCH_HASHES.SHA1", sha1, 0x100, 0xa0, true, 0xecd3735a9623df90)
#else
#define _m00
#define _m01
#endif