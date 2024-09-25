#if !IN_PARSER
#define _a0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoNotifySystemTimeSet$ntoskrnl.exe", 0x3a42a4, 0x0, true, 0xff3600fde1f55bdf)
#define _a1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint8_t)>*), "$PoNotifyVSyncChange$ntoskrnl.exe", 0x35d080, 0x0, true, 0x3c89285bc927674a)
#define _a2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoOffCrashConfigTable$ntoskrnl.exe", 0xc24f40, 0x0, true, 0x6acfe4de72518134)
#define _a3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoPdcCallbacks$ntoskrnl.exe", 0xc54170, 0x0, true, 0x839ae5eeb86fdaee)
#define _a4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoPowerDownActionInProgress$ntoskrnl.exe", 0xc22e31, 0x0, true, 0x6b058f406c376b9a)
#define _a5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoPowerOffMonitor$ntoskrnl.exe", 0x37fb00, 0x0, true, 0xfaef6eaecf692003)
#define _a6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoPowerSequence$ntoskrnl.exe", 0xc22e38, 0x0, true, 0xeb3523d453c0655d)
#define _a7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::device_object_t*, uint32_t*)>*), "$PoQueryWatchdogTime$ntoskrnl.exe", 0x231b90, 0x0, true, 0x49cf0fc4d9dd8514)
#define _a8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::work_queue_item_t*)>*), "$PoQueueShutdownWorkItem$ntoskrnl.exe", 0x8e1ca0, 0x0, true, 0x1c42ea850191cde)
#define _a9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$PoReenableSleepStates$ntoskrnl.exe", 0x8df310, 0x0, true, 0x9815c5ceda2d8409)
#define _b0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoRegisterCoalescingCallback$ntoskrnl.exe", 0x787730, 0x0, true, 0xe9affe733e65ffa2)
#define _b1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t*(struct nt::device_object_t*, uint32_t, uint32_t, enum nt::device_power_state_t)>*), "$PoRegisterDeviceForIdleDetection$ntoskrnl.exe", 0x33fc70, 0x0, true, 0x3283d736b9454220)
#define _b2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoRegisterDeviceNotify$ntoskrnl.exe", 0x36a730, 0x0, true, 0x2d5dfdf5e4fae43e)
#define _b3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, const struct nt::guid_t*, sdk::function<int32_t(const struct nt::guid_t*, void*, uint32_t, void*)>*, void*, void**)>*), "$PoRegisterPowerSettingCallback$ntoskrnl.exe", 0x710d20, 0x0, true, 0x2d511aec0abf1788)
#define _b4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*, uint32_t)>*), "$PoRegisterSystemState$ntoskrnl.exe", 0x568fa0, 0x0, true, 0xc7f23339088083a4)
#define _b5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, uint8_t, union power::state_t, sdk::function<void(struct nt::device_object_t*, uint8_t, union power::state_t, void*, struct io::status_block_t*)>*, void*, struct nt::irp_t**)>*), "$PoRequestPowerIrp$ntoskrnl.exe", 0x36ccf0, 0x0, true, 0x450442e4303a2365)
#define _b6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**)>*), "$PoRequestShutdownEvent$ntoskrnl.exe", 0x794fc0, 0x0, true, 0x278a362a3addcf3d)
#define _b7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoResumeFromHibernate$ntoskrnl.exe", 0xc22f48, 0x0, true, 0xb2f7f12f9d1bb054)
#define _b8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoRundownSystemTimer$ntoskrnl.exe", 0x5cebc8, 0x0, true, 0xc44658570299c3af)
#define _b9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSessionBuiltinPanelState$ntoskrnl.exe", 0x576000, 0x0, true, 0x78908b40111ee0cd)
#define _c0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSessionPowerControl$ntoskrnl.exe", 0x8f0c7c, 0x0, true, 0x172c8c58eac60d09)
#define _c1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t*)>*), "$PoSetDeviceBusyEx$ntoskrnl.exe", 0x562f70, 0x0, true, 0xe3237e33724e53c3)
#define _c2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSetFixedWakeSource$ntoskrnl.exe", 0x9ad590, 0x0, true, 0xb5cd0058388b41c3)
#define _c3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, void*, uint64_t, uint32_t)>*), "$PoSetHiberRange$ntoskrnl.exe", 0x3846d0, 0x0, true, 0x1c59d14716405118)
#define _c4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum power::request_type_t)>*), "$PoSetPowerRequest$ntoskrnl.exe", 0x33d1f0, 0x0, true, 0x2e69b5ee6e7d06d6)
#define _c5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<union power::state_t(struct nt::device_object_t*, enum power::state_type_t, union power::state_t)>*), "$PoSetPowerState$ntoskrnl.exe", 0x379a40, 0x0, true, 0x9d4583667b9e10c6)
#define _c6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "$PoSetSystemState$ntoskrnl.exe", 0x569080, 0x0, true, 0x9553ce8e5894540c)
#define _c7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::irp_t*)>*), "$PoSetSystemWake$ntoskrnl.exe", 0x55f3c0, 0x0, true, 0x79b3e93123679c15)
#define _c8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSetSystemWakeDevice$ntoskrnl.exe", 0x55f3f0, 0x0, true, 0xf513fc409341ab2f)
#define _c9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "$PoSetThermalActiveCooling$ntoskrnl.exe", 0x7b1840, 0x0, true, 0xa89eda2b346ef9cb)
#define _d0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "$PoSetThermalPassiveCooling$ntoskrnl.exe", 0x8de040, 0x0, true, 0xfd8b32d9485d50bb)
#define _d1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(enum power::monitor_request_reason_t)>*), "$PoSetUserPresent$ntoskrnl.exe", 0x3a2920, 0x0, true, 0x2fa5e48f4da87681)
#define _d2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoShutdownBugCheck$ntoskrnl.exe", 0x8e2e00, 0x0, true, 0x768a9035df18e104)
#define _d3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t*)>*), "$PoStartDeviceBusy$ntoskrnl.exe", 0x562f80, 0x0, true, 0x9a340e781b2c4767)
#define _d4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::irp_t*)>*), "$PoStartNextPowerIrp$ntoskrnl.exe", 0x3973d0, 0x0, true, 0x363767332de602c1)
#define _d5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoStartPartitionReplace$ntoskrnl.exe", 0x8e2ef8, 0x0, true, 0x7774bb76ccb206a6)
#define _d6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoStartPowerStateTasks$ntoskrnl.exe", 0x75fb34, 0x0, true, 0xf9d7a078fcd92a95)
#define _d7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoStoreDiagnosticContext$ntoskrnl.exe", 0x3872fc, 0x0, true, 0xf51a513d596f4f2b)
#define _d8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoStoreRequester$ntoskrnl.exe", 0x33ca04, 0x0, true, 0x327ba6f274f089cc)
#define _d9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoThermalCounterSetCallback$ntoskrnl.exe", 0x8e3200, 0x0, true, 0xf242dbb434d29100)
#define _e0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoTraceDynamicTickDisabled$ntoskrnl.exe", 0x569cb4, 0x0, true, 0x32c9afee4fb199f3)
#define _e1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoTraceSystemTimerResolution$ntoskrnl.exe", 0x5cf1c8, 0x0, true, 0x4465b97bf8d03f32)
#define _e2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoTraceSystemTimerResolutionKernel$ntoskrnl.exe", 0x30af1c, 0x0, true, 0xfcbee303ffa35344)
#define _e3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoTraceSystemTimerResolutionUpdate$ntoskrnl.exe", 0x202b8c, 0x0, true, 0xba687c632811ae72)
#define _e4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoUnblockConsoleSwitch$ntoskrnl.exe", 0x75faec, 0x0, true, 0x9b154986cb80a723)
#define _e5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoUnregisterCoalescingCallback$ntoskrnl.exe", 0x8e1d20, 0x0, true, 0x67d0973a9102b01f)
#define _e6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$PoUnregisterPowerSettingCallback$ntoskrnl.exe", 0x75d2e0, 0x0, true, 0xc4c8154bbb478043)
#define _e7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$PoUnregisterSystemState$ntoskrnl.exe", 0x5690d0, 0x0, true, 0x5e00b8c90288bffd)
#define _e8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$PoUserShutdownCancelled$ntoskrnl.exe", 0x764c00, 0x0, true, 0x5f1a0e52eb2e1051)
#define _e9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$PoUserShutdownInitiated$ntoskrnl.exe", 0x760ef0, 0x0, true, 0x525a16914c7aaa81)
#define _f0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoVolumeDevice$ntoskrnl.exe", 0x76aa2c, 0x0, true, 0x1bedf06312e9f3d1)
#define _f1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoWakeState$ntoskrnl.exe", 0xcecb50, 0x0, true, 0x1f44aa123fbf348b)
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoClearPowerRequestInternalDeferred$ntoskrnl.exe", 0x0, 0x0, false, 0xfe159c727e7c88f4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDelistPowerStateTransitionBlocker$ntoskrnl.exe", 0x0, 0x0, false, 0xb6a194a1c89dc3db)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDetectedHeteroSystem$ntoskrnl.exe", 0x0, 0x0, false, 0x3447c606bee37a7a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDisableSkipTick$ntoskrnl.exe", 0x0, 0x0, false, 0x9cb63a869892c0e4)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxAddComponentRelation$ntoskrnl.exe", 0x0, 0x0, false, 0x38b13ee7612d0996)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxAddDeviceRelation$ntoskrnl.exe", 0x0, 0x0, false, 0x4d28c58e35238302)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxRemoveComponentRelation$ntoskrnl.exe", 0x0, 0x0, false, 0x732b5eb13db33766)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxRemoveDeviceRelation$ntoskrnl.exe", 0x0, 0x0, false, 0xd3dd83ecad931d78)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoGetProcessorPerformanceClass$ntoskrnl.exe", 0x0, 0x0, false, 0xed321acb1ca718f9)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoInitializePdc$ntoskrnl.exe", 0x0, 0x0, false, 0xe23de8af46a80409)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoPushPowerStateTransitionRecordWithCallback$ntoskrnl.exe", 0x0, 0x0, false, 0xdbb8c1d9cd63447b)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSetCsSessionGoal$ntoskrnl.exe", 0x0, 0x0, false, 0x942ac488fa950b1d)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoTraceSystemTimerResolutionIgnore$ntoskrnl.exe", 0x0, 0x0, false, 0xc556f213f22461e7)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoAddPowerTriageData$ntoskrnl.exe", 0x568aec, 0x0, true, 0x6ec572e5f7581383)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoArmStopWatchCollection$ntoskrnl.exe", 0x33ea08, 0x0, true, 0xfe9e91e4ceb2d2a5)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDiagTraceDirectedDripsCandidateDevice$ntoskrnl.exe", 0x8e3824, 0x0, true, 0x2418e943ac3174e6)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoInitializeStopWatch$ntoskrnl.exe", 0x33ead8, 0x0, true, 0xf89846280a11f42)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoIsArmedStopWatchCollection$ntoskrnl.exe", 0x33eac8, 0x0, true, 0x71ac3ac43679681)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoIsInitializedStopWatch$ntoskrnl.exe", 0x2d5f84, 0x0, true, 0xa7df94ee7b3947d0)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoIsRunningStopWatch$ntoskrnl.exe", 0x33e990, 0x0, true, 0xdcdc04580e69689c)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoNotifyPnpActionQueueEvent$ntoskrnl.exe", 0x570980, 0x0, true, 0x380654e11ee59ef3)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoPauseStopWatch$ntoskrnl.exe", 0x33db0c, 0x0, true, 0x9f50db5a50005729)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoQueryStopWatch$ntoskrnl.exe", 0x33e940, 0x0, true, 0xfb2c54e61f7e756b)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoResetStopWatch$ntoskrnl.exe", 0x579b34, 0x0, true, 0xf543688da93ebcd7)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoStartStopWatch$ntoskrnl.exe", 0x33da40, 0x0, true, 0x7868608e6f50d612)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoUnarmStopWatchCollection$ntoskrnl.exe", 0x33ea58, 0x0, true, 0x229c0da579db19d2)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoUninitializeStopWatch$ntoskrnl.exe", 0x579b50, 0x0, true, 0x6953766f89ea6cb0)
#define _o7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoClearPowerRequestInternal$ntoskrnl.exe", 0x33d21c, 0x0, true, 0x64d3285b4ced07fc)
#define _o8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDiagTraceIRTimerSleepStudyRundown$ntoskrnl.exe", 0x569bbc, 0x0, true, 0x85ec2130c7a9fd51)
#define _o9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDirectedDripsClearDeviceFlags$ntoskrnl.exe", 0x5627e0, 0x0, true, 0x3dc4d16c9288a4d8)
#define _p0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDirectedDripsNotifyPagingDeviceUsage$ntoskrnl.exe", 0x7b36a8, 0x0, true, 0x98b11cc1a2bc350f)
#define _p1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDirectedDripsSetDeviceFlags$ntoskrnl.exe", 0x3c5740, 0x0, true, 0x4c09aabc49821829)
#define _p2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoEnergyContextCleanup$ntoskrnl.exe", 0x65fe2c, 0x0, true, 0xd6d830ef62a17d18)
#define _p3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoEnergyContextInitialize$ntoskrnl.exe", 0x6e00c0, 0x0, true, 0x54c9e564eb56df5e)
#define _p4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoEnergyContextStart$ntoskrnl.exe", 0x6c6398, 0x0, true, 0x7a3390ecb5f81a0b)
#define _p5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoEnergyContextUpdateComponentPower$ntoskrnl.exe", 0x65ccd8, 0x0, true, 0x8a8a51eb41afab4b)
#define _p6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoExecuteIdleCheck$ntoskrnl.exe", 0x275c40, 0x0, true, 0x387260fa0c7d9f40)
#define _p7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoExecutePerfCheck$ntoskrnl.exe", 0x275b90, 0x0, true, 0xd67eb85cef37cd35)
#define _p8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*)>*), "$PoFxCompleteDirectedPowerDown$ntoskrnl.exe", 0x563040, 0x0, true, 0xe0aa2d2b6d030771)
#define _p9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, sdk::function<void(void*, struct nt::device_object_t*, uint32_t)>*, uint8_t, struct nt::driver_object_t*)>*), "$PoFxRegisterDripsWatchdogCallback$ntoskrnl.exe", 0x3c6fd0, 0x0, true, 0x986d0d696e231545)
#define _q0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::pohandle_t*, enum nt::device_power_state_t)>*), "$PoFxSetTargetDripsDevicePowerState$ntoskrnl.exe", 0x8dfb60, 0x0, true, 0xb4ea35235a5d9574)
#define _q1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoGetFrequencyBucket$ntoskrnl.exe", 0x3f0b24, 0x0, true, 0x8973e0cddda898db)
#define _q2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoHiberFileRoot$ntoskrnl.exe", 0xc22e40, 0x0, true, 0x13787f5111791478)
#define _q3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoModernStandbyActionInProgress$ntoskrnl.exe", 0xc22e33, 0x0, true, 0x78627a82e68720f9)
#define _q4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoPowerResetActionInProgress$ntoskrnl.exe", 0xc22e32, 0x0, true, 0x286df52a07bd52ad)
#define _q5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoQueryProcessEnergyTrackingState$ntoskrnl.exe", 0x8ee178, 0x0, true, 0xcc1440c7354f7af0)
#define _q6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoRtcWakeAllowed$ntoskrnl.exe", 0xc24a70, 0x0, true, 0x3be57bb249a543f)
#define _q7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoRunDownDeviceObject$ntoskrnl.exe", 0x33f958, 0x0, true, 0x623a144445a87230)
#define _q8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSessionEngagementUpdate$ntoskrnl.exe", 0x576090, 0x0, true, 0x5f233dfb21d986c1)
#define _q9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSetPowerButtonHoldState$ntoskrnl.exe", 0x562c70, 0x0, true, 0x624bc2e2ed3c8c95)
#define _r0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSetPowerRequestInternal$ntoskrnl.exe", 0x33d3e0, 0x0, true, 0xfbdf5ccac938df5c)
#define _r1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSetProcessEnergyTrackingState$ntoskrnl.exe", 0x6e2cf0, 0x0, true, 0xa8498ace0f73caa6)
#define _r2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSetProcessorQoS$ntoskrnl.exe", 0x5685ec, 0x0, true, 0x1b6399cb178e7a12)
#define _r3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoSkipTickMode$ntoskrnl.exe", 0xcfa094, 0x0, true, 0x993b33e323b3ab4b)
#define _r4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoTraceForceIdleReset$ntoskrnl.exe", 0x569d58, 0x0, true, 0xf5a87f8e62574423)
#define _r5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoTraceForceIdleStateChange$ntoskrnl.exe", 0x569e70, 0x0, true, 0xa429b943462cfd42)
#define _r6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoTtmInitiatePowerStateTransition$ntoskrnl.exe", 0x8eb3b8, 0x0, true, 0x2318f910dcec6ddf)
#define _r7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoAllProcIntrDisabled$ntoskrnl.exe", 0xc22e50, 0x0, true, 0xecf639befdda10ae)
#define _r8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoAllProcessorsDeepIdle$ntoskrnl.exe", 0x241a80, 0x0, true, 0xa1e903e2fd2ea161)
#define _r9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoBlockConsoleSwitch$ntoskrnl.exe", 0x6fd8b0, 0x0, true, 0xc814b7b3160b1b62)
#define _s0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoBroadcastSystemState$ntoskrnl.exe", 0x98e5d0, 0x0, true, 0xa9fc602d6b46696b)
#define _s1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*), "$PoCallDriver$ntoskrnl.exe", 0x3972d0, 0x0, true, 0x841917af681fe7de)
#define _s2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoCancelDeviceNotify$ntoskrnl.exe", 0x36a730, 0x0, true, 0xe233d6359014290f)
#define _s3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoCaptureReasonContext$ntoskrnl.exe", 0x33debc, 0x0, true, 0x94580d3c46c98fdc)
#define _s4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoClearBroadcast$ntoskrnl.exe", 0x762f30, 0x0, true, 0xfb319136bc9aacbe)
#define _s5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum power::request_type_t)>*), "$PoClearPowerRequest$ntoskrnl.exe", 0x33d1c0, 0x0, true, 0x58a34cd48527a8e6)
#define _s6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoClearTransitionMarker$ntoskrnl.exe", 0x779fbc, 0x0, true, 0xe9a5f712b2cd194c)
#define _s7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoCopyDeepIdleMask$ntoskrnl.exe", 0x3268f0, 0x0, true, 0x78c26ec79ceac432)
#define _s8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, uint64_t*)>*), "$PoCpuIdledSinceLastCallImprecise$ntoskrnl.exe", 0x369480, 0x0, true, 0xf3e8f2def9bb43f3)
#define _s9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, struct nt::device_object_t*, struct nt::counted_reason_context_t*)>*), "$PoCreatePowerRequest$ntoskrnl.exe", 0x75d3a0, 0x0, true, 0xbedb5b28fb596168)
#define _t0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, struct nt::device_object_t*, struct nt::device_object_t*, struct nt::counted_reason_context_t*, uint32_t)>*), "$PoCreateThermalRequest$ntoskrnl.exe", 0x77a510, 0x0, true, 0xbb5d01f4a850511d)
#define _t1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$PoDeletePowerRequest$ntoskrnl.exe", 0x6fec70, 0x0, true, 0xb98a6b6f63865b22)
#define _t2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$PoDeleteThermalRequest$ntoskrnl.exe", 0x8de000, 0x0, true, 0xf7f57090320cbb43)
#define _t3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDestroyReasonContext$ntoskrnl.exe", 0x33d178, 0x0, true, 0x7c0caba76ccd29f1)
#define _t4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDeviceAcquireIrp$ntoskrnl.exe", 0x379a04, 0x0, true, 0xd6ba632d4506c88a)
#define _t5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDeviceReleaseIrp$ntoskrnl.exe", 0x37a134, 0x0, true, 0xe0d2c80940afdbfb)
#define _t6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDiagCaptureUsermodeStack$ntoskrnl.exe", 0x5ceda8, 0x0, true, 0x4207349ddd7dee89)
#define _t7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDiagFreeUsermodeStack$ntoskrnl.exe", 0x71eb14, 0x0, true, 0x9b433e90d338cded)
#define _t8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoDiagTraceDeviceRundown$ntoskrnl.exe", 0x710ff4, 0x0, true, 0x70b9482b46500956)
#define _t9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum po::sleep_disable_reason_t, uint32_t, void**)>*), "$PoDisableSleepStates$ntoskrnl.exe", 0x8df250, 0x0, true, 0x84a9877cd502c204)
#define _u0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t*)>*), "$PoEndDeviceBusy$ntoskrnl.exe", 0x562f60, 0x0, true, 0x44511b339cccce0d)
#define _u1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoEndPartitionReplace$ntoskrnl.exe", 0x8e2dd4, 0x0, true, 0x1d6651ae8d874b61)
#define _u2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoEndPowerStateTasks$ntoskrnl.exe", 0x75fb14, 0x0, true, 0x515054b6847b7697)
#define _u3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$PoEnergyEstimationEnabled$ntoskrnl.exe", 0x25a340, 0x0, true, 0xf521afcc675e8070)
#define _u4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxAbandonDevice$ntoskrnl.exe", 0x733b90, 0x0, true, 0x3aaea8ab2e0f672f)
#define _u5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint32_t)>*), "$PoFxActivateComponent$ntoskrnl.exe", 0x2374c0, 0x0, true, 0xe996f8c24d08f57e)
#define _u6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxActivateDevice$ntoskrnl.exe", 0x36b514, 0x0, true, 0x623e2fdb1d03c34e)
#define _u7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxActivateDeviceForSystemTransition$ntoskrnl.exe", 0x380708, 0x0, true, 0xb6445795003e8ea5)
#define _u8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*)>*), "$PoFxCompleteDevicePowerNotRequired$ntoskrnl.exe", 0x3a4180, 0x0, true, 0x345ccb612e5985f7)
#define _u9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t)>*), "$PoFxCompleteIdleCondition$ntoskrnl.exe", 0x314980, 0x0, true, 0x97672a42e0f794d2)
#define _v0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t)>*), "$PoFxCompleteIdleState$ntoskrnl.exe", 0x3a3190, 0x0, true, 0x5d0430c06199aa5)
#define _v1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*)>*), "$PoFxEnableDStateReporting$ntoskrnl.exe", 0x8df880, 0x0, true, 0x7b673b39acfab77f)
#define _v2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint32_t)>*), "$PoFxIdleComponent$ntoskrnl.exe", 0x237150, 0x0, true, 0x43fe616010a589cf)
#define _v3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxIdleDevice$ntoskrnl.exe", 0x36b394, 0x0, true, 0x1e4f1e3534079110)
#define _v4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxInitPowerManagement$ntoskrnl.exe", 0xa69934, 0x0, true, 0x31b597db86869a24)
#define _v5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint32_t, struct po::fx_perf_state_change_t*, void*)>*), "$PoFxIssueComponentPerfStateChange$ntoskrnl.exe", 0x563060, 0x0, true, 0xdb658dc0a8630278)
#define _v6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint32_t, uint32_t, struct po::fx_perf_state_change_t*, void*)>*), "$PoFxIssueComponentPerfStateChangeMultiple$ntoskrnl.exe", 0x563090, 0x0, true, 0x5c34290c787639ea)
#define _v7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*)>*), "$PoFxNotifySurprisePowerOn$ntoskrnl.exe", 0x388090, 0x0, true, 0x43ef23d880d1457a)
#define _v8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxPlatformRequestHandler$ntoskrnl.exe", 0x3c3310, 0x0, true, 0x2047e8cf060dc049)
#define _v9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::pohandle_t*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*), "$PoFxPowerControl$ntoskrnl.exe", 0x389220, 0x0, true, 0xade502f259bd020f)
#define _w0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::pohandle_t*, void*)>*), "$PoFxPowerOnCrashdumpDevice$ntoskrnl.exe", 0x563140, 0x0, true, 0x2c65768c58cd2539)
#define _w1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxPrepareDevice$ntoskrnl.exe", 0x36aba0, 0x0, true, 0x564d5aeca961433c)
#define _w2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, void*)>*), "$PoFxProcessorNotification$ntoskrnl.exe", 0x3ca010, 0x0, true, 0xac7d603e12b8f1e6)
#define _w3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, uint32_t, uint32_t, uint64_t*)>*), "$PoFxQueryCurrentComponentPerfState$ntoskrnl.exe", 0x5631a0, 0x0, true, 0x251213b1609dc194)
#define _w4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, uint64_t, sdk::function<void(void*, uint32_t, uint8_t, void*)>*, struct po::fx_component_perf_info_t*, struct po::fx_component_perf_info_t**)>*), "$PoFxRegisterComponentPerfStates$ntoskrnl.exe", 0x8df980, 0x0, true, 0x822ed0de0ec34a57)
#define _w5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxRegisterCoreDevice$ntoskrnl.exe", 0x79bb80, 0x0, true, 0xe1e372bdfc053f01)
#define _w6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::pohandle_t*)>*), "$PoFxRegisterCrashdumpDevice$ntoskrnl.exe", 0x779be0, 0x0, true, 0x870ba36c911a5408)
#define _w7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxRegisterDebugger$ntoskrnl.exe", 0xa6fa48, 0x0, true, 0x664e136ee96757)
#define _w8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct po::fx_device_v1_t*, struct nt::pohandle_t**)>*), "$PoFxRegisterDevice$ntoskrnl.exe", 0x79bcb0, 0x0, true, 0xd6e1a5dd4c361951)
#define _w9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxRegisterPlugin$ntoskrnl.exe", 0x8dfa00, 0x0, true, 0x3984f64180710522)
#define _x0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxRegisterPluginEx$ntoskrnl.exe", 0x563200, 0x0, true, 0xfa9acf5fd982bdcc)
#define _x1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct po::fx_primary_device_t*, struct nt::pohandle_t**)>*), "$PoFxRegisterPrimaryDevice$ntoskrnl.exe", 0x8dfa20, 0x0, true, 0x263f70ad8eb1e307)
#define _x2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*)>*), "$PoFxReportDevicePoweredOn$ntoskrnl.exe", 0x39c640, 0x0, true, 0xc63f90c09da8dcf1)
#define _x3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxSendSystemLatencyUpdate$ntoskrnl.exe", 0x35d0b8, 0x0, true, 0x1a7199ed28a5ceb3)
#define _x4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint64_t)>*), "$PoFxSetComponentLatency$ntoskrnl.exe", 0x563220, 0x0, true, 0x26083818060bf6a4)
#define _x5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint64_t)>*), "$PoFxSetComponentResidency$ntoskrnl.exe", 0x563270, 0x0, true, 0x8eacfb747ba1fd69)
#define _x6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint8_t)>*), "$PoFxSetComponentWake$ntoskrnl.exe", 0x5632c0, 0x0, true, 0x78266ec7ec529114)
#define _x7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint64_t)>*), "$PoFxSetDeviceIdleTimeout$ntoskrnl.exe", 0x3c3db0, 0x0, true, 0x3f3b746f9996c0bf)
#define _x8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*)>*), "$PoFxStartDevicePowerManagement$ntoskrnl.exe", 0x3b9c10, 0x0, true, 0xa6503be976591b21)
#define _x9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoFxSystemLatencyNotify$ntoskrnl.exe", 0x35d1d8, 0x0, true, 0xa46f1084530869a6)
#define _y0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*)>*), "$PoFxUnregisterDevice$ntoskrnl.exe", 0x7be410, 0x0, true, 0x87e226c40febed4f)
#define _y1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoGetIdleTimes$ntoskrnl.exe", 0x2056d8, 0x0, true, 0x5ede8c66d440ee7f)
#define _y2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoGetLightestSystemStateForEject$ntoskrnl.exe", 0x8dc56c, 0x0, true, 0x57b7397f5d033c97)
#define _y3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoGetPerfStateAndParkingInfo$ntoskrnl.exe", 0x313e08, 0x0, true, 0xf7083da6939e77f)
#define _y4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoGetProcessorIdleAccounting$ntoskrnl.exe", 0x55f500, 0x0, true, 0x263564a3dbf054f7)
#define _y5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoGetRequester$ntoskrnl.exe", 0x33dfe4, 0x0, true, 0xee32cec3ac867333)
#define _y6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::irp_t*)>*), "$PoGetSystemWake$ntoskrnl.exe", 0x3a41f0, 0x0, true, 0x4d82eee98c421fe0)
#define _y7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, enum po::thermal_request_type_t)>*), "$PoGetThermalRequestSupport$ntoskrnl.exe", 0x7b1990, 0x0, true, 0x6956403dd23e78f5)
#define _y8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoHandleIrp$ntoskrnl.exe", 0x395064, 0x0, true, 0x900929f66e947c7d)
#define _y9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoHiberInProgress$ntoskrnl.exe", 0xc22e34, 0x0, true, 0x9de3d69aed944262)
#define _z0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoIdle$ntoskrnl.exe", 0x26fde0, 0x0, true, 0xe387ef31e79a2e2b)
#define _z1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoInitDriverServices$ntoskrnl.exe", 0xa6de6c, 0x0, true, 0xbf0b46db2b399890)
#define _z2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoInitHiberServices$ntoskrnl.exe", 0x77a868, 0x0, true, 0x223f59e29bdf9392)
#define _z3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoInitSystem$ntoskrnl.exe", 0xa3be4c, 0x0, true, 0xbd2838c8c824c41c)
#define _z4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoInitializeBroadcast$ntoskrnl.exe", 0x762f88, 0x0, true, 0x50e377ec8b0c6319)
#define _z5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoInitializePrcb$ntoskrnl.exe", 0x999854, 0x0, true, 0x2b2c592149332b20)
#define _z6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoInitiateProcessorWake$ntoskrnl.exe", 0x55f530, 0x0, true, 0x29ae599242afa53b)
#define _z7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PoIssueCoalescingNotification$ntoskrnl.exe", 0x568b08, 0x0, true, 0x5822edd54818e3a)
#define _z8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(enum po::latency_hint_type_t)>*), "$PoLatencySensitivityHint$ntoskrnl.exe", 0x37ad00, 0x0, true, 0xe217bdd4edd448c3)
#define _z9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint8_t)>*), "$PoNotifyMediaBuffering$ntoskrnl.exe", 0x369890, 0x0, true, 0x6891552fa6cb1e64)
#else
#define _a0(...) __VA_ARGS__
#define _a1(...) __VA_ARGS__
#define _a2(...) __VA_ARGS__
#define _a3(...) __VA_ARGS__
#define _a4(...) __VA_ARGS__
#define _a5(...) __VA_ARGS__
#define _a6(...) __VA_ARGS__
#define _a7(...) __VA_ARGS__
#define _a8(...) __VA_ARGS__
#define _a9(...) __VA_ARGS__
#define _b0(...) __VA_ARGS__
#define _b1(...) __VA_ARGS__
#define _b2(...) __VA_ARGS__
#define _b3(...) __VA_ARGS__
#define _b4(...) __VA_ARGS__
#define _b5(...) __VA_ARGS__
#define _b6(...) __VA_ARGS__
#define _b7(...) __VA_ARGS__
#define _b8(...) __VA_ARGS__
#define _b9(...) __VA_ARGS__
#define _c0(...) __VA_ARGS__
#define _c1(...) __VA_ARGS__
#define _c2(...) __VA_ARGS__
#define _c3(...) __VA_ARGS__
#define _c4(...) __VA_ARGS__
#define _c5(...) __VA_ARGS__
#define _c6(...) __VA_ARGS__
#define _c7(...) __VA_ARGS__
#define _c8(...) __VA_ARGS__
#define _c9(...) __VA_ARGS__
#define _d0(...) __VA_ARGS__
#define _d1(...) __VA_ARGS__
#define _d2(...) __VA_ARGS__
#define _d3(...) __VA_ARGS__
#define _d4(...) __VA_ARGS__
#define _d5(...) __VA_ARGS__
#define _d6(...) __VA_ARGS__
#define _d7(...) __VA_ARGS__
#define _d8(...) __VA_ARGS__
#define _d9(...) __VA_ARGS__
#define _e0(...) __VA_ARGS__
#define _e1(...) __VA_ARGS__
#define _e2(...) __VA_ARGS__
#define _e3(...) __VA_ARGS__
#define _e4(...) __VA_ARGS__
#define _e5(...) __VA_ARGS__
#define _e6(...) __VA_ARGS__
#define _e7(...) __VA_ARGS__
#define _e8(...) __VA_ARGS__
#define _e9(...) __VA_ARGS__
#define _f0(...) __VA_ARGS__
#define _f1(...) __VA_ARGS__
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#define _n9(...) __VA_ARGS__
#define _o0(...) __VA_ARGS__
#define _o1(...) __VA_ARGS__
#define _o2(...) __VA_ARGS__
#define _o3(...) __VA_ARGS__
#define _o4(...) __VA_ARGS__
#define _o5(...) __VA_ARGS__
#define _o6(...) __VA_ARGS__
#define _o7(...) __VA_ARGS__
#define _o8(...) __VA_ARGS__
#define _o9(...) __VA_ARGS__
#define _p0(...) __VA_ARGS__
#define _p1(...) __VA_ARGS__
#define _p2(...) __VA_ARGS__
#define _p3(...) __VA_ARGS__
#define _p4(...) __VA_ARGS__
#define _p5(...) __VA_ARGS__
#define _p6(...) __VA_ARGS__
#define _p7(...) __VA_ARGS__
#define _p8(...) __VA_ARGS__
#define _p9(...) __VA_ARGS__
#define _q0(...) __VA_ARGS__
#define _q1(...) __VA_ARGS__
#define _q2(...) __VA_ARGS__
#define _q3(...) __VA_ARGS__
#define _q4(...) __VA_ARGS__
#define _q5(...) __VA_ARGS__
#define _q6(...) __VA_ARGS__
#define _q7(...) __VA_ARGS__
#define _q8(...) __VA_ARGS__
#define _q9(...) __VA_ARGS__
#define _r0(...) __VA_ARGS__
#define _r1(...) __VA_ARGS__
#define _r2(...) __VA_ARGS__
#define _r3(...) __VA_ARGS__
#define _r4(...) __VA_ARGS__
#define _r5(...) __VA_ARGS__
#define _r6(...) __VA_ARGS__
#define _r7(...) __VA_ARGS__
#define _r8(...) __VA_ARGS__
#define _r9(...) __VA_ARGS__
#define _s0(...) __VA_ARGS__
#define _s1(...) __VA_ARGS__
#define _s2(...) __VA_ARGS__
#define _s3(...) __VA_ARGS__
#define _s4(...) __VA_ARGS__
#define _s5(...) __VA_ARGS__
#define _s6(...) __VA_ARGS__
#define _s7(...) __VA_ARGS__
#define _s8(...) __VA_ARGS__
#define _s9(...) __VA_ARGS__
#define _t0(...) __VA_ARGS__
#define _t1(...) __VA_ARGS__
#define _t2(...) __VA_ARGS__
#define _t3(...) __VA_ARGS__
#define _t4(...) __VA_ARGS__
#define _t5(...) __VA_ARGS__
#define _t6(...) __VA_ARGS__
#define _t7(...) __VA_ARGS__
#define _t8(...) __VA_ARGS__
#define _t9(...) __VA_ARGS__
#define _u0(...) __VA_ARGS__
#define _u1(...) __VA_ARGS__
#define _u2(...) __VA_ARGS__
#define _u3(...) __VA_ARGS__
#define _u4(...) __VA_ARGS__
#define _u5(...) __VA_ARGS__
#define _u6(...) __VA_ARGS__
#define _u7(...) __VA_ARGS__
#define _u8(...) __VA_ARGS__
#define _u9(...) __VA_ARGS__
#define _v0(...) __VA_ARGS__
#define _v1(...) __VA_ARGS__
#define _v2(...) __VA_ARGS__
#define _v3(...) __VA_ARGS__
#define _v4(...) __VA_ARGS__
#define _v5(...) __VA_ARGS__
#define _v6(...) __VA_ARGS__
#define _v7(...) __VA_ARGS__
#define _v8(...) __VA_ARGS__
#define _v9(...) __VA_ARGS__
#define _w0(...) __VA_ARGS__
#define _w1(...) __VA_ARGS__
#define _w2(...) __VA_ARGS__
#define _w3(...) __VA_ARGS__
#define _w4(...) __VA_ARGS__
#define _w5(...) __VA_ARGS__
#define _w6(...) __VA_ARGS__
#define _w7(...) __VA_ARGS__
#define _w8(...) __VA_ARGS__
#define _w9(...) __VA_ARGS__
#define _x0(...) __VA_ARGS__
#define _x1(...) __VA_ARGS__
#define _x2(...) __VA_ARGS__
#define _x3(...) __VA_ARGS__
#define _x4(...) __VA_ARGS__
#define _x5(...) __VA_ARGS__
#define _x6(...) __VA_ARGS__
#define _x7(...) __VA_ARGS__
#define _x8(...) __VA_ARGS__
#define _x9(...) __VA_ARGS__
#define _y0(...) __VA_ARGS__
#define _y1(...) __VA_ARGS__
#define _y2(...) __VA_ARGS__
#define _y3(...) __VA_ARGS__
#define _y4(...) __VA_ARGS__
#define _y5(...) __VA_ARGS__
#define _y6(...) __VA_ARGS__
#define _y7(...) __VA_ARGS__
#define _y8(...) __VA_ARGS__
#define _y9(...) __VA_ARGS__
#define _z0(...) __VA_ARGS__
#define _z1(...) __VA_ARGS__
#define _z2(...) __VA_ARGS__
#define _z3(...) __VA_ARGS__
#define _z4(...) __VA_ARGS__
#define _z5(...) __VA_ARGS__
#define _z6(...) __VA_ARGS__
#define _z7(...) __VA_ARGS__
#define _z8(...) __VA_ARGS__
#define _z9(...) __VA_ARGS__
#endif