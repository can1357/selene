#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_TRIGGER_INFO.cTriggers", c_triggers, 0x0, 0x20, true, 0x218928d5581a76b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_trigger_t*), "_SERVICE_TRIGGER_INFO.pTriggers", p_triggers, 0x40, 0x40, true, 0xbb32d689daef168f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SERVICE_TRIGGER_INFO.pReserved", p_reserved, 0x80, 0x40, true, 0x9b5ad929a34936a)
#else
#define _m00
#define _m01
#define _m02
#endif