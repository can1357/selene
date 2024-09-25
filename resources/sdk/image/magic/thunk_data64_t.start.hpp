#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_THUNK_DATA64.ForwarderString", forwarder_string, 0x0, 0x40, true, 0x37ebda60a005b77d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_THUNK_DATA64.Function", function, 0x0, 0x40, true, 0xb3ed450dba7573a2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_THUNK_DATA64.Ordinal", ordinal, 0x0, 0x40, true, 0xfa4e5c45c182bd7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_THUNK_DATA64.AddressOfData", address_of_data, 0x0, 0x40, true, 0x500698b3bc729105)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif