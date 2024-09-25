#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SystemBlockHeader.dwIndex", dw_index, 0x0, 0x20, true, 0xba80795c9590d8f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SystemBlockHeader.ulSignature", ul_signature, 0x20, 0x20, true, 0xcc9ca406e2b9bfc)
#else
#define _m00
#define _m01
#endif