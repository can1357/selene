#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_KALPC_RESERVE.OwnerPort", owner_port, 0x0, 0x40, true, 0xba5e567b049292d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::handle_table_t*), "_KALPC_RESERVE.HandleTable", handle_table, 0x40, 0x40, true, 0xdcd6a1a57fd98f13)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_RESERVE.Handle", handle, 0x80, 0x40, true, 0x462d3f2beb63bf6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_message_t*), "_KALPC_RESERVE.Message", message, 0xc0, 0x40, true, 0x929d4a88623c0998)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KALPC_RESERVE.Active", active, 0x140, 0x20, true, 0x7f3b9a39f98c775)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KALPC_RESERVE.Size", size, 0x100, 0x40, true, 0x821c8edcf58c677d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif