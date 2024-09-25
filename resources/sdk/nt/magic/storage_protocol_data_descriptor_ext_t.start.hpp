#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_DATA_DESCRIPTOR_EXT.Version", version, 0x0, 0x20, true, 0x4478a421ac751742)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_DATA_DESCRIPTOR_EXT.Size", size, 0x20, 0x20, true, 0x62b4fca22a5e53e6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_protocol_specific_data_ext_t), "_STORAGE_PROTOCOL_DATA_DESCRIPTOR_EXT.ProtocolSpecificData", protocol_specific_data, 0x40, 0x0, true, 0xbd4e201b6872cf5f)
#else
#define _m00
#define _m01
#define _m02
#endif