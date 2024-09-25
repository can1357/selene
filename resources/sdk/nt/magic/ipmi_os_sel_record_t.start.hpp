#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPMI_OS_SEL_RECORD.Signature", signature, 0x0, 0x20, true, 0xd088a55ef597d9e4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPMI_OS_SEL_RECORD.Version", version, 0x20, 0x20, true, 0x9ca217158ddfbc99)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPMI_OS_SEL_RECORD.Length", length, 0x40, 0x20, true, 0xf15272cb6b95464f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::ipmi_os_sel_record_type_t), "_IPMI_OS_SEL_RECORD.RecordType", record_type, 0x60, 0x20, true, 0x872290667542c5b5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPMI_OS_SEL_RECORD.DataLength", data_length, 0x80, 0x20, true, 0xca9ef00a1fa0f6a8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_IPMI_OS_SEL_RECORD.Data", data, 0xa0, 0x8, true, 0xfc6c7361819119be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif