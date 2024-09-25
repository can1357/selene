#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PACKAGE_ID.processorArchitecture", processor_architecture, 0x20, 0x20, true, 0x4c9a3faed2390231)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::package_version_t), "PACKAGE_ID.version", version, 0x40, 0x40, true, 0x1f57c978a4dcdfff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "PACKAGE_ID.name", name, 0x80, 0x40, true, 0x470f3f04591fd086)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "PACKAGE_ID.publisher", publisher, 0xc0, 0x40, true, 0x3f2d5f4d6dbc8293)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "PACKAGE_ID.resourceId", resource_id, 0x100, 0x40, true, 0x173793d27b419b32)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "PACKAGE_ID.publisherId", publisher_id, 0x140, 0x40, true, 0x962cb395d94326e5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif