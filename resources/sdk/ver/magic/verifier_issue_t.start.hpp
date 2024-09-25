#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VI_VERIFIER_ISSUE.IssueType", issue_type, 0x0, 0x40, true, 0x4730a90066cc6d91)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VI_VERIFIER_ISSUE.Address", address, 0x40, 0x40, true, 0x7363bfe88eb4eddc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_VI_VERIFIER_ISSUE.Parameters", parameters, 0x80, 0x80, true, 0x19e1480e1363721f)
#else
#define _m00
#define _m01
#define _m02
#endif