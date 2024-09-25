#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ATTRIBUTION_INFORMATION.Version", version, 0x0, 0x20, true, 0x42735c78e7fdfeca)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_IO_ATTRIBUTION_INFORMATION.Flags.MajorCode", major_code, 0x0, 0x8, true, 0x5a5ef3f0d62940f, 8, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IO_ATTRIBUTION_INFORMATION.Flags.IoStart", io_start, 0x8, 0x1, true, 0x5701dca14cb25978, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IO_ATTRIBUTION_INFORMATION.Flags.QueueOnly", queue_only, 0x9, 0x1, true, 0xe8bb6869c70ff8a6, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IO_ATTRIBUTION_INFORMATION.Flags.IoFailed", io_failed, 0xa, 0x1, true, 0x950b58eb1182898, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IO_ATTRIBUTION_INFORMATION.Flags.VirtualDevice", virtual_device, 0xb, 0x1, true, 0x2abb46438cb7e333, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ATTRIBUTION_INFORMATION.Flags.AllFlags", all_flags, 0x0, 0x20, true, 0xb6e47052560e7eac)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_IO_ATTRIBUTION_INFORMATION.Flags", flags, 0x20, 0x20, true, 0x569757d429243d79)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ATTRIBUTION_INFORMATION.Length", length, 0x40, 0x20, true, 0x5ad6b2b266c6b4bf)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_ATTRIBUTION_INFORMATION.ServiceStartTime", service_start_time, 0x80, 0x40, true, 0x4b65e7d4bb127431)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_ATTRIBUTION_INFORMATION.CurrentTime", current_time, 0xc0, 0x40, true, 0x21713c5757984700)
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
#endif