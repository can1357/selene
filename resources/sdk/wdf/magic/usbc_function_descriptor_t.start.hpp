#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBC_FUNCTION_DESCRIPTOR.FunctionNumber", function_number, 0x0, 0x8, true, 0xb4eb9e9b4c907a93)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBC_FUNCTION_DESCRIPTOR.NumberOfInterfaces", number_of_interfaces, 0x8, 0x8, true, 0x2055b25e80b96ea8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t**), "_USBC_FUNCTION_DESCRIPTOR.InterfaceDescriptorList", interface_descriptor_list, 0x40, 0x40, true, 0xa46908fba7ed2067)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_USBC_FUNCTION_DESCRIPTOR.HardwareId", hardware_id, 0x80, 0x80, true, 0x7d5d71be05ca3243)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_USBC_FUNCTION_DESCRIPTOR.CompatibleId", compatible_id, 0x100, 0x80, true, 0xc70733732d06bfa1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_USBC_FUNCTION_DESCRIPTOR.FunctionDescription", function_description, 0x180, 0x80, true, 0xbbfb117fb34ee83b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBC_FUNCTION_DESCRIPTOR.FunctionFlags", function_flags, 0x200, 0x20, true, 0x4a6f59bcc1c0b9ab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif