#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USBD_INTERFACE_INFORMATION.Length", length, 0x0, 0x10, true, 0x1781de0d499e0507)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBD_INTERFACE_INFORMATION.InterfaceNumber", interface_number, 0x10, 0x8, true, 0x75b90985a3b3f97f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBD_INTERFACE_INFORMATION.AlternateSetting", alternate_setting, 0x18, 0x8, true, 0x479cdac4a9a16a3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBD_INTERFACE_INFORMATION.Class", _class, 0x20, 0x8, true, 0xc84ccf338def33c9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBD_INTERFACE_INFORMATION.SubClass", sub_class, 0x28, 0x8, true, 0xf9a369fcd50a0bec)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBD_INTERFACE_INFORMATION.Protocol", protocol, 0x30, 0x8, true, 0x2240a7789a401bbe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_INTERFACE_INFORMATION.InterfaceHandle", interface_handle, 0x40, 0x40, true, 0xb8dea3f5c5f5ffad)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_INFORMATION.NumberOfPipes", number_of_pipes, 0x80, 0x20, true, 0x729e2ef226c9b4c5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct wdf::usbd_pipe_information_t, 1>), "_USBD_INTERFACE_INFORMATION.Pipes", pipes, 0xc0, 0xc0, true, 0x886f2d867a911155)
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
#endif