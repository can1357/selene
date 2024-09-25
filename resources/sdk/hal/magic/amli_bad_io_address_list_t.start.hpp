#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_AMLI_BAD_IO_ADDRESS_LIST.BadAddrBegin", bad_addr_begin, 0x0, 0x20, true, 0x3e4d2753812f71bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_AMLI_BAD_IO_ADDRESS_LIST.BadAddrSize", bad_addr_size, 0x20, 0x20, true, 0x3a32c7393f7b82ae)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_AMLI_BAD_IO_ADDRESS_LIST.OSVersionTrigger", os_version_trigger, 0x40, 0x20, true, 0x66c2af77ce5cc9a0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(phalioreadwritehandler_t ), "_HAL_AMLI_BAD_IO_ADDRESS_LIST.IOHandler", io_handler, 0x80, 0x40, true, 0xb031b8d4215abd86)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif