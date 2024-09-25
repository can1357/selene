#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LEpBI_HEADER.dwSig", dw_sig, 0x0, 0x0, false, 0x15b5ead9cbeb13fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_LEpBI_HEADER.buildId", build_id, 0x0, 0x0, false, 0x24e449b51339cf3)
#else
#define _m00
#define _m01
#endif