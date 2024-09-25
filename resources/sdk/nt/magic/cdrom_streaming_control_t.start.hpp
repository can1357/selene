#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::streaming_control_request_type_t), "_CDROM_STREAMING_CONTROL.RequestType", request_type, 0x0, 0x20, true, 0xca21441af95b73c2)
#else
#define _m00
#endif