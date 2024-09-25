#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PARTITION_INFORMATION_GPT.PartitionType", partition_type, 0x0, 0x80, true, 0x5cc86e42cb54ade)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PARTITION_INFORMATION_GPT.PartitionId", partition_id, 0x80, 0x80, true, 0x42354b64de410449)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PARTITION_INFORMATION_GPT.Attributes", attributes, 0x100, 0x40, true, 0x350856eab3ec13da)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 36>), "_PARTITION_INFORMATION_GPT.Name", name, 0x140, 0x40, true, 0x50e9970bd08bcfd3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif