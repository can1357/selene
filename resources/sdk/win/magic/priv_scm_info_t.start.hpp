#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PRIV_SCM_INFO.lThreadID", l_thread_id, 0x0, 0x20, true, 0x90be276e78eb6388)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PRIV_SCM_INFO.pwszWinstaDesktop", pwsz_winsta_desktop, 0x40, 0x40, true, 0xb5442a888cf50fb6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIV_SCM_INFO.ProcessSignature", process_signature, 0x80, 0x40, true, 0x4d88e35942737dc7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PRIV_SCM_INFO.pEnvBlock", p_env_block, 0xc0, 0x40, true, 0x8a28fb8cee2b9d8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIV_SCM_INFO.EnvBlockLength", env_block_length, 0x100, 0x20, true, 0x4ac9d5dadc7fca22)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif