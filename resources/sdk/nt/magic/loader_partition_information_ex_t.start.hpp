#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARTITION_INFORMATION_EX.PartitionStyle", partition_style, 0x0, 0x20, true, 0xaef5446e72f90fc0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARTITION_INFORMATION_EX.PartitionNumber", partition_number, 0x20, 0x20, true, 0x760782dfde445f30)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARTITION_INFORMATION_EX.Signature", signature, 0x40, 0x20, true, 0xb4a22afc504f488a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_LOADER_PARTITION_INFORMATION_EX.DeviceId", device_id, 0x40, 0x80, true, 0x56a5ef609bcc2758)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARTITION_INFORMATION_EX.Flags", flags, 0xc0, 0x20, true, 0x971ca8d99231ea30)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif