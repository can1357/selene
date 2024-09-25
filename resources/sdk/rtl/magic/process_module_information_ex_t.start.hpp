#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_PROCESS_MODULE_INFORMATION_EX.NextOffset", next_offset, 0x0, 0x10, true, 0xbc06812543fa2f35)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::process_module_information_t), "_RTL_PROCESS_MODULE_INFORMATION_EX.BaseInfo", base_info, 0x40, 0x40, true, 0xb459323a5ad5446b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_MODULE_INFORMATION_EX.ImageChecksum", image_checksum, 0x980, 0x20, true, 0xf9d302fd6875d0bb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_MODULE_INFORMATION_EX.TimeDateStamp", time_date_stamp, 0x9a0, 0x20, true, 0x651aa67dc1fdce68)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_PROCESS_MODULE_INFORMATION_EX.DefaultBase", default_base, 0x9c0, 0x40, true, 0xb754843be8f77371)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif