#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_INFO_EX.Size", size, 0x0, 0x40, true, 0x1977f0fe6a6bd4b3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct image::info_t), "_IMAGE_INFO_EX.ImageInfo", image_info, 0x40, 0x40, true, 0x4b64c4a2c23e45b3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_IMAGE_INFO_EX.FileObject", file_object, 0x180, 0x40, true, 0x46a631169de7565e)
#else
#define _m00
#define _m01
#define _m02
#endif