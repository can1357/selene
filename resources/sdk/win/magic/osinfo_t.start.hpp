#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OSINFO.dwOSPlatformId", dw_os_platform_id, 0x0, 0x20, true, 0xd424c677d8a6e07f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OSINFO.dwOSMajorVersion", dw_os_major_version, 0x20, 0x20, true, 0x8e070809aab87f88)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OSINFO.dwOSMinorVersion", dw_os_minor_version, 0x40, 0x20, true, 0xd5cdbf395bb47970)
#else
#define _m00
#define _m01
#define _m02
#endif