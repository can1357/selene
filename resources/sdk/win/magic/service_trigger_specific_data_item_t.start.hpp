#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_TRIGGER_SPECIFIC_DATA_ITEM.dwDataType", dw_data_type, 0x0, 0x20, true, 0xc4b52b20385687fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_TRIGGER_SPECIFIC_DATA_ITEM.cbData", cb_data, 0x20, 0x20, true, 0x401d7bb91475204e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SERVICE_TRIGGER_SPECIFIC_DATA_ITEM.pData", p_data, 0x40, 0x40, true, 0xd07e09ca2cbdd811)
#else
#define _m00
#define _m01
#define _m02
#endif