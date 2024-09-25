#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_DEVICE_HINT_ECP_CONTEXT.TargetDevice", target_device, 0x0, 0x40, true, 0xfd3933d7e665756e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_IO_DEVICE_HINT_ECP_CONTEXT.RemainingName", remaining_name, 0x40, 0x80, true, 0x3cf39220534ad7d7)
#else
#define _m00
#define _m01
#endif