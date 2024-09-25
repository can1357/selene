#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MkInterfaceList.dwSize", dw_size, 0x0, 0x20, true, 0x9d6a9cf81dd5e586)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::mk_interface_list_entry_t, 1>), "_MkInterfaceList.apIFDList", ap_ifd_list, 0x40, 0x80, true, 0xbf4c8d2bfb08475f)
#else
#define _m00
#define _m01
#endif