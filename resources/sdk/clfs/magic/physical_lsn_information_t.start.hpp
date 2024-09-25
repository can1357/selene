#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLFS_PHYSICAL_LSN_INFORMATION.StreamIdentifier", stream_identifier, 0x0, 0x8, true, 0xef395080e15b4d01)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_CLFS_PHYSICAL_LSN_INFORMATION.VirtualLsn", virtual_lsn, 0x40, 0x40, true, 0xa11e86db366621)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_CLFS_PHYSICAL_LSN_INFORMATION.PhysicalLsn", physical_lsn, 0x80, 0x40, true, 0xb4aaae6a73df9349)
#else
#define _m00
#define _m01
#define _m02
#endif