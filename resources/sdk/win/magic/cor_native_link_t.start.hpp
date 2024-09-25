#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "COR_NATIVE_LINK.m_linkType", m_link_type, 0x0, 0x8, true, 0x71058e776878d423)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "COR_NATIVE_LINK.m_flags", m_flags, 0x8, 0x8, true, 0x3bbd6f5c068a013d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COR_NATIVE_LINK.m_entryPoint", m_entry_point, 0x10, 0x20, true, 0x64e672b75011c062)
#else
#define _m00
#define _m01
#define _m02
#endif