#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_D3DKMT_OPENGLINFO.UmdOpenGlIcdFileName", umd_open_gl_icd_file_name, 0x0, 0x40, true, 0xbe107785ddb6acd0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENGLINFO.Version", version, 0x1040, 0x20, true, 0x2201329f9d778835)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENGLINFO.Flags", flags, 0x1060, 0x20, true, 0x8a95c08c5d4d5da9)
#else
#define _m00
#define _m01
#define _m02
#endif