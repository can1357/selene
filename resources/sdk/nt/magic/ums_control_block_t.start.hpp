#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::ums_context_t*), "_UMS_CONTROL_BLOCK.UmsContext", ums_context, 0x0, 0x40, true, 0x1bda03ec0339c155)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t*), "_UMS_CONTROL_BLOCK.CompletionListEntry", completion_list_entry, 0x40, 0x40, true, 0x2601c1d239d82638)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_UMS_CONTROL_BLOCK.CompletionListEvent", completion_list_event, 0x80, 0x40, true, 0x496d3f0e00f2a9b7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_UMS_CONTROL_BLOCK.ServiceSequenceNumber", service_sequence_number, 0xc0, 0x20, true, 0xcdb9e46e5300a939)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kqueue_t), "_UMS_CONTROL_BLOCK.UmsQueue", ums_queue, 0x100, 0x0, true, 0x2e6f363adb9a79a7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_UMS_CONTROL_BLOCK.QueueEntry", queue_entry, 0x300, 0x80, true, 0xdeefda3d0cc566c2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::ums_context_t*), "_UMS_CONTROL_BLOCK.YieldingUmsContext", yielding_ums_context, 0x380, 0x40, true, 0x81875471ebddce88)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_UMS_CONTROL_BLOCK.YieldingParam", yielding_param, 0x3c0, 0x40, true, 0xbe00201fb998b6ff)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_UMS_CONTROL_BLOCK.UmsTeb", ums_teb, 0x400, 0x40, true, 0x17352b6d628de7e6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kqueue_t*), "_UMS_CONTROL_BLOCK.UmsAssociatedQueue", ums_associated_queue, 0x100, 0x40, true, 0x69e1a9f2245c238e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_UMS_CONTROL_BLOCK.UmsQueueListEntry", ums_queue_list_entry, 0x140, 0x40, true, 0x23f284a63f60ea2f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_UMS_CONTROL_BLOCK.UmsWaitEvent", ums_wait_event, 0x180, 0xc0, true, 0xa35a6e578b70ec75)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_UMS_CONTROL_BLOCK.StagingArea", staging_area, 0x240, 0x40, true, 0xfa8098192d77e434)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_UMS_CONTROL_BLOCK.UmsPrimaryDeliveredContext", ums_primary_delivered_context, 0x280, 0x1, true, 0x757cffa610766094, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_UMS_CONTROL_BLOCK.UmsAssociatedQueueUsed", ums_associated_queue_used, 0x281, 0x1, true, 0xc87c2615ad5028be, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_UMS_CONTROL_BLOCK.UmsThreadParked", ums_thread_parked, 0x282, 0x1, true, 0xdcc73ca1f077c3bb, 1, uint32_t)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_UMS_CONTROL_BLOCK.UmsFlags", ums_flags, 0x280, 0x20, true, 0xf5be1a26416e578d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_UMS_CONTROL_BLOCK.TebSelector", teb_selector, 0x0, 0x0, false, 0x6a436d64cde8c9e3)
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
#endif