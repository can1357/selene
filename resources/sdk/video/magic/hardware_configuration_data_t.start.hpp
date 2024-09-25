#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.InterfaceType", interface_type, 0x0, 0x20, true, 0xfbdd9855a4d2dbaa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.BusNumber", bus_number, 0x20, 0x20, true, 0x51c4bb56c4e3bd82)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.Version", version, 0x40, 0x10, true, 0xc75d155dea9c17c7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.Revision", revision, 0x50, 0x10, true, 0x6a0bf71f1f83c73f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.Irql", irql, 0x60, 0x10, true, 0xdee6b1439b0479c4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.Vector", vector, 0x70, 0x10, true, 0x32826d7b75a9f58a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.ControlBase", control_base, 0x80, 0x20, true, 0x8fcc2ac0b2445b31)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.ControlSize", control_size, 0xa0, 0x20, true, 0x7aee5ec3177d2c49)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.CursorBase", cursor_base, 0xc0, 0x20, true, 0x1c16a39df6c83e05)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.CursorSize", cursor_size, 0xe0, 0x20, true, 0x75d30d071bcb0705)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.FrameBase", frame_base, 0x100, 0x20, true, 0xe16152cea3d59481)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_CONFIGURATION_DATA.FrameSize", frame_size, 0x120, 0x20, true, 0x1bb92eee7e0ef5c4)
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
#endif