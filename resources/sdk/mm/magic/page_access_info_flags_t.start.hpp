#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "_MM_PAGE_ACCESS_INFO_FLAGS.File.FilePointerIndex", file_pointer_index, 0x0, 0x9, true, 0xf0408ebcfba9beff, 9, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PAGE_ACCESS_INFO_FLAGS.File.HardFault", hard_fault, 0x9, 0x1, true, 0xca80bf5090049e67, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PAGE_ACCESS_INFO_FLAGS.File.Image", image, 0xa, 0x1, true, 0x43a4af867eb92f65, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_file_t), "_MM_PAGE_ACCESS_INFO_FLAGS.File", file, 0x0, 0x20, true, 0x1f93181e3ed0028a)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "_MM_PAGE_ACCESS_INFO_FLAGS.Private.FilePointerIndex", file_pointer_index, 0x0, 0x9, true, 0x315db8f442c4cea8, 9, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PAGE_ACCESS_INFO_FLAGS.Private.HardFault", hard_fault, 0x9, 0x1, true, 0x2bbad9c3bb3d11e8, 1, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4__private_t), "_MM_PAGE_ACCESS_INFO_FLAGS.Private", _private, 0x0, 0x20, true, 0x5f5f249be3a906c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif