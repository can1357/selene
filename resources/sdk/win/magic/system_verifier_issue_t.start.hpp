#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_ISSUE.IssueType", issue_type, 0x0, 0x40, true, 0x7bdaae8b7175043c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_VERIFIER_ISSUE.Address", address, 0x40, 0x40, true, 0x52a2889cc35a8aa2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_SYSTEM_VERIFIER_ISSUE.Parameters", parameters, 0x80, 0x80, true, 0x40479a9fc7326cd2)
#else
#define _m00
#define _m01
#define _m02
#endif