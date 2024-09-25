#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACE_HEADER.AceType", ace_type, 0x0, 0x8, true, 0x24a9bf3371c035ca)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACE_HEADER.AceFlags", ace_flags, 0x8, 0x8, true, 0xf26ccdfeaeb6053)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACE_HEADER.AceSize", ace_size, 0x10, 0x10, true, 0xf9eaed2f6c1c643f)
#else
#define _m00
#define _m01
#define _m02
#endif