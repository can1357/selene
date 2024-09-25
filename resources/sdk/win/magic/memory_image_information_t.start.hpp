#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_IMAGE_INFORMATION.ImageBase", image_base, 0x0, 0x40, true, 0x3d33d27c3bdedf51)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_IMAGE_INFORMATION.SizeOfImage", size_of_image, 0x40, 0x40, true, 0x20dc0721c99fa8c3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_IMAGE_INFORMATION.ImageFlags", image_flags, 0x80, 0x20, true, 0x833eb68c7d6c4876)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_IMAGE_INFORMATION.ImagePartialMap", image_partial_map, 0x80, 0x1, true, 0x21f332341d50c116, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_IMAGE_INFORMATION.ImageNotExecutable", image_not_executable, 0x81, 0x1, true, 0x27d245be22ab2ac1, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MEMORY_IMAGE_INFORMATION.ImageSigningLevel", image_signing_level, 0x82, 0x4, true, 0xd43f10449418d9fb, 4, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif