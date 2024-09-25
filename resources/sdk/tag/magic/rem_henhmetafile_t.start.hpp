#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemHENHMETAFILE.cbData", cb_data, 0x0, 0x20, true, 0x5fc4cc2593b8c0ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagRemHENHMETAFILE.data", data, 0x20, 0x8, true, 0x4198d20309618e13)
#else
#define _m00
#define _m01
#endif