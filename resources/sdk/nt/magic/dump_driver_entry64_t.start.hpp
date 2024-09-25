#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_DRIVER_ENTRY64.DriverNameOffset", driver_name_offset, 0x0, 0x20, true, 0x82d608bae7f84277)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_DRIVER_ENTRY64.__alignment", alignment, 0x20, 0x20, true, 0x69b21c066c0ad59e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldr::km::data_table_entry_t), "_DUMP_DRIVER_ENTRY64.LdrEntry", ldr_entry, 0x40, 0x0, true, 0x45698905e8c9c194)
#else
#define _m00
#define _m01
#define _m02
#endif