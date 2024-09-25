#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ADAPTER_SERIAL_NUMBER.Version", version, 0x0, 0x20, true, 0x36faab3757f8f444)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ADAPTER_SERIAL_NUMBER.Size", size, 0x20, 0x20, true, 0x572dec46cf06ec4a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_STORAGE_ADAPTER_SERIAL_NUMBER.SerialNumber", serial_number, 0x40, 0x0, true, 0x716160b77722e254)
#else
#define _m00
#define _m01
#define _m02
#endif