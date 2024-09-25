#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.Attributes.AllAttributes", all_attributes, 0x0, 0x20, true, 0xf405ebb4e029f7b9)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.Attributes.RvaBased", rva_based, 0x0, 0x1, true, 0x6d0d9ff33addd23a, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.Attributes.ReservedAttributes", reserved_attributes, 0x1, 0x1f, true, 0xf7eca630297e52ca, 31, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_attributes_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.Attributes", attributes, 0x0, 0x20, true, 0xea66d66363ca9a16)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.DllNameRVA", dll_name_rva, 0x20, 0x20, true, 0xffc61bf991281957)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.ModuleHandleRVA", module_handle_rva, 0x40, 0x20, true, 0x2f6358c83d70486d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.ImportAddressTableRVA", import_address_table_rva, 0x60, 0x20, true, 0x9ad81689179ee3ca)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.ImportNameTableRVA", import_name_table_rva, 0x80, 0x20, true, 0xb0bcca8e058ab99a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.BoundImportAddressTableRVA", bound_import_address_table_rva, 0xa0, 0x20, true, 0x603ae6a594525d48)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.UnloadInformationTableRVA", unload_information_table_rva, 0xc0, 0x20, true, 0x65124e93f08ed04a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DELAYLOAD_DESCRIPTOR.TimeDateStamp", time_date_stamp, 0xe0, 0x20, true, 0xe9ead4b876e8c4ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif