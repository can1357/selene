#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::work_on_behalf_ticket_t), "_RTL_WORK_ON_BEHALF_TICKET_EX.Ticket", ticket, 0x0, 0x40, true, 0xcf20f3084496f296)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_WORK_ON_BEHALF_TICKET_EX.Flags", flags, 0x40, 0x20, true, 0xc1748ebf15a1a893)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_WORK_ON_BEHALF_TICKET_EX.CurrentThread", current_thread, 0x40, 0x1, true, 0x4d3e9e0463d9ebd6, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif