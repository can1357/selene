#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ErrorInformationExtentV1.helpContext", help_context, 0x0, 0x20, true, 0xb0056cbfe031faab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ErrorInformationExtentV1.iid", iid, 0x20, 0x80, true, 0x5713be295252eb40)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "ErrorInformationExtentV1.source", source, 0xc0, 0x40, true, 0x9c5527b463071f71)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "ErrorInformationExtentV1.description", description, 0x100, 0x40, true, 0x974b6332b8ec1a72)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "ErrorInformationExtentV1.helpFile", help_file, 0x140, 0x40, true, 0x763732a9cd24d103)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "ErrorInformationExtentV1.reservedForVersioning", reserved_for_versioning, 0x180, 0x0, true, 0x9441f9099f745327)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif