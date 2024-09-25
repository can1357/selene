#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_CONTROLLER_NUMBER.ControllerNumber", controller_number, 0x0, 0x20, true, 0xa1248a19859c9b4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_CONTROLLER_NUMBER.DiskNumber", disk_number, 0x20, 0x20, true, 0x584f6405eea730b3)
#else
#define _m00
#define _m01
#endif