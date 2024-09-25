#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETROOTPAGETABLESIZE.NumberOfPte", number_of_pte, 0x0, 0x20, true, 0xc6d9544dc8fc3ab2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETROOTPAGETABLESIZE.PhysicalAdapterIndex", physical_adapter_index, 0x20, 0x20, true, 0x83666aa47978ba41)
#else
#define _m00
#define _m01
#endif