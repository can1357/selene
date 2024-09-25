#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MAP_REGISTER_ENTRY.MapRegister", map_register, 0x0, 0x40, true, 0xec609bad56116679)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MAP_REGISTER_ENTRY.WriteToDevice", write_to_device, 0x40, 0x8, true, 0x630476171d6073c5)
#else
#define _m00
#define _m01
#endif