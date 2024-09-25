#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSTRINGBINDING.wTowerId", w_tower_id, 0x0, 0x10, true, 0x69e1da6c72366e06)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSTRINGBINDING.aNetworkAddr", a_network_addr, 0x10, 0x10, true, 0x19e376c524122f87)
#else
#define _m00
#define _m01
#endif