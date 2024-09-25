#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_WRITE_SPEED_DESCRIPTOR.MixedReadWrite", mixed_read_write, 0x0, 0x1, true, 0xbf8deab93eb0021f, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_WRITE_SPEED_DESCRIPTOR.Exact", exact, 0x1, 0x1, true, 0x3f07223c1108ccfa, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_CDROM_WRITE_SPEED_DESCRIPTOR.WriteRotationControl", write_rotation_control, 0x3, 0x2, true, 0x8547387e9cb381f3, 2, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDROM_WRITE_SPEED_DESCRIPTOR.EndLba", end_lba, 0x20, 0x20, true, 0x6447aad1063614aa)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDROM_WRITE_SPEED_DESCRIPTOR.ReadSpeed", read_speed, 0x40, 0x20, true, 0x28439f858368706f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDROM_WRITE_SPEED_DESCRIPTOR.WriteSpeed", write_speed, 0x60, 0x20, true, 0xaab8a62beeb177a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif