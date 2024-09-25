#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.Signature", signature, 0x0, 0x20, true, 0x448931106824a44f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.Size", size, 0x20, 0x10, true, 0xce100aace7dd0e17)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.Revision", revision, 0x30, 0x8, true, 0xbfd089da00b4d6b3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.VendorIdStringOffset", vendor_id_string_offset, 0x40, 0x10, true, 0x8da2a4ac84827104)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.VendorStringLength", vendor_string_length, 0x50, 0x10, true, 0x18b7e5f285008938)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.DeviceIdStringOffset", device_id_string_offset, 0x60, 0x10, true, 0x49edcd31cb2249b6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.SubSystemIdStringOffset", sub_system_id_string_offset, 0x70, 0x10, true, 0x5e99fcc19e0a5815)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.SubSystemStringLength", sub_system_string_length, 0x80, 0x10, true, 0xa58740731ef2bf0c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.SubDeviceIdStringOffset", sub_device_id_string_offset, 0x90, 0x10, true, 0xa069abf6d18362)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.InstanceIdLength", instance_id_length, 0xa0, 0x10, true, 0x6045ae791add6d4b)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.InstanceIdOffset", instance_id_offset, 0xb0, 0x10, true, 0x37b2467886d43794)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.BaseClassCode", base_class_code, 0xc0, 0x10, true, 0x8a6bca2638497b97)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.HardwareRevision", hardware_revision, 0xd0, 0x10, true, 0xe4e061ec739922ce)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.ProgrammingInterface", programming_interface, 0xe0, 0x8, true, 0x4bec37c169633947)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.SubClassCode", sub_class_code, 0xf0, 0x10, true, 0x4d384700640ea70)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif