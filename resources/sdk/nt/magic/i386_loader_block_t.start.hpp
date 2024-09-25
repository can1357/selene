#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_I386_LOADER_BLOCK.CommonDataArea", common_data_area, 0x0, 0x40, true, 0x64fce8c75dddccfa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_I386_LOADER_BLOCK.MachineType", machine_type, 0x40, 0x20, true, 0x99fda68177bf1792)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_I386_LOADER_BLOCK.VirtualBias", virtual_bias, 0x60, 0x20, true, 0x6ac626879478cfd4)
#else
#define _m00
#define _m01
#define _m02
#endif