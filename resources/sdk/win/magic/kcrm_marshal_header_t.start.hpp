#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCRM_MARSHAL_HEADER.VersionMajor", version_major, 0x0, 0x20, true, 0x3b34a3c6c8a14216)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCRM_MARSHAL_HEADER.VersionMinor", version_minor, 0x20, 0x20, true, 0x4c306f01b13bfdb1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCRM_MARSHAL_HEADER.NumProtocols", num_protocols, 0x40, 0x20, true, 0x90d66348a70350fb)
#else
#define _m00
#define _m01
#define _m02
#endif