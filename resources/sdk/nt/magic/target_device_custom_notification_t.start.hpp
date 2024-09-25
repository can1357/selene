#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TARGET_DEVICE_CUSTOM_NOTIFICATION.Version", version, 0x0, 0x10, true, 0x6685fc8910eb1bc6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TARGET_DEVICE_CUSTOM_NOTIFICATION.Size", size, 0x10, 0x10, true, 0x68698fe99250f800)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TARGET_DEVICE_CUSTOM_NOTIFICATION.Event", event, 0x20, 0x80, true, 0xb92d597a1d71ff61)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_TARGET_DEVICE_CUSTOM_NOTIFICATION.FileObject", file_object, 0xc0, 0x40, true, 0x10d416965b715db3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_TARGET_DEVICE_CUSTOM_NOTIFICATION.NameBufferOffset", name_buffer_offset, 0x100, 0x20, true, 0x6662bce339903628)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_TARGET_DEVICE_CUSTOM_NOTIFICATION.CustomDataBuffer", custom_data_buffer, 0x120, 0x8, true, 0x520527e1168a88cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif