#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LBA_STATUS_LIST_HEADER.ParameterLength", parameter_length, 0x0, 0x20, true, 0x1f898cee0facdfcb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::lba_status_descriptor_t>), "_LBA_STATUS_LIST_HEADER.Descriptors", descriptors, 0x40, 0x0, true, 0x4533a58d91428edb)
#else
#define _m00
#define _m01
#endif