#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_CONTROLLER_OBJECT.Type", type, 0x0, 0x10, true, 0x971850b69e002c97)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_CONTROLLER_OBJECT.Size", size, 0x10, 0x10, true, 0xfdbf70af6b103032)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CONTROLLER_OBJECT.ControllerExtension", controller_extension, 0x40, 0x40, true, 0xcea686d261e25e53)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kdevice_queue_t), "_CONTROLLER_OBJECT.DeviceWaitQueue", device_wait_queue, 0x80, 0x40, true, 0x269485b20d90709d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif