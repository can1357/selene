#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KALPC_VIEW.ViewListEntry", view_list_entry, 0x0, 0x80, true, 0xfdacb6be2662756b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_region_t*), "_KALPC_VIEW.Region", region, 0x80, 0x40, true, 0x7f68105fc5f082b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_KALPC_VIEW.OwnerPort", owner_port, 0xc0, 0x40, true, 0xf8c58126a65bd36c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_KALPC_VIEW.OwnerProcess", owner_process, 0x100, 0x40, true, 0x4e12e48b8d2d3882)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_VIEW.Address", address, 0x140, 0x40, true, 0xac9e1d2a1f296127)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KALPC_VIEW.Size", size, 0x180, 0x40, true, 0xc7582995c27755ba)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_VIEW.SecureViewHandle", secure_view_handle, 0x1c0, 0x40, true, 0x56fa490bdeab37d4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_VIEW.WriteAccessHandle", write_access_handle, 0x200, 0x40, true, 0x7f418488bebcd668)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_VIEW.WriteAccess", write_access, 0x240, 0x1, true, 0x7a08933b333a1cef, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_VIEW.AutoRelease", auto_release, 0x241, 0x1, true, 0xef527b1d1de5911e, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_VIEW.ForceUnlink", force_unlink, 0x242, 0x1, true, 0x5608c646d21894a4, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KALPC_VIEW.NumberOfOwnerMessages", number_of_owner_messages, 0x260, 0x20, true, 0x821500f3700cddc0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KALPC_VIEW.ProcessViewListEntry", process_view_list_entry, 0x280, 0x80, true, 0xa52b13ec3cda8ac1)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_VIEW.SystemSpace", system_space, 0x243, 0x1, true, 0xae3214c423dad5fd, 1, uint32_t)
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
#endif