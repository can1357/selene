#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DIAGNOSTIC_DATA.Version", version, 0x0, 0x20, true, 0x3804d7cfb981172a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DIAGNOSTIC_DATA.Size", size, 0x20, 0x20, true, 0x58a4acf8753001fa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_STORAGE_DIAGNOSTIC_DATA.ProviderId", provider_id, 0x40, 0x80, true, 0x397b62ea089388c4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DIAGNOSTIC_DATA.BufferSize", buffer_size, 0xc0, 0x20, true, 0xf1823a698afc3b31)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_DIAGNOSTIC_DATA.DiagnosticDataBuffer", diagnostic_data_buffer, 0x100, 0x8, true, 0x335092c59f0e5c28)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif