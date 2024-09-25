#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.StructureVersion", structure_version, 0x0, 0x10, true, 0xb4da79f72d60ae85)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.StructureSize", structure_size, 0x10, 0x10, true, 0xe92a75922d56a47b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.Protocol", protocol, 0x20, 0x20, true, 0x26bd3124e626e467)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolMajorVersion", protocol_major_version, 0x40, 0x10, true, 0x12e987d80be839af)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolMinorVersion", protocol_minor_version, 0x50, 0x10, true, 0x4fdcace31c0ae88)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolRevision", protocol_revision, 0x60, 0x10, true, 0x263d5881753142b5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.Flags", flags, 0x80, 0x20, true, 0xe48cfbd913880643)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_generic_reserved_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.GenericReserved", generic_reserved, 0xa0, 0x0, true, 0x6fbe74e8c4b65c1b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2.Server.Capabilities", capabilities, 0x0, 0x20, true, 0xbca4bd3025b02b21)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_server_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2.Server", server, 0x0, 0x20, true, 0xb24b8b8dae328093)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2.Share.Capabilities", capabilities, 0x0, 0x20, true, 0xc99a39ecbbfa49ab)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2.Share.CachingFlags", caching_flags, 0x20, 0x20, true, 0x322b82897307be15)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2.Share.ShareType", share_type, 0x40, 0x8, true, 0xdedf77ed4bc9f48d)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u20_share_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2.Share", share, 0x20, 0x80, true, 0xf2ee1abe46ad0513)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_smb2_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2", smb2, 0x0, 0xa0, true, 0x2a1f57b9ee3b43d7)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_protocol_specific_t), "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific", protocol_specific, 0x1a0, 0x0, true, 0xb0992ddc398bc479)
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
#define _m15
#endif