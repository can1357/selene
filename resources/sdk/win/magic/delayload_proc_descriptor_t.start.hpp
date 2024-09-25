#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DELAYLOAD_PROC_DESCRIPTOR.ImportDescribedByName", import_described_by_name, 0x0, 0x20, true, 0x7acfc8219590c7b7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const char*), "_DELAYLOAD_PROC_DESCRIPTOR.Description.Name", name, 0x0, 0x40, true, 0x6e764497836df633)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DELAYLOAD_PROC_DESCRIPTOR.Description.Ordinal", ordinal, 0x0, 0x20, true, 0x13e9831ccd9b9af9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_description_t), "_DELAYLOAD_PROC_DESCRIPTOR.Description", description, 0x40, 0x40, true, 0x26bf63e6ec161171)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif