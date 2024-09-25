#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CODEINTEGRITYPOLICY_INFORMATION.Options", options, 0x0, 0x20, true, 0xb42a3c0171e63475)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CODEINTEGRITYPOLICY_INFORMATION.HVCIOptions", hvci_options, 0x20, 0x20, true, 0x3092dcccf3e0904e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_CODEINTEGRITYPOLICY_INFORMATION.Version", version, 0x40, 0x40, true, 0xa67215bb94f96a75)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_CODEINTEGRITYPOLICY_INFORMATION.PolicyGuid", policy_guid, 0x80, 0x80, true, 0x5d429c0d6b8c3c25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif