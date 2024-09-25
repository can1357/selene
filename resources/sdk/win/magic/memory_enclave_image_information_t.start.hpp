#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::memory_image_information_t), "_MEMORY_ENCLAVE_IMAGE_INFORMATION.ImageInfo", image_info, 0x0, 0xc0, true, 0x3d537cea2d61ecc2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_MEMORY_ENCLAVE_IMAGE_INFORMATION.UniqueID", unique_id, 0xc0, 0x0, true, 0x3e45fa44f7c62aae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_MEMORY_ENCLAVE_IMAGE_INFORMATION.AuthorID", author_id, 0x1c0, 0x0, true, 0x31c2b0a7eaadd9f6)
#else
#define _m00
#define _m01
#define _m02
#endif