#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_t), "_SE_SID.Sid", sid, 0x0, 0x60, true, 0xd80335026eeb7a4b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 68>), "_SE_SID.Buffer", buffer, 0x0, 0x20, true, 0x78d4c55c394b3b76)
#else
#define _m00
#define _m01
#endif