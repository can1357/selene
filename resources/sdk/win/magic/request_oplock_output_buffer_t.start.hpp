#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REQUEST_OPLOCK_OUTPUT_BUFFER.StructureVersion", structure_version, 0x0, 0x10, true, 0xd4c0472c6dff57fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REQUEST_OPLOCK_OUTPUT_BUFFER.StructureLength", structure_length, 0x10, 0x10, true, 0x6ac2f9d81a505327)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REQUEST_OPLOCK_OUTPUT_BUFFER.OriginalOplockLevel", original_oplock_level, 0x20, 0x20, true, 0x15216e70e395a62b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REQUEST_OPLOCK_OUTPUT_BUFFER.NewOplockLevel", new_oplock_level, 0x40, 0x20, true, 0xd05795bd29587e37)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REQUEST_OPLOCK_OUTPUT_BUFFER.Flags", flags, 0x60, 0x20, true, 0x6d245823a382e13e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REQUEST_OPLOCK_OUTPUT_BUFFER.AccessMode", access_mode, 0x80, 0x20, true, 0x67b8aab25414ae70)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REQUEST_OPLOCK_OUTPUT_BUFFER.ShareMode", share_mode, 0xa0, 0x10, true, 0x473773ceb2d42462)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif