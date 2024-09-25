#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ahc::info_class_t), "_AHC_SERVICE_LOOKUP.InfoClass", info_class, 0x0, 0x20, true, 0x3307ae0e6a3661bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_SERVICE_LOOKUP.HintFlags", hint_flags, 0x20, 0x20, true, 0x6c1eeeff0dca943e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_LOOKUP.PackageAlias", package_alias, 0x40, 0x80, true, 0xbea395e27aefe625)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_LOOKUP.FileHandle", file_handle, 0xc0, 0x40, true, 0x4b97c88ddd1242b0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_LOOKUP.ProcessHandle", process_handle, 0x100, 0x40, true, 0x4b69f7de3cb4a5b8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AHC_SERVICE_LOOKUP.ExeType", exe_type, 0x140, 0x10, true, 0xa3b5871e928f62ae)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_LOOKUP.ExeSignature", exe_signature, 0x180, 0x80, true, 0x27ee5454af40b550)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_AHC_SERVICE_LOOKUP.Environment", environment, 0x200, 0x40, true, 0x48b27add110b212e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_SERVICE_LOOKUP.EnvironmentSize", environment_size, 0x240, 0x20, true, 0x8bcff28509100a9f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_LOOKUP.ProcessCommandLine", process_command_line, 0x0, 0x0, false, 0xca9a2974ce7e07a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif