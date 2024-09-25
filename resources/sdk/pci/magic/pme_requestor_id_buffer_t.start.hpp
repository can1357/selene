#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union pci::express_pme_requestor_id_t, 32>), "_PME_REQUESTOR_ID_BUFFER.Ids", ids, 0x0, 0x0, true, 0x90c2dd77603b1dbe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PME_REQUESTOR_ID_BUFFER.Start", start, 0x200, 0x40, true, 0x274e2c3e698f5daf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PME_REQUESTOR_ID_BUFFER.End", end, 0x240, 0x40, true, 0x76cd86065a520fa6)
#else
#define _m00
#define _m01
#define _m02
#endif