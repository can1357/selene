#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagOIDData.pmoid", pmoid, 0x0, 0x40, true, 0x69b8613c7e7738a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOIDData.aptID", apt_id, 0x40, 0x20, true, 0x3dbb826483184423)
#else
#define _m00
#define _m01
#endif