#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCustomPrivScmInfo.Apartment", apartment, 0x0, 0x20, true, 0x2bfee9d8fa5211f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagCustomPrivScmInfo.pwszWinstaDesktop", pwsz_winsta_desktop, 0x40, 0x40, true, 0x507e41527f66438b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagCustomPrivScmInfo.ProcessSignature", process_signature, 0x80, 0x40, true, 0x351b1c2faaa3507a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagCustomPrivScmInfo.pEnvBlock", p_env_block, 0xc0, 0x40, true, 0x6ad7bb8649f69f7d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCustomPrivScmInfo.EnvBlockLength", env_block_length, 0x100, 0x20, true, 0x88efe63c8a4e7935)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif