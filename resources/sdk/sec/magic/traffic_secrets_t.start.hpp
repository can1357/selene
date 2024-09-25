#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "_SEC_TRAFFIC_SECRETS.SymmetricAlgId", symmetric_alg_id, 0x0, 0x0, true, 0x5bbed40841b5f40e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "_SEC_TRAFFIC_SECRETS.ChainingMode", chaining_mode, 0x400, 0x0, true, 0xf653c6ba57c13f3e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "_SEC_TRAFFIC_SECRETS.HashAlgId", hash_alg_id, 0x800, 0x0, true, 0x95722ca21343743c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_TRAFFIC_SECRETS.KeySize", key_size, 0xc00, 0x10, true, 0x3b0db4fda7d82b8a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_TRAFFIC_SECRETS.IvSize", iv_size, 0xc10, 0x10, true, 0xaeb38ec1395e3826)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_TRAFFIC_SECRETS.MsgSequenceStart", msg_sequence_start, 0xc20, 0x10, true, 0x785e1eba0eea71de)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_TRAFFIC_SECRETS.MsgSequenceEnd", msg_sequence_end, 0xc30, 0x10, true, 0xa63a19e81613d90f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum sec::traffic_secret_type_t), "_SEC_TRAFFIC_SECRETS.TrafficSecretType", traffic_secret_type, 0xc40, 0x20, true, 0xc3ab11c310b2fc61)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_TRAFFIC_SECRETS.TrafficSecretSize", traffic_secret_size, 0xc60, 0x10, true, 0xa6b161fde28978af)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SEC_TRAFFIC_SECRETS.TrafficSecret", traffic_secret, 0xc70, 0x8, true, 0x8e2d8ee6b8732658)
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
#define _m09
#endif