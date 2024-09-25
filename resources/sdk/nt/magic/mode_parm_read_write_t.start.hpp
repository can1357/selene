#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mode_parameter_header_t), "_MODE_PARM_READ_WRITE.ParameterListHeader", parameter_list_header, 0x0, 0x20, true, 0x51ec935c0087a718)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mode_parameter_block_t), "_MODE_PARM_READ_WRITE.ParameterListBlock", parameter_list_block, 0x20, 0x40, true, 0xfa91f8aa66a28dea)
#else
#define _m00
#define _m01
#endif