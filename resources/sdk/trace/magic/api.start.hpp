#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const struct tlg::provider_t*, uint8_t, uint64_t)>*), "$TraceLoggingProviderEnabled$ntoskrnl.exe", 0x0, 0x0, false, 0x719153ee3fe66941)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<sdk::hresult(const struct tlg::provider_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*)>*), "$TraceLoggingRegisterEx$ntoskrnl.exe", 0x0, 0x0, false, 0x397a34008e622046)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct tlg::provider_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*)>*), "$TraceLoggingRegisterEx_EtwRegister_EtwSetInformation$ntoskrnl.exe", 0x777ff4, 0x0, true, 0x12b95ed0883832ba)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct trace::logging_metadata_t*), "$_TraceLoggingMetadata$ntoskrnl.exe", 0x215d0, 0x0, true, 0x2ae793dfe5020052)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(const uint8_t*), "$_TraceLoggingMetadataEnd$ntoskrnl.exe", 0x2d703, 0x0, true, 0x11210470b2cbc2cf)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceGreAcquireSemaphoreEx$win32kfull.sys", 0x0, 0x0, false, 0x47fc960071ff5d76)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceGreReleaseSemaphore$win32kfull.sys", 0x0, 0x0, false, 0x21830068a1094a1d)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingAutoRotationStateEvent$win32kfull.sys", 0x0, 0x0, false, 0x67893affdcb4dd13)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingDesktopAllocFailureEvent$win32kfull.sys", 0x0, 0x0, false, 0x802d77d30909895d)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingDesktopAllocFailureEventForSession$win32kfull.sys", 0x0, 0x0, false, 0x4ec006313ee38e1b)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingEdgePalmRejection$win32kfull.sys", 0x0, 0x0, false, 0x3880f809a876dd6c)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingGlobalDCsInUse$win32kbase.sys", 0x0, 0x0, false, 0xc60e9c314c2dc1e9)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingHidConfigEvent$win32kfull.sys", 0x0, 0x0, false, 0xa65dffebb9db6ef7)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingHotkey$win32kfull.sys", 0x0, 0x0, false, 0x12aca27cc417c5be)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingProcessDCsInUse$win32kbase.sys", 0x0, 0x0, false, 0x2f70a613455428c4)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingRapidHpdComplete$win32kfull.sys", 0x0, 0x0, false, 0x955f93c37bfdfe55)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingRimHidDeviceArrivedEvent$win32kfull.sys", 0x0, 0x0, false, 0x1b0bdeaa222457bf)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingRimHidDeviceRemovedEvent$win32kfull.sys", 0x0, 0x0, false, 0x2eb9ae641ac03850)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingStartingRecalc$win32kfull.sys", 0x0, 0x0, false, 0x8f986f14613cf969)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingStubInvalidParamEvent$win32kfull.sys", 0x0, 0x0, false, 0x7739c21e4f7e5269)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingUpdateProcessedRecalcCounters$win32kfull.sys", 0x0, 0x0, false, 0xf21d204ee4a7503)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingLargeDeviceParallelCount$win32kbase.sys", 0x14a39c, 0x0, true, 0x941cd380a97c7030)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingMouseWheelRoutingValueAtStartup$win32kfull.sys", 0x0, 0x0, false, 0x7b6d1833e89fc3f8)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingProcessUsageOnTerminationEvent$win32kfull.sys", 0x0, 0x0, false, 0xca2b102a67a88e1)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceWindowResizeTelemetry$win32kfull.sys", 0x20ce68, 0x0, true, 0x41b74183db7e4451)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceChildWindowDpiTelemetry$win32kfull.sys", 0x74bc, 0x0, true, 0x8105f0a1b17eddc8)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingCreateWindowFailed$win32kfull.sys", 0x2255a4, 0x0, true, 0x681fd862b18adfc1)
#define _o7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingDeadLowLevelHook$win32kbase.sys", 0x14a330, 0x0, true, 0x1bf48d053759f79a)
#define _o8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingDrawMenuBarTempCalled$win32kfull.sys", 0x225624, 0x0, true, 0x2b1c86a859ea854a)
#define _o9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingGDIScaledAppEvent$win32kfull.sys", 0x151174, 0x0, true, 0xe98b4db7f4e9f41b)
#define _p0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPenHotkey$win32kfull.sys", 0x225cc0, 0x0, true, 0xf9a314a755ce3165)
#define _p1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPTPAAPKeyPress$win32kfull.sys", 0x226490, 0x0, true, 0x923eaac68c5b5937)
#define _p2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingSendMixedModeTelemetry$win32kfull.sys", 0xda710, 0x0, true, 0x18fc5e06360a7744)
#define _p3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingSlowLowLevelHook$win32kfull.sys", 0x225ff0, 0x0, true, 0xe3f716f6104eb62c)
#define _p4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingSuppressQuickLaunch$win32kfull.sys", 0x2260dc, 0x0, true, 0x7e8166d3c8650ea0)
#define _p5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingTouchInjection$win32kfull.sys", 0x2261f8, 0x0, true, 0xa027d724909e99a1)
#define _p6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingYieldedHotkey$win32kfull.sys", 0x2263c8, 0x0, true, 0xd148ef3c2fa77d18)
#define _p7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingBSDRRaceConditionEvent$win32kfull.sys", 0x22552c, 0x0, true, 0x5979f4f57bfae6ab)
#define _p8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingHitTestWindowTargeting$win32kfull.sys", 0x2256c8, 0x0, true, 0x7fe367039eb0796)
#define _p9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIntObjUsageSummaryEvent$win32kfull.sys", 0x22579c, 0x0, true, 0x8c712a4b9301f8ad)
#define _q0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingMouseWheelRoutingModeChange$win32kfull.sys", 0x225a18, 0x0, true, 0x5f0621e12a13a119)
#define _q1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingProcessMonitorInfoUpdateHelper$win32kfull.sys", 0x4c8c8, 0x0, true, 0xd9482577a43f575f)
#define _q2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingProcessUsageDataAggregationHelper$win32kfull.sys", 0x4f730, 0x0, true, 0xa61244310815a658)
#define _q3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPTPGestureUsageEvent$win32kbase.sys", 0x1af400, 0x0, true, 0xd9733bddeccf3f44)
#define _q4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPTPKeyToAATimeDeltas$win32kfull.sys", 0x225a8c, 0x0, true, 0x5cf619ae58fb1737)
#define _q5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPTPKeyToGestureTiming$win32kfull.sys", 0x225b4c, 0x0, true, 0xc281441196d88dfd)
#define _q6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPTPSettingsConfigEvent$win32kbase.sys", 0x1af5fc, 0x0, true, 0x199f50539a9f0fac)
#define _q7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPTPUsageDetailsEvent$win32kbase.sys", 0x1af784, 0x0, true, 0x853e1f2e8bbda1bb)
#define _q8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPTPWarpBack$win32kfull.sys", 0x226640, 0x0, true, 0x143cba0d51052c6)
#define _q9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingScreenOrientationArStateChangeEvent$win32kfull.sys", 0x225ec4, 0x0, true, 0x4148f17d63d0d8bd)
#define _r0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingScreenOrientationChangeEvent$win32kfull.sys", 0x225f58, 0x0, true, 0x8bc86b5ba0212494)
#define _r1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingShowWindowDPIAwarenessEvent$win32kfull.sys", 0xda63c, 0x0, true, 0x54ff39d1e6d0fe21)
#define _r2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingSPISetDesktopDPIOverrideEvent$win32kfull.sys", 0x225d4c, 0x0, true, 0x842284156b00cbab)
#define _r3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingSPISetMenuDropAlignmentEvent$win32kfull.sys", 0x128da0, 0x0, true, 0x6cadeb8189a8f736)
#define _r4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingSPISetModernDPIOverrideEvent$win32kfull.sys", 0x225dcc, 0x0, true, 0xbf2d2485ccc84f26)
#define _r5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingSPISetPenVisualizationEvent$win32kfull.sys", 0x225e4c, 0x0, true, 0x874aba83f8469f97)
#define _r6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingSysQueueLockedRetryFailed$win32kfull.sys", 0x226180, 0x0, true, 0xa9210e8e30734c13)
#define _r7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingUserIsActive$win32kfull.sys", 0xd8a60, 0x0, true, 0xae4eafd7146524f3)
#define _r8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingWinPHotKeyEvent$win32kfull.sys", 0x226324, 0x0, true, 0xa6064dc907bf6edc)
#define _r9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIdleConfiguration$hidclass.sys", 0x0, 0x0, false, 0xbba109da5b7af998)
#define _s0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIrpIoctlFailedWithStatus$hidclass.sys", 0x0, 0x0, false, 0xd63315a1216cc1b5)
#define _s1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIrpPnpFailed$hidclass.sys", 0x0, 0x0, false, 0xda8a2400b40ddca2)
#define _s2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingUnreadKeyboardReportsFlushed$hidclass.sys", 0x0, 0x0, false, 0x2537d538cef885f1)
#define _s3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingCollectionFileClose$hidclass.sys", 0x1575c, 0x0, true, 0x42dc1a030187456f)
#define _s4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingInputSuppressionEntry$hidclass.sys", 0x1da18, 0x0, true, 0xb91b5bf97f44c6ae)
#define _s5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPrivilegeNotFoundForCreateWithSFAC$hidclass.sys", 0x1043c, 0x0, true, 0x4b3c9d65c34d4a4c)
#define _s6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct tlg::provider_t*)>*), "$TraceLoggingRegister_EtwRegister_EtwSetInformation$hidclass.sys", 0x2d0a4, 0x0, true, 0x63bd95e6606417bd)
#define _s7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingStateExit_Dx_NoWake$hidclass.sys", 0x11cbc, 0x0, true, 0xc3e433ab60120680)
#define _s8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingStateExit_WaitingForRequiredCallback_Dx_NoWake$hidclass.sys", 0x11dd8, 0x0, true, 0x5277fc947b8fd755)
#define _s9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingStateMachineUnhandledEvent$hidclass.sys", 0x1e000, 0x0, true, 0x4cc29786821f5391)
#define _t0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingWaitWakeCompletedInSuppressInput$hidclass.sys", 0x1d324, 0x0, true, 0xaafa34c241d3d27f)
#define _t1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingAddDeviceFailed$hidclass.sys", 0x1b558, 0x0, true, 0x4c5bd5b240084cd3)
#define _t2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingCopyDeviceRelationsFailed$hidclass.sys", 0x18d34, 0x0, true, 0xa488b13c9add9aaa)
#define _t3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingCreateFdoFailed$hidclass.sys", 0x1b5fc, 0x0, true, 0x95b2743004d03c8d)
#define _t4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingCreatePdoFailed$hidclass.sys", 0x1b6a0, 0x0, true, 0x7301ccb32a46a9f9)
#define _t5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingDerefDriverExtFailed$hidclass.sys", 0x14940, 0x0, true, 0xca67e7ffed185c36)
#define _t6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingDeviceResetNotificationFailed$hidclass.sys", 0x1ed28, 0x0, true, 0x83117e78851484bb)
#define _t7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingEnqueueDriverExtFailed$hidclass.sys", 0x1499c, 0x0, true, 0x5c3403cfb24fe5e)
#define _t8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingGetClassCollectionFailed$hidclass.sys", 0x18d90, 0x0, true, 0x399d5678602c90a4)
#define _t9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingGetCollectionDescFailed$hidclass.sys", 0x18e54, 0x0, true, 0x7c2466299976cc1d)
#define _u0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingGetImageBaseFailed$hidclass.sys", 0x18f18, 0x0, true, 0x61278dc11fe207ec)
#define _u1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingGetReportIdentifierFailed$hidclass.sys", 0x18f90, 0x0, true, 0xb399e87c4c745cdb)
#define _u2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingGetSetReportFailed$hidclass.sys", 0x19064, 0x0, true, 0xc7ceffc5d05cd967)
#define _u3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIntegerOverflow$hidclass.sys", 0x1b780, 0x0, true, 0x917dd5b8b0b6dd42)
#define _u4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingInterruptReadCompleteFailed$hidclass.sys", 0x17084, 0x0, true, 0xcf14968d1f7fbb7a)
#define _u5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIoAllocateDriverObjectExtensionFailed$hidclass.sys", 0x14a44, 0x0, true, 0xcdc6b7ea4e767b2b)
#define _u6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIoAllocateIrpFailed$hidclass.sys", 0x17140, 0x0, true, 0xdd91bc796c39fffe)
#define _u7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIoAllocateWorkItemFailed$hidclass.sys", 0x1775c, 0x0, true, 0x339cbb16ec579de)
#define _u8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIoRegisterDeviceInterfaceFailed$hidclass.sys", 0x1b89c, 0x0, true, 0x42ab2bfdbcfaf898)
#define _u9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIrpCloseFailed$hidclass.sys", 0x15940, 0x0, true, 0x9d4695c22ff4698c)
#define _v0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIrpCreateFailed$hidclass.sys", 0x159fc, 0x0, true, 0x2ad772d6a820ca75)
#define _v1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIrpInternalIoctlFailed$hidclass.sys", 0x15ab8, 0x0, true, 0xd097a2803ba88dde)
#define _v2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIrpIoctlFailed$hidclass.sys", 0x15b90, 0x0, true, 0x25032961da00a173)
#define _v3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingIrqlTooHigh$hidclass.sys", 0x19154, 0x0, true, 0x7e15957bf4ed1730)
#define _v4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingNoCollectionDescriptor$hidclass.sys", 0x1b994, 0x0, true, 0xa268ad4e2b070ad7)
#define _v5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingNoTopLevelCollection$hidclass.sys", 0x1ba58, 0x0, true, 0x271569dd0562fdaa)
#define _v6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingParserError$hidclass.sys", 0x19210, 0x0, true, 0xdb67faf381be2fe8)
#define _v7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingParserErrorWithParam$hidclass.sys", 0x192cc, 0x0, true, 0x50bd46ed7cd5a259)
#define _v8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPoFxRegisterDeviceFailed$hidclass.sys", 0x1db30, 0x0, true, 0xab2e7b4bc47e3351)
#define _v9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingPreparsedDataLengthTruncated$hidclass.sys", 0x1bb10, 0x0, true, 0xaf07a61e9c919a0c)
#define _w0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingRefDriverExtFailed$hidclass.sys", 0x14ac0, 0x0, true, 0xf340e5c7725b46ec)
#define _w1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingRevisionMismatch$hidclass.sys", 0x14b1c, 0x0, true, 0x500a8d9fbf38ac6b)
#define _w2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingStartDeviceFailed$hidclass.sys", 0x1bc98, 0x0, true, 0x17c1028a0a277fa4)
#define _w3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingStrSafeOverflow$hidclass.sys", 0x193a8, 0x0, true, 0x8cabf4473e37f60)
#define _w4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingWppRecorderFailed$hidclass.sys", 0x14bd8, 0x0, true, 0xbc494a05210f3e2e)
#define _w5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingZwOpenKeyFailed$hidclass.sys", 0x150e8, 0x0, true, 0xf6b0285ea39fbbfd)
#define _w6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$traceInited$ndis.sys", 0xe4360, 0x0, true, 0xf6e21450fb2aff1d)
#define _w7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingResetLatencyBuckets$storport.sys", 0x605a8, 0x0, true, 0xc15afb424222575d)
#define _w8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct tlg::provider_t*)>*), "$TraceLoggingRegister$ci.dll", 0x0, 0x0, false, 0xa6d92e3d126bae39)
#define _w9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceFunc$netio.sys", 0x142ac, 0x0, true, 0x48abc3b1feba9679)
#define _x0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceFilterEnginepEvaluateBinaryRuleEx$tcpip.sys", 0x0, 0x0, false, 0x30f4ba7c076ec4cd)
#define _x1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceFilterEnginepEvaluateListRule$tcpip.sys", 0x0, 0x0, false, 0xd64f36987001a7a1)
#define _x2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceVailGuestPortFailure$tcpip.sys", 0xf44b8, 0x0, true, 0xb7d2aab1512e0293)
#define _x3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceFilterEngineAllowedByRuleEx2$tcpip.sys", 0x1b24d0, 0x0, true, 0x55216577ad2d4f0)
#define _x4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceFilterEngineEvaluateFilterExpression$tcpip.sys", 0x1b2534, 0x0, true, 0x17d9e059a8f6707e)
#define _x5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceFilterEngineStoreFilterRulesInternal$tcpip.sys", 0x1b2688, 0x0, true, 0xb9b096c2e4e6c6a7)
#define _x6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceFilterEngineValidateAndStoreRules$tcpip.sys", 0x1b27b0, 0x0, true, 0x7780b1b6ee338542)
#define _x7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceFilterEngineValidateRule$tcpip.sys", 0x1b2840, 0x0, true, 0xf4783f5c192c51d9)
#define _x8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingWriteMiracastStartSessionTotalTimeMs$dxgkrnl.sys", 0x0, 0x0, false, 0xc1df1b7c8be84574)
#define _x9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceAdapterLockAcquire$dxgkrnl.sys", 0xfb070, 0x0, true, 0x748ee36075409f3)
#define _y0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceAdapterLockRelease$dxgkrnl.sys", 0xfb070, 0x0, true, 0x7541f264de2d8fb3)
#define _y1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceDxgkBlockThread$dxgkrnl.sys", 0x1a8c0, 0x0, true, 0x672fe12ead002a84)
#define _y2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceDxgkContext$dxgkrnl.sys", 0x24cd0, 0x0, true, 0x44a218e46c69bbbd)
#define _y3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceDxgkDevice$dxgkrnl.sys", 0x24eb0, 0x0, true, 0xf3ad5333b88249b8)
#define _y4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceDxgkFunctionProfiler$dxgkrnl.sys", 0x24120, 0x0, true, 0x6ae7a52ede9d837f)
#define _y5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceDxgkPatchLocationList$dxgkrnl.sys", 0x42158, 0x0, true, 0x8a0aa9861211d672)
#define _y6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceDxgkPerformanceWarning$dxgkrnl.sys", 0x241b0, 0x0, true, 0x8f701c98b01dd034)
#define _y7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLogDpiInfo$dxgkrnl.sys", 0x134674, 0x0, true, 0xabbbbf8da80b33d9)
#define _y8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingWriteMiracastSessionStart$dxgkrnl.sys", 0x57c4c, 0x0, true, 0x90c2926cccd28c2c)
#define _y9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingWriteMiracastSessionStop$dxgkrnl.sys", 0x57ec4, 0x0, true, 0x16bc0d5ae92baebf)
#define _z0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceLoggingWriteMiracastStartSessionEntry$dxgkrnl.sys", 0x58258, 0x0, true, 0x474f68822c306531)
#define _z1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(const struct tlg::provider_t*)>*), "$TraceLoggingUnregister_EtwEventUnregister$dxgi.dll", 0x4829c, 0x0, true, 0x8dd39b55a6619fd8)
#define _z2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<sdk::hresult(const struct tlg::provider_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*)>*), "$TraceLoggingRegisterEx_EventRegister_EventSetInformation$dxgi.dll", 0x0, 0x0, false, 0x3215b9f3fbf36250)
#define _z3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<sdk::hresult(const struct tlg::provider_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*)>*), "$TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation$dxgi.dll", 0x1e530, 0x0, true, 0xf240792da8f895fe)
#else
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
#endif