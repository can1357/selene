#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ImageArchitectureEntry.FixupInstRVA", fixup_inst_rva, 0x0, 0x20, true, 0xa87ed8fbc2bfbbb1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ImageArchitectureEntry.NewInst", new_inst, 0x20, 0x20, true, 0xa904bc808f1d6d88)
#else
#define _m00
#define _m01
#endif