#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union kuser::einfo_t), "_ENTRY.einfo", einfo, 0x0, 0x40, true, 0xd9fcb64a51d06836)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union kuser::objectowner_t), "_ENTRY.ObjectOwner", object_owner, 0x40, 0x20, true, 0x34bebfdbbdd13d47)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union kuser::upper_handle_bits_t), "_ENTRY.UpperHandleBits", upper_handle_bits, 0x60, 0x10, true, 0x24f4e2e67dadd2bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ENTRY.Objt", objt, 0x70, 0x8, true, 0x9770226c96666171)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ENTRY.Flags", flags, 0x78, 0x8, true, 0x8f6e2b734b7fc3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ENTRY.pUser", p_user, 0x80, 0x40, true, 0x95297bbc16cbb257)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif