#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FNSAVE_FORMAT.ControlWord", control_word, 0x0, 0x20, true, 0x1cc9e37227dc60eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FNSAVE_FORMAT.StatusWord", status_word, 0x20, 0x20, true, 0x5f18bce531627964)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FNSAVE_FORMAT.TagWord", tag_word, 0x40, 0x20, true, 0x3aebb07c01db8e1d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FNSAVE_FORMAT.ErrorOffset", error_offset, 0x60, 0x20, true, 0x146f08143de952cf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FNSAVE_FORMAT.ErrorSelector", error_selector, 0x80, 0x20, true, 0xd609bee64db408a1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FNSAVE_FORMAT.DataOffset", data_offset, 0xa0, 0x20, true, 0xe8f6c97102702a8e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FNSAVE_FORMAT.DataSelector", data_selector, 0xc0, 0x20, true, 0x48102dee447da231)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 80>), "_FNSAVE_FORMAT.RegisterArea", register_area, 0xe0, 0x80, true, 0x5ea748b2ed3ac930)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif