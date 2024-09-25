#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VPB.Type", type, 0x0, 0x10, true, 0x2c530d42b5855ae9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VPB.Size", size, 0x10, 0x10, true, 0x2fa8cee08030f7ce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VPB.Flags", flags, 0x20, 0x10, true, 0xe0431c40fa30577d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VPB.VolumeLabelLength", volume_label_length, 0x30, 0x10, true, 0xed5feb580d4b7d46)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_VPB.DeviceObject", device_object, 0x40, 0x40, true, 0x95913b81e952cbca)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_VPB.RealDevice", real_device, 0x80, 0x40, true, 0x30b94318dd1351c6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VPB.SerialNumber", serial_number, 0xc0, 0x20, true, 0xecf6abc5fb28a920)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VPB.ReferenceCount", reference_count, 0xe0, 0x20, true, 0x91757d1c50a130d3)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_VPB.VolumeLabel", volume_label, 0x100, 0x0, true, 0x225ea0a5aa65172)
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