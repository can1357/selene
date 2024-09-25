#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSCMSA.wNumEntries", w_num_entries, 0x0, 0x10, true, 0x2636cf67a6d51ceb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSCMSA.wSecurityOffset", w_security_offset, 0x10, 0x10, true, 0x55ee94bb2839a8e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 62>), "tagSCMSA.awszStringArray", awsz_string_array, 0x20, 0xe0, true, 0xa028e259b1e07a76)
#else
#define _m00
#define _m01
#define _m02
#endif