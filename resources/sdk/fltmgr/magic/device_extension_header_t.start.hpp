#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_DEVICE_EXTENSION_HEADER.Type", type, 0x0, 0x20, true, 0xc5c7647dc0418732)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DEVICE_EXTENSION_HEADER.AttachedToDeviceObject", attached_to_device_object, 0x40, 0x40, true, 0xb6fcc99cb6a34cb2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_frame_t*), "_DEVICE_EXTENSION_HEADER.Frame", frame, 0x80, 0x40, true, 0x5cf64daecc91f81e)
#else
#define _m00
#define _m01
#define _m02
#endif