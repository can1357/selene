#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_LX_INFORMATION.EffectiveAccess", effective_access, 0x0, 0x20, true, 0x67b43dc90f7833d5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_LX_INFORMATION.LxFlags", lx_flags, 0x20, 0x20, true, 0x94f1e69daf463a6d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_LX_INFORMATION.LxUid", lx_uid, 0x40, 0x20, true, 0xcf9f2d7163a4bfc5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_LX_INFORMATION.LxGid", lx_gid, 0x60, 0x20, true, 0x3198c9c71e7b0018)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_LX_INFORMATION.LxMode", lx_mode, 0x80, 0x20, true, 0x28d76989ed07442f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_LX_INFORMATION.LxDeviceIdMajor", lx_device_id_major, 0xa0, 0x20, true, 0x2cd89d718fd89359)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_LX_INFORMATION.LxDeviceIdMinor", lx_device_id_minor, 0xc0, 0x20, true, 0x66cd99ce386609ad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif