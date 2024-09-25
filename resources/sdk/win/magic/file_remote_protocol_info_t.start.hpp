#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFO.StructureVersion", structure_version, 0x0, 0x10, true, 0x218f915bb2c661d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFO.StructureSize", structure_size, 0x10, 0x10, true, 0x7969dd865927753a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFO.Protocol", protocol, 0x20, 0x20, true, 0x7d60beb24209c25f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolMajorVersion", protocol_major_version, 0x40, 0x10, true, 0x27603759c951b313)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolMinorVersion", protocol_minor_version, 0x50, 0x10, true, 0xf7da95928ee072ec)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolRevision", protocol_revision, 0x60, 0x10, true, 0xf17150d20fdceb9b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFO.Flags", flags, 0x80, 0x20, true, 0xa5e2700e24499332)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_generic_reserved_t), "_FILE_REMOTE_PROTOCOL_INFO.GenericReserved", generic_reserved, 0xa0, 0x0, true, 0x4dab93909c015127)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.Smb2.Server.Capabilities", capabilities, 0x0, 0x20, true, 0x179f69b18a07952a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_server_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.Smb2.Server", server, 0x0, 0x20, true, 0x9586eb097c7cd948)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.Smb2.Share.Capabilities", capabilities, 0x0, 0x20, true, 0x93b5edc84e2e9a84)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.Smb2.Share.CachingFlags", caching_flags, 0x20, 0x20, true, 0xc9b4d2cdbe406bc6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_share_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.Smb2.Share", share, 0x20, 0x40, true, 0x573b1579ccb5fc50)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_smb2_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.Smb2", smb2, 0x0, 0x60, true, 0xdc67cfe5a97299dd)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_protocol_specific_t), "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific", protocol_specific, 0x1a0, 0x0, true, 0x49ae280cd8ee46d3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif