#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::switch_context_platform_id_t), "tagSWITCH_CONTEXT_PLATFORM_DETAILS.Id", id, 0x0, 0x20, true, 0xdc3be35be0bdc37a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSWITCH_CONTEXT_PLATFORM_DETAILS.Guid", guid, 0x20, 0x80, true, 0x2e258fef834d6bb6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSWITCH_CONTEXT_PLATFORM_DETAILS.Major", major, 0xa0, 0x10, true, 0xd05431ed2d805252)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSWITCH_CONTEXT_PLATFORM_DETAILS.Minor", minor, 0xb0, 0x10, true, 0xe200310eab0b78d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagSWITCH_CONTEXT_PLATFORM_DETAILS.Name", name, 0xc0, 0x40, true, 0x2bec76bfc60fc67)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif