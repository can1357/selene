#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxCxPnpPowerCallbackContext.m_CallbackType", m_callback_type, 0x0, 0x8, true, 0xc63afeed9501bd3a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxCxPnpPowerCallbackContext.m_PreCallbackSuccessful", m_pre_callback_successful, 0x8, 0x8, true, 0xd5cf52f38dbae02b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "FxCxPnpPowerCallbackContext.PrepareHardware.PreCallback", pre_callback, 0x0, 0x40, true, 0x66a31906fb1d2b99)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "FxCxPnpPowerCallbackContext.PrepareHardware.PostCallback", post_callback, 0x40, 0x40, true, 0x97bb65d7155768b7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_pre_prepare_hardware_failed_cleanup_t ), "FxCxPnpPowerCallbackContext.PrepareHardware.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0x60e181b9c782f43d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_prepare_hardware_t), "FxCxPnpPowerCallbackContext.PrepareHardware", prepare_hardware, 0x40, 0xc0, true, 0x8604d54c197d3dbd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "FxCxPnpPowerCallbackContext.ReleaseHardware.PreCallback", pre_callback, 0x0, 0x40, true, 0x9f2f56cef3112d35)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "FxCxPnpPowerCallbackContext.ReleaseHardware.PostCallback", post_callback, 0x40, 0x40, true, 0x3ce8511f88fba4d0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_release_hardware_t), "FxCxPnpPowerCallbackContext.ReleaseHardware", release_hardware, 0x40, 0x80, true, 0x66d32cb3a530391)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.D0Entry.PreCallback", pre_callback, 0x0, 0x40, true, 0x8f12e2e4da91ee54)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.D0Entry.PostCallback", post_callback, 0x40, 0x40, true, 0x9d08b475578044ea)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_pre_d0_entry_failed_cleanup_t ), "FxCxPnpPowerCallbackContext.D0Entry.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0x67a24888da913232)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_d0_entry_t), "FxCxPnpPowerCallbackContext.D0Entry", d0_entry, 0x40, 0xc0, true, 0x3475f9d9ab027327)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.D0Exit.PreCallback", pre_callback, 0x0, 0x40, true, 0x28cc1fd93699c888)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.D0Exit.PostCallback", post_callback, 0x40, 0x40, true, 0xfc3daefa3f1b63ea)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_d0_exit_t), "FxCxPnpPowerCallbackContext.D0Exit", d0_exit, 0x40, 0x80, true, 0xbeccf0355749055c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoInit.PreCallback", pre_callback, 0x0, 0x40, true, 0xb3ced34668273203)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoInit.PostCallback", post_callback, 0x40, 0x40, true, 0x25493904f6e31329)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoInit.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0xd7c7ac6f296547bd)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_sm_io_init_t), "FxCxPnpPowerCallbackContext.SmIoInit", sm_io_init, 0x40, 0xc0, true, 0x2ec69e0f0bf80aed)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoRestart.PreCallback", pre_callback, 0x0, 0x40, true, 0x6a22bc973a9b9054)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoRestart.PostCallback", post_callback, 0x40, 0x40, true, 0x71c2b2d6b80a809d)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoRestart.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0x7184ea536c9f8b0d)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_sm_io_restart_t), "FxCxPnpPowerCallbackContext.SmIoRestart", sm_io_restart, 0x40, 0xc0, true, 0xd51442e7fa2428cf)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoSuspend.PreCallback", pre_callback, 0x0, 0x40, true, 0x8902e49bf3c50f)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoSuspend.PostCallback", post_callback, 0x40, 0x40, true, 0x8a47c1fbd5dc73ba)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u24_sm_io_suspend_t), "FxCxPnpPowerCallbackContext.SmIoSuspend", sm_io_suspend, 0x40, 0x80, true, 0x8044f1ae53e287c5)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoFlush.PreCallback", pre_callback, 0x0, 0x40, true, 0x8a3df026bd66a918)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoFlush.PostCallback", post_callback, 0x40, 0x40, true, 0xf54872f9d21b7472)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u28_sm_io_flush_t), "FxCxPnpPowerCallbackContext.SmIoFlush", sm_io_flush, 0x40, 0x80, true, 0xa339ee1685b175c2)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoCleanup.PreCallback", pre_callback, 0x0, 0x40, true, 0x59393ceb2df5569a)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SmIoCleanup.PostCallback", post_callback, 0x40, 0x40, true, 0xb271ec016dffc030)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u32_sm_io_cleanup_t), "FxCxPnpPowerCallbackContext.SmIoCleanup", sm_io_cleanup, 0x40, 0x80, true, 0xa8412f64953495a)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SurpriseRemoval.PreCallback", pre_callback, 0x0, 0x40, true, 0xcf4c9d99d7b38e7d)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.SurpriseRemoval.PostCallback", post_callback, 0x40, 0x40, true, 0x5b4f65db7f380b66)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u36_surprise_removal_t), "FxCxPnpPowerCallbackContext.SurpriseRemoval", surprise_removal, 0x40, 0x80, true, 0xcfe544a33d9421c1)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxCxPnpPowerCallbackContext.Generic.PreCallback", pre_callback, 0x0, 0x40, true, 0xed334805f2e1dbf9)
#define _m37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxCxPnpPowerCallbackContext.Generic.PostCallback", post_callback, 0x40, 0x40, true, 0x6367c9304343fb35)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxCxPnpPowerCallbackContext.Generic.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0xeb558eafdf43d834)
#define _m39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u40_generic_t), "FxCxPnpPowerCallbackContext.Generic", generic, 0x40, 0xc0, true, 0x1d5a9cd9e0e19072)
#define _m40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.SmIoRestartEx.PreCallback", pre_callback, 0x0, 0x40, true, 0x68608999f037c61c)
#define _m41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.SmIoRestartEx.PostCallback", post_callback, 0x40, 0x40, true, 0x281aeae9d1e37519)
#define _m42 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.SmIoRestartEx.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0x6a2b67d27f48e808)
#define _m43 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u43_sm_io_restart_ex_t), "FxCxPnpPowerCallbackContext.SmIoRestartEx", sm_io_restart_ex, 0x40, 0xc0, true, 0x240f40475bdecfc3)
#define _m44 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.SmIoSuspendEx.PreCallback", pre_callback, 0x0, 0x40, true, 0x483992737a002ed3)
#define _m45 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.SmIoSuspendEx.PostCallback", post_callback, 0x40, 0x40, true, 0xa6a7a7b36447b093)
#define _m46 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u46_sm_io_suspend_ex_t), "FxCxPnpPowerCallbackContext.SmIoSuspendEx", sm_io_suspend_ex, 0x40, 0x80, true, 0x7522278fea83de0)
#define _m47 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.ArmWakeFromS0.PreCallback", pre_callback, 0x0, 0x40, true, 0xdd227cf48a4212ab)
#define _m48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.ArmWakeFromS0.PostCallback", post_callback, 0x40, 0x40, true, 0xbbbd5e7ae67c51b3)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.ArmWakeFromS0.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0xf91c05330325fc70)
#define _m50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u49_arm_wake_from_s0_t), "FxCxPnpPowerCallbackContext.ArmWakeFromS0", arm_wake_from_s0, 0x40, 0xc0, true, 0x136d68454d9eec81)
#define _m51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.DisarmWakeFromS0.PreCallback", pre_callback, 0x0, 0x40, true, 0x95727c550c7f1b5e)
#define _m52 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.DisarmWakeFromS0.PostCallback", post_callback, 0x40, 0x40, true, 0xfb79c56e41770dd3)
#define _m53 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u52_disarm_wake_from_s0_t), "FxCxPnpPowerCallbackContext.DisarmWakeFromS0", disarm_wake_from_s0, 0x40, 0x80, true, 0x1f8b80a19662fe45)
#define _m54 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.WakeFromS0Triggered.PreCallback", pre_callback, 0x0, 0x40, true, 0x241d804378bbb781)
#define _m55 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.WakeFromS0Triggered.PostCallback", post_callback, 0x40, 0x40, true, 0x7905e85925ab0b13)
#define _m56 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u55_wake_from_s0_triggered_t), "FxCxPnpPowerCallbackContext.WakeFromS0Triggered", wake_from_s0_triggered, 0x40, 0x80, true, 0x28d056a5dd884ea4)
#define _m57 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.ArmWakeFromSx.PreCallback", pre_callback, 0x0, 0x40, true, 0x37493f032232b250)
#define _m58 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.ArmWakeFromSx.PostCallback", post_callback, 0x40, 0x40, true, 0x11ac1b274fc33cdf)
#define _m59 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.ArmWakeFromSx.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0x420b28bc919eab3f)
#define _m60 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u58_arm_wake_from_sx_t), "FxCxPnpPowerCallbackContext.ArmWakeFromSx", arm_wake_from_sx, 0x40, 0xc0, true, 0x303a93168542443)
#define _m61 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*), "FxCxPnpPowerCallbackContext.ArmWakeFromSxWithReason.PreCallback", pre_callback, 0x0, 0x40, true, 0xf10da449b350889d)
#define _m62 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*), "FxCxPnpPowerCallbackContext.ArmWakeFromSxWithReason.PostCallback", post_callback, 0x40, 0x40, true, 0x5bbc58bb1945ab25)
#define _m63 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup_t ), "FxCxPnpPowerCallbackContext.ArmWakeFromSxWithReason.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0x383e8b83e0d1fddf)
#define _m64 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u61_arm_wake_from_sx_with_reason_t), "FxCxPnpPowerCallbackContext.ArmWakeFromSxWithReason", arm_wake_from_sx_with_reason, 0x40, 0xc0, true, 0xf8cb10d072b7ee9b)
#define _m65 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.DisarmWakeFromSx.PreCallback", pre_callback, 0x0, 0x40, true, 0xfc78448f129bc27e)
#define _m66 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.DisarmWakeFromSx.PostCallback", post_callback, 0x40, 0x40, true, 0x307d120b763a3b71)
#define _m67 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u64_disarm_wake_from_sx_t), "FxCxPnpPowerCallbackContext.DisarmWakeFromSx", disarm_wake_from_sx, 0x40, 0x80, true, 0xfc74f49a2492ade2)
#define _m68 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.WakeFromSxTriggered.PreCallback", pre_callback, 0x0, 0x40, true, 0x1f7397a648f70ef0)
#define _m69 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxCxPnpPowerCallbackContext.WakeFromSxTriggered.PostCallback", post_callback, 0x40, 0x40, true, 0x36db92b2f9001abf)
#define _m70 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u67_wake_from_sx_triggered_t), "FxCxPnpPowerCallbackContext.WakeFromSxTriggered", wake_from_sx_triggered, 0x40, 0x80, true, 0xce0613b4af457567)
#define _m71 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.D0EntryPostHardwareEnabled.PreCallback", pre_callback, 0x0, 0x40, true, 0x2bef4c617410d7eb)
#define _m72 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.D0EntryPostHardwareEnabled.PostCallback", post_callback, 0x40, 0x40, true, 0xfe37cba13a1071bf)
#define _m73 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.D0EntryPostHardwareEnabled.CleanupCallback", cleanup_callback, 0x80, 0x40, true, 0xf85f78512cb12b6f)
#define _m74 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u70_d0_entry_post_hardware_enabled_t), "FxCxPnpPowerCallbackContext.D0EntryPostHardwareEnabled", d0_entry_post_hardware_enabled, 0x40, 0xc0, true, 0xcec1c322a951fa2c)
#define _m75 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.D0ExitPreHardwareDisabled.PreCallback", pre_callback, 0x0, 0x40, true, 0x186c3cd5c1627f0b)
#define _m76 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxCxPnpPowerCallbackContext.D0ExitPreHardwareDisabled.PostCallback", post_callback, 0x40, 0x40, true, 0x4ee84b6592521bd0)
#define _m77 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u73_d0_exit_pre_hardware_disabled_t), "FxCxPnpPowerCallbackContext.D0ExitPreHardwareDisabled", d0_exit_pre_hardware_disabled, 0x40, 0x80, true, 0xa642b34fcffb0bca)
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
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m49
#define _m50
#define _m51
#define _m52
#define _m53
#define _m54
#define _m55
#define _m56
#define _m57
#define _m58
#define _m59
#define _m60
#define _m61
#define _m62
#define _m63
#define _m64
#define _m65
#define _m66
#define _m67
#define _m68
#define _m69
#define _m70
#define _m71
#define _m72
#define _m73
#define _m74
#define _m75
#define _m76
#define _m77
#endif