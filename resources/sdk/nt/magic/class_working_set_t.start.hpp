#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_WORKING_SET.Size", size, 0x0, 0x20, true, 0xda7a22b0cbb3ba3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_WORKING_SET.XferPacketsWorkingSetMaximum", xfer_packets_working_set_maximum, 0x20, 0x20, true, 0x58d4325d1191a7e1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_WORKING_SET.XferPacketsWorkingSetMinimum", xfer_packets_working_set_minimum, 0x40, 0x20, true, 0x6464c034ea1d29e3)
#else
#define _m00
#define _m01
#define _m02
#endif