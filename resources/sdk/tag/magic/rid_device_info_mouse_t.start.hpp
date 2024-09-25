#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_MOUSE.dwId", dw_id, 0x0, 0x20, true, 0xc9daa7678064c686)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_MOUSE.dwNumberOfButtons", dw_number_of_buttons, 0x20, 0x20, true, 0x7c8f85e452a9f643)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_MOUSE.dwSampleRate", dw_sample_rate, 0x40, 0x20, true, 0x5c83151107826de6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRID_DEVICE_INFO_MOUSE.fHasHorizontalWheel", f_has_horizontal_wheel, 0x60, 0x20, true, 0xce39e0981965fafb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif