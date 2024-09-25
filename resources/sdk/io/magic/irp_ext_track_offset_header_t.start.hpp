#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_IRP_EXT_TRACK_OFFSET_HEADER.Validation", validation, 0x0, 0x10, true, 0x1e66913a8c671af7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_IRP_EXT_TRACK_OFFSET_HEADER.Flags", flags, 0x10, 0x10, true, 0x530241ef66b890b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pio_irp_ext_process_tracked_offset_callback_t ), "_IO_IRP_EXT_TRACK_OFFSET_HEADER.TrackedOffsetCallback", tracked_offset_callback, 0x40, 0x40, true, 0xbe5650d891ba139c)
#else
#define _m00
#define _m01
#define _m02
#endif