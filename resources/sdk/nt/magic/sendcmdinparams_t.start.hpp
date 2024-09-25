#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SENDCMDINPARAMS.cBufferSize", c_buffer_size, 0x0, 0x20, true, 0x345df71a7c1aee6a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ideregs_t), "_SENDCMDINPARAMS.irDriveRegs", ir_drive_regs, 0x20, 0x40, true, 0xf8844bb4096b54d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SENDCMDINPARAMS.bDriveNumber", b_drive_number, 0x60, 0x8, true, 0x94547c771668586f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_SENDCMDINPARAMS.bReserved", b_reserved, 0x68, 0x18, true, 0xed49aa7468e3c2e1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_SENDCMDINPARAMS.dwReserved", dw_reserved, 0x80, 0x80, true, 0xcdd68ad460d6fb31)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SENDCMDINPARAMS.bBuffer", b_buffer, 0x100, 0x8, true, 0x8dd487436ca63368)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif