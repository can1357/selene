#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RPC_IF_ID.Uuid", uuid, 0x0, 0x80, true, 0xd96bb8d902f70e0f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RPC_IF_ID.VersMajor", vers_major, 0x80, 0x10, true, 0x28ca247e1aa1ab54)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RPC_IF_ID.VersMinor", vers_minor, 0x90, 0x10, true, 0x2ec25c58e9b6d55d)
#else
#define _m00
#define _m01
#define _m02
#endif