#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 196>), "_STORAGE_RPMB_DATA_FRAME.Stuff", stuff, 0x0, 0x20, true, 0x6d3b544467f93830)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORAGE_RPMB_DATA_FRAME.KeyOrMAC", key_or_mac, 0x620, 0x0, true, 0xa2697e537b6e9355)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_STORAGE_RPMB_DATA_FRAME.Data", data, 0x720, 0x0, true, 0x61ce68d828b67e87)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_STORAGE_RPMB_DATA_FRAME.Nonce", nonce, 0xf20, 0x80, true, 0x7955877f79dbbb1c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_STORAGE_RPMB_DATA_FRAME.WriteCounter", write_counter, 0xfa0, 0x20, true, 0xb3f56405eb5a0e7e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_STORAGE_RPMB_DATA_FRAME.Address", address, 0xfc0, 0x10, true, 0x375f9b252619bdd2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_STORAGE_RPMB_DATA_FRAME.BlockCount", block_count, 0xfd0, 0x10, true, 0xac5b2dc438367ae6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_STORAGE_RPMB_DATA_FRAME.OperationResult", operation_result, 0xfe0, 0x10, true, 0x68a5b1c12feb5893)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_STORAGE_RPMB_DATA_FRAME.RequestOrResponseType", request_or_response_type, 0xff0, 0x10, true, 0x1688a52bd3590269)
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
#endif