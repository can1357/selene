#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::section_image_information_t), "_MI_SECTION_IMAGE_INFORMATION.ExportedImageInformation", exported_image_information, 0x0, 0x0, true, 0x9ae945679f7f700)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::extra_image_information_t), "_MI_SECTION_IMAGE_INFORMATION.InternalImageInformation", internal_image_information, 0x200, 0x80, true, 0x94f2f4f74905fb78)
#else
#define _m00
#define _m01
#endif