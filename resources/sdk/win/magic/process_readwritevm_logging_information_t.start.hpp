#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_READWRITEVM_LOGGING_INFORMATION.Flags", flags, 0x0, 0x8, true, 0x7114f076ed4a152e)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_READWRITEVM_LOGGING_INFORMATION.EnableReadVmLogging", enable_read_vm_logging, 0x0, 0x1, true, 0x7f7e193837caf1b6, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_READWRITEVM_LOGGING_INFORMATION.EnableWriteVmLogging", enable_write_vm_logging, 0x1, 0x1, true, 0x4dc5796e8ec86763, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif