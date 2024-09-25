#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REQUEST_OPLOCK_INPUT_BUFFER.StructureVersion", structure_version, 0x0, 0x10, true, 0xce05fd1c4d86830b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REQUEST_OPLOCK_INPUT_BUFFER.StructureLength", structure_length, 0x10, 0x10, true, 0xb31a1055bac244f5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REQUEST_OPLOCK_INPUT_BUFFER.RequestedOplockLevel", requested_oplock_level, 0x20, 0x20, true, 0xb58e57d150b6218e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REQUEST_OPLOCK_INPUT_BUFFER.Flags", flags, 0x40, 0x20, true, 0x8f1713aaa9c42092)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif