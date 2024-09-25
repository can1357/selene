#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_Reparse.Length", length, 0x0, 0x10, true, 0xf1d82973801642ac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_Reparse.Flags", flags, 0x10, 0x10, true, 0x261e959f8e4b07b0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_Reparse.ReparseDataSize", reparse_data_size, 0x20, 0x20, true, 0x40f8597064b5f25c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_Reparse.ReparseDataOffset", reparse_data_offset, 0x40, 0x20, true, 0xdc1561daabb414d5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif