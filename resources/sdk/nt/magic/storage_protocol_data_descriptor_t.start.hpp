#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_DATA_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xd3b9762705a19d06)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_DATA_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xa4400bc958c8e921)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_protocol_specific_data_t), "_STORAGE_PROTOCOL_DATA_DESCRIPTOR.ProtocolSpecificData", protocol_specific_data, 0x40, 0x40, true, 0x96f802e7d2d33357)
#else
#define _m00
#define _m01
#define _m02
#endif