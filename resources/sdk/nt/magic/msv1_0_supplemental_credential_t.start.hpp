#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL.Version", version, 0x0, 0x20, true, 0x35be1db93a27cf3b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL.Flags", flags, 0x20, 0x20, true, 0xb3ff4846ff72d23f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL.LmPassword", lm_password, 0x40, 0x80, true, 0x85f3abe87c8775e0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL.NtPassword", nt_password, 0xc0, 0x80, true, 0x6212557657b56c08)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif