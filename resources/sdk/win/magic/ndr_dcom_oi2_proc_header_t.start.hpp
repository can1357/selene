#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR_DCOM_OI2_PROC_HEADER.HandleType", handle_type, 0x0, 0x8, true, 0x828c39fcf8150c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::interpreter_flags_t), "_NDR_DCOM_OI2_PROC_HEADER.OldOiFlags", old_oi_flags, 0x8, 0x8, true, 0x49d40a817f8efeaa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_DCOM_OI2_PROC_HEADER.RpcFlagsLow", rpc_flags_low, 0x10, 0x10, true, 0x347698295a099776)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_DCOM_OI2_PROC_HEADER.RpcFlagsHi", rpc_flags_hi, 0x20, 0x10, true, 0x63106c5e1571f0a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_DCOM_OI2_PROC_HEADER.ProcNum", proc_num, 0x30, 0x10, true, 0xbae67f6b24831ce2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_DCOM_OI2_PROC_HEADER.StackSize", stack_size, 0x40, 0x10, true, 0x521818e4bee6bad3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_DCOM_OI2_PROC_HEADER.ClientBufferSize", client_buffer_size, 0x50, 0x10, true, 0xa40b16e46315206b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_DCOM_OI2_PROC_HEADER.ServerBufferSize", server_buffer_size, 0x60, 0x10, true, 0xf19fbf2dff75bdd8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::interpreter_opt_flags_t), "_NDR_DCOM_OI2_PROC_HEADER.Oi2Flags", oi2_flags, 0x70, 0x8, true, 0xb1f9176a19c1fa0f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR_DCOM_OI2_PROC_HEADER.NumberParams", number_params, 0x78, 0x8, true, 0x7e187ca84276a5bb)
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