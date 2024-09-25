#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdClassFactory._cRefs", c_refs, 0x40, 0x20, true, 0xc330dff68f96ab08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdClassFactory._dwIndex", dw_index, 0x60, 0x20, true, 0xea85d83d84646a81)
#else
#define _m00
#define _m01
#endif