#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RPC_TRANSFER_SYNTAX.Uuid", uuid, 0x0, 0x80, true, 0xaaef04f81c44d8bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RPC_TRANSFER_SYNTAX.VersMajor", vers_major, 0x80, 0x10, true, 0xa48957b1e6abeb91)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RPC_TRANSFER_SYNTAX.VersMinor", vers_minor, 0x90, 0x10, true, 0x595856f8696de91f)
#else
#define _m00
#define _m01
#define _m02
#endif