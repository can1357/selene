#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_BUFFER_HEADER.BufferSize", buffer_size, 0x0, 0x20, true, 0x4983a54559c4d54a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_BUFFER_HEADER.SavedOffset", saved_offset, 0x20, 0x20, true, 0x8e70c46e52d02302)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_WMI_BUFFER_HEADER.CurrentOffset", current_offset, 0x40, 0x20, true, 0x571235c85bfc88fa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_WMI_BUFFER_HEADER.ReferenceCount", reference_count, 0x60, 0x20, true, 0xb027eb43505ce778)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_BUFFER_HEADER.TimeStamp", time_stamp, 0x80, 0x40, true, 0x422c90c04bcc9109)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_BUFFER_HEADER.SequenceNumber", sequence_number, 0xc0, 0x40, true, 0xc572d80ed71ad4aa)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WMI_BUFFER_HEADER.ClockType", clock_type, 0x100, 0x3, true, 0xdd11d50768a3cbf7, 3, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint61_t), "_WMI_BUFFER_HEADER.Frequency", frequency, 0x103, 0x3d, true, 0xe22c07da7cea45b5, 61, uint64_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_WMI_BUFFER_HEADER.SlistEntry", slist_entry, 0x100, 0x40, true, 0x28c141d8ad074bed)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::buffer_header_t*), "_WMI_BUFFER_HEADER.NextBuffer", next_buffer, 0x100, 0x40, true, 0x91d302f3d872a353)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::buffer_context_t), "_WMI_BUFFER_HEADER.ClientContext", client_context, 0x140, 0x20, true, 0x3a8119b0198a5dbc)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etw::buffer_state_t), "_WMI_BUFFER_HEADER.State", state, 0x160, 0x20, true, 0x5dd6130c32102431)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_BUFFER_HEADER.Offset", offset, 0x180, 0x20, true, 0xace5df597dd1e68d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_BUFFER_HEADER.BufferFlag", buffer_flag, 0x1a0, 0x10, true, 0x634496235c67f38)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_BUFFER_HEADER.BufferType", buffer_type, 0x1b0, 0x10, true, 0x7a037f9a80112b44)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::ref_clock_t), "_WMI_BUFFER_HEADER.ReferenceTime", reference_time, 0x1c0, 0x80, true, 0xcd88da66e7d64261)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WMI_BUFFER_HEADER.GlobalEntry", global_entry, 0x1c0, 0x80, true, 0x933037524eba05e3)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_BUFFER_HEADER.Pointer0", pointer0, 0x1c0, 0x40, true, 0xe7d52f204c4bbe8)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_BUFFER_HEADER.Pointer1", pointer1, 0x200, 0x40, true, 0x65a8c3057b78898f)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif