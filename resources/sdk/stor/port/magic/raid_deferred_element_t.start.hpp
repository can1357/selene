#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_header_t), "_RAID_DEFERRED_ELEMENT.Header", header, 0x0, 0x0, true, 0x79dc6a16b78043b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::raid_deferred_type_t), "_RAID_DEFERRED_ELEMENT.Type", type, 0x100, 0x20, true, 0x1e8a9b76a8a5620d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct stor::port::stor_scsi_address_t, union stor::port::raid_address_t>), "_RAID_DEFERRED_ELEMENT.Address", address, 0x120, 0x20, true, 0xb431d9bcb8b2d3e7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_RAID_DEFERRED_ELEMENT.Timer.HwTimerRoutine", hw_timer_routine, 0x0, 0x40, true, 0xc9f2c1cff22a54e6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DEFERRED_ELEMENT.Timer.Timeout", timeout, 0x40, 0x20, true, 0x7a6efc824bcd0696)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_timer_t), "_RAID_DEFERRED_ELEMENT.Timer", timer, 0x140, 0x80, true, 0x25891558b752047)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t*), "_RAID_DEFERRED_ELEMENT.Error.Srb", srb, 0x0, 0x40, true, 0x638cf36d605c0d60)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DEFERRED_ELEMENT.Error.ErrorCode", error_code, 0x40, 0x20, true, 0xbabfbf2bb5e1eaa3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DEFERRED_ELEMENT.Error.UniqueId", unique_id, 0x60, 0x20, true, 0xaff5042038f295ab)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_RAID_DEFERRED_ELEMENT.Error.FreeErrorInfo", free_error_info, 0x80, 0x80, true, 0xaffec9469fb0a22f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_error_t), "_RAID_DEFERRED_ELEMENT.Error", error, 0x140, 0x0, true, 0x269755c51e9674cc)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DEFERRED_ELEMENT.PauseDevice.Timeout", timeout, 0x0, 0x20, true, 0xb9d5b1f29e124b94)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_pause_device_t), "_RAID_DEFERRED_ELEMENT.PauseDevice", pause_device, 0x140, 0x20, true, 0x6fb926d43d3dd0d1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DEFERRED_ELEMENT.Busy.RequestsToComplete", requests_to_complete, 0x0, 0x20, true, 0x6cabb08f86b24503)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_busy_t), "_RAID_DEFERRED_ELEMENT.Busy", busy, 0x140, 0x20, true, 0x49eab3d5e5d5f4e7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DEFERRED_ELEMENT.DeviceBusy.RequestsToComplete", requests_to_complete, 0x0, 0x20, true, 0x15b5ceacf81201c1)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_busy_t), "_RAID_DEFERRED_ELEMENT.DeviceBusy", device_busy, 0x140, 0x20, true, 0x943289e03b65ed0b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_timer_context_t*), "_RAID_DEFERRED_ELEMENT.AdditionalTimer.StorTimer", stor_timer, 0x0, 0x40, true, 0x918258a44b6f22fe)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_DEFERRED_ELEMENT.AdditionalTimer.Timeout", timeout, 0x40, 0x40, true, 0x6048dca9c2673e64)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DEFERRED_ELEMENT.AdditionalTimer.TolerableDelay", tolerable_delay, 0x80, 0x20, true, 0xb3a3e7303e0766c9)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_additional_timer_t), "_RAID_DEFERRED_ELEMENT.AdditionalTimer", additional_timer, 0x140, 0xc0, true, 0xa289b37761d73472)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_async_notify_context_t*), "_RAID_DEFERRED_ELEMENT.AsyncNotification.StorAsyncNotify", stor_async_notify, 0x0, 0x40, true, 0x1eb235cd89b85940)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_async_notification_t), "_RAID_DEFERRED_ELEMENT.AsyncNotification", async_notification, 0x140, 0x40, true, 0xa4d933617c5ffadb)
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
#define _m19
#define _m20
#define _m21
#define _m22
#endif