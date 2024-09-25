#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagMSIPACKAGEINFO.guidID", guid_id, 0x0, 0x80, true, 0xa299baf0e0198bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagMSIPACKAGEINFO.guidMsiPackageID", guid_msi_package_id, 0x80, 0x80, true, 0xb92fe74d1465eee9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagMSIPACKAGEINFO.guidDatabaseID", guid_database_id, 0x100, 0x80, true, 0xdcb5577c7772ec75)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSIPACKAGEINFO.dwPackageFlags", dw_package_flags, 0x180, 0x20, true, 0xe65f78d917af445a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif