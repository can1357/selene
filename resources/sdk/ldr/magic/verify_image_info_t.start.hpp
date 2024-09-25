#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_VERIFY_IMAGE_INFO.Size", size, 0x0, 0x20, true, 0xd131654619f8f4cc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_VERIFY_IMAGE_INFO.Flags", flags, 0x20, 0x20, true, 0xb5997cbd7ea2dcce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldr::import_callback_info_t), "_LDR_VERIFY_IMAGE_INFO.CallbackInfo", callback_info, 0x40, 0x80, true, 0x6b538bd80d1e7026)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldr::section_info_t), "_LDR_VERIFY_IMAGE_INFO.SectionInfo", section_info, 0xc0, 0x0, true, 0xf4ad4c416c33f8f0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDR_VERIFY_IMAGE_INFO.ImageCharacteristics", image_characteristics, 0x1c0, 0x10, true, 0x3d0731d4ea6facce)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif