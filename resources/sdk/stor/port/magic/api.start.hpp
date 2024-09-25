#if !IN_PARSER
#define _a00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRegGetDeviceDumpSupportLevel$storport.sys", 0x16500, 0x0, true, 0x99981d65e7adf095)
#define _a01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRegisterForRuntimePowerManagement$storport.sys", 0x3c8f8, 0x0, true, 0xc8ba14bc48160759)
#define _a02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRegisterPerfStates$storport.sys", 0x3cf64, 0x0, true, 0x59feb8a3b4553edf)
#define _a03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidReleaseAdapterRemoveLock$storport.sys", 0x306a8, 0x0, true, 0xe86498dc039da6d1)
#define _a04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidReleaseAdapterRemoveLockAndWait$storport.sys", 0x306cc, 0x0, true, 0xc1043ebcce28ed00)
#define _a05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidReleasePortData$storport.sys", 0xc8a4, 0x0, true, 0x3b2d8c53152f36f5)
#define _a06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRemapScatterGatherList$storport.sys", 0x7d008, 0x0, true, 0xe401d3c97efb06a1)
#define _a07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRemoveIoQueue$storport.sys", 0x16ea8, 0x0, true, 0xbc762a023399c55a)
#define _a08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRemovePortDriver$storport.sys", 0x33458, 0x0, true, 0x54cc910ea2978cba)
#define _a09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRemoveTrailingBlanks$storport.sys", 0xc598, 0x0, true, 0x4d2da064cfab4ecf)
#define _a10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRestartIoQueue$storport.sys", 0x82cc, 0x0, true, 0xa64f0765897fb8ca)
#define _a11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidResumeAdapterQueue$storport.sys", 0x102fc, 0x0, true, 0x5aa3b32b693ff20)
#define _a12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidResumeAndRestartAdapterQueues$storport.sys", 0x30708, 0x0, true, 0x75226a09e81b1da3)
#define _a13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidResumeAndRestartUnitQueue$storport.sys", 0x478f4, 0x0, true, 0x7fda2f4c39899684)
#define _a14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct io::queue_t*)>*), "$RaidResumeIoQueue$storport.sys", 0xe76c, 0x0, true, 0x5402061d66fa7751)
#define _a15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidResumeUnitQueue$storport.sys", 0xe640, 0x0, true, 0x4a845dba1ccb9d85)
#define _a16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidScsiErrorToIoError$storport.sys", 0x43290, 0x0, true, 0xf7f138a30ee2d0ed)
#define _a17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSecondaryDumpDeregister$storport.sys", 0x55ab8, 0x0, true, 0x5ac9d13c52e558c5)
#define _a18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSecondaryDumpRegister$storport.sys", 0x55b00, 0x0, true, 0x645454c218f4254d)
#define _a19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSelectDeviceDumpCollectionMode$storport.sys", 0x163dc, 0x0, true, 0x3f44e62178aa59bf)
#define _a20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSetD3Cold$storport.sys", 0x1780c, 0x0, true, 0x9ccc74dedc976711)
#define _a21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSetUnitPauseTimer$storport.sys", 0xe218, 0x0, true, 0xcf1d56dff8901663)
#define _a22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct stor::port::srbex_data_bidirectional_t*(struct stor::port::storage_request_block_t*)>*), "$RaidSrbExGetBidirectionalData$storport.sys", 0x403e0, 0x0, true, 0x5b1f960161afd4fb)
#define _a23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSrbIsPowerRequired$storport.sys", 0x341a0, 0x0, true, 0xc61f9bb076aa02df)
#define _a24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSrbStatusToNtStatus$storport.sys", 0xc0d0, 0x0, true, 0xb46b2316cdb2179f)
#define _a25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidStallDeviceQueue$storport.sys", 0x118cc, 0x0, true, 0xc9aa84c40bb8effb)
#define _a26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidStandardSecondaryCallbackRecord$storport.sys", 0x67780, 0x0, true, 0x2d536fe5735e6d33)
#define _a27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidStandardSecondaryDumpCallback$storport.sys", 0x55b70, 0x0, true, 0xda0be7bfd7f8d571)
#define _a28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidStartIoPacket$storport.sys", 0xa730, 0x0, true, 0xb3f510884030b4bc)
#define _a29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RaidStorPoFxComponentVersionAndSizeIsValid$storport.sys", 0x35870, 0x0, true, 0x7a8d1f533159c953)
#define _a30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidStorPoFxDeviceVersionAndSizeIsValid$storport.sys", 0x358a0, 0x0, true, 0x8b85e23b48e6dd0b)
#define _a31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSyncAcpiEvalMethod$storport.sys", 0x43480, 0x0, true, 0x1ea130de7d06e069)
#define _a32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidTranslateResourceListAddress$storport.sys", 0x402f0, 0x0, true, 0xd3717f6df9f8f2fe)
#define _a33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitAbortHierarchicalResetWorkItem$storport.sys", 0x479a8, 0x0, true, 0x585bd1081efc71f1)
#define _a34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitAbortSrb$storport.sys", 0x47ac0, 0x0, true, 0x10887c5d52c1992c)
#define _a35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitAbortSrbCompletion$storport.sys", 0x47cd0, 0x0, true, 0xfd5ebe31c2d0afd5)
#define _a36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitAdaptiveIdleTimeout$storport.sys", 0x6938, 0x0, true, 0xec6a2a63ec86da3f)
#define _a37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitAddAclToVmDevices$storport.sys", 0x79454, 0x0, true, 0xab9d721210913afc)
#define _a38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitAllocateResources$storport.sys", 0x1689c, 0x0, true, 0x894ddaab7e123dc6)
#define _a39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitCancelPendingRequests$storport.sys", 0x16e70, 0x0, true, 0xe385c45b34e80e15)
#define _a40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitCancelWaitWakeIrp$storport.sys", 0x101d0, 0x0, true, 0x1c05cf578e350612)
#define _a41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct stor::port::raid_unit_extension_t*)>*), "$RaidUnitCheckAndAcquirePoFx$storport.sys", 0x6d20, 0x0, true, 0x7cebee7c3c83928a)
#define _a42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitClaimIrp$storport.sys", 0x5450, 0x0, true, 0x37753fac7899c13c)
#define _a43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitCompleteRequest$storport.sys", 0x83f0, 0x0, true, 0xefd3be8af96dbe65)
#define _a44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitCompleteResetRequest$storport.sys", 0x47e50, 0x0, true, 0x3c6ac717f4dedc07)
#define _a45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitConvertToNormalUnit$storport.sys", 0x177e8, 0x0, true, 0xa0d57d5f9cffea7a)
#define _a46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitConvertToZombieUnit$storport.sys", 0x16fbc, 0x0, true, 0x12a99d259f6f58da)
#define _a47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitDeviceStackPowerUpCompletion$storport.sys", 0xea80, 0x0, true, 0x1dd504b71e2f6f99)
#define _a48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitDisablePendingTimer$storport.sys", 0xdc74, 0x0, true, 0xa26ebe70155e3571)
#define _a49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitDisableWaitCheckTimer$storport.sys", 0x480f0, 0x0, true, 0xc5029d293d19cd7f)
#define _a50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitEndDeviceBusy$storport.sys", 0x48118, 0x0, true, 0x8fdb6fd16d9e5659)
#define _a51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitEndMaintenanceTime$storport.sys", 0x3d150, 0x0, true, 0x747753f59be9786c)
#define _a52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitFreeResources$storport.sys", 0x13854, 0x0, true, 0x27de709713706674)
#define _a53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitGet1667DeviceRegistryValue$storport.sys", 0x18778, 0x0, true, 0xbfd7e1d70a9ea034)
#define _a54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitGetCompatibleIds$storport.sys", 0x17f04, 0x0, true, 0xacdd114c73f5ca94)
#define _a55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitGetDeviceId$storport.sys", 0x17e14, 0x0, true, 0xd2b695b2ddbf976a)
#define _a56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitGetDeviceParameters$storport.sys", 0x72284, 0x0, true, 0x8b9fc4998f836c2)
#define _a57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitGetHardwareIds$storport.sys", 0x18054, 0x0, true, 0x91ac10cd255f16f)
#define _a58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitGetInitialTimestamp$storport.sys", 0x1882c, 0x0, true, 0xdc8bbe24e45067af)
#define _a59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitGetInstanceId$storport.sys", 0x17d38, 0x0, true, 0x744524a4428f0314)
#define _a60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitGetMinimumPowerCyclePeriod$storport.sys", 0x6a58, 0x0, true, 0x85c8114aaaf4d8cd)
#define _a61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitGetPowerCycleCount$storport.sys", 0x1890c, 0x0, true, 0x8b5555b1ae77fc7f)
#define _a62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitHandleReportLunsDataChanged$storport.sys", 0x481a0, 0x0, true, 0x90e9c654dc310d2d)
#define _a63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitHandleReportLunsDataChangedCompletion$storport.sys", 0x48380, 0x0, true, 0x8fc54b82f24fd4f)
#define _a64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitHierarchicalReset$storport.sys", 0x483a4, 0x0, true, 0x192275947acda85f)
#define _a65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitIoCoalescingCallback$storport.sys", 0x3d2a0, 0x0, true, 0x52eb8d577210cf23)
#define _a66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitLogSenseTemperatureSrb$storport.sys", 0x48774, 0x0, true, 0x7098c3c3b6ef03e9)
#define _a67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitMaintenanceTime$storport.sys", 0x3d334, 0x0, true, 0xc31c5035703f287a)
#define _a68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPauseTimerDpcRoutine$storport.sys", 0x12610, 0x0, true, 0x84af01b1648b5f9)
#define _a69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPendingDpcRoutine$storport.sys", 0xdab0, 0x0, true, 0x139a180a0784dd4)
#define _a70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPerfStateCallback$storport.sys", 0xea70, 0x0, true, 0x975ced073f9323e4)
#define _a71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct stor::port::raid_unit_extension_t*, uint32_t, uint32_t, struct stor::port::raid_active_ref_context_t*)>*), "$RaidUnitPoFxActivateComponent$storport.sys", 0x6854, 0x0, true, 0x3579d09ba9e43d02)
#define _a72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPoFxActivateComponentFromMiniport$storport.sys", 0x358d8, 0x0, true, 0x24356beff9414037)
#define _a73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct stor::port::raid_unit_extension_t*, uint32_t, uint32_t, struct stor::port::raid_active_ref_context_t*)>*), "$RaidUnitPoFxIdleComponent$storport.sys", 0x6784, 0x0, true, 0x37b00d23958be5c7)
#define _a74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPoFxIdleComponentFromMiniport$storport.sys", 0x30918, 0x0, true, 0xf0fe18645318f3b6)
#define _a75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPoFxSetDeviceIdleTimeout$storport.sys", 0x6a0c, 0x0, true, 0x9ea65c185be4132f)
#define _a76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPowerCycleCheck$storport.sys", 0x3d4d0, 0x0, true, 0x2e4ed75bebd0e89f)
#define _a77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPowerSettingCallback$storport.sys", 0x3d4f0, 0x0, true, 0x38a83620e6a60732)
#define _a78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitProcessAsyncNotification$storport.sys", 0x48b40, 0x0, true, 0x38f97d374a1ad1e2)
#define _a79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitProcessBusyRequest$storport.sys", 0x11754, 0x0, true, 0xf7d3af2b079afa7a)
#define _a80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitProcessSetDevicePowerIrp$storport.sys", 0xf9ec, 0x0, true, 0x10e69fc8ebe594b8)
#define _a81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitProcessSetDevicePowerIrpComplete$storport.sys", 0xfaf8, 0x0, true, 0xeb0973a26710d355)
#define _a82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitQueueHierarchicalResetWorkItem$storport.sys", 0x48bb4, 0x0, true, 0x9290a3446e4285c)
#define _a83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitQuiesceDeviceWorkRoutine$storport.sys", 0x11e90, 0x0, true, 0xc4921eba73977046)
#define _a84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitReenablePendingTimer$storport.sys", 0x63f0, 0x0, true, 0xfc92e702eb0287ff)
#define _a85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitRegisterInterfaces$storport.sys", 0x18600, 0x0, true, 0xf32bcb09a9cf3337)
#define _a86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitReleaseIrp$storport.sys", 0x81d8, 0x0, true, 0xaa4f241215bb7477)
#define _a87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitRequestTimeout$storport.sys", 0x48cb0, 0x0, true, 0x96a9ac6225078bae)
#define _a88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitResetTarget$storport.sys", 0x48f10, 0x0, true, 0xc3cdb099611227e5)
#define _a89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitResetUnit$storport.sys", 0x491c8, 0x0, true, 0x60b185e36b31e941)
#define _a90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct stor::port::raid_unit_extension_t*)>*), "$RaidUnitRestartQueue$storport.sys", 0x177d0, 0x0, true, 0x1cfc9f976bf79e87)
#define _a91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitRestartQueueDpcRoutine$storport.sys", 0x494d0, 0x0, true, 0x3030d07a711e11dc)
#define _a92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSavePowerCycleCount$storport.sys", 0x16618, 0x0, true, 0x4782f273a54ef04d)
#define _a93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSavePowerCycleCountWorker$storport.sys", 0x125c0, 0x0, true, 0xcadcb576fd086aff)
#define _a94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSendPoFxActiveToMiniport$storport.sys", 0x3d5ac, 0x0, true, 0xf683138f4d3091a5)
#define _a95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSendPoFxIdleStateToMiniport$storport.sys", 0x3d638, 0x0, true, 0x8573861391ab8502)
#define _a96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSendPoFxPowerControlToMiniport$storport.sys", 0x3d6c4, 0x0, true, 0x97f2c37bdad4d140)
#define _a97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSendPoFxPowerRequiredToMiniport$storport.sys", 0x3d7a0, 0x0, true, 0x77c6dcf32550b8b2)
#define _a98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSendPowerToMiniport$storport.sys", 0xfed0, 0x0, true, 0xf6d9b7dd54c10120)
#define _a99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSendSrbIoControlSynchronously$storport.sys", 0x1950c, 0x0, true, 0x1841ae460cc58fb)
#define _b00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSendSrbProtocolCommandSynchronously$storport.sys", 0x494ec, 0x0, true, 0x85f92edabe1e7365)
#define _b01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSetDefaultWriteCachePolicy$storport.sys", 0x49764, 0x0, true, 0x610f63ede85be265)
#define _b02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSetDevicePowerCompletionRoutine$storport.sys", 0x12210, 0x0, true, 0xb64b354861628693)
#define _b03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSetDevicePowerIrp$storport.sys", 0xf30c, 0x0, true, 0xbd50521ae2fce854)
#define _b04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSetEnumerated$storport.sys", 0x14048, 0x0, true, 0x5b0b560272d0592d)
#define _b05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSetPowerIrp$storport.sys", 0xf01c, 0x0, true, 0x8d0ebad3e4e9d34f)
#define _b06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSetSystemPowerIrp$storport.sys", 0xf1a8, 0x0, true, 0xaba5b07d4d9efc14)
#define _b07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitStartDeviceBusy$storport.sys", 0x34220, 0x0, true, 0xb61f224d51fd4149)
#define _b08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSubmitRequest$storport.sys", 0xa16c, 0x0, true, 0x674e5b6fb9120bec)
#define _b09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSubmitResetRequest$storport.sys", 0x49a74, 0x0, true, 0x2ed85fd83cddcf8c)
#define _b10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitUnRegisterInterfaces$storport.sys", 0x186fc, 0x0, true, 0xcbbfe03f9d20001b)
#define _b11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitUnresponsiveDeviceMarkingNeeded$storport.sys", 0x49d34, 0x0, true, 0xd37fbda720306a27)
#define _b12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnloggedErrors$storport.sys", 0x67e18, 0x0, true, 0x16ce1bba67d429c2)
#define _b13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidValidatePerfSets$storport.sys", 0x3d82c, 0x0, true, 0x8c06ffc29c869d09)
#define _b14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidVerifierEnabled$storport.sys", 0x67d88, 0x0, true, 0x7f96cb0980d1bfc4)
#define _b15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidXrbDeallocateResources$storport.sys", 0x80ac, 0x0, true, 0x2ec2dde1dab25d12)
#define _b16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidXrbSetCompletionRoutine$storport.sys", 0xea0c, 0x0, true, 0x9142a70aac6cca1)
#define _b17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidXrbSetDataBufferAddress$storport.sys", 0x62b0, 0x0, true, 0xc7145b017d2c492b)
#define _b18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidXrbSignalCompletion$storport.sys", 0xe7d0, 0x0, true, 0xb16e8301de07a2c8)
#define _b19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidZeroUnit$storport.sys", 0x16d28, 0x0, true, 0x7b8e5e21d8cbb199)
#define _b20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidZeroXrb$storport.sys", 0xb710, 0x0, true, 0x45f402278e3f1abe)
#define _b21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpAdapterContinueDataBufferScatterGather$storport.sys", 0x30970, 0x0, true, 0x831dc8a8afade407)
#define _b22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpAdapterContinueScatterGather$storport.sys", 0x4ec0, 0x0, true, 0x6684401706320174)
#define _b23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpAdapterDpcRoutine$storport.sys", 0xdcf0, 0x0, true, 0xcc544c757c19d032)
#define _b24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpAdapterInterruptRoutine$storport.sys", 0x30a00, 0x0, true, 0x5954546b3318cd96)
#define _b25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpAdapterMSIInterruptRoutine$storport.sys", 0xdf30, 0x0, true, 0x2a3abbf17e71657a)
#define _b26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpAdapterRedirectDpcRoutine$storport.sys", 0x18e50, 0x0, true, 0xc0fbc79001da3b23)
#define _b27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpAdapterTimerDpcRoutine$storport.sys", 0xc420, 0x0, true, 0xf776628f017e797c)
#define _b28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpBuildAdapterBusRelations$storport.sys", 0x13dbc, 0x0, true, 0xbfc4ed3745cfd58e)
#define _b29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpIsCurrentOsInstallationUpgrade$storport.sys", 0x4b050, 0x0, true, 0x5a29686f0922bd5a)
#define _b30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpLinkDown$storport.sys", 0x3592c, 0x0, true, 0x3892201c4c5ef78d)
#define _b31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpLinkUp$storport.sys", 0x35998, 0x0, true, 0x308bc1855abd4076)
#define _b32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpPortData$storport.sys", 0x67d80, 0x0, true, 0x5b414395139dbb07)
#define _b33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpTelemetryRegQueryRoutine$storport.sys", 0x55bf0, 0x0, true, 0xc2d9dec0a74eaf08)
#define _b34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RiAllocateMiniportDeviceExtension$storport.sys", 0x78880, 0x0, true, 0xba7e668915322cc7)
#define _b35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RiDeleteDeviceQueueEntry$storport.sys", 0xb5f0, 0x0, true, 0x88d7b771fc645308)
#define _b36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RiEnqueueDeviceQueue$storport.sys", 0xb560, 0x0, true, 0x684f70a50ad7aa48)
#define _b37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RiGetEnqueueReason$storport.sys", 0xb340, 0x0, true, 0xf55fd347da54a1ae)
#define _b38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RiNormalizeDeviceQueue$storport.sys", 0xb44c, 0x0, true, 0x9c94d757f3c30d49)
#define _b39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RiPeekDeviceQueue$storport.sys", 0xb538, 0x0, true, 0xa2dde639056028a)
#define _b40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RiSignalCompletion$storport.sys", 0xe0d0, 0x0, true, 0xb6e295cfeafb59ac)
#define _b41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SecondaryDumpCallbackRegistered$storport.sys", 0x67e51, 0x0, true, 0x5d0c5047674ee345)
#define _b42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendAtaPassthrough$storport.sys", 0x25d0, 0x0, true, 0x3d7becd7d0a0e045)
#define _b43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ShimGetMsftId$storport.sys", 0x562e0, 0x0, true, 0xa2cb6bd35ccc0d0c)
#define _b44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SrbShim$storport.sys", 0x67278, 0x0, true, 0x9f0683b3eaa308e9)
#define _b45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SrbShimHookCollections$storport.sys", 0x671b0, 0x0, true, 0x1627a150e0a306c5)
#define _b46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SrbShimHookDeviceControl$storport.sys", 0x564e0, 0x0, true, 0x2f4b23c0fa106403)
#define _b47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SrbShimHooks$storport.sys", 0x670f0, 0x0, true, 0xa32dd4f1ccc9386a)
#define _b48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SrbShimStorageAdapterPropertyCompletionHook$storport.sys", 0x565c0, 0x0, true, 0x2dbdfcf29e6b30e4)
#define _b49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StRtlIoStorInfoGetNvCachePriority$storport.sys", 0x586c8, 0x0, true, 0x5d848dcb7613cb2)
#define _b50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAdapterDeviceRegistryKeyProxy$storport.sys", 0x35b88, 0x0, true, 0x39e8fd136218ca7d)
#define _b51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(uint32_t, uint32_t, struct stor::port::raid_adapter_extension_t*)>*), "$StorAllocateContiguousIoResources$storport.sys", 0x74a8, 0x0, true, 0x6d8fbf562c9bd55a)
#define _b52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAllocateContiguousMemory$storport.sys", 0x709f4, 0x0, true, 0x9cc2deac59780806)
#define _b53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAsyncNotificationDeferred$storport.sys", 0x35d1c, 0x0, true, 0xadf75225d3e6fa26)
#define _b54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorBuildScatterGatherListProxy$storport.sys", 0x35d7c, 0x0, true, 0xac7d826c0bbcd327)
#define _b55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorBuildSynchronousScsiRequest$storport.sys", 0x1972c, 0x0, true, 0xb0f6a35723d118cd)
#define _b56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct stor::port::vpd_identification_page_t*, struct stor::port::vpd_identification_page_t*)>*), "$StorCompareScsiDeviceId$storport.sys", 0x107e4, 0x0, true, 0xfd2cf2f39e493849)
#define _b57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCompareScsiIdentity$storport.sys", 0x16298, 0x0, true, 0xa0d7e2d2ce9f2e83)
#define _b58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCompareUlongKey$storport.sys", 0xe100, 0x0, true, 0xd3c7894cbdea935)
#define _b59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCreateAnsiString$storport.sys", 0x1203c, 0x0, true, 0x2e3a9171cded90fd)
#define _b60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCreateDictionary$storport.sys", 0x569f0, 0x0, true, 0xcf96f74a49480cbb)
#define _b61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCreateEventQueue$storport.sys", 0x16c54, 0x0, true, 0xe4e5f31afde2de91)
#define _b62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCreateScsiSymbolicLink$storport.sys", 0x43644, 0x0, true, 0xa316de356a526a46)
#define _b63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCreateSystemLogEntry$storport.sys", 0x43758, 0x0, true, 0xd58135cde8efa750)
#define _b64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorDelayExecution$storport.sys", 0x35de0, 0x0, true, 0xadbdd00ac7dea0a4)
#define _b65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorDeleteScsiIdentity$storport.sys", 0x16190, 0x0, true, 0x97b4e18988d0a546)
#define _b66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorDeleteScsiSymbolicLink$storport.sys", 0x43990, 0x0, true, 0x40726c3bc1bef888)
#define _b67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorDumpDevicePowerOn$storport.sys", 0x3d980, 0x0, true, 0xf5e4d96d6a8033d4)
#define _b68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwHwTimeoutDetectedEvent$storport.sys", 0x4cd3c, 0x0, true, 0x1d1e5f01da586611)
#define _b69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwIORequestDispatch$storport.sys", 0x4cfe4, 0x0, true, 0xeb7acdf666d5a213)
#define _b70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwIORequestServiceTimeEventData$storport.sys", 0x4d21c, 0x0, true, 0xdb10494f84ff2940)
#define _b71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwLoggingEnabled$storport.sys", 0x67da0, 0x0, true, 0x285d189b040f10c6)
#define _b72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwLogoRequestServiceTimeEventData$storport.sys", 0x4d514, 0x0, true, 0x1c70ffae09f1ea8b)
#define _b73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwMiniportBugAbortBrokenEvent$storport.sys", 0x4d82c, 0x0, true, 0xba5478aa30e9b605)
#define _b74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwMiniportBugAbortTimeoutEvent$storport.sys", 0x4da5c, 0x0, true, 0x8c5a4e7969ff338a)
#define _b75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwMiniportBugResetBrokenEvent$storport.sys", 0x4dc7c, 0x0, true, 0x7be51bae7a3b34bc)
#define _b76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwMiniportEvent$storport.sys", 0x4def8, 0x0, true, 0xd2b9a238dee113b1)
#define _b77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwMiniportEventProxy$storport.sys", 0x35f30, 0x0, true, 0x8fa96e1d87e7eac1)
#define _b78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwProtocolCommandCompletion$storport.sys", 0x4e808, 0x0, true, 0x78b287a005aaa55e)
#define _b79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtAcquireMSISpinLock$storport.sys", 0x36300, 0x0, true, 0x664cda0713071630)
#define _b80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtAllocatePool$storport.sys", 0x36340, 0x0, true, 0xb3f877aa2d29b825)
#define _b81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtBuildScatterGatherList$storport.sys", 0x363e0, 0x0, true, 0xcf0052af12a13fa5)
#define _b82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtCompleteServiceIrp$storport.sys", 0x36480, 0x0, true, 0x1fd75dd0c735c86f)
#define _b83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtFreePool$storport.sys", 0x364c0, 0x0, true, 0x11a43327bc86598f)
#define _b84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtGetMessageInterruptInformation$storport.sys", 0x36500, 0x0, true, 0xae5697f1bdda7ff9)
#define _b85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtGetOriginalMdl$storport.sys", 0x36570, 0x0, true, 0x7e5397c9390ecc89)
#define _b86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtGetSystemAddress$storport.sys", 0x36590, 0x0, true, 0x22e3af2a340b0271)
#define _b87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtPutScatterGatherList$storport.sys", 0x36600, 0x0, true, 0x7f62634417f05f43)
#define _b88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorExtReleaseMSISpinLock$storport.sys", 0x36630, 0x0, true, 0x8ddb9da8e850e98b)
#define _b89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorFindDictionary$storport.sys", 0x65bc, 0x0, true, 0x65d3b3acd5ca8c93)
#define _b90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorFreeContiguousMemory$storport.sys", 0x70920, 0x0, true, 0x14a3fbad04428c41)
#define _b91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorFreeSynchronousScsiRequest$storport.sys", 0x196e0, 0x0, true, 0xd78fd9e55d9d2b25)
#define _b92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorGetIdentityProductId$storport.sys", 0x17d08, 0x0, true, 0xab9ef3c0bd033b41)
#define _b93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorGetIdentityVendorId$storport.sys", 0x17cd8, 0x0, true, 0x6e3633a5d166695f)
#define _b94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct stor::port::vpd_identification_descriptor_t*(struct stor::port::vpd_enumerator_t*)>*), "$StorGetNextVPDIdDescriptor$storport.sys", 0x10948, 0x0, true, 0x560c77b0e0afa5c4)
#define _b95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorHashUlongKey$storport.sys", 0xeaf0, 0x0, true, 0xdda3ddc6be78e8a8)
#define _b96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct stor::port::vpd_enumerator_t*, struct stor::port::vpd_identification_page_t*)>*), "$StorInitVPDIdEnumeration$storport.sys", 0x10998, 0x0, true, 0x3d35511019b09e40)
#define _b97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorInsertDictionary$storport.sys", 0x15e90, 0x0, true, 0xa81912403f0b915c)
#define _b98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorIsEventQueueEmpty$storport.sys", 0x49e80, 0x0, true, 0x194ea9060553fbf1)
#define _b99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogIoError$storport.sys", 0x43a58, 0x0, true, 0x8445b1d238287fcb)
#define _c00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterActiveCondition$storport.sys", 0x3dad0, 0x0, true, 0xf6928b10de584e2)
#define _c01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterIdleCondition$storport.sys", 0x3e210, 0x0, true, 0x4d0b1f6b898404f7)
#define _c02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterIdleState$storport.sys", 0x3e2e0, 0x0, true, 0x34a390fc1e208ee)
#define _c03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterPoFxD0Completion$storport.sys", 0x3e480, 0x0, true, 0x2a8235cd181ff9e9)
#define _c04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterPoFxD3Completion$storport.sys", 0xea90, 0x0, true, 0xf9bb2139c9ce5f5a)
#define _c05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterPowerControl$storport.sys", 0x3e5e0, 0x0, true, 0x25d1c4da805703f9)
#define _c06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterPowerNotRequiredStep1$storport.sys", 0x3e6b0, 0x0, true, 0xbb8b729dfa93df6f)
#define _c07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterPowerNotRequiredStep2$storport.sys", 0x3e730, 0x0, true, 0xcbed761ec5bf99e4)
#define _c08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterPowerRequiredStep1$storport.sys", 0x3e970, 0x0, true, 0x61ee9b9f3e13d285)
#define _c09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterPowerRequiredStep2$storport.sys", 0x3ea64, 0x0, true, 0x96af4fd31f066164)
#define _c10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAllocateRegistryBuffer$storport.sys", 0x36670, 0x0, true, 0x5085cefb57df6286)
#define _c11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortBusy$storport.sys", 0x366d0, 0x0, true, 0xeed5381cb5709554)
#define _c12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortBusyVrfy$storport.sys", 0x7d150, 0x0, true, 0xa2698cecc1601031)
#define _c13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortCompleteRequest$storport.sys", 0x367f0, 0x0, true, 0x91e31f2effc0c0e3)
#define _c14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortCompleteRequestVrfy$storport.sys", 0x7d170, 0x0, true, 0x39fcefd05c7551f)
#define _c15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortConvertUlongToPhysicalAddress$storport.sys", 0x36980, 0x0, true, 0x59f793c7a481a584)
#define _c16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortConvertUlongToPhysicalAddressVrfy$storport.sys", 0x36980, 0x0, true, 0x3602643d80e1ec3c)
#define _c17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortDebugPrint$storport.sys", 0x36990, 0x0, true, 0x12a3926f9107fe26)
#define _c18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortDeviceBusy$storport.sys", 0x36a70, 0x0, true, 0x8c22e4122dbd8764)
#define _c19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortDeviceBusyVrfy$storport.sys", 0x7d190, 0x0, true, 0xc1266fc63251e27e)
#define _c20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortDeviceReady$storport.sys", 0x36bf0, 0x0, true, 0x603e2f593a72126f)
#define _c21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortDeviceReadyVrfy$storport.sys", 0x7d1b0, 0x0, true, 0x169b325f4efc225b)
#define _c22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortEventProvider$storport.sys", 0x5f358, 0x0, true, 0xf6866bec372db7f7)
#define _c23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortEventProvider_Context$storport.sys", 0x67010, 0x0, true, 0x77876d62d339f4eb)
#define _c24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(enum stor::port::storport_function_code_t, void*, ...)>*), "$StorPortExtendedFunction$storport.sys", 0xd7d0, 0x0, true, 0xa57aff00549f2e98)
#define _c25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortFreeDeviceBase$storport.sys", 0xea70, 0x0, true, 0xb66346fdaa7dd2fa)
#define _c26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortFreeDeviceBaseVrfy$storport.sys", 0x7d1d0, 0x0, true, 0x6a57fda960601aca)
#define _c27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortFreeRegistryBuffer$storport.sys", 0x36d60, 0x0, true, 0x11890ad56032682c)
#define _c28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetAdditionalCrashDumpArea$storport.sys", 0x12e2c, 0x0, true, 0x9c2a48078ee6ba50)
#define _c29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetBusData$storport.sys", 0x36dd0, 0x0, true, 0x3d366a14648b8cd4)
#define _c30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetBusDataVrfy$storport.sys", 0x7d210, 0x0, true, 0x6cd5618e036c6ee1)
#define _c31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetDeviceBase$storport.sys", 0x36e10, 0x0, true, 0xc236b5d4d8c611aa)
#define _c32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetDeviceBaseVrfy$storport.sys", 0x7d240, 0x0, true, 0x2c80271da513fe5)
#define _c33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetLogicalUnit$storport.sys", 0x36f30, 0x0, true, 0x498d022b6a14816c)
#define _c34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetLogicalUnitVrfy$storport.sys", 0x7d290, 0x0, true, 0x88d145a6f403cbe0)
#define _c35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetPhysicalAddress$storport.sys", 0x19050, 0x0, true, 0xb020d35aae30e329)
#define _c36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetPhysicalAddressVrfy$storport.sys", 0x7d2b0, 0x0, true, 0xd2aab7d56adea944)
#define _c37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetScatterGatherList$storport.sys", 0xdfc0, 0x0, true, 0xeec4de4c75f1fb58)
#define _c38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetScatterGatherListVrfy$storport.sys", 0x7d2d0, 0x0, true, 0xe84e34610f3a76f6)
#define _c39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetSrb$storport.sys", 0x32af0, 0x0, true, 0xcadd3494e594e7a0)
#define _c40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetUncachedExtension$storport.sys", 0x36f80, 0x0, true, 0xdb3527077145ebd6)
#define _c41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetUncachedExtensionVrfy$storport.sys", 0x7d380, 0x0, true, 0xae8353f777eed5b9)
#define _c42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetVirtualAddress$storport.sys", 0x37220, 0x0, true, 0xdbee35852e76b8a7)
#define _c43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortGetVirtualAddressVrfy$storport.sys", 0x7d3f0, 0x0, true, 0x3d5da9ddec01856f)
#define _c44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortInitialize$storport.sys", 0x337e0, 0x0, true, 0xd7d1f5359c339084)
#define _c45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortInitializeVrfy$storport.sys", 0x798c0, 0x0, true, 0xc6a3f0d1810bd3e3)
#define _c46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortLogError$storport.sys", 0x37240, 0x0, true, 0x2f1c223b4ca45f75)
#define _c47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortLogErrorVrfy$storport.sys", 0x7d410, 0x0, true, 0xf2552c7ca2f46b32)
#define _c48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortMoveMemory$storport.sys", 0x372c0, 0x0, true, 0x73cdf3b55e888a7c)
#define _c49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(enum stor::port::scsi_notification_type_t, void*, ...)>*), "$StorPortNotification$storport.sys", 0xd1f0, 0x0, true, 0x396b474dcbe62f9b)
#define _c50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortNotificationVrfy$storport.sys", 0x7d440, 0x0, true, 0xfd6dea984fcd5c55)
#define _c51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortPause$storport.sys", 0x372e0, 0x0, true, 0xa910596b0cc1c9da)
#define _c52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortPauseDevice$storport.sys", 0xe2d0, 0x0, true, 0x26cb60d0ee9844d2)
#define _c53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortPauseDeviceVrfy$storport.sys", 0x7d6e0, 0x0, true, 0xab7fec8f097bca8d)
#define _c54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortPauseVrfy$storport.sys", 0x7d700, 0x0, true, 0x67bdd0a5ab67b228)
#define _c55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortQuerySystemTime$storport.sys", 0x37440, 0x0, true, 0x28fe084fdbebe18c)
#define _c56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadPortBufferUchar$storport.sys", 0x37460, 0x0, true, 0x3c042e07d9d1ce2f)
#define _c57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadPortBufferUlong$storport.sys", 0x37480, 0x0, true, 0x1c5f423fe10924d5)
#define _c58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadPortBufferUshort$storport.sys", 0x374a0, 0x0, true, 0x2bd737da009acc40)
#define _c59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadPortUchar$storport.sys", 0x374c0, 0x0, true, 0x65123f0fd70ed710)
#define _c60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadPortUlong$storport.sys", 0x374d0, 0x0, true, 0xf6e69e4ac3b7ea3c)
#define _c61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadPortUshort$storport.sys", 0x374e0, 0x0, true, 0xad09b070023299f)
#define _c62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadRegisterBufferUchar$storport.sys", 0x374f0, 0x0, true, 0x4da6b923a5f0f7f9)
#define _c63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadRegisterBufferUlong$storport.sys", 0x37520, 0x0, true, 0x57a0b2b778301b72)
#define _c64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadRegisterBufferUshort$storport.sys", 0x37550, 0x0, true, 0x7a9ffe00b705b739)
#define _c65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadRegisterUchar$storport.sys", 0x37580, 0x0, true, 0x8c2a17c3d8842af8)
#define _c66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadRegisterUlong$storport.sys", 0x37590, 0x0, true, 0x1cd99c72a80094c)
#define _c67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadRegisterUshort$storport.sys", 0x375a0, 0x0, true, 0x741e42c19e5dfcbf)
#define _c68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReady$storport.sys", 0x375b0, 0x0, true, 0x42e8106cf474529f)
#define _c69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReadyVrfy$storport.sys", 0x7d720, 0x0, true, 0xd8690ff3772a941b)
#define _c70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortRegistryRead$storport.sys", 0x376c0, 0x0, true, 0x29315e0f3eb3c246)
#define _c71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortRegistryWrite$storport.sys", 0x37820, 0x0, true, 0xf35d335bff3113ba)
#define _c72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortResume$storport.sys", 0x37960, 0x0, true, 0x4f5bd3ec72f13f88)
#define _c73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortResumeDevice$storport.sys", 0xe440, 0x0, true, 0x186aefd74cfd5d76)
#define _c74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortResumeDeviceVrfy$storport.sys", 0x7d740, 0x0, true, 0x45c66117852a87a6)
#define _c75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortResumeVrfy$storport.sys", 0x7d760, 0x0, true, 0x25dd4ae15460396c)
#define _c76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortSetBusDataByOffset$storport.sys", 0x37a70, 0x0, true, 0xf40b9edd1872785b)
#define _c77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortSetBusDataByOffsetVrfy$storport.sys", 0x7d780, 0x0, true, 0x6d4f79e6435d1da2)
#define _c78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortSetDeviceQueueDepth$storport.sys", 0x4ba0, 0x0, true, 0x6d958847bf92f0e)
#define _c79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortStallExecution$storport.sys", 0xeb00, 0x0, true, 0xc18708ca49fe6b59)
#define _c80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortStallExecutionVrfy$storport.sys", 0x7d7c0, 0x0, true, 0x65e8b9155e30dd2)
#define _c81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortSynchronizeAccess$storport.sys", 0x37ab0, 0x0, true, 0x85c07b8f48d17c88)
#define _c82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortSynchronizeAccessVrfy$storport.sys", 0x7d800, 0x0, true, 0xfaba9bda25b606b7)
#define _c83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitActiveConditionStep1$storport.sys", 0x6a90, 0x0, true, 0x838bf7be932e4dc0)
#define _c84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitActiveConditionStep2$storport.sys", 0x6b14, 0x0, true, 0xe9ad8467bb347c76)
#define _c85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitFlushActivePendingRequestQueue$storport.sys", 0x6bb8, 0x0, true, 0x83bcd156a7db7266)
#define _c86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitIdleCondition$storport.sys", 0x6c20, 0x0, true, 0xc59a3c3ce14d5556)
#define _c87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitIdleState$storport.sys", 0x3f350, 0x0, true, 0x342bbd47c819732e)
#define _c88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitPoFxD0Completion$storport.sys", 0x100ec, 0x0, true, 0xbe9ddebe1ae0ba33)
#define _c89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitPoFxD3Completion$storport.sys", 0x3f6d0, 0x0, true, 0xf35808873f73deea)
#define _c90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitPoFxWaitWakeCompletion$storport.sys", 0x3f7b0, 0x0, true, 0x6a060bc85ab30716)
#define _c91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitPowerControl$storport.sys", 0x3f890, 0x0, true, 0x66f882cc6f6f0080)
#define _c92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitPowerNotRequiredStep1$storport.sys", 0x3f8d0, 0x0, true, 0xf329797f11116726)
#define _c93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitPowerNotRequiredStep2$storport.sys", 0x3f9b8, 0x0, true, 0x177ee39365b25e74)
#define _c94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitPowerNotRequiredStep2Passive$storport.sys", 0x3fc40, 0x0, true, 0x5b5501b42207cc24)
#define _c95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitPowerRequiredStep1$storport.sys", 0x3fc60, 0x0, true, 0x3563663dd8760d4)
#define _c96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitPowerRequiredStep2$storport.sys", 0x3fdd4, 0x0, true, 0x56955d9429aa647d)
#define _c97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortValidateRange$storport.sys", 0x37b50, 0x0, true, 0x8ecdb6a268575dc7)
#define _c98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortVerifierFunctionTable$storport.sys", 0x59480, 0x0, true, 0x1a6f00127253164)
#define _c99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortVerifierInitialized$storport.sys", 0x67e34, 0x0, true, 0x564b6e5df868a8d)
#define _d00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWorkItemRoutine$storport.sys", 0x37b60, 0x0, true, 0x21c0c3ac20e0d166)
#define _d01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWritePortBufferUchar$storport.sys", 0x37bf0, 0x0, true, 0x4ee2fe8de485d90b)
#define _d02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWritePortBufferUlong$storport.sys", 0x37c10, 0x0, true, 0x10ae0b42d193f647)
#define _d03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWritePortBufferUshort$storport.sys", 0x37c30, 0x0, true, 0xbd52cb300e2bacd2)
#define _d04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWritePortUchar$storport.sys", 0x37c50, 0x0, true, 0x55375ca5288be95b)
#define _d05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWritePortUlong$storport.sys", 0x37c60, 0x0, true, 0x4aaf2404f1ef2a73)
#define _d06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWritePortUshort$storport.sys", 0x37c70, 0x0, true, 0xedda1bfd2a2cc97b)
#define _d07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWriteRegisterBufferUchar$storport.sys", 0x37c80, 0x0, true, 0xf8f7a7e183835b0)
#define _d08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWriteRegisterBufferUlong$storport.sys", 0x37cb0, 0x0, true, 0x85abbf2181a6f38f)
#define _d09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWriteRegisterBufferUshort$storport.sys", 0x37ce0, 0x0, true, 0x13910b99e5b70ddd)
#define _d10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWriteRegisterUchar$storport.sys", 0x37d10, 0x0, true, 0x8e5b8671c9b921ea)
#define _d11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWriteRegisterUlong$storport.sys", 0x37d20, 0x0, true, 0x7aec7af1bce715e7)
#define _d12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortWriteRegisterUshort$storport.sys", 0x37d30, 0x0, true, 0xc0ff1f99a6dc1fe)
#define _d13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortpInvokeAcpiMethod$storport.sys", 0x37d44, 0x0, true, 0x316dd6377b26711b)
#define _d14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortpSetPowerSettingNotificationGuids$storport.sys", 0x37e08, 0x0, true, 0x3da6e7c4b18fd2f2)
#define _d15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorProbeAndLockPages$storport.sys", 0x19850, 0x0, true, 0xcb99002e492af9e3)
#define _d16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPurgeEventQueue$storport.sys", 0x321c4, 0x0, true, 0x277fea8b223995bc)
#define _d17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorRemoveDictionary$storport.sys", 0x14df4, 0x0, true, 0x327c27d1271a8886)
#define _d18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorRemoveEventQueue$storport.sys", 0x32284, 0x0, true, 0x5b54ea7e3c928cb2)
#define _d19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorRemoveEventQueueInternal$storport.sys", 0x32340, 0x0, true, 0x70fea12d0cdadcf1)
#define _d20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorRemoveIoGatewayItem$storport.sys", 0x96d0, 0x0, true, 0xf24ab3a1e07f7d93)
#define _d21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorRequestThresholdTime$storport.sys", 0x67e48, 0x0, true, 0x60b0c3b8d36b5b1a)
#define _d22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetFunctionExtensionTable$storport.sys", 0x37fd8, 0x0, true, 0x5bdc7284980796f7)
#define _d23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetIoGatewayEmptyEvent$storport.sys", 0x4bf7c, 0x0, true, 0x918dd8e391bf3050)
#define _d24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetIoGatewayNotBusy$storport.sys", 0x4bff8, 0x0, true, 0x1a654e82c07aeb96)
#define _d25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSubmitIoGatewayItem$storport.sys", 0xb644, 0x0, true, 0x7d71f26ba5aa1b53)
#define _d26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorTickEventQueue$storport.sys", 0xdb60, 0x0, true, 0x37eb9a7c11cf2cbb)
#define _d27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnmapSenseInfo$storport.sys", 0x9800, 0x0, true, 0xdb79d700f14242a)
#define _d28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUpdateCrashDumpPowerReady$storport.sys", 0xfd64, 0x0, true, 0xd66a0216e582b3a0)
#define _d29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAcquireMSISpinLock$storport.sys", 0x38078, 0x0, true, 0x95c55108e7a9917f)
#define _d30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAdapterInitializePoFxPower$storport.sys", 0x3811c, 0x0, true, 0x66444d5ecf199d8f)
#define _d31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAdapterTopologyWorkItemRoutine$storport.sys", 0xe800, 0x0, true, 0xcdfff68c24b9091d)
#define _d32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAggregateHierarchicalResetLun$storport.sys", 0x4f4a0, 0x0, true, 0xff97a391482e20a4)
#define _d33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAggregateHierarchicalResetTarget$storport.sys", 0x4f4f4, 0x0, true, 0xeb0830a5cb588ed9)
#define _d34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAllocateContiguousMemorySpecifyCacheNode$storport.sys", 0x383f8, 0x0, true, 0x9b35062eda7395d9)
#define _d35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAllocateHostMemoryBuffer$storport.sys", 0x3859c, 0x0, true, 0xf65a5267559646b0)
#define _d36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAllocateMdl$storport.sys", 0x389c8, 0x0, true, 0x725b487795635bcd)
#define _d37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAllocatePool$storport.sys", 0x121a8, 0x0, true, 0x6208095f36a51b2)
#define _d38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAreTelemetryErrorsEqual$storport.sys", 0x793c, 0x0, true, 0x7699966e2f9e2379)
#define _d39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpBuildMdlForNonPagedPool$storport.sys", 0x38b04, 0x0, true, 0xa972057332358a0)
#define _d40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpBuildScatterGatherList$storport.sys", 0x38bb0, 0x0, true, 0x60056fc07d8edcf7)
#define _d41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpCompleteServiceIrp$storport.sys", 0x38d04, 0x0, true, 0x247b0a1a2872793b)
#define _d42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpCSEntryTelemetry$storport.sys", 0x4f548, 0x0, true, 0x82e8be1cb5b8e990)
#define _d43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpCSExitTelemetry$storport.sys", 0x4f994, 0x0, true, 0xe37a4c4783ca832d)
#define _d44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpDataInBufferAllocateMdlAndLockPages$storport.sys", 0x49eb0, 0x0, true, 0xaec2bf867b472dd)
#define _d45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpDeviceHealthWorkItemRoutine$storport.sys", 0xccd0, 0x0, true, 0x51ab77a7b6517991)
#define _d46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpFlushDataBufferMdl$storport.sys", 0x38d5c, 0x0, true, 0x2a6d2736106cba40)
#define _d47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpFreeHostMemoryBuffer$storport.sys", 0x38e38, 0x0, true, 0xae390781f1fa98c2)
#define _d48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpFreeMdl$storport.sys", 0x38efc, 0x0, true, 0x476b11b3c650a59b)
#define _d49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpFreeTimer$storport.sys", 0x38fa8, 0x0, true, 0x51e8ae98fd671dfb)
#define _d50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpFreeTimerWorkItem$storport.sys", 0x391b0, 0x0, true, 0x91f03009b8e16c2a)
#define _d51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpFreeWorkItem$storport.sys", 0x3920c, 0x0, true, 0x4728c003f7147f6e)
#define _d52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetActiveNodeCount$storport.sys", 0x393e0, 0x0, true, 0xe49a3e4ea50cd0d1)
#define _d53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetDataInSgList$storport.sys", 0x39474, 0x0, true, 0x2de5fe65696d4ad9)
#define _d54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetExtendedTable$storport.sys", 0x394f0, 0x0, true, 0xb8085e2d42f9a096)
#define _d55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetMSIInfo$storport.sys", 0x39708, 0x0, true, 0x9ef732212275a6f)
#define _d56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetOriginalMdl$storport.sys", 0x397f0, 0x0, true, 0x61d79e81a5226d6)
#define _d57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetRequestInfo$storport.sys", 0x39910, 0x0, true, 0x85635e567fea229a)
#define _d58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetSystemAddress$storport.sys", 0x39b74, 0x0, true, 0xb05e7c41b08e675a)
#define _d59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpInitializeAdapterTelemetry$storport.sys", 0x50100, 0x0, true, 0xb4f3137ce0fbc6c9)
#define _d60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpInitializeHierarchicalResetBuckets$storport.sys", 0xcc98, 0x0, true, 0x5708c785b85bbc80)
#define _d61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpInitializePerfTelemetry$storport.sys", 0x5018c, 0x0, true, 0xb2ba3097206a94d2)
#define _d62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpInitializeTimer$storport.sys", 0x39cf0, 0x0, true, 0x64fb25ef3de62773)
#define _d63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpInitializeUnitTelemetry$storport.sys", 0x1707c, 0x0, true, 0xb1d5f2605c143bf6)
#define _d64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpInitializeWorkItem$storport.sys", 0x39e7c, 0x0, true, 0xf2abaa0fd944dbb4)
#define _d65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpLogPerAdapterStatistics$storport.sys", 0xcb64, 0x0, true, 0x178c0427c48c676f)
#define _d66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpLogPerUnitStatistics$storport.sys", 0xc7a8, 0x0, true, 0x350482ca17105431)
#define _d67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpLogPhysicalTopologyInfo$storport.sys", 0x50894, 0x0, true, 0xb169e6f8941b7033)
#define _d68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpLogRegisterAdapterPerfStates$storport.sys", 0x50e8c, 0x0, true, 0x66ae4f491bf11727)
#define _d69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpLogStatistics$storport.sys", 0xc5e0, 0x0, true, 0x30ac6bd72f1d6e6)
#define _d70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpLogSystemEvent$storport.sys", 0x39fc0, 0x0, true, 0xbd8ac889a086abcc)
#define _d71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpPortRegistryValidate$storport.sys", 0x3a910, 0x0, true, 0xc1b02df3b49429c2)
#define _d72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpPutScatterGatherList$storport.sys", 0x3a948, 0x0, true, 0x6b440d001008b52a)
#define _d73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpQueueWorkItem$storport.sys", 0x3aa48, 0x0, true, 0x4ea8894f7ebc285c)
#define _d74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpRegisterShim$storport.sys", 0x79d0c, 0x0, true, 0x7ecf98eaf9c89d4b)
#define _d75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpRegisterTraceLogging$storport.sys", 0x799f4, 0x0, true, 0xa8d79d99ce3f3baa)
#define _d76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpReleaseMSISpinLock$storport.sys", 0x3ab80, 0x0, true, 0x44df638988e22da1)
#define _d77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpRequestTimer$storport.sys", 0x1960, 0x0, true, 0xbaa957988e44ab58)
#define _d78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpSetUnitAttributes$storport.sys", 0x3ac18, 0x0, true, 0x33f9d5747e034d15)
#define _d79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryCollectErrorData$storport.sys", 0x76e8, 0x0, true, 0x3e5d06780cfdaf60)
#define _d80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryCollectPerfData$storport.sys", 0x9a50, 0x0, true, 0x432d3955541e1619)
#define _d81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryConstructErrorEntry$storport.sys", 0x7970, 0x0, true, 0xdcfc0c5429253b12)
#define _d82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryDeviceStatisticsCommand$storport.sys", 0x250c, 0x0, true, 0x46341727be214871)
#define _d83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitDeviceStatisticsCriticalData$storport.sys", 0x51830, 0x0, true, 0xb8f0e297c784b6c6)
#define _d84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitDeviceStatisticsMeasures$storport.sys", 0x51cfc, 0x0, true, 0xabc228d58c6f3427)
#define _d85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitErrorDataCriticalData$storport.sys", 0x521d0, 0x0, true, 0x5ad99122df89f3fd)
#define _d86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitErrorDataMeasures$storport.sys", 0x26b0, 0x0, true, 0xfd50279daf32ebe7)
#define _d87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitPerfDataCriticalData$storport.sys", 0x524e0, 0x0, true, 0x6677276ff95fb0fd)
#define _d88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitPerfDataMeasures$storport.sys", 0x2a40, 0x0, true, 0xa41a0f0f4496e1d4)
#define _d89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitQosDataMeasures$storport.sys", 0x5284c, 0x0, true, 0xf426792038457d8f)
#define _d90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitSmartAttributesCriticalData$storport.sys", 0x52b94, 0x0, true, 0xb4b72a9641dc4beb)
#define _d91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitSmartAttributesMeasures$storport.sys", 0x1008, 0x0, true, 0x129f95d118ae4c1f)
#define _d92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryMarkUnitResponsive$storport.sys", 0x52fd4, 0x0, true, 0xf881d32432ddf3a6)
#define _d93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryMarkUnitUnresponsive$storport.sys", 0x53144, 0x0, true, 0x4bb322c7d9a7cdec)
#define _d94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendAdaptiveIdleCounters$storport.sys", 0x223c, 0x0, true, 0xbe322cb8fea6a01f)
#define _d95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitDeviceStatistics$storport.sys", 0x23d8, 0x0, true, 0x5059030a2d78c1e2)
#define _d96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitNvmeHealthInfo$storport.sys", 0x550bc, 0x0, true, 0xe53fa5a0c077b5be)
#define _d97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitPauseRequestCounters$storport.sys", 0xca50, 0x0, true, 0x3c48e8655bed0047)
#define _d98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitPerfData$storport.sys", 0x4250, 0x0, true, 0x9c7ed54f7025ef75)
#define _d99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitQos$storport.sys", 0x55564, 0x0, true, 0x8b45523de7856bad)
#define _e00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitSmartAttributes$storport.sys", 0x1084, 0x0, true, 0xc972931144686ce8)
#define _e01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySmartCommand$storport.sys", 0x15e8, 0x0, true, 0xba49462e916b6692)
#define _e02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTraceLoggingTelemetryTimerDpcRoutine$storport.sys", 0xc900, 0x0, true, 0x50ced27c62530c89)
#define _e03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpUnRegisterTraceLogging$storport.sys", 0x79bbc, 0x0, true, 0xf422b344d6be81a1)
#define _e04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpUninitializePerfTelemetry$storport.sys", 0x55770, 0x0, true, 0x5b0d06e9cda53182)
#define _e05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpUnitInitializePoFxPower$storport.sys", 0x3ac94, 0x0, true, 0x47354e33c3c45206)
#define _e06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpUpdateUncachedExtensionAllocationRegion$storport.sys", 0x3aee4, 0x0, true, 0xb4053d3aa3f07aa3)
#define _e07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorportExtensionTable$storport.sys", 0x67660, 0x0, true, 0x1e48146129467736)
#define _e08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorportTimerDpc$storport.sys", 0x1a70, 0x0, true, 0x2ae9b0ee8bfc45e6)
#define _e09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TelemetryPerfContext$storport.sys", 0x675e0, 0x0, true, 0xc36f4df96a48df32)
#define _e10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TranslateResultToScsiRequestBlock$storport.sys", 0x40508, 0x0, true, 0x11d94f79238baefa)
#define _e11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TranslateScsiRequestBlockToIoInfoSrbExData$storport.sys", 0x406d8, 0x0, true, 0x1091463279c58c30)
#define _e12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TranslateScsiRequestBlockToStorageRequestBlock$storport.sys", 0x40894, 0x0, true, 0xd3d2e14fc096d745)
#define _e13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TranslateToExtendedSrb$storport.sys", 0x409b4, 0x0, true, 0xc6794ca5c6dcbcdd)
#define _e14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UseQPCTime$storport.sys", 0x67d70, 0x0, true, 0xe97f72eecc5a7ef8)
#define _e15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WellKnownPassword$storport.sys", 0x5fdc8, 0x0, true, 0x352f331dabc93c46)
#define _e16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<wchar_t*(wchar_t*, const struct nt::guid_t*)>*), "$WppGuidToStr$storport.sys", 0x58594, 0x0, true, 0xc2153d47d0b6048d)
#define _e17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WppInitGlobalLogger$storport.sys", 0x780a0, 0x0, true, 0xc150e7c19b14e48d)
#define _e18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(wchar_t*, uint32_t, int32_t)>*), "$WppIntToHex$storport.sys", 0x58694, 0x0, true, 0x8159e588cecebce)
#define _e19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_ddd$storport.sys", 0x30e9c, 0x0, true, 0xea1ca87acc7fe8ee)
#define _e20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_dddd$storport.sys", 0x3b070, 0x0, true, 0x8ab15fc002459737)
#define _e21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_ddsd$storport.sys", 0x55c84, 0x0, true, 0x8a25d392cbec6688)
#define _e22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_qdddDDs$storport.sys", 0x31490, 0x0, true, 0xf7e67feb371ea687)
#define _e23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_qdq$storport.sys", 0x49fc0, 0x0, true, 0x8ff7b2a67c3b1a3e)
#define _e24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_qqddds$storport.sys", 0x3158c, 0x0, true, 0x8b1ba4d008fa93df)
#define _e25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_qqs$storport.sys", 0x40000, 0x0, true, 0x603a250962351e88)
#define _e26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_qqsD$storport.sys", 0x400a0, 0x0, true, 0x9778b338943f05cb)
#define _e27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_ThisDir_CTLGUID_wppCtlGuid$storport.sys", 0x5f538, 0x0, true, 0x5a1dfa7032af0511)
#define _m00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateControlObject$storport.sys", 0x0, 0x0, false, 0xb30393369bd0dcf0)
#define _m01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceLogPage$storport.sys", 0x0, 0x0, false, 0xbc9f3b8e89c11dca)
#define _m02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceTelemetryLiveDumpConfig$storport.sys", 0x0, 0x0, false, 0x81b5c57eff67d9ab)
#define _m03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceWarning$storport.sys", 0x0, 0x0, false, 0xbe768d01b5b8188a)
#define _m04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DisableExtensionDriver$storport.sys", 0x0, 0x0, false, 0x638021fd7d209ad1)
#define _m05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnableExtensionCalls$storport.sys", 0x0, 0x0, false, 0xfcb4a0789861cc6f)
#define _m06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterPowerRetryWithWorkItem$storport.sys", 0x0, 0x0, false, 0xdc53fa64ddd285a1)
#define _m07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventCaptureLiveDump$storport.sys", 0x0, 0x0, false, 0x9ff3d464b3ba01cb)
#define _m08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventDeviceReset$storport.sys", 0x0, 0x0, false, 0x4c7b818cdef6341a)
#define _m09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventExtensionDriverLoad$storport.sys", 0x0, 0x0, false, 0x46ee91985f177e18)
#define _m10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventExtensionDriverUnload$storport.sys", 0x0, 0x0, false, 0x8abc4db6ba83cbe3)
#define _m11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventGetMFNDCapability$storport.sys", 0x0, 0x0, false, 0xeda7b253824c25c)
#define _m12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventInsufficientGatewayInitialized$storport.sys", 0x0, 0x0, false, 0x5b53be8ad2d99ed1)
#define _m13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDChildPFControl$storport.sys", 0x0, 0x0, false, 0xbf33fcbbba5dc4c7)
#define _m14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDQueryChildPFCommandPermission$storport.sys", 0x0, 0x0, false, 0x86f63c4a4d81a9f0)
#define _m15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDQueryChildPFList$storport.sys", 0x0, 0x0, false, 0x631b9ed984558755)
#define _m16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDQueryChildPFProperty$storport.sys", 0x0, 0x0, false, 0xf1bf30189aeafa8f)
#define _m17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDQueryChildPFSettings$storport.sys", 0x0, 0x0, false, 0x2f28c770c5a3af65)
#define _m18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDQueryOperationInfo$storport.sys", 0x0, 0x0, false, 0x6b38cf71d6d3e92d)
#define _m19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDSetChildPFCommandPermission$storport.sys", 0x0, 0x0, false, 0x21b4f3a26a6caf68)
#define _m20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDSetChildPFProperty$storport.sys", 0x0, 0x0, false, 0x13df322693a1de7d)
#define _m21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDSetChildPFQoS$storport.sys", 0x0, 0x0, false, 0x937d7de1fcfbcb77)
#define _m22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDSetChildPFSettings$storport.sys", 0x0, 0x0, false, 0x1f45275ef81a9711)
#define _m23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMFNDSetOperationInformation$storport.sys", 0x0, 0x0, false, 0x7df335fec08c195a)
#define _m24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportDiagnosticByteStream$storport.sys", 0x0, 0x0, false, 0xea8865e3f071d652)
#define _m25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthErrorByteStream$storport.sys", 0x0, 0x0, false, 0x5ab06df2eea9e99e)
#define _m26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthInformationalByteStream$storport.sys", 0x0, 0x0, false, 0x207b08e2084b4c88)
#define _m27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthWarningByteStream$storport.sys", 0x0, 0x0, false, 0x558448c0088bf386)
#define _m28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalErrorByteStream$storport.sys", 0x0, 0x0, false, 0x670d1f06ffc7a641)
#define _m29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalInformationalByteStream$storport.sys", 0x0, 0x0, false, 0xb1746a7438e37b01)
#define _m30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarningByteStream$storport.sys", 0x0, 0x0, false, 0xcc70d303d606ac25)
#define _m31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportSystemThreadsNotTerminated$storport.sys", 0x0, 0x0, false, 0xcd53a655be19c161)
#define _m32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventReconfigureMFND$storport.sys", 0x0, 0x0, false, 0x1793c58886482295)
#define _m33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventRegisterMFNDInterface$storport.sys", 0x0, 0x0, false, 0x30081a7c538c797b)
#define _m34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventSMRUnsupportedZoneSizeError$storport.sys", 0x0, 0x0, false, 0xcaebd178a7f8a4a7)
#define _m35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventStorportControlCreationFailed$storport.sys", 0x0, 0x0, false, 0x950bb16597fd77a5)
#define _m36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventTooManyActiveGatewayRequired$storport.sys", 0x0, 0x0, false, 0x10e6bdf38556aaff)
#define _m37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitMaintenanceTimeStart$storport.sys", 0x0, 0x0, false, 0x1493a7b040908160)
#define _m38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitMaintenanceTimeStop$storport.sys", 0x0, 0x0, false, 0xc4b9c99d8b1ba594)
#define _m39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPeriodicDeviceStatistics$storport.sys", 0x0, 0x0, false, 0x29e9312b0489883)
#define _m40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPeriodicNvmeHealthStatistics$storport.sys", 0x0, 0x0, false, 0xd2be32ee6aba0112)
#define _m41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPeriodicPerformance$storport.sys", 0x0, 0x0, false, 0xe927a269765bbdbc)
#define _m42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPeriodicQosSummary$storport.sys", 0x0, 0x0, false, 0x329f4b52e8b91f8)
#define _m43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPeriodicSmartStatistics$storport.sys", 0x0, 0x0, false, 0x32d81f446907a1a3)
#define _m44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPeriodicUniqueError$storport.sys", 0x0, 0x0, false, 0x553a4d9450d9dd9d)
#define _m45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitScsiDiagnostics$storport.sys", 0x0, 0x0, false, 0xeaeb9ff98d087af0)
#define _m46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtensionExtendedFuncPost$storport.sys", 0x0, 0x0, false, 0x6b184c871e345cc3)
#define _m47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtensionExtendedFuncPre$storport.sys", 0x0, 0x0, false, 0x94aafdbb04de5205)
#define _m48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtensionExtendedFuncReplace$storport.sys", 0x0, 0x0, false, 0xa306112886e4ee83)
#define _m49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtensionSendMiniportData$storport.sys", 0x0, 0x0, false, 0x49b194d91347fd93)
#define _m50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtensionSendStorportData$storport.sys", 0x0, 0x0, false, 0x1db35e7fc646f9d3)
#define _m51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_MaximumProcessorCount$storport.sys", 0x0, 0x0, false, 0x9e337ebf2d857ffb)
#define _m52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_OSisClient$storport.sys", 0x0, 0x0, false, 0xba090dff3b826385)
#define _m53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_ProcessorCountPerGateway$storport.sys", 0x0, 0x0, false, 0x1ce1a5c18d28dfb)
#define _m54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidSQMAndETWRefCount$storport.sys", 0x0, 0x0, false, 0x1c0713ef9001d18)
#define _m55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidSQMInitialized$storport.sys", 0x0, 0x0, false, 0x4b84ea27e853a1d0)
#define _m56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidSQMLastLogTick$storport.sys", 0x0, 0x0, false, 0xc82c79f8bf181aa)
#define _m57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidSQMLogInProgress$storport.sys", 0x0, 0x0, false, 0xfb9c033d5ac2ff44)
#define _m58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidSqmPassthroughCdbs$storport.sys", 0x0, 0x0, false, 0x2df487ee04eea618)
#define _m59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidSQMTimer$storport.sys", 0x0, 0x0, false, 0xdbb2ccbd73a745bd)
#define _m60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidSQMTimerDpc$storport.sys", 0x0, 0x0, false, 0x41ab172c2134beff)
#define _m61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDeviceLogPagesPeriod$storport.sys", 0x0, 0x0, false, 0xb70080dd26437287)
#define _m62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDeviceLogPagesTimer$storport.sys", 0x0, 0x0, false, 0xf73e9ac4af10531f)
#define _m63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDeviceLogPagesTimerDpc$storport.sys", 0x0, 0x0, false, 0xc5a9f515d1f5d8f5)
#define _m64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingIoSizeDistributionEnabled$storport.sys", 0x0, 0x0, false, 0xbae90db102a2b60a)
#define _m65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GatewayBusyStateRaceConditionCount$storport.sys", 0x0, 0x0, false, 0x3df4acd6d7d5de71)
#define _m66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_DEVINTERFACE_MFND_STORAGE$storport.sys", 0x0, 0x0, false, 0x34370ca87f71785e)
#define _m67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_DEVINTERFACE_ZNSDISK$storport.sys", 0x0, 0x0, false, 0xc1033dbd63a677cf)
#define _m68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_STORAGE_LIVE_DUMP_DEVICE_TELEMETRY_LOG$storport.sys", 0x0, 0x0, false, 0x4dc041103213737d)
#define _m69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_STORAGE_LIVE_DUMP_DEVICE_TELEMETRY_LOG_HEADER$storport.sys", 0x0, 0x0, false, 0x6c36c7286400c839)
#define _m70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeCount$storport.sys", 0x0, 0x0, false, 0xe607ff721a3848d8)
#define _m71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsWppInitialized$storport.sys", 0x0, 0x0, false, 0xcab9117cd868402)
#define _m72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LoadExtensionDriver$storport.sys", 0x0, 0x0, false, 0x3d89b2658b06652)
#define _m73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0jqzzqxtqqtt_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xf61fb62b1436f4d2)
#define _m74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pqtqqt_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xd0acc9c656a67c8d)
#define _m75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0qjzzqq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xf758c7699a7767f2)
#define _m76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0qjzztqdq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x2cfd581291182fd3)
#define _m77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const int32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t)>*), "$McTemplateK0qjzztqqquuhhhhhhhhqqqqqqqqqqqqu_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xe5d33bd8e5700b07)
#define _m78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzhhhhhqqqqqqqqqqqqquuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xa1d171f1193734a4)
#define _m79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzhhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x9427874dd5fe591c)
#define _m80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint16_t, const uint16_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzhhuuuuuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x39c496c6daff5b38)
#define _m81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzhqqqqqqqqquuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x4b6b8db9386063db)
#define _m82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t)>*), "$McTemplateK0qjzzzq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x8a302d166e33f8cd)
#define _m83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint8_t*, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzqqbr6uuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x64c8961455ed2f1f)
#define _m84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t*, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzqqqqbr8uuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x958722360aab062a)
#define _m85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint16_t, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzqqqqhuuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xf0f30743a4567d07)
#define _m86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xa702d3d357c3d130)
#define _m87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzqquuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x51b0ed3aa68c155a)
#define _m88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const int32_t, const uint8_t, const uint8_t, const uint8_t, const uint32_t)>*), "$McTemplateK0qjzzzqtuuuq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x539fc4672bcd3f23)
#define _m89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x6666cd79776ebd72)
#define _m90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xd5a8503bf153c2a1)
#define _m91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xb72a4d9b9704ca9)
#define _m92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xaabc97776dbadeb0)
#define _m93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x444e870a8b91558c)
#define _m94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x7768a133a8608744)
#define _m95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzssszqqd_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x6d8adc8dec4e5606)
#define _m96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xed268676e2ce4cd7)
#define _m97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x9bfa9831c7f9dc67)
#define _m98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0qzzuqqqqqqd_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x60b7339585472ad9)
#define _m99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjdz_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0x192df508a0558e9a)
#define _n00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuussssq_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xb2e9976756c0467a)
#define _n01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuussssx_EtwWriteTransfer$storport.sys", 0x0, 0x0, false, 0xab70d298f0897ac8)
#define _n02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MFNDCommandSpecificationVersion$storport.sys", 0x0, 0x0, false, 0x7a0e12bfaa4bf4e8)
#define _n03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MFNDEnabled$storport.sys", 0x0, 0x0, false, 0xbed72b33d28e9fbe)
#define _n04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Microsoft_Windows_StorPortHandle$storport.sys", 0x0, 0x0, false, 0xb6a207aeecb6cbe8)
#define _n05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnDemandDataProviderInitialized$storport.sys", 0x0, 0x0, false, 0x4a644c9bc57621a5)
#define _n06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OverrideDeviceUniqueIDCapability$storport.sys", 0x0, 0x0, false, 0xdb070233d4720c1f)
#define _n07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortFreeRegistryBuffer$storport.sys", 0x0, 0x0, false, 0x87e4b5dc4e0eb2f4)
#define _n08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughBuildIrpEx$storport.sys", 0x0, 0x0, false, 0x5b19a60e02104836)
#define _n09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughFreeIrpEx$storport.sys", 0x0, 0x0, false, 0x24c838c9fa7eee0)
#define _n10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAdapterUpdateAssociatedUnitsIdentity$storport.sys", 0x0, 0x0, false, 0xae67269a94d19e16)
#define _n11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAddSecondaryDataforDeviceTelemetry$storport.sys", 0x0, 0x0, false, 0x20a36b6b56ec9036)
#define _n12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildDiagnosticBufferForMiniport$storport.sys", 0x0, 0x0, false, 0x4fe302310d59d335)
#define _n13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCallMiniportResetBus$storport.sys", 0x0, 0x0, false, 0x3f24849b8be26aac)
#define _n14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCaptureLiveDumpAllowed$storport.sys", 0x0, 0x0, false, 0xdde6b2f02e38fec6)
#define _n15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCheckAllMiniportSystemThreadsExit$storport.sys", 0x0, 0x0, false, 0xc7530be117d5719f)
#define _n16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaMiniportIsFeatureSupported$storport.sys", 0x0, 0x0, false, 0xfbdbbdf7d5a57a27)
#define _n17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaSqmAndEtwCleanup$storport.sys", 0x0, 0x0, false, 0xbcfecbb6ff765dcc)
#define _n18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaSqmLogAdapterStatistics$storport.sys", 0x0, 0x0, false, 0x962db1db40e09b60)
#define _n19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaSqmLogScsiPassthroughStatistics$storport.sys", 0x0, 0x0, false, 0x94af3dd8713a4c1a)
#define _n20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaSqmLogStatistics$storport.sys", 0x0, 0x0, false, 0x3a2e8a3c684d8f6a)
#define _n21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaSqmTimerDpc$storport.sys", 0x0, 0x0, false, 0xa0427f81ab0180e4)
#define _n22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageDataCollectionIoctl$storport.sys", 0x0, 0x0, false, 0x8f3649b0bd0554f5)
#define _n23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageGetInternalDataIoctl$storport.sys", 0x0, 0x0, false, 0x69d82009168effa2)
#define _n24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageInternalQueryPropertyIoctl$storport.sys", 0x0, 0x0, false, 0x2621910fc85df391)
#define _n25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageInternalSetPropertyIoctl$storport.sys", 0x0, 0x0, false, 0xe6e7a9b18b8c7cee)
#define _n26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageManageBypassIOIoctl$storport.sys", 0x0, 0x0, false, 0x7cf2cc502be503ef)
#define _n27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDeviceFruIdPropertyIoctl$storport.sys", 0x0, 0x0, false, 0x85d91a57f4f9c341)
#define _n28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDeviceLedStatePropertyIoctl$storport.sys", 0x0, 0x0, false, 0xdc4ac104dd4a9d5c)
#define _n29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl$storport.sys", 0x0, 0x0, false, 0x1d8f28ad15502677)
#define _n30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaValidateMiniportSystemThreadPriority$storport.sys", 0x0, 0x0, false, 0x946614b1546921ad)
#define _n31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCancelWaitCheckTimer$storport.sys", 0x0, 0x0, false, 0x48e2bc4f4cd25bbf)
#define _n32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDisableMFNDInterface$storport.sys", 0x0, 0x0, false, 0x63a72e35a928e833)
#define _n33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterEnableIoResourceAutoReclaim$storport.sys", 0x0, 0x0, false, 0x368d2c1cd03d43d8)
#define _n34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterMapBuffers$storport.sys", 0x0, 0x0, false, 0xc6eba43602965c70)
#define _n35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterMFNDChildPFControl$storport.sys", 0x0, 0x0, false, 0xb4db54aa2f9f2668)
#define _n36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPoFxSetDeviceIdleTimeout$storport.sys", 0x0, 0x0, false, 0x72be374d00e3de9b)
#define _n37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterReclaimIoResourceTimerDpcRoutine$storport.sys", 0x0, 0x0, false, 0x1759ab3e2ccbed04)
#define _n38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterReconfigureMFND$storport.sys", 0x0, 0x0, false, 0xaf71dc68dad612d8)
#define _n39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRegisterMFNDInterface$storport.sys", 0x0, 0x0, false, 0xee2a8f83cee9eb2)
#define _n40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSendPowerToMiniportWorkItemRoutine$storport.sys", 0x0, 0x0, false, 0xd0d6cb73883789d7)
#define _n41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStorageGetInternalDataIoctl$storport.sys", 0x0, 0x0, false, 0x752c47fc9fc2a0e5)
#define _n42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStorageInternalQueryPropertyIoctl$storport.sys", 0x0, 0x0, false, 0xc637dad6b9968135)
#define _n43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStorageInternalSetPropertyIoctl$storport.sys", 0x0, 0x0, false, 0x1be2bfb47829de35)
#define _n44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSystemPowerHintsEnabled$storport.sys", 0x0, 0x0, false, 0x15e5445a92e0e526)
#define _n45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAllocateDeferredItem$storport.sys", 0x0, 0x0, false, 0xcdea341dd824fcf6)
#define _n46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCaptureLiveDump$storport.sys", 0x0, 0x0, false, 0xeff8ab81010203a)
#define _n47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCaptureLiveDumpCallBack$storport.sys", 0x0, 0x0, false, 0x3510dd39f6d05acc)
#define _n48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCheckPerProcessorCompletions$storport.sys", 0x0, 0x0, false, 0xa6e758ef9da1aa05)
#define _n49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCreateBusEnumerator$storport.sys", 0x0, 0x0, false, 0xcb5efcef35e43306)
#define _n50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDiagnosticIoctlStatusToNtStatus$storport.sys", 0x0, 0x0, false, 0x3f360bfd83b615fd)
#define _n51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDriverDeviceControlIrp$storport.sys", 0x0, 0x0, false, 0xf03a81032d698f35)
#define _n52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetStorageAdapterFruIdProperty$storport.sys", 0x0, 0x0, false, 0xf943e6d61054e0e7)
#define _n53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint8_t, char*, uint32_t)>*), "$RaidHexFromUchar$storport.sys", 0x0, 0x0, false, 0xa3d8422ff0068bf6)
#define _n54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidHexFromUshort$storport.sys", 0x0, 0x0, false, 0x1ce3126669a2850f)
#define _n55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializeBusEnumerator$storport.sys", 0x0, 0x0, false, 0x635044805a241550)
#define _n56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidMaskUnmaskPciMsixEntry$storport.sys", 0x0, 0x0, false, 0x41d6f5ad8f1829cb)
#define _n57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryLedState$storport.sys", 0x0, 0x0, false, 0x8622f2629f5a5577)
#define _n58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryLedStateByAcpiDsm$storport.sys", 0x0, 0x0, false, 0x749e87e41730f20b)
#define _n59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryLedStateByNpem$storport.sys", 0x0, 0x0, false, 0xff0f3be18ac8c7bf)
#define _n60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryPciDeviceType$storport.sys", 0x0, 0x0, false, 0x8cb59cd85d7726c9)
#define _n61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidReleaseUnitListLock$storport.sys", 0x0, 0x0, false, 0x92b0e5794069fbee)
#define _n62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSqmRecordPassthroughData$storport.sys", 0x0, 0x0, false, 0xb26824df69975711)
#define _n63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidStartUnit$storport.sys", 0x0, 0x0, false, 0xf5ca38f91d9e6764)
#define _n64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitAssignAddress$storport.sys", 0x0, 0x0, false, 0xc6243fedc760e90f)
#define _n65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitLogSenseCommandSrb$storport.sys", 0x0, 0x0, false, 0x42c691487ed24ec5)
#define _n66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitNotifyHardwareGone$storport.sys", 0x0, 0x0, false, 0xe440bab1776d773c)
#define _n67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPoFxActivateComponentFromIoctl$storport.sys", 0x0, 0x0, false, 0xde8254097d16a3da)
#define _n68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitPoFxIdleComponentFromIoctl$storport.sys", 0x0, 0x0, false, 0x887953fd8ca193e1)
#define _n69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitReady$storport.sys", 0x0, 0x0, false, 0x6bdcfc9c418e16ee)
#define _n70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct stor::port::raid_unit_extension_t*)>*), "$RaidUnitReleasePoFx$storport.sys", 0x0, 0x0, false, 0x716681de1a9b09a)
#define _n71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUpdateUnitIdentityWorkRoutine$storport.sys", 0x0, 0x0, false, 0xbe922b65be4611eb)
#define _n72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUpdateZoneIoMetadata$storport.sys", 0x0, 0x0, false, 0x57f2c96d5b8d4a2b)
#define _n73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpPortGetAdapter$storport.sys", 0x0, 0x0, false, 0x9a27f6c586f4d653)
#define _n74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportAllWheaErrorsAsNonFatal$storport.sys", 0x0, 0x0, false, 0x711a68ef70d525fb)
#define _n75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RuntimePowerDisabled$storport.sys", 0x0, 0x0, false, 0x96cd0cd5229ea22c)
#define _n76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SQM_ADD_STREAMROW_EX$storport.sys", 0x0, 0x0, false, 0x3ebd820a43e2d2dd)
#define _n77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SQM_SET_DWORD64$storport.sys", 0x0, 0x0, false, 0x53b42075d87bcfb3)
#define _n78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SQM_SETIFMAX_DWORD$storport.sys", 0x0, 0x0, false, 0xbb46892c06cd7275)
#define _n79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SQM_SETIFMIN_DWORD$storport.sys", 0x0, 0x0, false, 0xf9282dc8057201a9)
#define _n80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StRtlIoStorInfoGetHybridWriteThrough$storport.sys", 0x0, 0x0, false, 0x68234b5195532979)
#define _n81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAdapterDereferenceDeviceObject$storport.sys", 0x0, 0x0, false, 0x6a83edfc5e733d8f)
#define _n82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAdapterNeedsUpdate$storport.sys", 0x0, 0x0, false, 0x9e8a18b76d9c71a0)
#define _n83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAdapterNVMeEnumerate$storport.sys", 0x0, 0x0, false, 0x95f05181e92fb766)
#define _n84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAdapterQueryAdapterObjectProperty$storport.sys", 0x0, 0x0, false, 0x8350b84cffef2456)
#define _n85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAdapterQueryIdentifyControllerProperty$storport.sys", 0x0, 0x0, false, 0x428ea72d64e2a595)
#define _n86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAllocateContiguousIoResourcesWithPreferredNode$storport.sys", 0x0, 0x0, false, 0x2e054dbb7b259537)
#define _n87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorBuildMFNDGetSetCommandsPermissionCommand$storport.sys", 0x0, 0x0, false, 0x54f0de6453acbeb3)
#define _n88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct stor::port::nvme_command_t*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint32_t)>*), "$StorBuildMFNDGetSetFeatureCommand$storport.sys", 0x0, 0x0, false, 0x685e1857ff8f08ef)
#define _n89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorBuildMFNDManagementCommand$storport.sys", 0x0, 0x0, false, 0x6143849c8c882571)
#define _n90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorBuildNVMeSerialNumber$storport.sys", 0x0, 0x0, false, 0xeaa53688317a32f0)
#define _n91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCopyNVMeFirmwareRevision$storport.sys", 0x0, 0x0, false, 0x493211ab379a6538)
#define _n92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCreateIoGateways$storport.sys", 0x0, 0x0, false, 0xcdf6f4a7dff96018)
#define _n93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorDeleteIoGateway$storport.sys", 0x0, 0x0, false, 0xf1d41dbd4c7ca59d)
#define _n94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorDeleteNVMeIdentity$storport.sys", 0x0, 0x0, false, 0xb48b9a882a771a6)
#define _n95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEnableAdapterDiagnosticEvents$storport.sys", 0x0, 0x0, false, 0x1a930e53f4099f60)
#define _n96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEnableAdapterEtwTracing$storport.sys", 0x0, 0x0, false, 0xc6be01630c4799ba)
#define _n97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEnableAdapterHealthEvents$storport.sys", 0x0, 0x0, false, 0xff509a0f799c8bfa)
#define _n98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEnableAdapterOperationalEvents$storport.sys", 0x0, 0x0, false, 0xf4fcef39d90dee83)
#define _n99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEnableSortedEventQueue$storport.sys", 0x0, 0x0, false, 0xa4bbc01403ffe83b)
#define _o00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwErrorEventThrottleLimit$storport.sys", 0x0, 0x0, false, 0x2fd8ddd3f3a0f2cf)
#define _o01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwInfoEventThrottleLimit$storport.sys", 0x0, 0x0, false, 0x467581f89aec5192)
#define _o02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwMiniportLogByteStream$storport.sys", 0x0, 0x0, false, 0xf8de921884d3ed35)
#define _o03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwResetCounters$storport.sys", 0x0, 0x0, false, 0x7eaf93cf4f54e57a)
#define _o04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwWarningEventThrottleLimit$storport.sys", 0x0, 0x0, false, 0xc3f20a0cdd0b865b)
#define _o05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::ascii_view*)>*), "$StorFreeAnsiString$storport.sys", 0x0, 0x0, false, 0x178f0922dd5f1d35)
#define _o06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorFreeExtraIoResourceForAdapter$storport.sys", 0x0, 0x0, false, 0xf9a93755c6aebf3b)
#define _o07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorFreeExtraIoResourceForGateway$storport.sys", 0x0, 0x0, false, 0x5cfba5357cdc59b2)
#define _o08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorGetActiveGatewayCountRequired$storport.sys", 0x0, 0x0, false, 0x8e9d2c8779cbdfdb)
#define _o09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorGetMFNDCapabilities$storport.sys", 0x0, 0x0, false, 0x3a691cbcdce24b44)
#define _o10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorGetNVMeIdentifyInfo$storport.sys", 0x0, 0x0, false, 0x8c0313c6a961ec07)
#define _o11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorGetOutstandingIoCount$storport.sys", 0x0, 0x0, false, 0x6b617c74dd4d5694)
#define _o12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorGetPendingIoCount$storport.sys", 0x0, 0x0, false, 0x336bbde8efb70d22)
#define _o13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorGetPreferredNodeNumber$storport.sys", 0x0, 0x0, false, 0xcfdba6364ab3118a)
#define _o14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorIsIoGatewayPaused$storport.sys", 0x0, 0x0, false, 0x46171e9941a3ecea)
#define _o15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorIsSoftNumaOptIn$storport.sys", 0x0, 0x0, false, 0xbbe4056d533d8547)
#define _o16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDCapability$storport.sys", 0x0, 0x0, false, 0x17b842cd0b457250)
#define _o17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDChildPFControl$storport.sys", 0x0, 0x0, false, 0x7390fa23c46b411f)
#define _o18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDQueryChildPFCommandPermission$storport.sys", 0x0, 0x0, false, 0xa79cdd701153963)
#define _o19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDQueryChildPFList$storport.sys", 0x0, 0x0, false, 0x341ea90a40546a5a)
#define _o20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDQueryChildPFProperty$storport.sys", 0x0, 0x0, false, 0x9c7c378216a057b2)
#define _o21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDQueryChildPFSettings$storport.sys", 0x0, 0x0, false, 0xc5cd8212ce57252d)
#define _o22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct stor::port::raid_adapter_extension_t*, enum stor::port::mfnd_operation_mode_t, enum stor::port::mfnd_operation_privilege_t, uint32_t, uint32_t)>*), "$StorLogMFNDQueryOperationInfo$storport.sys", 0x0, 0x0, false, 0x3f398d3dbec97a61)
#define _o23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDReconfigure$storport.sys", 0x0, 0x0, false, 0x61cd27f8a5d614ac)
#define _o24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDSetChildPFCommandPermission$storport.sys", 0x0, 0x0, false, 0xaba20c27a9bae6c6)
#define _o25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDSetChildPFProperty$storport.sys", 0x0, 0x0, false, 0xf4f9179d470a2d2f)
#define _o26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDSetChildPFQoS$storport.sys", 0x0, 0x0, false, 0x72b784ce9a7642bd)
#define _o27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogMFNDSetChildPFSettings$storport.sys", 0x0, 0x0, false, 0x4a0ed877f740504d)
#define _o28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct stor::port::raid_adapter_extension_t*, uint32_t, uint8_t, uint8_t, uint32_t, uint32_t)>*), "$StorLogMFNDSetOperationInfo$storport.sys", 0x0, 0x0, false, 0x1b3f8fed9230e09)
#define _o29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorLogRegisterMFNDInterface$storport.sys", 0x0, 0x0, false, 0x811f8c4cc9790198)
#define _o30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorMFNDChildPFControl$storport.sys", 0x0, 0x0, false, 0xb4102af4cab37f0e)
#define _o31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorMiniportDiagnosticEventsEnabled$storport.sys", 0x0, 0x0, false, 0x187a2818877a9c21)
#define _o32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorMiniportHealthEventsEnabled$storport.sys", 0x0, 0x0, false, 0x1e1713f869c0c09f)
#define _o33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorMiniportOperationalEventsEnabled$storport.sys", 0x0, 0x0, false, 0x503de303153566de)
#define _o34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorProcessNVMeEnumeratorFillInfo$storport.sys", 0x0, 0x0, false, 0x555c4324315fff8b)
#define _o35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorProcessNVMeModifiedNodes$storport.sys", 0x0, 0x0, false, 0xb3c94ee3c1581d55)
#define _o36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorProcessNVMeNewUnit$storport.sys", 0x0, 0x0, false, 0x1eb2f4679329364)
#define _o37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorProcessNVMeUnitEnumerator$storport.sys", 0x0, 0x0, false, 0x8ce0247ff7a710e5)
#define _o38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorQueryAndUpdateCachedMFNDOperationInfo$storport.sys", 0x0, 0x0, false, 0x66aff5d2d5295041)
#define _o39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorQueryMFNDCapability$storport.sys", 0x0, 0x0, false, 0x63b36dd837e3929c)
#define _o40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorQueryMFNDChildPFCommandPermission$storport.sys", 0x0, 0x0, false, 0x14d4af8d1c87c9d9)
#define _o41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorQueryMFNDChildPFGlobalProperty$storport.sys", 0x0, 0x0, false, 0xfd4d362b7decf491)
#define _o42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorQueryMFNDChildPFList$storport.sys", 0x0, 0x0, false, 0xe3a0d79c96a92ebd)
#define _o43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorQueryMFNDChildPFSettings$storport.sys", 0x0, 0x0, false, 0xef226df84c6fd6db)
#define _o44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorQueryMFNDOperationInfo$storport.sys", 0x0, 0x0, false, 0xe76c8bb0ed131072)
#define _o45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorResetMFND$storport.sys", 0x0, 0x0, false, 0xd3767945af5e5781)
#define _o46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct stor::port::raid_adapter_extension_t*, void*, uint32_t, struct stor::port::nvme_command_t*, enum stor::port::srbex_data_nvme_command_type_t, uint32_t, uint8_t, uint32_t, uint32_t*, uint32_t*)>*), "$StorSendMFNDCommand$storport.sys", 0x0, 0x0, false, 0xe4d2197c2a716e8e)
#define _o47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSerialNumberFromNvmeId$storport.sys", 0x0, 0x0, false, 0xe1563f936394ef60)
#define _o48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetAllIoGatewayBusy$storport.sys", 0x0, 0x0, false, 0xb5842ee038ce9672)
#define _o49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetAllIoGatewayNotBusy$storport.sys", 0x0, 0x0, false, 0x830b5f7600247a6)
#define _o50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetIoGatewayBusy$storport.sys", 0x0, 0x0, false, 0x949751ae40c57079)
#define _o51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetMFNDChildPFCommandPermission$storport.sys", 0x0, 0x0, false, 0x6f890a75db3672ab)
#define _o52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetMFNDChildPFGlobalProperty$storport.sys", 0x0, 0x0, false, 0x5e51367e1a7d457f)
#define _o53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetMFNDChildPFQoS$storport.sys", 0x0, 0x0, false, 0x819c75033f679353)
#define _o54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetMFNDChildPFSettings$storport.sys", 0x0, 0x0, false, 0xb7ca164d1892dbf7)
#define _o55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetMFNDOperationInfo$storport.sys", 0x0, 0x0, false, 0xe150a6666055dfd7)
#define _o56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSetMFNDOperationPrivilege$storport.sys", 0x0, 0x0, false, 0x7017a9ce41584a69)
#define _o57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSqmAddToStream$storport.sys", 0x0, 0x0, false, 0x97ffc6467e259ba5)
#define _o58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSqmCleanup$storport.sys", 0x0, 0x0, false, 0x236205dffe22453b)
#define _o59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSqmCreateStringStreamEntry$storport.sys", 0x0, 0x0, false, 0xe130cf110011a2b1)
#define _o60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSqmInitialize$storport.sys", 0x0, 0x0, false, 0x588a4a4f6dd81dea)
#define _o61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorSqmProvider$storport.sys", 0x0, 0x0, false, 0x8410cbb693845abb)
#define _o62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnitAssignNVMeIdentity$storport.sys", 0x0, 0x0, false, 0x85928ec19c2cf69d)
#define _o63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnitDereferenceDeviceObject$storport.sys", 0x0, 0x0, false, 0xdaee42c80eef3c2b)
#define _o64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnitExecuteNvmeSrb$storport.sys", 0x0, 0x0, false, 0x1552dc2215e12e2f)
#define _o65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnitExecuteNvmeSrbComplete$storport.sys", 0x0, 0x0, false, 0xe066a5f6a14d8b3c)
#define _o66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnitQueryBypassIOProperty$storport.sys", 0x0, 0x0, false, 0x44c3f8a2d2162290)
#define _o67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnitQueryDeviceIdentifyIoCommandSetProperty$storport.sys", 0x0, 0x0, false, 0x7acf84e094fe9fd3)
#define _o68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnitQueryDeviceIdentifyNamespaceProperty$storport.sys", 0x0, 0x0, false, 0x3eedc6ce62347da2)
#define _o69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnitQueryNamespaceIdProperty$storport.sys", 0x0, 0x0, false, 0x188c6668d4fec290)
#define _o70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorUnitStartBypassIo$storport.sys", 0x0, 0x0, false, 0xc8c9c486f4f3c64d)
#define _o71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorValidateMFNDCapabilities$storport.sys", 0x0, 0x0, false, 0x808205dfffcebd5b)
#define _o72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorWaitForSingleObject$storport.sys", 0x0, 0x0, false, 0xee67ee952f77fa10)
#define _o73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpControl$storport.sys", 0x0, 0x0, false, 0xf6a4436f8c9804ba)
#define _o74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpDeviceLogPagesWorkItemRoutine$storport.sys", 0x0, 0x0, false, 0x955547cf09a0a57)
#define _o75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpFreePool$storport.sys", 0x0, 0x0, false, 0x20d340f310910e42)
#define _o76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetDeviceObjects$storport.sys", 0x0, 0x0, false, 0x353031a755f3c702)
#define _o77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpInitializePerUnitIoSizeDistribution$storport.sys", 0x0, 0x0, false, 0x8cdab91ab53da888)
#define _o78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpInitializePerUnitPerfTelemetry$storport.sys", 0x0, 0x0, false, 0xcbe3b94d57678b5f)
#define _o79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryEnumUnitNvmeLogPages$storport.sys", 0x0, 0x0, false, 0x2859a851d45b9dd4)
#define _o80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryFindUnitNvmeLogPages$storport.sys", 0x0, 0x0, false, 0x997c334eef3adca2)
#define _o81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryGetReadErrorCounter$storport.sys", 0x0, 0x0, false, 0xb3f04e00abd451f4)
#define _o82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryGetStartStopCycleCounter$storport.sys", 0x0, 0x0, false, 0x5df6a3b9755546c0)
#define _o83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryGetWriteErrorCounter$storport.sys", 0x0, 0x0, false, 0xf13d51724dde942a)
#define _o84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitErrorData$storport.sys", 0x0, 0x0, false, 0x1d9973bc42fad1b)
#define _o85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitIoSizeDistributionData$storport.sys", 0x0, 0x0, false, 0x81feed4d4f9b33d6)
#define _o86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitNvmeLogPage$storport.sys", 0x0, 0x0, false, 0x294d07429b121dfb)
#define _o87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitScsiDiagnostics$storport.sys", 0x0, 0x0, false, 0xfb1c17d2584854fd)
#define _o88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpUninitializePerUnitIoSizeDistribution$storport.sys", 0x0, 0x0, false, 0x6a580d651959c13)
#define _o89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpUninitializePerUnitPerfTelemetry$storport.sys", 0x0, 0x0, false, 0xa964a5816c1cf4f2)
#define _o90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StringCchCatA$storport.sys", 0x0, 0x0, false, 0x85348cbdc8089b0b)
#define _o91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TelemetryProviderInitialized$storport.sys", 0x0, 0x0, false, 0x8dce62906d35032a)
#define _o92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_ccccxqbcppxxx$storport.sys", 0x0, 0x0, false, 0x5bd45ebb08c73393)
#define _o93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pcxxpc$storport.sys", 0x0, 0x0, false, 0x707cb7cf68a7b074)
#define _o94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqccc$storport.sys", 0x0, 0x0, false, 0x52cf8cf569576716)
#define _o95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint64_t, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const void*, const int32_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const void*)>*), "$Template_pqcccccp$storport.sys", 0x0, 0x0, false, 0xabcad535193ecbfe)
#define _o96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqcccq$storport.sys", 0x0, 0x0, false, 0xbcda6cd31d4d90b)
#define _o97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqcccqq$storport.sys", 0x0, 0x0, false, 0xe0e82b89f76c8a58)
#define _o98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqcccqttqqttq$storport.sys", 0x0, 0x0, false, 0xf049b7cdf317f81d)
#define _o99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqccct$storport.sys", 0x0, 0x0, false, 0xf15d9dc989c53ccb)
#define _p00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqccctq$storport.sys", 0x0, 0x0, false, 0x1fc7e4adf099a180)
#define _p01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqccctx$storport.sys", 0x0, 0x0, false, 0x6efc5acabf2fb4f7)
#define _p02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqccqqq$storport.sys", 0x0, 0x0, false, 0x12f479d8bcf6b438)
#define _p03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqqccc$storport.sys", 0x0, 0x0, false, 0xb6a07f03b1972a09)
#define _p04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqqcccqpp$storport.sys", 0x0, 0x0, false, 0x232e3f6d291e3564)
#define _p05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqqp$storport.sys", 0x0, 0x0, false, 0x96b586d9cbbc1551)
#define _p06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqqq$storport.sys", 0x0, 0x0, false, 0xa7649a5f51ccf3af)
#define _p07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqqx$storport.sys", 0x0, 0x0, false, 0xd0a6bb46c1777da7)
#define _p08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqt$storport.sys", 0x0, 0x0, false, 0x69d942045bca2986)
#define _p09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqtq$storport.sys", 0x0, 0x0, false, 0x695ea2a128280682)
#define _p10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqtqcccqqqqt$storport.sys", 0x0, 0x0, false, 0x2b52fee68a0a4020)
#define _p11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqtqq$storport.sys", 0x0, 0x0, false, 0xa8c5a99008552b4)
#define _p12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pqtx$storport.sys", 0x0, 0x0, false, 0x431dff76127d073e)
#define _p13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_pzqqxxtt$storport.sys", 0x0, 0x0, false, 0x8acad1903d3917bc)
#define _p14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcc$storport.sys", 0x0, 0x0, false, 0x15ead0e0ec7bfdf5)
#define _p15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qccc$storport.sys", 0x0, 0x0, false, 0xb55ea4aeca5b6254)
#define _p16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccjczxxxxxqqqb$storport.sys", 0x0, 0x0, false, 0x40cfb2e2c03b3178)
#define _p17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccjq$storport.sys", 0x0, 0x0, false, 0x928a57e5a6beb485)
#define _p18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccjqqb$storport.sys", 0x0, 0x0, false, 0x7301884f42cf8e73)
#define _p19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccjqqbqbqbqbqbqbqb$storport.sys", 0x0, 0x0, false, 0x7045f311812adc33)
#define _p20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccjqqbqt$storport.sys", 0x0, 0x0, false, 0x51a1ff9dc85ad1a1)
#define _p21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccjqqccccccqqxq$storport.sys", 0x0, 0x0, false, 0x6b896d74d61719bc)
#define _p22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccjqqqb$storport.sys", 0x0, 0x0, false, 0x8b71ca9fa3db714a)
#define _p23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccjqtqb$storport.sys", 0x0, 0x0, false, 0xc777cbbb83f6461c)
#define _p24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccjxxcxxqqq$storport.sys", 0x0, 0x0, false, 0xc7fbbaee43e4d2ff)
#define _p25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccpq$storport.sys", 0x0, 0x0, false, 0x4051940b4a63f479)
#define _p26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccpqcqqqq$storport.sys", 0x0, 0x0, false, 0x47655469d9df480a)
#define _p27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccqqq$storport.sys", 0x0, 0x0, false, 0x117425d3ad6f3153)
#define _p28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcccqqtt$storport.sys", 0x0, 0x0, false, 0xcd4e1e4f44cabad1)
#define _p29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qccctq$storport.sys", 0x0, 0x0, false, 0x8727afb27efacaf5)
#define _p30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcj$storport.sys", 0x0, 0x0, false, 0x1b9a08e8b8d4f4da)
#define _p31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qcq$storport.sys", 0x0, 0x0, false, 0x5b8f3867c0a0bc4c)
#define _p32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qpqcqqqq$storport.sys", 0x0, 0x0, false, 0x43e0c7e8965a069c)
#define _p33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qqqqqqqqqqcccqqtt$storport.sys", 0x0, 0x0, false, 0x4743e102a8138afd)
#define _p34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_qqqqqqqqxxxxx$storport.sys", 0x0, 0x0, false, 0x9a82e10c737aad5d)
#define _p35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_xpccpcccccqxx$storport.sys", 0x0, 0x0, false, 0xc3558336e2e7c2a0)
#define _p36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_zqcccjqqb$storport.sys", 0x0, 0x0, false, 0xb3768682dcf856d4)
#define _p37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_zqcccjqqbx$storport.sys", 0x0, 0x0, false, 0xc7b1ba6de8cc34b5)
#define _p38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_zqcccqqqt$storport.sys", 0x0, 0x0, false, 0xad997b893fead1a2)
#define _p39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_zqqcccqpp$storport.sys", 0x0, 0x0, false, 0xbe3c40a0e4d8f51e)
#define _p40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_zqqqqq$storport.sys", 0x0, 0x0, false, 0xb97a3718ad90bdac)
#define _p41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_zqqqqqqq$storport.sys", 0x0, 0x0, false, 0x775d7d7508543a9e)
#define _p42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_zqqqqx$storport.sys", 0x0, 0x0, false, 0x49293bf3d925e5)
#define _p43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_zx$storport.sys", 0x0, 0x0, false, 0x7d1e24aaec56dec2)
#define _p44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Template_zzqqq$storport.sys", 0x0, 0x0, false, 0x74bec062c27e3415)
#define _p45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnloadExtensionDriver$storport.sys", 0x0, 0x0, false, 0x825cbcb26c2b9712)
#define _p46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_0f528954af03336098861edcd0252264_Traceguids$storport.sys", 0x0, 0x0, false, 0x1a0f29cdc7c68b9e)
#define _p47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_22dbf8d6d8ed332b22c627201937f270_Traceguids$storport.sys", 0x0, 0x0, false, 0x1a59091d7962f449)
#define _p48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_2cdf5e3a8b473e064111cab9dd01f326_Traceguids$storport.sys", 0x0, 0x0, false, 0xefaf0db816cc3cec)
#define _p49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_716b3cea72f038ef7c20d60d254d0ae6_Traceguids$storport.sys", 0x0, 0x0, false, 0x417b4e66b59be790)
#define _p50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_829f864e54213ce604c5c92b3588a0eb_Traceguids$storport.sys", 0x0, 0x0, false, 0xd967be9ebcbbe76a)
#define _p51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_83e99e9612423e7e45f941ca5e9f9701_Traceguids$storport.sys", 0x0, 0x0, false, 0x68674d2019bcaea8)
#define _p52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_853dacc0765f33640d40b8b391c2a4b7_Traceguids$storport.sys", 0x0, 0x0, false, 0x6e775a975f31b971)
#define _p53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_8629c91f542f3f4c40fd99d44e5decef_Traceguids$storport.sys", 0x0, 0x0, false, 0x7e5b5a980c115a31)
#define _p54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_9cef3b4c60973fc161441df373a78906_Traceguids$storport.sys", 0x0, 0x0, false, 0x1467c1792b83ff4f)
#define _p55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_a20461f3f5ed3320672766c26a257c80_Traceguids$storport.sys", 0x0, 0x0, false, 0x4106c43e747e8606)
#define _p56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids$storport.sys", 0x0, 0x0, false, 0xd1a4979d31114667)
#define _p57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_aa86bbaa58c539f4643e2dd9379cd1c7_Traceguids$storport.sys", 0x0, 0x0, false, 0xf6ed9789f5a08320)
#define _p58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_adf5a490639137350fe391398fd0549f_Traceguids$storport.sys", 0x0, 0x0, false, 0xdcda841ab9cab485)
#define _p59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_afacbaaa0b96371c79aad0ae05c61007_Traceguids$storport.sys", 0x0, 0x0, false, 0xad7f714665947e8b)
#define _p60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_b8aa5dc78a713cf38c391f4110a2b647_Traceguids$storport.sys", 0x0, 0x0, false, 0x3705ddec0303d5b2)
#define _p61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_de08c5d1b9c93a1c8032742bdb9082ca_Traceguids$storport.sys", 0x0, 0x0, false, 0x3c58aa3a836fcbbf)
#define _p62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_e288614d163b3ceea713389723084ed3_Traceguids$storport.sys", 0x0, 0x0, false, 0x64b16978f50f01e0)
#define _p63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_e2ad347556083c3f7a7362b05d162079_Traceguids$storport.sys", 0x0, 0x0, false, 0x2c2ee813da5a6000)
#define _p64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_ec4466e6a4c430629de8bf8b70e6b5a7_Traceguids$storport.sys", 0x0, 0x0, false, 0x29da1099bddd9b89)
#define _p65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_eef62bd4cf0436f547a05fa28d824b44_Traceguids$storport.sys", 0x0, 0x0, false, 0x727345c7153daf77)
#define _p66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_f43134d441e031b6c1d900c8b3e044b0_Traceguids$storport.sys", 0x0, 0x0, false, 0x7e20d5049a32639b)
#define _p67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_f8f94deaddf8302c4a0838369eef3321_Traceguids$storport.sys", 0x0, 0x0, false, 0x4c0816c9e992db47)
#define _p68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_fa495b127642376557d8e88f34c20653_Traceguids$storport.sys", 0x0, 0x0, false, 0x349675243a3379c0)
#define _p69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_xs$storport.sys", 0x0, 0x0, false, 0xbe35c2bb3a7f2ea)
#define _p70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportLogError$storport.sys", 0x5f5c8, 0x0, true, 0xe6d77cdb8411705d)
#define _p71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpWheaInitialized$storport.sys", 0x678cc, 0x0, true, 0xed754a143feb6158)
#define _p72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzssstxqqbr13qbr15qbr17qbr19qbr21qbr23qbr25_EtwWriteTransfer$storport.sys", 0x4e938, 0x0, true, 0x504a5fcca5cdc03c)
#define _p73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzsssxqtqbr13_EtwWriteTransfer$storport.sys", 0x1744, 0x0, true, 0xc338279337f773db)
#define _p74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzssszhzhbr13hbr15q_EtwWriteTransfer$storport.sys", 0x35160, 0x0, true, 0x7333a34bb93658f4)
#define _p75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer$storport.sys", 0x4ecb0, 0x0, true, 0x6f98cff15e278220)
#define _p76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0qzzqxtqqt_EtwWriteTransfer$storport.sys", 0x28438, 0x0, true, 0x74ca64bb28b71d94)
#define _p77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuuq_EtwWriteTransfer$storport.sys", 0x443dc, 0x0, true, 0xa886e931f0705d9e)
#define _p78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPoFxActivateComponentFromMiniport$storport.sys", 0x0, 0x0, false, 0x4e6854b6bcf15e0a)
#define _p79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPoFxIdleComponentFromMiniport$storport.sys", 0x0, 0x0, false, 0x3e742460c7eb2783)
#define _p80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRequestDirectComplete$storport.sys", 0x2bb2c, 0x0, true, 0xb361ecb4aa9d31de)
#define _p81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCheckD3AllowedOnCurrentPlatform$storport.sys", 0x56738, 0x0, true, 0x7e04d941c9e9e95d)
#define _p82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorAcquireSpinLockEx$storport.sys", 0x35a98, 0x0, true, 0xa1c6899701e2dca8)
#define _p83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwAdapterNeedsUpdate$storport.sys", 0x4caa4, 0x0, true, 0x91810f220015de75)
#define _p84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwEnableAdapter$storport.sys", 0x4cad0, 0x0, true, 0xc425387c5b748a89)
#define _p85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetPfns$storport.sys", 0x39870, 0x0, true, 0x8d9ddee08b98c8fc)
#define _p86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_17dc98e2663d35e70a4d2a2e32da527b_Traceguids$storport.sys", 0x5fcc8, 0x0, true, 0x86b3bd3fd0373a88)
#define _p87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_1d6032c9664a36275945883370c93be0_Traceguids$storport.sys", 0x5f630, 0x0, true, 0xb1aa2a3a46298437)
#define _p88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids$storport.sys", 0x59f68, 0x0, true, 0x6e3fcb6f02a8cdd5)
#define _p89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_409ece23a875318e2a3b5ac826db135a_Traceguids$storport.sys", 0x5f9f8, 0x0, true, 0x9a422702258f9e2b)
#define _p90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_4131ae18f80433647a9f36ec3f2e372c_Traceguids$storport.sys", 0x60818, 0x0, true, 0xb55422b6b33f57f8)
#define _p91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_5f72e236ae1c38856314d349f42dc3f9_Traceguids$storport.sys", 0x5a150, 0x0, true, 0x3ceddf03433e6542)
#define _p92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_9747ab02b70f36f376c6173defc22901_Traceguids$storport.sys", 0x5fae0, 0x0, true, 0xf8d0ca56acfc673f)
#define _p93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_9beceae3e67f3ebeaf45b51d134464fb_Traceguids$storport.sys", 0x5fb70, 0x0, true, 0xd01b7f2c905578f0)
#define _p94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_c75ef678420536b919220fd58d40bf93_Traceguids$storport.sys", 0x5f658, 0x0, true, 0xb1ecdac09b52a772)
#define _p95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids$storport.sys", 0x5ed90, 0x0, true, 0x9d176dd822fd34ca)
#define _p96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ATADeviceIdList$storport.sys", 0x67770, 0x0, true, 0xd25c7219a0f6d410)
#define _p97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ATADeviceIdListLock$storport.sys", 0x67700, 0x0, true, 0x3d69e7463111857d)
#define _p98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ATADeviceIdShim$storport.sys", 0x672b0, 0x0, true, 0xa026538d9cfa84ee)
#define _p99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ATADeviceIdShimHookCollections$storport.sys", 0x67210, 0x0, true, 0xc843897b9381fc84)
#define _q00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ATADeviceIdShimHookDeviceControl$storport.sys", 0x55d00, 0x0, true, 0xe1d00e63eed6cb60)
#define _q01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ATADeviceIdShimHooks$storport.sys", 0x67130, 0x0, true, 0xde797db58d777c66)
#define _q02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ATADeviceIdShimStorageDeviceIdCompletionHook$storport.sys", 0x55e00, 0x0, true, 0xf211891392dba510)
#define _q03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ATAShimGetMsftId$storport.sys", 0x55e70, 0x0, true, 0xb8bcec94a583efba)
#define _q04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DFxEnabled$storport.sys", 0x67d71, 0x0, true, 0x34fa4a9f9840abb4)
#define _q05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceQueueIoWaitThreshold$storport.sys", 0x67310, 0x0, true, 0xc33f06446b4e0e3e)
#define _q06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnclosureIdList$storport.sys", 0x67830, 0x0, true, 0xeaa5e11498d276c3)
#define _q07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnclosureIdListLock$storport.sys", 0x677c0, 0x0, true, 0x4bc999138f984f0b)
#define _q08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterDirectedPowerDownStart$storport.sys", 0x5eed0, 0x0, true, 0x5e5f3d073adae2b3)
#define _q09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterDirectedPowerDownStop$storport.sys", 0x5f3e8, 0x0, true, 0x4d1b6c13b59e655e)
#define _q10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterDirectedPowerUpStart$storport.sys", 0x5f200, 0x0, true, 0xee979bebc4510474)
#define _q11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterDirectedPowerUpStop$storport.sys", 0x5f3c8, 0x0, true, 0xdc0d8894cd8e211)
#define _q12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterRescan$storport.sys", 0x596e0, 0x0, true, 0x686b9aad218c12f6)
#define _q13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventHierarchicalReset$storport.sys", 0x5f090, 0x0, true, 0x2d366a231be89455)
#define _q14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventHighLatencyIo$storport.sys", 0x5f4a8, 0x0, true, 0x17c48d970e73504)
#define _q15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventHmbAllocation$storport.sys", 0x5f4d8, 0x0, true, 0x7053b337aba2a9b)
#define _q16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventInitializeStorageD3$storport.sys", 0x5f210, 0x0, true, 0xe6f9317e0273b15c)
#define _q17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMarkAndRemoveFailedDevice$storport.sys", 0x59f58, 0x0, true, 0x92b49466ba0482d2)
#define _q18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMarkDeviceFailed$storport.sys", 0x59f28, 0x0, true, 0x3d1b75959bcef49a)
#define _q19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMarkDevicePotentiallyFailed$storport.sys", 0x59f08, 0x0, true, 0x13744046e1e3e185)
#define _q20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthError2$storport.sys", 0x5f010, 0x0, true, 0x530940e407022f96)
#define _q21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthError4$storport.sys", 0x5ee90, 0x0, true, 0x5bc9553704d6becd)
#define _q22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthError8$storport.sys", 0x5ed60, 0x0, true, 0xc238e0929ff097e2)
#define _q23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthErrorLun2$storport.sys", 0x5ed70, 0x0, true, 0xf35b514e8d90b813)
#define _q24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthErrorLun4$storport.sys", 0x5f170, 0x0, true, 0x6183fd9754830dcb)
#define _q25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthErrorLun8$storport.sys", 0x5ecb0, 0x0, true, 0x894da96f82806592)
#define _q26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthWarning2$storport.sys", 0x5f0a0, 0x0, true, 0x52e1c848d5b5805c)
#define _q27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthWarning4$storport.sys", 0x5ed00, 0x0, true, 0x3c0e25b68168b8f8)
#define _q28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthWarning8$storport.sys", 0x5f2d8, 0x0, true, 0xe88d428a648ee03f)
#define _q29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthWarningLun2$storport.sys", 0x5ef00, 0x0, true, 0x3df9ea4f91975582)
#define _q30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthWarningLun4$storport.sys", 0x5f4f8, 0x0, true, 0xdb279b27d3b0bff5)
#define _q31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportHealthWarningLun8$storport.sys", 0x5f000, 0x0, true, 0x5fef3daaa57fb3af)
#define _q32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalError2$storport.sys", 0x5f070, 0x0, true, 0x48b2f2bf65de831c)
#define _q33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalError4$storport.sys", 0x5f5b8, 0x0, true, 0x263e9f641b625fe)
#define _q34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalError8$storport.sys", 0x5ee00, 0x0, true, 0x3e68fd4c6d72e526)
#define _q35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalErrorLun2$storport.sys", 0x5f2c8, 0x0, true, 0x5ff50aa419399c13)
#define _q36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalErrorLun4$storport.sys", 0x5f288, 0x0, true, 0x6497cf331ccb9b2f)
#define _q37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalErrorLun8$storport.sys", 0x5edf0, 0x0, true, 0x79a2631c68ebd733)
#define _q38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalErrorRequest2$storport.sys", 0x5ecd0, 0x0, true, 0xd0762fe318ad076b)
#define _q39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalErrorRequest4$storport.sys", 0x5ef10, 0x0, true, 0x842b4084a1b226fb)
#define _q40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalErrorRequest8$storport.sys", 0x5f398, 0x0, true, 0x242d756ba2c34d87)
#define _q41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarning2$storport.sys", 0x5f438, 0x0, true, 0x92d5894382384e7a)
#define _q42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarning4$storport.sys", 0x5edb0, 0x0, true, 0x4db06d0299e8805c)
#define _q43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarning8$storport.sys", 0x5f3b8, 0x0, true, 0xe7e89722a66ec0b4)
#define _q44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarningLun2$storport.sys", 0x5f150, 0x0, true, 0xafc96662c47b4553)
#define _q45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarningLun4$storport.sys", 0x5f418, 0x0, true, 0x88548f44d2cd2fd7)
#define _q46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarningLun8$storport.sys", 0x5f1b0, 0x0, true, 0x3b9aff27195e7b4e)
#define _q47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarningRequest2$storport.sys", 0x5efe0, 0x0, true, 0xe40d0d4e00743541)
#define _q48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarningRequest4$storport.sys", 0x5ee80, 0x0, true, 0xec4ba1cd2bfd3a26)
#define _q49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportOperationalWarningRequest8$storport.sys", 0x5f458, 0x0, true, 0x495ccac11e993007)
#define _q50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventQueuedIoExceededThreshold$storport.sys", 0x5eca0, 0x0, true, 0xce5be1433466ed63)
#define _q51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventSMRUnsupportedError$storport.sys", 0x5f0f0, 0x0, true, 0xece00b6fd7014833)
#define _q52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitArrived$storport.sys", 0x596b0, 0x0, true, 0xd8d91bf48944f540)
#define _q53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitDeviceStatisticsLogs$storport.sys", 0x5f388, 0x0, true, 0x453c0f4e5c96d7cb)
#define _q54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitDirectedPowerDownStart$storport.sys", 0x5edc0, 0x0, true, 0xa8548de7d1b45297)
#define _q55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitDirectedPowerDownStop$storport.sys", 0x5eeb0, 0x0, true, 0xeb74a9a84eba9c16)
#define _q56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitDirectedPowerUpStart$storport.sys", 0x5f0e0, 0x0, true, 0xb274705d40bd204e)
#define _q57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitDirectedPowerUpStop$storport.sys", 0x5ecf0, 0x0, true, 0xabb1a5686d2eb5da)
#define _q58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitErrorDataSummary$storport.sys", 0x596d0, 0x0, true, 0x5079efcb1e09e753)
#define _q59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitMaintenanceStartOperational$storport.sys", 0x5ef80, 0x0, true, 0x6e3e4303f58b7e0f)
#define _q60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitMaintenanceStopOperational$storport.sys", 0x5f368, 0x0, true, 0x3d3b5738d754b632)
#define _q61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitNvmeHealthLog$storport.sys", 0x5ecc0, 0x0, true, 0x9f87b05e1d76c24b)
#define _q62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPerformance$storport.sys", 0x597b8, 0x0, true, 0x9ffcf7ee766f511c)
#define _q63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitQosData$storport.sys", 0x5f238, 0x0, true, 0x86047d083324d4c7)
#define _q64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitSmartAttributes$storport.sys", 0x59610, 0x0, true, 0xa58ff2ecac0745b)
#define _q65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitSurpriseRemoved$storport.sys", 0x596c0, 0x0, true, 0x10de0857b6c27dae)
#define _q66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitUniqueErrorData$storport.sys", 0x597a8, 0x0, true, 0x5a8b13ab3ea2f6df)
#define _q67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtendedDSMCommandsSupported$storport.sys", 0x67da8, 0x0, true, 0x672d8a2b757e56fb)
#define _q68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FUAEnabled$storport.sys", 0x67d72, 0x0, true, 0xe9049a51fa17785d)
#define _q69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_QosFlags$storport.sys", 0x676b8, 0x0, true, 0xb55ea2a88f49df70)
#define _q70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidEtwRefCount$storport.sys", 0x67e10, 0x0, true, 0xe82dc7ecbcc6d508)
#define _q71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidPassthroughCdbs$storport.sys", 0x67df0, 0x0, true, 0x33019770da7d353b)
#define _q72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpSourceGuid$storport.sys", 0x5fc20, 0x0, true, 0x7774de7cca559551)
#define _q73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingCriticalEventEnabled$storport.sys", 0x678d0, 0x0, true, 0xf3af84c83539cd60)
#define _q74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingCriticalEventEnabledSetByRegistry$storport.sys", 0x67d8c, 0x0, true, 0x61e324fc6c33a74d)
#define _q75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingCriticalEventsLogged$storport.sys", 0x67d90, 0x0, true, 0x4963cb9048d9fece)
#define _q76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDeviceHealthEnabled$storport.sys", 0x67384, 0x0, true, 0x2309e20eee783d1d)
#define _q77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDeviceHealthPeriod$storport.sys", 0x67338, 0x0, true, 0x709b1c5c48822ce7)
#define _q78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDeviceHealthTick$storport.sys", 0x67340, 0x0, true, 0x63ca5f49be49ef2c)
#define _q79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDeviceHealthTimer$storport.sys", 0x67520, 0x0, true, 0x76ede8d300a4fef9)
#define _q80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDeviceHealthTimerDpc$storport.sys", 0x67560, 0x0, true, 0x436445f26bfc6cd3)
#define _q81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingInitialized$storport.sys", 0x67e50, 0x0, true, 0x20d7ff5931b6237e)
#define _q82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingPerformancePeriod$storport.sys", 0x67328, 0x0, true, 0x8db945c718f711d1)
#define _q83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpWheaConfiguration$storport.sys", 0x67090, 0x0, true, 0x28d800a4a78c3ea6)
#define _q84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpWheaErrorSourceId$storport.sys", 0x678c8, 0x0, true, 0x58cd0548b66d8d44)
#define _q85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_SystemUptime_s$storport.sys", 0x678d8, 0x0, true, 0xeaa3a41fafae2bf1)
#define _q86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GatewayCheckWaitTimeout$storport.sys", 0x4b2f0, 0x0, true, 0x427018075d622988)
#define _q87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GatewayRegisterForEmptyNotification$storport.sys", 0x104a0, 0x0, true, 0xe0ca58a6f265eea)
#define _q88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_ACPI_DSM_PCI_SSD_LED_STATE$storport.sys", 0x5fcd8, 0x0, true, 0x261617206c3d52e9)
#define _q89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_DIAGNOSTIC_PROVIDER_STORPORT$storport.sys", 0x5f328, 0x0, true, 0x24df1ccd4aa519d7)
#define _q90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_STORAGE_ACPI_DSD_D3_ENABLE$storport.sys", 0x5fcb8, 0x0, true, 0xf6f219158ddf9d16)
#define _q91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_STORAGE_DEVICE_D3_ALLOWED_RULE$storport.sys", 0x60828, 0x0, true, 0xbb226239dac9819f)
#define _q92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_STORPORT_NON_POFX_MINIPORT$storport.sys", 0x5f258, 0x0, true, 0xf86757f492b1b3ff)
#define _q93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HighLatencyIoThreshold$storport.sys", 0x67308, 0x0, true, 0x9d91491fc02c7673)
#define _q94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HmbMaximumSize$storport.sys", 0x6737c, 0x0, true, 0x9684cc6f373be2c9)
#define _q95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsSMREnabled$storport.sys", 0x67e20, 0x0, true, 0xebf4cc09661a1cad)
#define _q96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsUntaggedRequest$storport.sys", 0xb318, 0x0, true, 0x290766825fd862f9)
#define _q97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsZonedWriteRequest$storport.sys", 0x12550, 0x0, true, 0xd757624e4c4f0e00)
#define _q98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer$storport.sys", 0x34264, 0x0, true, 0x614ecbe745341312)
#define _q99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0dqddddddiiiii_EtwWriteTransfer$storport.sys", 0x32afc, 0x0, true, 0x428919bf885504d9)
#define _r00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0dud_EtwWriteTransfer$storport.sys", 0x43b00, 0x0, true, 0x3f470b9b2e695d8f)
#define _r01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const void*, const int32_t)>*), "$McTemplateK0pd_EtwWriteTransfer$storport.sys", 0x27d84, 0x0, true, 0x7c0ae02cbc598e7b)
#define _r02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pddd_EtwWriteTransfer$storport.sys", 0x27df4, 0x0, true, 0xdb8dcf75b1516a1e)
#define _r03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pddp_EtwWriteTransfer$storport.sys", 0x27e84, 0x0, true, 0xc0ce6d07079a504d)
#define _r04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pdtquuuddddt_EtwWriteTransfer$storport.sys", 0x4c018, 0x0, true, 0x5cd56a50bd5365b)
#define _r05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const void*, const int32_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const void*)>*), "$McTemplateK0pduuuuup_EtwWriteTransfer$storport.sys", 0x27f1c, 0x0, true, 0xc9d1921334f3fbc0)
#define _r06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const void*, const uint32_t, const int32_t)>*), "$McTemplateK0pqd_EtwWriteTransfer$storport.sys", 0x27ff4, 0x0, true, 0xc9ae277958fdbb92)
#define _r07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pqquuu_EtwWriteTransfer$storport.sys", 0x34cc0, 0x0, true, 0x4c6a190a6f2d72be)
#define _r08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pqquuuqpp_EtwWriteTransfer$storport.sys", 0x34d7c, 0x0, true, 0xe8fba12bd827a476)
#define _r09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pqqx_EtwWriteTransfer$storport.sys", 0x28074, 0x0, true, 0x784dc38bfcbc8934)
#define _r10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pqt_EtwWriteTransfer$storport.sys", 0x34bb0, 0x0, true, 0x5b7ebcc197266ede)
#define _r11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pqtq_EtwWriteTransfer$storport.sys", 0x3b16c, 0x0, true, 0xbe6fb90eb53fec8)
#define _r12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pqtx_EtwWriteTransfer$storport.sys", 0x3b204, 0x0, true, 0x45996a49b4c090b1)
#define _r13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pquuqqd_EtwWriteTransfer$storport.sys", 0x323d4, 0x0, true, 0x116aed79aaec110a)
#define _r14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pquuu_EtwWriteTransfer$storport.sys", 0x34e68, 0x0, true, 0x7f9ccfcfd7994ea7)
#define _r15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pquuudttqqttq_EtwWriteTransfer$storport.sys", 0x3b2a4, 0x0, true, 0x9e13907d33542927)
#define _r16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pquuuq_EtwWriteTransfer$storport.sys", 0x3b3ec, 0x0, true, 0x3d85add37f42ca44)
#define _r17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pquuuqq_EtwWriteTransfer$storport.sys", 0x3b4a0, 0x0, true, 0xcb9f8096a2198183)
#define _r18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pquuut_EtwWriteTransfer$storport.sys", 0x3b3ec, 0x0, true, 0xce52e5132727df6b)
#define _r19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pquuutq_EtwWriteTransfer$storport.sys", 0x3b560, 0x0, true, 0x636759becb7e1eec)
#define _r20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pquuutx_EtwWriteTransfer$storport.sys", 0x3b628, 0x0, true, 0x52a8075fa38c1c7e)
#define _r21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0puxipu_EtwWriteTransfer$storport.sys", 0x4c144, 0x0, true, 0x68f93f9cd54e94ac)
#define _r22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0pzqqxxtt_EtwWriteTransfer$storport.sys", 0x281bc, 0x0, true, 0x989c22701fe1092a)
#define _r23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0qpd_EtwWriteTransfer$storport.sys", 0x3b6e8, 0x0, true, 0x32d64bcdab9dd44e)
#define _r24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0qpdudddd_EtwWriteTransfer$storport.sys", 0x3b768, 0x0, true, 0xc72e8c142939a794)
#define _r25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0qqdqqqq_EtwWriteTransfer$storport.sys", 0x282c8, 0x0, true, 0xd39d62faa77fa528)
#define _r26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quu_EtwWriteTransfer$storport.sys", 0x43b88, 0x0, true, 0x45b230e8c103beb6)
#define _r27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuu_EtwWriteTransfer$storport.sys", 0x43c0c, 0x0, true, 0x9fe0123a25c63253)
#define _r28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer$storport.sys", 0x3698, 0x0, true, 0x81879fd9d89040c2)
#define _r29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer$storport.sys", 0x3374, 0x0, true, 0xe2b515f3171cf966)
#define _r30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer$storport.sys", 0x2f4c, 0x0, true, 0x5e834f6aba37893f)
#define _r31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer$storport.sys", 0x34f14, 0x0, true, 0xcf5baff45aa4efba)
#define _r32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuujqqqbr7_EtwWriteTransfer$storport.sys", 0x4c1f4, 0x0, true, 0x21efb9a5ef02bdb5)
#define _r33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuupd_EtwWriteTransfer$storport.sys", 0x3b848, 0x0, true, 0x523cc7f882afecd2)
#define _r34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuupdudddd_EtwWriteTransfer$storport.sys", 0x3b908, 0x0, true, 0xc54df8bff497a86b)
#define _r35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuuqqq_EtwWriteTransfer$storport.sys", 0x3ba24, 0x0, true, 0xb987e31e94fe8914)
#define _r36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0quuuqqtt_EtwWriteTransfer$storport.sys", 0x3baf0, 0x0, true, 0x14bd0f5e4a4a2fba)
#define _r37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer$storport.sys", 0x4c2e4, 0x0, true, 0x634d31ccb0d52764)
#define _r38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer$storport.sys", 0x4c424, 0x0, true, 0x4a3d336708cec63c)
#define _r39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zdqqqqqqqqq_EtwWriteTransfer$storport.sys", 0x3541c, 0x0, true, 0x40466e2d8093fc61)
#define _r40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zjquuujsss_EtwWriteTransfer$storport.sys", 0x3bbcc, 0x0, true, 0x11c764a8d6e37544)
#define _r41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zjquuujssstq_EtwWriteTransfer$storport.sys", 0x3bd58, 0x0, true, 0xf9e808daa9c120c4)
#define _r42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjqq_EtwWriteTransfer$storport.sys", 0x17334, 0x0, true, 0xf72908e7a76a1713)
#define _r43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjujssstq_EtwWriteTransfer$storport.sys", 0x43ca8, 0x0, true, 0x87eaa097a1b23c09)
#define _r44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuujsssq_EtwWriteTransfer$storport.sys", 0x43e3c, 0x0, true, 0xa7c47f30c4eb42b3)
#define _r45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer$storport.sys", 0x4c560, 0x0, true, 0xcdf4f9763a7f1369)
#define _r46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer$storport.sys", 0x4c758, 0x0, true, 0xfa3e7d87c6fa3f98)
#define _r47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuujssstsxx_EtwWriteTransfer$storport.sys", 0x43fe4, 0x0, true, 0xf479e17a7b5bfec0)
#define _r48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer$storport.sys", 0x4ef4c, 0x0, true, 0xdecb34f81203d331)
#define _r49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuujsssudxx_EtwWriteTransfer$storport.sys", 0x441f8, 0x0, true, 0x2b2c0313d36efd4b)
#define _r50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer$storport.sys", 0x4f194, 0x0, true, 0x7a60483151464cd0)
#define _r51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuujsssztt_EtwWriteTransfer$storport.sys", 0x175c8, 0x0, true, 0x96e4085283290fc7)
#define _r52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqjuuusssz_EtwWriteTransfer$storport.sys", 0x17404, 0x0, true, 0xbb7e7025213acec7)
#define _r53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqqqqi_EtwWriteTransfer$storport.sys", 0x4b474, 0x0, true, 0xdf2e57508e571f64)
#define _r54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqqqqq_EtwWriteTransfer$storport.sys", 0x4b560, 0x0, true, 0xc865e3fb25ffa5e8)
#define _r55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqqqqqqq_EtwWriteTransfer$storport.sys", 0x4b644, 0x0, true, 0x63550d3911b8487a)
#define _r56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zqquuuqpp_EtwWriteTransfer$storport.sys", 0x28594, 0x0, true, 0x4479d613f543db7)
#define _r57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zquuujqqbr7_EtwWriteTransfer$storport.sys", 0x4c98c, 0x0, true, 0x9927a50fee956ab7)
#define _r58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zquuuqqqt_EtwWriteTransfer$storport.sys", 0x35574, 0x0, true, 0xebd825cf9ccf7f4c)
#define _r59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zx_EtwWriteTransfer$storport.sys", 0x40468, 0x0, true, 0x9e0eef6ff6a30e8)
#define _r60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$McTemplateK0zzdqq_EtwWriteTransfer$storport.sys", 0x34404, 0x0, true, 0x5a1956b5208e6ca)
#define _r61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortGetBusyPauseTimeValue$storport.sys", 0x79e34, 0x0, true, 0x371fbbd2c313edcf)
#define _r62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortGetBusyRetryCountValue$storport.sys", 0x79f50, 0x0, true, 0xa8a8807dfd3d6134)
#define _r63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughBuildIrp$storport.sys", 0x70008, 0x0, true, 0x7be508d7bb33cbbd)
#define _r64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughFreeIrp$storport.sys", 0x1e3c, 0x0, true, 0xe3430eb00ecf5885)
#define _r65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAttemptHighWaterMarkIncreasePassive$storport.sys", 0x4ba20, 0x0, true, 0x4b49ec7fee55de05)
#define _r66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildDsmRequestForLedState$storport.sys", 0x41230, 0x0, true, 0x12ee59070ba34c59)
#define _r67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildQueryBootLunsBufferForMiniport$storport.sys", 0x41608, 0x0, true, 0xe0e552a9338ae90a)
#define _r68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildQueryEnduranceInfoPropertyBufferForMiniport$storport.sys", 0x416b8, 0x0, true, 0xbd8e507e1043b77)
#define _r69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildSetBootLunBufferForMiniport$storport.sys", 0x419c0, 0x0, true, 0x3dce6207c90389f0)
#define _r70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildSetProtocolSpecificPropertyBufferForMiniport$storport.sys", 0x41ab4, 0x0, true, 0xff9d986a415aa9de)
#define _r71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDsmLedStatusToNtStatus$storport.sys", 0x41ccc, 0x0, true, 0x2232fc6f8be0b29d)
#define _r72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaFlushDFxQueue$storport.sys", 0x31e34, 0x0, true, 0x329bbc108045bdb)
#define _r73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaInsertDFxQueue$storport.sys", 0x31ec4, 0x0, true, 0x67b9c1b50f510ca4)
#define _r74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaIsDeviceDFxPoweredDown$storport.sys", 0xc568, 0x0, true, 0x992dd7a1d61c2fe7)
#define _r75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaMiniportSaveFeatureList$storport.sys", 0x34ae4, 0x0, true, 0xc8ff8b4d8aec0e9a)
#define _r76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaProcessDFxPendingIrp$storport.sys", 0x31fe0, 0x0, true, 0x502ce3eaac0fccc4)
#define _r77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaProcessDFxQueuedRequests$storport.sys", 0x32070, 0x0, true, 0x16e9d74dd19d28ad)
#define _r78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaTranslateMiniportQueryBootLunsToHwQueryBootLuns$storport.sys", 0x42118, 0x0, true, 0xc9f39f226a95d7b)
#define _r79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitBuildSrbForSmartReadData$storport.sys", 0x44900, 0x0, true, 0xfe312c2fd05e8da5)
#define _r80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitBuildSrbForSmartReturnStatus$storport.sys", 0x44b48, 0x0, true, 0x3273fca7f3bb93fc)
#define _r81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitIsSMRDisabled$storport.sys", 0x13240, 0x0, true, 0x6f3705c666821918)
#define _r82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSmartDataIoctl$storport.sys", 0x45de8, 0x0, true, 0x6ea0b303d39db13b)
#define _r83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSmartReturnStatus$storport.sys", 0x46340, 0x0, true, 0x7946894369a99ab9)
#define _r84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageDumpControl$storport.sys", 0x790e0, 0x0, true, 0xd42e2cf23d65bd3a)
#define _r85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageDumpNotification$storport.sys", 0x79170, 0x0, true, 0xa580fc4ed77d73f6)
#define _r86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageFreeDumpInfo$storport.sys", 0x469a8, 0x0, true, 0xcdb839066d39829)
#define _r87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageGetDumpInfoIoctl$storport.sys", 0x791ec, 0x0, true, 0x37cd28de307deb00)
#define _r88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDeviceEndurancePropertyIoctl$storport.sys", 0x46b60, 0x0, true, 0x4ff07bc4fdfcb1a)
#define _r89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDeviceNumaPropertyIoctl$storport.sys", 0x46cc4, 0x0, true, 0xd54dddaf8ab9241d)
#define _r90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl$storport.sys", 0x47200, 0x0, true, 0xfa4596706fb71f99)
#define _r91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageSetPropertyIoctl$storport.sys", 0x47358, 0x0, true, 0x4e45349f894e90ed)
#define _r92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStreamsIoctl$storport.sys", 0x19220, 0x0, true, 0x2d4cb0ac9da19777)
#define _r93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterAcquireCryptoKeyResources$storport.sys", 0x28cdc, 0x0, true, 0xc4d0247a2a3d285a)
#define _r94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCancelWaitWakeIrp$storport.sys", 0x3c218, 0x0, true, 0xe60cbdd382a09d3c)
#define _r95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterClearCryptoKeyTable$storport.sys", 0x2957c, 0x0, true, 0x6fdcd034c7a08cf3)
#define _r96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCreateDriverInfo$storport.sys", 0x750fc, 0x0, true, 0x393d26617ac94cb6)
#define _r97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCreateDumpInfo$storport.sys", 0x75388, 0x0, true, 0x8d58c2f9775a7ba2)
#define _r98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDeviceReset$storport.sys", 0x29f4c, 0x0, true, 0x1c676f4235042c27)
#define _r99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDiagnosticIoctl$storport.sys", 0x757c4, 0x0, true, 0x2445de85cfaeedae)
#define _s00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDisableNonPoFxMiniportInterface$storport.sys", 0x2a1d8, 0x0, true, 0x8e668e3a3eb6b4d3)
#define _s01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterFindUnitByIdentifier$storport.sys", 0x2a350, 0x0, true, 0x41377df969d87744)
#define _s02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterFreeDriverInfo$storport.sys", 0x2a3fc, 0x0, true, 0x96fdc38020881188)
#define _s03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterFreeDumpInfo$storport.sys", 0x2a4e4, 0x0, true, 0x99d4265421368501)
#define _s04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterFreeMiniportDumpInfo$storport.sys", 0x76074, 0x0, true, 0x61048269a433a01d)
#define _s05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterGetCryptoKeyIndex$storport.sys", 0x2a558, 0x0, true, 0x6b07018ed33077b3)
#define _s06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterGetFirstUnit$storport.sys", 0x2a5e8, 0x0, true, 0x35cef9f894db6275)
#define _s07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterGetMiniportDumpInfo$storport.sys", 0x76388, 0x0, true, 0xbc6c577c0360ed1)
#define _s08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPopulateMiniportDumpInfo$storport.sys", 0x7686c, 0x0, true, 0xa80282a8dc985d14)
#define _s09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterProgramCryptoKeyRoutine$storport.sys", 0x2b110, 0x0, true, 0x43f5ee7f7258fa34)
#define _s10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryBootLunsIoctl$storport.sys", 0x2b330, 0x0, true, 0x551909f6cf66a6)
#define _s11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRegisterNonPoFxMiniportInterface$storport.sys", 0x2b780, 0x0, true, 0xd978546377f8ba05)
#define _s12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRegisterRpmbInterface$storport.sys", 0x2b7e4, 0x0, true, 0x2f0318090329f5d6)
#define _s13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterReleaseCryptoKeyResources$storport.sys", 0x2b85c, 0x0, true, 0x18e5c6917d724b4d)
#define _s14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterReleaseStartIoLock$storport.sys", 0xc4c4, 0x0, true, 0x12796133d167c283)
#define _s15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterResumeUnit$storport.sys", 0xe264, 0x0, true, 0x30c7399654ba8323)
#define _s16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterScsiGetAddressIoctl$storport.sys", 0x2c364, 0x0, true, 0xbb0830b8f551c5f5)
#define _s17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSendCryptoOperationSynchronously$storport.sys", 0x2c730, 0x0, true, 0x1dbb97dbb11aa045)
#define _s18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSendPoFxActiveToMiniport$storport.sys", 0x3c398, 0x0, true, 0xa1b8ef34a4d7c314)
#define _s19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSetBootLunIoctl$storport.sys", 0x2d1b8, 0x0, true, 0xd00613fa354350be)
#define _s20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSetLedState$storport.sys", 0x2d294, 0x0, true, 0xe7239ca7e83417eb)
#define _s21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStartDevice$storport.sys", 0x2d3ac, 0x0, true, 0x2b5dc2377813e19b)
#define _s22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStorageDeviceResetIoctl$storport.sys", 0x2dd3c, 0x0, true, 0xff0a35571f14136e)
#define _s23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStorageResetBusIoctl$storport.sys", 0x2dd80, 0x0, true, 0xd3ea2b0be8ecf01e)
#define _s24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStorageSetPropertyIoctl$storport.sys", 0x2ddc4, 0x0, true, 0xd741fc8fdc9499c5)
#define _s25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAddATADeviceIdMapping$storport.sys", 0x32c44, 0x0, true, 0xa656bfabf54546a1)
#define _s26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAddEnclosureIdMapping$storport.sys", 0x32d80, 0x0, true, 0xa8f97a3693bb9fa3)
#define _s27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAreDriversDmarCompatible$storport.sys", 0x317d8, 0x0, true, 0x537133b942550606)
#define _s28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBuildMdlAndLockPagesForXrb$storport.sys", 0x19ac0, 0x0, true, 0x6dcd87c496b1dc26)
#define _s29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessBlockDeviceCharacteristics$storport.sys", 0x311e0, 0x0, true, 0x2f5d75666a35dc9c)
#define _s30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCheckATADeviceIdMapping$storport.sys", 0x32f30, 0x0, true, 0x2b5fbe4b8c838154)
#define _s31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCheckEnclosureIdMapping$storport.sys", 0x32fac, 0x0, true, 0xc690a08770818077)
#define _s32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDmaAllocateUncachedExtension$storport.sys", 0x31860, 0x0, true, 0x4bfe781201f78d9a)
#define _s33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDmaFlushDmaBuffers$storport.sys", 0x19df4, 0x0, true, 0x53508121656bfb66)
#define _s34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDsmGetLedState$storport.sys", 0x42698, 0x0, true, 0xfd07a9db8e4704d8)
#define _s35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDsmGetSupportedLedState$storport.sys", 0x42750, 0x0, true, 0x1122bb462571e3cb)
#define _s36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDsmQuerySupportedFunctionForLedState$storport.sys", 0x42818, 0x0, true, 0x533c690c5823f5e0)
#define _s37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDsmSetLedState$storport.sys", 0x428d0, 0x0, true, 0xa1f8dfc1e4ee9355)
#define _s38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidEnumBlockDeviceCharacteristics$storport.sys", 0x59470, 0x0, true, 0x7e088c20d46dca2d)
#define _s39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidEvaluateDsmLedState$storport.sys", 0x4293c, 0x0, true, 0xd6974591d13402f3)
#define _s40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidFreeRemappedScatterGatherListMdl$storport.sys", 0x4b180, 0x0, true, 0xffa04bb440170263)
#define _s41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetIoStartingLbaAndLength$storport.sys", 0x4f3d0, 0x0, true, 0x6fd568d8917b63b3)
#define _s42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetNpemControlInterface$storport.sys", 0x42a7c, 0x0, true, 0x7bc761950ba59a8)
#define _s43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetResetInterface$storport.sys", 0x42b64, 0x0, true, 0xe301138595e56cc6)
#define _s44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetStorageAdapterCryptoProperty$storport.sys", 0x2eb34, 0x0, true, 0x29f93b684d9c5c57)
#define _s45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializeCryptoEngine$storport.sys", 0x2ef58, 0x0, true, 0x91906ab03103867b)
#define _s46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLoadATADeviceIdMappings$storport.sys", 0x33020, 0x0, true, 0x4d8b22c287006f64)
#define _s47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLoadEnclosureIdMappings$storport.sys", 0x3323c, 0x0, true, 0x889b8e40e71d98be)
#define _s48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLockUnitQueue$storport.sys", 0x31390, 0x0, true, 0xb8341692fb585b96)
#define _s49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidNotifyPoAboutAdaptiveD3Engagement$storport.sys", 0x56938, 0x0, true, 0x7d87c84266e27a0a)
#define _s50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidNotifyPoAboutSpecialDevice$storport.sys", 0x569a0, 0x0, true, 0xa08d8a1e247facb)
#define _s51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPnPAsyncStartComplete$storport.sys", 0x301f0, 0x0, true, 0x802f32617c62cb8a)
#define _s52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPnPAsyncStartCompleteWorker$storport.sys", 0x30240, 0x0, true, 0x3289fce43b7283a2)
#define _s53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQosSupportedCommand$storport.sys", 0x340a4, 0x0, true, 0xc6472245744fc64b)
#define _s54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryAcpiDsdStorageD3Property$storport.sys", 0x42de0, 0x0, true, 0x7f7e575827dc1c8f)
#define _s55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryAcpiDsdSynchronous$storport.sys", 0x42eb4, 0x0, true, 0xae614a2d0389390)
#define _s56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryNpemControlInterface$storport.sys", 0x43044, 0x0, true, 0x5de1b36142816e2)
#define _s57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryResetInterface$storport.sys", 0x43154, 0x0, true, 0x184cd655497f7997)
#define _s58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRecordPassthroughData$storport.sys", 0x3065c, 0x0, true, 0xd625b48ba83644a)
#define _s59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRemovePendingDeviceQueue$storport.sys", 0x16ed0, 0x0, true, 0x1700070b38624776)
#define _s60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSaveATADeviceIdMapping$storport.sys", 0x334d8, 0x0, true, 0xfc5c6cbec789465a)
#define _s61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSaveEnclosureIdMapping$storport.sys", 0x3361c, 0x0, true, 0x3bb9513a7d36f06b)
#define _s62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSetLedStateByAcpiDsm$storport.sys", 0x432dc, 0x0, true, 0x861b6740b370f572)
#define _s63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSetLedStateByNpem$storport.sys", 0x433d8, 0x0, true, 0x628a3e239bf50e6b)
#define _s64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidSetStorageAdapterProtocolSpecificProperty$storport.sys", 0x30774, 0x0, true, 0x1f44bd01fc8d03f6)
#define _s65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitCreateDumpData$storport.sys", 0x7963c, 0x0, true, 0xf82b6ff875098cf0)
#define _s66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitCreateDumpInfo$storport.sys", 0x7977c, 0x0, true, 0x75189d532ef0ce6c)
#define _s67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitDeviceHealthTelemetrySupported$storport.sys", 0xcb04, 0x0, true, 0x4f75294034328906)
#define _s68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitFreeDumpInfo$storport.sys", 0x48150, 0x0, true, 0x1cec5815d584660e)
#define _s69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitHandleSpecialErrorConditions$storport.sys", 0xc13c, 0x0, true, 0x72b999c002600e0e)
#define _s70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitIdentityUpdateWorkRoutine$storport.sys", 0x48650, 0x0, true, 0xf20ee6d6996891da)
#define _s71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnitSetLedState$storport.sys", 0x499bc, 0x0, true, 0xfeaff4c790408320)
#define _s72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUnlockUnitQueue$storport.sys", 0xea48, 0x0, true, 0xef3cd8c054e61f0e)
#define _s73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUpdateZoneIoReceiveWithStatus$storport.sys", 0x32690, 0x0, true, 0xe033878ba93493cc)
#define _s74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidUpdateZoneIoSubmission$storport.sys", 0x328c4, 0x0, true, 0x86e07c788dd0626a)
#define _s75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpAdapterEnumerateUnit$storport.sys", 0xea60, 0x0, true, 0xa65230a923cc1983)
#define _s76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpIsControlledUpdateOSEnvironment$storport.sys", 0x4add4, 0x0, true, 0x5d40851cbeb2654d)
#define _s77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidpIsControlledWinPEEnvironment$storport.sys", 0x4afb8, 0x0, true, 0xe15df78a082aee12)
#define _s78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReplaceDeviceId$storport.sys", 0x56150, 0x0, true, 0x26447f142801facf)
#define _s79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RiIsDeviceQueueBusy$storport.sys", 0xb420, 0x0, true, 0xb92961f318fc92bf)
#define _s80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorCreateIoGateway$storport.sys", 0x4bf1c, 0x0, true, 0x600cdab17e7b4afc)
#define _s81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorDumpAdapterPowerOn$storport.sys", 0x3d8e0, 0x0, true, 0x23fe0a3c34613dae)
#define _s82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorDumpDiskPowerOn$storport.sys", 0x3da70, 0x0, true, 0xf717d2cc45c75851)
#define _s83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEnablePassiveInitialization$storport.sys", 0x35ecc, 0x0, true, 0xebf4f8230a0ec0c1)
#define _s84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*), "$StorEtwEnableCallback$storport.sys", 0x4cb48, 0x0, true, 0xd4e88b5faded8ff9)
#define _s85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwMiniportGetKeyword$storport.sys", 0x4e758, 0x0, true, 0x665643e2f24ec209)
#define _s86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorEtwMiniportLogError$storport.sys", 0x36070, 0x0, true, 0x39ba86a5c9689134)
#define _s87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorFreeContiguousIoResources$storport.sys", 0x7568, 0x0, true, 0x93be9339e9530c6a)
#define _s88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorMaximumTimeInterval$storport.sys", 0x67e24, 0x0, true, 0x82b1322efaafd10d)
#define _s89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorMinimumTimeInterval$storport.sys", 0x67e2c, 0x0, true, 0x6dab80860eea7d63)
#define _s90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterDirectedPowerDown$storport.sys", 0x3dbc0, 0x0, true, 0xd2c562486a7576f1)
#define _s91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterDirectedPowerDownCompletion$storport.sys", 0x3dc40, 0x0, true, 0x1d184b997677b6ab)
#define _s92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterDirectedPowerDownRequestD3$storport.sys", 0x3dcf4, 0x0, true, 0x1e32956ce1bc50db)
#define _s93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterDirectedPowerDownRequestD3Passive$storport.sys", 0x3df20, 0x0, true, 0xb134db4272f37196)
#define _s94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterDirectedPowerUp$storport.sys", 0x3df40, 0x0, true, 0xcd0c1ef727c93336)
#define _s95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterDirectedPowerUpCompletion$storport.sys", 0x3e040, 0x0, true, 0x3901ebd8471ce07)
#define _s96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterDirectedPowerUpRequestD0$storport.sys", 0x3e10c, 0x0, true, 0xa216cf76a151531a)
#define _s97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterPoFxWaitWakeCompletion$storport.sys", 0x3e540, 0x0, true, 0x7bfc1ec085519025)
#define _s98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortAdapterPowerNotRequiredStep2Passive$storport.sys", 0x3e950, 0x0, true, 0xad02b6323c5d34c3)
#define _s99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortReleaseAdditionalCrashDumpArea$storport.sys", 0x11708, 0x0, true, 0xfdbc9cc8aaf64d9)
#define _t00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitDirectedPowerDown$storport.sys", 0x3eb70, 0x0, true, 0x66beefcf59ef82c3)
#define _t01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitDirectedPowerDownCompletion$storport.sys", 0x3ec90, 0x0, true, 0x9c79a29b2bb04835)
#define _t02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitDirectedPowerDownRequestD3$storport.sys", 0x3ede8, 0x0, true, 0x5194b478b23b75d7)
#define _t03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitDirectedPowerDownRequestD3Passive$storport.sys", 0x3f010, 0x0, true, 0xbf1153b5132575a8)
#define _t04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitDirectedPowerUp$storport.sys", 0x3f030, 0x0, true, 0xe81443f9f940f932)
#define _t05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitDirectedPowerUpCompletion$storport.sys", 0x3f1b0, 0x0, true, 0x6069b7fe160c9ead)
#define _t06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPortUnitDirectedPowerUpRequestD0$storport.sys", 0x3f1e0, 0x0, true, 0x4a90c501eb657bba)
#define _t07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorPreAllocatedMaxIoResourceCount$storport.sys", 0x67318, 0x0, true, 0x4d0a25d9ebf04f6f)
#define _t08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorReset$storport.sys", 0x37ee0, 0x0, true, 0x52126d8e3efab5c0)
#define _t09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorResetCompletion$storport.sys", 0x37fb0, 0x0, true, 0x4835357bbfb80cfc)
#define _t10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorageAsyncStart$storport.sys", 0x67e14, 0x0, true, 0x41e46ee2a8c7661c)
#define _t11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorageD3AllowedOnCurrentPlatform$storport.sys", 0x67e17, 0x0, true, 0x3d2cd6847cbc8cba)
#define _t12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorageD3InModernStandbyEnabled$storport.sys", 0x67e16, 0x0, true, 0xce2096e29d89e00f)
#define _t13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorageD3RegistryState$storport.sys", 0x67364, 0x0, true, 0xb43abfc6cf259ac2)
#define _t14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpAllocateContiguousMemorySpecifyCacheNodeEx$storport.sys", 0x38470, 0x0, true, 0x1c5ede148327ade4)
#define _t15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpFreeContiguousMemorySpecifyCacheEx$storport.sys", 0x38dc4, 0x0, true, 0xc7de9d05dda35773)
#define _t16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpGetGroupAffinity$storport.sys", 0x396ac, 0x0, true, 0x87ee6386c83c3bbf)
#define _t17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpInititalizePerUnitPerfTelemetry$storport.sys", 0x71f08, 0x0, true, 0xa1ef47745bd620d5)
#define _t18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpMarkDeviceFailed$storport.sys", 0x3a0f8, 0x0, true, 0x65bec7378085485)
#define _t19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpMeasuresMiniportEventAdapter$storport.sys", 0x51048, 0x0, true, 0x119c5594cbda0227)
#define _t20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpMeasuresMiniportEventUnit$storport.sys", 0x51364, 0x0, true, 0x6c7cf88f03a2cfc3)
#define _t21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpPopulateErrorData$storport.sys", 0x40d74, 0x0, true, 0xeeac96c2b5b3e696)
#define _t22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpPopulateLogData$storport.sys", 0x40ed4, 0x0, true, 0x114acab091074152)
#define _t23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged$storport.sys", 0xf7e0, 0x0, true, 0x53999e7e3e719427)
#define _t24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryMiniportEvent$storport.sys", 0x532e8, 0x0, true, 0xe0cf5018478622e3)
#define _t25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryMiniportEventAdapter$storport.sys", 0x533a0, 0x0, true, 0x986205e55c8d4987)
#define _t26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryMiniportEventUnit$storport.sys", 0x536bc, 0x0, true, 0xb2820aae4845b115)
#define _t27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryMiniportEventWStr$storport.sys", 0x53b88, 0x0, true, 0xfc3a2b0ce1f5ce64)
#define _t28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryMiniportLogError$storport.sys", 0x546fc, 0x0, true, 0xd3f5cd16cbd2ca14)
#define _t29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryNvmeGetLogPage$storport.sys", 0x54930, 0x0, true, 0xc9cf5adbcff577be)
#define _t30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryNvmeHealthCriticalInfo$storport.sys", 0x54a84, 0x0, true, 0x3c561c893e9e2c63)
#define _t31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetryNvmeHealthInfo$storport.sys", 0x54da0, 0x0, true, 0x2e63810e04098729)
#define _t32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitErrorDataSummary$storport.sys", 0x3ef0, 0x0, true, 0xf90d687708430dba)
#define _t33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpTelemetrySendUnitUniqueErrorData$storport.sys", 0x2df0, 0x0, true, 0xd6f427d69c7bd297)
#define _t34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpUninititalizePerUnitPerfTelemetry$storport.sys", 0x19eec, 0x0, true, 0x1daa4181dfd080db)
#define _t35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpUpdateDynamicRegistrySettings$storport.sys", 0x33bb0, 0x0, true, 0x3c61db2ee0cb7714)
#define _t36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpWatchForRegistryChanges$storport.sys", 0x33ce0, 0x0, true, 0xb62414200d7cb7b0)
#define _t37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpWheaAddErrorSource$storport.sys", 0x78cb4, 0x0, true, 0x1be041f49c7b101b)
#define _t38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpWheaInitialize$storport.sys", 0x708f0, 0x0, true, 0x5cac8def48c70312)
#define _t39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpWheaReportError$storport.sys", 0x40f48, 0x0, true, 0x1f4326ac5b7cd216)
#define _t40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StorpWheaUninitialize$storport.sys", 0x70910, 0x0, true, 0x9484bed53d9f1a6e)
#define _t41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TranslateScsiRequestBlockToScsiCdb16SrbExData$storport.sys", 0x4083c, 0x0, true, 0xb911dddc6ebbbe70)
#define _t42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TrimString$storport.sys", 0x56620, 0x0, true, 0x9af79608e28cc096)
#define _t43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_8b02d11292aa33fe882393334494a07b_Traceguids$storport.sys", 0x5f668, 0x0, true, 0xcade862d1c859996)
#define _t44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids$storport.sys", 0x60590, 0x0, true, 0x87bf443740764641)
#define _t45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_dee983de6f5935136af426d994ba468e_Traceguids$storport.sys", 0x607a0, 0x0, true, 0x73fbfc018a12df38)
#define _t46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPPInitCount$storport.sys", 0x67e1c, 0x0, true, 0x90b87a258519a683)
#define _t47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WPP_SF_is$storport.sys", 0x3b0e0, 0x0, true, 0xbf0beb7679f1b9c9)
#define _t48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AsciiToWChar$storport.sys", 0x56a80, 0x0, true, 0x7cd05b05b2184fde)
#define _t49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceIdShim$storport.sys", 0x67240, 0x0, true, 0x779274a117d3c566)
#define _t50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceIdShimHookCollections$storport.sys", 0x671e0, 0x0, true, 0x44a5cfda27012a49)
#define _t51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceIdShimHookDeviceControl$storport.sys", 0x55fd0, 0x0, true, 0x591eaada8694a52)
#define _t52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceIdShimHooks$storport.sys", 0x67170, 0x0, true, 0xfee0d85aab0f781)
#define _t53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceIdShimStorageDeviceIdCompletionHook$storport.sys", 0x560e0, 0x0, true, 0x3e4db1be2b9de0af)
#define _t54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeviceStateTable$storport.sys", 0x5a688, 0x0, true, 0x9336524ee9f24882)
#define _t55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Disk1667CompatibleIdString$storport.sys", 0x5f988, 0x0, true, 0xeb983554ffd599df)
#define _t56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DpcCompletionLimit$storport.sys", 0x67300, 0x0, true, 0xa9f17f618e9b6a68)
#define _t57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterActiveConditionStart$storport.sys", 0x5ef50, 0x0, true, 0x509acb62aaf7c3b8)
#define _t58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterActiveConditionStop$storport.sys", 0x5f558, 0x0, true, 0x995e310beea91570)
#define _t59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterFinalPerfConfigData$storport.sys", 0x5f080, 0x0, true, 0x8c7a556c9b641614)
#define _t60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterFinalPortConfigInfo$storport.sys", 0x5f190, 0x0, true, 0xb1ce13586c97bd6b)
#define _t61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterIdleConditionStart$storport.sys", 0x5f528, 0x0, true, 0xf06892c54fb4e33e)
#define _t62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterIdleConditionStop$storport.sys", 0x5f050, 0x0, true, 0x59f861e0c9267caa)
#define _t63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterIdleStateStart$storport.sys", 0x5f140, 0x0, true, 0xe3b579df2f8a8df2)
#define _t64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterIdleStateStop$storport.sys", 0x5f110, 0x0, true, 0xf36720e5bf067d4f)
#define _t65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterIdleTimeoutSet$storport.sys", 0x5ee50, 0x0, true, 0xb607d386ce628b8e)
#define _t66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterInitPerfConfigData$storport.sys", 0x5ece0, 0x0, true, 0x55cb9fc9ff5fcf07)
#define _t67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterInitPortConfigInfo$storport.sys", 0x5f1f0, 0x0, true, 0x45646d74d74a323e)
#define _t68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterPoFxRegistered$storport.sys", 0x5f578, 0x0, true, 0xa5dfb55880930d8b)
#define _t69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterPowerNotRequiredStart$storport.sys", 0x5f4c8, 0x0, true, 0x81786323528383d2)
#define _t70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterPowerNotRequiredStop$storport.sys", 0x5ed10, 0x0, true, 0x860ef9943d94e81d)
#define _t71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterPowerRequest$storport.sys", 0x5f408, 0x0, true, 0xbbf0773c8f9da57d)
#define _t72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterPowerRequestComplete$storport.sys", 0x5f488, 0x0, true, 0x56c41b2ee8cc9d2)
#define _t73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterPowerRequiredStart$storport.sys", 0x5eff0, 0x0, true, 0x8a5022fe61250246)
#define _t74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterPowerRequiredStop$storport.sys", 0x5f180, 0x0, true, 0x29657d9d8f2794f0)
#define _t75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterResourceListFailure$storport.sys", 0x5f548, 0x0, true, 0xb72ee30ec5889b35)
#define _t76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventAdapterSystemPowerHint$storport.sys", 0x5ef60, 0x0, true, 0x5e5ac032e603170d)
#define _t77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventBusChangeDetected$storport.sys", 0x5f598, 0x0, true, 0x9fe5f5984e09d1f7)
#define _t78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventBusReset$storport.sys", 0x5f478, 0x0, true, 0xaf19f0ec62bca93)
#define _t79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventDpc$storport.sys", 0x5eda0, 0x0, true, 0x7bf2246df729b065)
#define _t80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventEnumerationComplete$storport.sys", 0x5ede0, 0x0, true, 0x84df086863508762)
#define _t81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventHwInitData$storport.sys", 0x5f020, 0x0, true, 0xaecad63afc3a7f66)
#define _t82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventIncreaseAdapterResourceList$storport.sys", 0x5f120, 0x0, true, 0x480f9145b8018318)
#define _t83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventIOPerformanceMeasurement$storport.sys", 0x5f588, 0x0, true, 0xba8b9602bc74dacb)
#define _t84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventIOPerformanceMeasurementTarget$storport.sys", 0x5f100, 0x0, true, 0x8c866595d54be640)
#define _t85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventIORequestComplete$storport.sys", 0x5f1e0, 0x0, true, 0x5933420de4f8cb3f)
#define _t86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventIOCTL$storport.sys", 0x5eec0, 0x0, true, 0xadd728695a9a4843)
#define _t87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventIsr$storport.sys", 0x5ee70, 0x0, true, 0xd7c778b417385c20)
#define _t88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventLinkDown$storport.sys", 0x5ed80, 0x0, true, 0x8b1f26815e76b975)
#define _t89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventLinkUp$storport.sys", 0x5efd0, 0x0, true, 0xb9e244a6bd4dbf73)
#define _t90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventLogoPerformanceMeasurement$storport.sys", 0x5eea0, 0x0, true, 0x1ee3324570d4b4f9)
#define _t91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventLogoPerformanceMeasurementTarget$storport.sys", 0x5f5a8, 0x0, true, 0x46572690edec62f7)
#define _t92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventLUReset$storport.sys", 0x5ed40, 0x0, true, 0xf02892ad087624)
#define _t93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniport2$storport.sys", 0x5f1d0, 0x0, true, 0x2d3e42b5cfcd491b)
#define _t94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniport4$storport.sys", 0x5f568, 0x0, true, 0x50e9a991bf009e80)
#define _t95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniport8$storport.sys", 0x5eef0, 0x0, true, 0x27a153f19c38d895)
#define _t96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportBugAbortBroken$storport.sys", 0x5ef40, 0x0, true, 0x95dce0f69172867b)
#define _t97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportBugResetBroken$storport.sys", 0x5ef90, 0x0, true, 0x3045b8628ec28797)
#define _t98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportLun2$storport.sys", 0x5f1c0, 0x0, true, 0xc1184b6d87725b0a)
#define _t99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportLun4$storport.sys", 0x5f130, 0x0, true, 0x490b415882690ef3)
#define _u00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportLun8$storport.sys", 0x5f1a0, 0x0, true, 0x5b3cd7a7e44c155b)
#define _u01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportRequest2$storport.sys", 0x5f3f8, 0x0, true, 0x46723fd2e109c61f)
#define _u02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportRequest4$storport.sys", 0x5f378, 0x0, true, 0xf10149a40f85ee44)
#define _u03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventMiniportRequest8$storport.sys", 0x5f308, 0x0, true, 0x6c8bbe13c8125961)
#define _u04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventNonReadWriteRequestComplete$storport.sys", 0x5f268, 0x0, true, 0x461360ca6f7f9599)
#define _u05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventOperationDuration$storport.sys", 0x5ec90, 0x0, true, 0xb195626acd464cc0)
#define _u06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPagingReadRequest$storport.sys", 0x5ed50, 0x0, true, 0x8d568a032b49646b)
#define _u07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPagingWriteRequest$storport.sys", 0x5ed30, 0x0, true, 0x9f012c2083b147d0)
#define _u08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPassThrough$storport.sys", 0x5f468, 0x0, true, 0xa7a1926aef84645c)
#define _u09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPassThroughProtocolCommand$storport.sys", 0x5f060, 0x0, true, 0xfe8e147297ad7e97)
#define _u10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPnpRequest$storport.sys", 0x5f298, 0x0, true, 0xf4107c9a048eb0a8)
#define _u11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPnpRequestComplete$storport.sys", 0x5ee30, 0x0, true, 0xabdd0cd754413903)
#define _u12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPortConfigChange$storport.sys", 0x5ee20, 0x0, true, 0x17652df36874b1b6)
#define _u13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPortPause$storport.sys", 0x5f318, 0x0, true, 0x39c5c07a4badf458)
#define _u14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPortPauseDevice$storport.sys", 0x5ee10, 0x0, true, 0xbdf188e602ba74e3)
#define _u15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPortResume$storport.sys", 0x5f498, 0x0, true, 0xc48078359d8c8d17)
#define _u16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventPortResumeDevice$storport.sys", 0x5f338, 0x0, true, 0x3cdc1ff37b6bc867)
#define _u17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventQueue$storport.sys", 0x59f18, 0x0, true, 0x3f2e5b1667d1932a)
#define _u18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventReadRequest$storport.sys", 0x5f2f8, 0x0, true, 0x7d7b94497031c678)
#define _u19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventRequestTimerCall$storport.sys", 0x5f278, 0x0, true, 0xd6d24f2653cc23eb)
#define _u20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventResetDetected$storport.sys", 0x5ee60, 0x0, true, 0x9b182970b8626bc)
#define _u21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventSetAdapterResourceList$storport.sys", 0x59f38, 0x0, true, 0xf5a59d24b2aeb9e3)
#define _u22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventSetLunQueueDepthBtl8$storport.sys", 0x5f348, 0x0, true, 0x78e7f64bf1402022)
#define _u23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventStateChangeDetected$storport.sys", 0x5efa0, 0x0, true, 0x1b5849eb739ce00a)
#define _u24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventTargetReset$storport.sys", 0x5ef30, 0x0, true, 0x86fa6d9eec6ea1a1)
#define _u25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventTargetedReenumeration$storport.sys", 0x5f2e8, 0x0, true, 0x544af5d58f9e1518)
#define _u26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitAbortTimeout$storport.sys", 0x5f3d8, 0x0, true, 0x85d93aa1136ede84)
#define _u27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitActiveConditionStart$storport.sys", 0x5f4b8, 0x0, true, 0x87d74f5938cf741)
#define _u28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitActiveConditionStop$storport.sys", 0x5efc0, 0x0, true, 0xd7f2e12261a25ed3)
#define _u29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitHwTimeout$storport.sys", 0x5f5d8, 0x0, true, 0x24bb310b9b80459)
#define _u30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitIdleConditionStart$storport.sys", 0x5ef20, 0x0, true, 0x74e695da2651c142)
#define _u31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitIdleConditionStop$storport.sys", 0x5f5e8, 0x0, true, 0x79c5bf2178b1c6c)
#define _u32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitIdleStateQueued$storport.sys", 0x5ef70, 0x0, true, 0x47d684c30af437cf)
#define _u33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitIdleStateStart$storport.sys", 0x5f508, 0x0, true, 0xd2f8ad8680de275c)
#define _u34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitIdleStateStop$storport.sys", 0x5f248, 0x0, true, 0x431cecd12f569f04)
#define _u35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitIdleTimeoutValue$storport.sys", 0x5f518, 0x0, true, 0x91c744d230af8f04)
#define _u36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPoFxRegistered$storport.sys", 0x5f428, 0x0, true, 0x554650a6cd4ad778)
#define _u37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPowerCycleCount$storport.sys", 0x5eee0, 0x0, true, 0x6eefd2d9345738d)
#define _u38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPowerNotRequiredStart$storport.sys", 0x5f0d0, 0x0, true, 0xad01e8f6542e174f)
#define _u39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPowerNotRequiredStop$storport.sys", 0x5f4e8, 0x0, true, 0x37f2d2e87228f377)
#define _u40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPowerRequest$storport.sys", 0x5efb0, 0x0, true, 0x73c09f76b70cfd27)
#define _u41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPowerRequestComplete$storport.sys", 0x5f040, 0x0, true, 0x5254c22a4545dc21)
#define _u42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPowerRequiredStart$storport.sys", 0x5edd0, 0x0, true, 0x9df7113dd2170398)
#define _u43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitPowerRequiredStop$storport.sys", 0x5f2b8, 0x0, true, 0x12dd78a13fd12e98)
#define _u44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitResponsive$storport.sys", 0x5f2a8, 0x0, true, 0xb9787e3c55ba57ae)
#define _u45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventUnitUnresponsive$storport.sys", 0x5f448, 0x0, true, 0x3ac89973d7fd8f33)
#define _u46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EventWriteRequest$storport.sys", 0x5ee40, 0x0, true, 0xe2f2bb6cac653f0c)
#define _u47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FillBufferWithDriverTelemetryDump$storport.sys", 0x55864, 0x0, true, 0x408ccf7c256dd3fd)
#define _u48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_InWinPE$storport.sys", 0x67e29, 0x0, true, 0x506761e6fec5f023)
#define _u49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_OSisUpgrade$storport.sys", 0x67e28, 0x0, true, 0xe5fd3810d5718de0)
#define _u50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidDPCRedirectionInitLock$storport.sys", 0x67db0, 0x0, true, 0x2da2a813df7136b)
#define _u51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidDPCRedirectionProcessors$storport.sys", 0x67d58, 0x0, true, 0xcc6be228c2538218)
#define _u52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidLogControl$storport.sys", 0x67348, 0x0, true, 0xb08591fe0ec0a308)
#define _u53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidNumaHighestNodeNumber$storport.sys", 0x67d94, 0x0, true, 0xa2ee4402709c2c17)
#define _u54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidNumberProcessors$storport.sys", 0x67da4, 0x0, true, 0xe0ce97f0de3e529c)
#define _u55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidPerProcessorState$storport.sys", 0x67d68, 0x0, true, 0x4b0cd96934ce7398)
#define _u56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidPerfRedirectGroupCount$storport.sys", 0x67d60, 0x0, true, 0x4a6dfbb56c860e30)
#define _u57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_RaidPerfRedirectRefCount$storport.sys", 0x67db8, 0x0, true, 0x447e7d5b79e79e)
#define _u58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingCriticalEventMaximum$storport.sys", 0x67330, 0x0, true, 0xead18b16f489f31a)
#define _u59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDailyTimer$storport.sys", 0x674a0, 0x0, true, 0x61417df81271298b)
#define _u60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingDailyTimerDpc$storport.sys", 0x67420, 0x0, true, 0x58bf506b7511f283)
#define _u61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingErrorDataEnabled$storport.sys", 0x67320, 0x0, true, 0x3e3ffa89bdf9e989)
#define _u62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingHierarchicalResetTimer$storport.sys", 0x673e0, 0x0, true, 0x49faae28ef3d742a)
#define _u63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingHierarchicalResetTimerDpc$storport.sys", 0x674e0, 0x0, true, 0x8b10e1e895d396c8)
#define _u64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingPerformanceEnabled$storport.sys", 0x67358, 0x0, true, 0x9524ee993608bfff)
#define _u65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingPerformanceHighResolutionTimer$storport.sys", 0x6731c, 0x0, true, 0xc2e9367d20254d71)
#define _u66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingPerformanceTimer$storport.sys", 0x67460, 0x0, true, 0x11dd042c1169e3aa)
#define _u67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_StorpTraceLoggingPerformanceTimerDpc$storport.sys", 0x675a0, 0x0, true, 0x9184553cc8a83c97)
#define _u68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_DEVICEDUMP_DRIVER_STORAGE_PORT$storport.sys", 0x5fa28, 0x0, true, 0x6adfb481732992cb)
#define _u69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct nt::guid_t*), "$GUID_DEVINTERFACE_SES$storport.sys", 0x5f9b8, 0x0, true, 0x969ff8c34b31e1b3)
#define _u70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct nt::guid_t*), "$GUID_DEVINTERFACE_STORAGEPORT$storport.sys", 0x5f678, 0x0, true, 0xf9caa542aecefbfe)
#define _u71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct nt::guid_t*), "$GUID_DEVINTERFACE_THERMAL_COOLING$storport.sys", 0x5f0c0, 0x0, true, 0xba79724bb7b75835)
#define _u72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct nt::guid_t*), "$GUID_DEVINTERFACE_UNIFIED_ACCESS_RPMB$storport.sys", 0x5f688, 0x0, true, 0x7e3642ad8ff6c0da)
#define _u73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct nt::guid_t*), "$GUID_DEVINTERFACE_VMLUN$storport.sys", 0x5f9e8, 0x0, true, 0xa4ac12e191dc0728)
#define _u74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct nt::guid_t*), "$GUID_DISK_MAX_POWER$storport.sys", 0x5f0b0, 0x0, true, 0xe234413681e11336)
#define _u75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_KEEP_IO_PORT_RESOURCE_REQUIREMENT_RULE$storport.sys", 0x60838, 0x0, true, 0xc4a54737d55708e0)
#define _u76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS$storport.sys", 0x5f3a8, 0x0, true, 0xdc59193b557fbce8)
#define _u77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_STORAGE_QUERY_FDO_INFO$storport.sys", 0x5f030, 0x0, true, 0x82644a367fdfec07)
#define _u78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GUID_STORAGE_QUERY_PDO_INFO$storport.sys", 0x59ef8, 0x0, true, 0x9c371958e3cb199e)
#define _u79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HiberFileHybridPriority$storport.sys", 0x67368, 0x0, true, 0x8ddfbe41e435ab25)
#define _u80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HighestPhysicalAddress$storport.sys", 0x67370, 0x0, true, 0xdec424c74ecbe8aa)
#define _u81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HmbAllocationPolicy$storport.sys", 0x67378, 0x0, true, 0xe57fd2e234390bb3)
#define _u82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitSecurityCookie$storport.sys", 0x67e21, 0x0, true, 0x54b2289b02a4d4b2)
#define _u83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeBusesWithVmLunsBitmap$storport.sys", 0x27cd4, 0x0, true, 0xa3be0d84c3637ae0)
#define _u84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct stor::port::vpd_identification_page_t*)>*), "$IsBlankIdPage$storport.sys", 0x10764, 0x0, true, 0x2c9a3c6d66f7fef)
#define _u85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsSystemAoAC$storport.sys", 0x67e15, 0x0, true, 0x51f3078e2ce0d7a5)
#define _u86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LunQueue$storport.sys", 0x59f48, 0x0, true, 0x46be63511c947522)
#define _u87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Microsoft_Windows_StorPortEnableBits$storport.sys", 0x67840, 0x0, true, 0xa41db13941054bda)
#define _u88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Microsoft_Windows_StorPortKeywords$storport.sys", 0x5a4d0, 0x0, true, 0xa889ef83fde6853f)
#define _u89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Microsoft_Windows_StorPortLevels$storport.sys", 0x5a650, 0x0, true, 0xfcab3076d95e8720)
#define _u90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MiniportBugActionPolicy$storport.sys", 0x6736c, 0x0, true, 0x47f808c0e53cbcfc)
#define _u91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NumDllInitialize$storport.sys", 0x67e30, 0x0, true, 0xe65ed625f93e5723)
#define _u92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PhysicalMemorySize$storport.sys", 0x67d78, 0x0, true, 0x6fbc62b36172f564)
#define _u93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortAllocateRegistryBuffer$storport.sys", 0x56af0, 0x0, true, 0x2e96ea865ea50557)
#define _u94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortAllowIrpFromPdoToFdo$storport.sys", 0x7addc, 0x0, true, 0xc26a03c185e22a)
#define _u95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortBuildRegKeyName$storport.sys", 0x56b84, 0x0, true, 0xfd4e3318167946e5)
#define _u96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortFreeDriverParameters$storport.sys", 0x79e14, 0x0, true, 0xc2ffdc54be4cd4ac)
#define _u97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<const struct stor::port::scsi_device_type_t*(uint32_t)>*), "$PortGetDeviceType$storport.sys", 0x71484, 0x0, true, 0xf9896c32754f00f2)
#define _u98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortGetDriverParameters$storport.sys", 0x7a06c, 0x0, true, 0x4aacb6c84208285b)
#define _u99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortGetIoLatencyCapValue$storport.sys", 0x7a0fc, 0x0, true, 0xba893354ec4d848d)
#define _v00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortGetIoTimeoutValue$storport.sys", 0x7a218, 0x0, true, 0xccb3ada8f94b7205)
#define _v01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortGetLinkTimeoutValue$storport.sys", 0x57520, 0x0, true, 0xa4d3742943e537cf)
#define _v02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortGetRegistrySettings$storport.sys", 0x7a33c, 0x0, true, 0xf6607756602d41aa)
#define _v03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortMapBuildAdapterEntry$storport.sys", 0x571c4, 0x0, true, 0xd2b6e2635bd71ee5)
#define _v04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortMapBuildBusEntry$storport.sys", 0x572d8, 0x0, true, 0x3404e1bde836903c)
#define _v05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortMapBuildLunEntry$storport.sys", 0x189f4, 0x0, true, 0x29818c2172e56267)
#define _v06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortMapDeleteAdapterEntry$storport.sys", 0x57358, 0x0, true, 0x777204ac07f3dd13)
#define _v07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortMapDeleteLunEntry$storport.sys", 0x18c04, 0x0, true, 0xf0ecc8cf47d30d90)
#define _v08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortMapOpenKey$storport.sys", 0x57460, 0x0, true, 0xb93a77c63a28e137)
#define _v09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortMiniportRegistryRead$storport.sys", 0x56cec, 0x0, true, 0x77b10c6efd70ba7a)
#define _v10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortMiniportRegistryWrite$storport.sys", 0x56f10, 0x0, true, 0x9b5eda256f790742)
#define _v11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortOpenDeviceKey$storport.sys", 0x7a3cc, 0x0, true, 0xc85e8c47d3361ec)
#define _v12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughApplyNormalizedRequest$storport.sys", 0x575b0, 0x0, true, 0xb9e35a2fea943291)
#define _v13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughBasicValidation$storport.sys", 0x57628, 0x0, true, 0x850bbc8263154dfb)
#define _v14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughBuildSrb$storport.sys", 0x7b030, 0x0, true, 0xaf9b115ef24fba6c)
#define _v15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExApplyNormalizedRequest$storport.sys", 0x57664, 0x0, true, 0xef3665735dd812d8)
#define _v16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExBasicValidation$storport.sys", 0x576e0, 0x0, true, 0x406c52d031203d83)
#define _v17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExBuildSrbEx$storport.sys", 0x7b0e4, 0x0, true, 0x4601c8520cb3f2de)
#define _v18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExFreeSrbEx$storport.sys", 0x57774, 0x0, true, 0xf6cc32e16c7d6bc)
#define _v19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExGetDataBuffers$storport.sys", 0x7b380, 0x0, true, 0x6ed82e8321c05498)
#define _v20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExMarshalResultsFromSrbEx$storport.sys", 0x577e0, 0x0, true, 0x4237aea8f9f46667)
#define _v21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExNormalize$storport.sys", 0x57998, 0x0, true, 0xd9d66ea3febc4e47)
#define _v22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExSendAsync$storport.sys", 0x7b3cc, 0x0, true, 0x2b2268c8402537e8)
#define _v23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExValidate$storport.sys", 0x57a30, 0x0, true, 0x3a84130c1233d7f4)
#define _v24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughExValidateNormalizedRequest$storport.sys", 0x7b68c, 0x0, true, 0x2435d584a4d4c598)
#define _v25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughFreeSrb$storport.sys", 0x57b4c, 0x0, true, 0x21c048fc3578f0e7)
#define _v26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughGetAddress$storport.sys", 0x7b8d4, 0x0, true, 0x27a696557a1256f1)
#define _v27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughGetDataBuffer$storport.sys", 0x7b994, 0x0, true, 0x6d6c00e5bb13ca31)
#define _v28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughMarshalResultsFromSrb$storport.sys", 0x57c38, 0x0, true, 0xc8ca664fc7e1c09f)
#define _v29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughNormalize$storport.sys", 0x57d80, 0x0, true, 0x1c28505a6d05634c)
#define _v30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughSendAsync$storport.sys", 0x7b9b8, 0x0, true, 0x55cb5016e9728d56)
#define _v31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughSetAddress$storport.sys", 0x7bba8, 0x0, true, 0xf50501c3a3acc684)
#define _v32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughSrbInitialize$storport.sys", 0x7bc80, 0x0, true, 0x119bcec2a74fb33f)
#define _v33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughValidate$storport.sys", 0x7bd4c, 0x0, true, 0x6707963ea77a7438)
#define _v34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortPassThroughValidateNormalizedRequest$storport.sys", 0x7be50, 0x0, true, 0x5c01528b65ff4d2d)
#define _v35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortQueryInterfaceFdoInfo$storport.sys", 0x7aec0, 0x0, true, 0xcc1ce41516a7c05e)
#define _v36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortQueryInterfaceFdoQdr$storport.sys", 0x7af00, 0x0, true, 0x11e27ae5f0f29827)
#define _v37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortQueryInterfacePdoInfo$storport.sys", 0x7af74, 0x0, true, 0x49a980eb21491821)
#define _v38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortReadRegistrySettings$storport.sys", 0x7a4d4, 0x0, true, 0x45c2eda21b439255)
#define _v39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortReadStorageBusType$storport.sys", 0x7a570, 0x0, true, 0x16b64f553e37159b)
#define _v40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortRegistryCreateKeyEx$storport.sys", 0x18d10, 0x0, true, 0x2651809921270be4)
#define _v41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortRegistryRead$storport.sys", 0x71b38, 0x0, true, 0x6f4884db16a16970)
#define _v42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortRegistryReadDeviceKey$storport.sys", 0x718f4, 0x0, true, 0xf3c36713d7942504)
#define _v43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortRegistryReadWithHandle$storport.sys", 0x72c2c, 0x0, true, 0x84f912ee4c141a38)
#define _v44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortRegistrySetValueKey$storport.sys", 0x18af8, 0x0, true, 0x71c04eb2eda0250b)
#define _v45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortRegistryWriteDeviceKey$storport.sys", 0x719b4, 0x0, true, 0x95dfeb3959884849)
#define _v46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortRegistryWriteWithHandle$storport.sys", 0x71a50, 0x0, true, 0x4181d1ed960abbe8)
#define _v47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortScsiDeviceTypes$storport.sys", 0x59030, 0x0, true, 0x66f01a508836257e)
#define _v48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortSrbTranslateFirmwareIoctlStatusToNtStatus$storport.sys", 0x286b0, 0x0, true, 0x795de81036557a72)
#define _v49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortSrbTranslateSrbToNtStatus$storport.sys", 0x57138, 0x0, true, 0xbe839f5340a40c35)
#define _v50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortTraceErrorDrainList$storport.sys", 0x58114, 0x0, true, 0x913d87e5c391e5de)
#define _v51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortTraceErrorFreeDriver$storport.sys", 0x7bf3c, 0x0, true, 0xb123f679deac8890)
#define _v52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortTraceErrorRegisterDriver$storport.sys", 0x7bfa8, 0x0, true, 0xc7784810ed2c8d75)
#define _v53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortTraceErrorWritePacket$storport.sys", 0x581a4, 0x0, true, 0x3a48726a8e603aa1)
#define _v54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortTraceInitGlobalLogger$storport.sys", 0x58264, 0x0, true, 0xd49f2d37b5fad350)
#define _v55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortTraceInitTracing$storport.sys", 0x584d4, 0x0, true, 0xdce31f282d435c9e)
#define _v56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortWdmGetDeviceCapabilities$storport.sys", 0x70f08, 0x0, true, 0x9da2f595849dc088)
#define _v57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpAsyncCompletion$storport.sys", 0x57e70, 0x0, true, 0xede35e58a297ca7d)
#define _v58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpBinaryReadCallBack$storport.sys", 0x57070, 0x0, true, 0x27d0f70bc1699495)
#define _v59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpCancelRoutine$storport.sys", 0x57f00, 0x0, true, 0x4244d938d37df03e)
#define _v60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpCompleteRequestIrp$storport.sys", 0x57fa0, 0x0, true, 0x55bf14c343a3fbaf)
#define _v61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpEnableCancel$storport.sys", 0x58064, 0x0, true, 0x245c8a7f88acbce9)
#define _v62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpErrorDrainListDpc$storport.sys", 0x58210, 0x0, true, 0x647c9340b6fd73db)
#define _v63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpErrorInitDpc$storport.sys", 0x58238, 0x0, true, 0x9396691a7a5c00f7)
#define _v64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpErrorInitRecords$storport.sys", 0x7bfcc, 0x0, true, 0x5219c30358cb60a3)
#define _v65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpOpenParametersKey$storport.sys", 0x7a5ec, 0x0, true, 0x23632153a1e7fd4a)
#define _v66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpPassThroughZeroUnusedBuffers$storport.sys", 0x580ac, 0x0, true, 0x2e525a4b153bb6b8)
#define _v67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpReadBusType$storport.sys", 0x7a6c8, 0x0, true, 0xc935de506a2f8aa7)
#define _v68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpReadDriverParameterEntry$storport.sys", 0x7a76c, 0x0, true, 0x39d67870b8e1dd2b)
#define _v69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpReadLinkTimeoutValue$storport.sys", 0x7a93c, 0x0, true, 0x3fb32fa81e1fb826)
#define _v70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpReadMaximumLogicalUnitEntry$storport.sys", 0x7aa4c, 0x0, true, 0x71707faa2a286e9c)
#define _v71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpReadMaximumUCXAddressEntry$storport.sys", 0x7aaf8, 0x0, true, 0x49c02f2d38b44617)
#define _v72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpReadMinimumUCXAddressEntry$storport.sys", 0x7aba8, 0x0, true, 0x1093941435c25b72)
#define _v73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpReadNumberOfRequestsEntry$storport.sys", 0x7ac64, 0x0, true, 0x20ad47cc8988c788)
#define _v74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpReadUncachedExtAlignmentEntry$storport.sys", 0x7ad1c, 0x0, true, 0x6ba07a5f0399ca03)
#define _v75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpRegQueryRoutine$storport.sys", 0x71400, 0x0, true, 0x5addc328dc1e8be1)
#define _v76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortpSyncCompletion$storport.sys", 0x580f0, 0x0, true, 0xd0a821a770bf34cf)
#define _v77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAdapterDeregisterFromIdleDetection$storport.sys", 0x3bf10, 0x0, true, 0xb8d2864673cf46e1)
#define _v78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAdapterProtocolCommandIoctl$storport.sys", 0x2878c, 0x0, true, 0x368427db1aa0f7e0)
#define _v79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAdapterSetTemperatureThresholdIoctl$storport.sys", 0x2881c, 0x0, true, 0xa37311585e8ff673)
#define _v80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAllocateConcurrentChannelToken$storport.sys", 0x28918, 0x0, true, 0x5de79e429cf731ea)
#define _v81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAllocateIoResource$storport.sys", 0xb800, 0x0, true, 0x171086ad3e2c82e6)
#define _v82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAssignConfigurationResources$storport.sys", 0x78908, 0x0, true, 0x146cc879a11ed34d)
#define _v83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaAttemptHighWaterMarkIncrease$storport.sys", 0x4b748, 0x0, true, 0xaf19fe1ee2835232)
#define _v84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildHwFirmwareActivateBufferForMiniport$storport.sys", 0x412c0, 0x0, true, 0xeddf4c7553ee1648)
#define _v85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildHwFirmwareDownloadBufferForMiniport$storport.sys", 0x413f0, 0x0, true, 0xe1732f316db01da7)
#define _v86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildHwFirmwareGetInfoBufferForMiniport$storport.sys", 0x1987c, 0x0, true, 0x89f538129e251c4f)
#define _v87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildQueryPhysicalTopologyBufferForMiniport$storport.sys", 0xd110, 0x0, true, 0xfba74de1f80167b4)
#define _v88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildQueryProtocolSpecificPropertyBufferForMiniport$storport.sys", 0x417a0, 0x0, true, 0xafc3d98740380b58)
#define _v89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildQueryTemperaturePropertyBufferForMiniport$storport.sys", 0x418d4, 0x0, true, 0x969f391572e419b6)
#define _v90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaBuildSetTemperatureThresholdBufferForMiniport$storport.sys", 0x41bf0, 0x0, true, 0x3084afce8bdd7649)
#define _v91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCallMiniportAdapterControl$storport.sys", 0x100a8, 0x0, true, 0xab6f833aa77734b5)
#define _v92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCallMiniportCompleteServiceIrp$storport.sys", 0x344fc, 0x0, true, 0xa6960f72efc0b357)
#define _v93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCallMiniportFindAdapter$storport.sys", 0x3454c, 0x0, true, 0xd6d868669aca3721)
#define _v94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCallMiniportFreeResources$storport.sys", 0x34a98, 0x0, true, 0x99529c32c4cca0ce)
#define _v95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCallMiniportHwInitialize$storport.sys", 0x289b0, 0x0, true, 0x8b0b9abc6f969c66)
#define _v96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCallMiniportUnitControl$storport.sys", 0x16254, 0x0, true, 0x8b4d4f26525e0817)
#define _v97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(char*, uint32_t, char*, uint32_t)>*), "$RaCopyPaddedString$storport.sys", 0x729f8, 0x0, true, 0x2409dc80b30e6d05)
#define _v98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCreateBus$storport.sys", 0x77a9c, 0x0, true, 0x1a6843bbcbb89652)
#define _v99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCreateDriver$storport.sys", 0x77d28, 0x0, true, 0x8ef20a047e5c46b5)
#define _w00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCreateMiniport$storport.sys", 0x78768, 0x0, true, 0xa65ae46fb14e940f)
#define _w01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaCreateTagList$storport.sys", 0x708d8, 0x0, true, 0x4ac3aa719c028d28)
#define _w02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDeleteBus$storport.sys", 0x77ac0, 0x0, true, 0x9386d5856a97861f)
#define _w03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDeleteDriver$storport.sys", 0x77d7c, 0x0, true, 0x215847b4f2477a6c)
#define _w04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDeleteMiniport$storport.sys", 0x787ac, 0x0, true, 0xbf1f94fa55e9aa72)
#define _w05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDeleteTagList$storport.sys", 0x714a8, 0x0, true, 0x30db7fa4c95a696e)
#define _w06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverAddDevice$storport.sys", 0x31af0, 0x0, true, 0x38beda95a95cb9d6)
#define _w07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverCloseIrp$storport.sys", 0x70830, 0x0, true, 0xca28e4dc45218699)
#define _w08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverCreateIrp$storport.sys", 0x70780, 0x0, true, 0x709c3ba8c43cee21)
#define _w09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverDeleteDevice$storport.sys", 0x31d08, 0x0, true, 0x2446ab08ba3d6e4)
#define _w10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverDeviceControlIrp$storport.sys", 0xb850, 0x0, true, 0x6ced5f57e2d5c98c)
#define _w11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverPnpIrp$storport.sys", 0x7d30, 0x0, true, 0x33efa3dba19ddb83)
#define _w12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverPowerIrp$storport.sys", 0xedc0, 0x0, true, 0xe190a85f6ff62146)
#define _w13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverScsiIrp$storport.sys", 0xa230, 0x0, true, 0x8c332240c05b95b8)
#define _w14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverSystemControlIrp$storport.sys", 0x72dd0, 0x0, true, 0x75857a6eb356c954)
#define _w15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDriverUnload$storport.sys", 0x31dc0, 0x0, true, 0xb81277a70f60c126)
#define _w16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDuplicateCmResourceList$storport.sys", 0x78cf4, 0x0, true, 0x466cd2129da90fc0)
#define _w17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaDuplicateUnicodeString$storport.sys", 0x41d08, 0x0, true, 0x39e497647ba34747)
#define _w18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaFixupIds$storport.sys", 0x72b90, 0x0, true, 0x2bd4a7b6e886918f)
#define _w19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaForwardIrp$storport.sys", 0x11aac, 0x0, true, 0x2aaa6bd60de2b04f)
#define _w20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaForwardIrpSynchronous$storport.sys", 0x11db0, 0x0, true, 0x5e4ca636a6131ba8)
#define _w21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaFreeDriverInitData$storport.sys", 0x31ea0, 0x0, true, 0x9027a3dab06ff2f3)
#define _w22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaFreeIoResource$storport.sys", 0x4ba44, 0x0, true, 0x2510bfd32ae255b0)
#define _w23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaFreeRaidResources$storport.sys", 0x4ba70, 0x0, true, 0x64a426458c4183c9)
#define _w24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaGetBusInterface$storport.sys", 0x41d8c, 0x0, true, 0x9e11c0092f56a2f0)
#define _w25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaGetProtocolCommandEffects$storport.sys", 0x289e8, 0x0, true, 0x5bf23d3104ae798b)
#define _w26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaGetUnitStorageDeviceIdProperty$storport.sys", 0x73490, 0x0, true, 0x815ec0d714af5eb0)
#define _w27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaGetUnitStorageDeviceProperty$storport.sys", 0x70330, 0x0, true, 0xa4167ca357164277)
#define _w28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaInitializeBus$storport.sys", 0x77afc, 0x0, true, 0x413c5868e45e6cca)
#define _w29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaInitializeConfiguration$storport.sys", 0x78a28, 0x0, true, 0xe0005014833d1a4b)
#define _w30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaInitializeDriver$storport.sys", 0x77e70, 0x0, true, 0x6dff636fd6995ad1)
#define _w31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaInitializeMiniport$storport.sys", 0x7882c, 0x0, true, 0x29fb735ba5f87cd3)
#define _w32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaInitializePower$storport.sys", 0x28c9c, 0x0, true, 0xa5f9651be2184ac6)
#define _w33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaInitializeRaidResources$storport.sys", 0x4bbc0, 0x0, true, 0xab66fc69eac4ff82)
#define _w34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaInitializeTagList$storport.sys", 0x71c40, 0x0, true, 0xce3ded9d27442960)
#define _w35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaQueryInterface$storport.sys", 0x41e9c, 0x0, true, 0xe6f7beba977fd297)
#define _w36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaSaveDriverInitData$storport.sys", 0x77f80, 0x0, true, 0x66f57f2cedee57a)
#define _w37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaSendIrpSynchronous$storport.sys", 0xe020, 0x0, true, 0x1ff8c0d757e985b)
#define _w38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaSrbSetMiniportContext$storport.sys", 0x70fc, 0x0, true, 0x10919797f8f05afb)
#define _w39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaTranslateMiniportFirmwareInfoToHwFirmwareInfo$storport.sys", 0x41f34, 0x0, true, 0xe2da5e898b7fb455)
#define _w40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitAcquireRemoveLock$storport.sys", 0xbd94, 0x0, true, 0x235e99984669bab3)
#define _w41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitAdapterRemove$storport.sys", 0x444d0, 0x0, true, 0x817c639a41e630e8)
#define _w42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitAdapterSurpriseRemove$storport.sys", 0xeaa0, 0x0, true, 0x8a2efc8028e437f6)
#define _w43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitAsyncError$storport.sys", 0xbe48, 0x0, true, 0x9242a57e5f8cac52)
#define _w44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitAsyncNotificationWorkItemRoutine$storport.sys", 0x44590, 0x0, true, 0x768b182ff1a56ba9)
#define _w45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitAtaPassThroughIoctl$storport.sys", 0x1af0, 0x0, true, 0xce58d0ea9770e355)
#define _w46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitAtaPassThroughMarshalResults$storport.sys", 0x1e8c, 0x0, true, 0xb1d38ddb18e19827)
#define _w47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitAtaPassThroughValidateInput$storport.sys", 0x20c0, 0x0, true, 0x1baba787511d8f32)
#define _w48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitAttributeManagement$storport.sys", 0x44734, 0x0, true, 0xc757d5fb170c0856)
#define _w49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitBuildDsmGeneralBufferForMiniport$storport.sys", 0x44810, 0x0, true, 0xb9b21fab1a52cd02)
#define _w50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitBuildDsmNotifyBufferForMiniport$storport.sys", 0x109d8, 0x0, true, 0xb85a6df98886c0e)
#define _w51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitCancelRemoveDeviceIrp$storport.sys", 0x78da0, 0x0, true, 0x66aa28b1fbdce96c)
#define _w52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitCancelStopDeviceIrp$storport.sys", 0x78da0, 0x0, true, 0x7c9e0e47bdb6a0e8)
#define _w53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitCheckRemoveState$storport.sys", 0xbdf8, 0x0, true, 0x82f53c32711e4e93)
#define _w54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitCheckRemoveStateForDisabled$storport.sys", 0x44d78, 0x0, true, 0x97096ac6f0b86ff3)
#define _w55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitClaimDeviceSrb$storport.sys", 0x19e48, 0x0, true, 0x25b6f5f107c3cd82)
#define _w56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitClearUnresponsiveAttribute$storport.sys", 0x44dd8, 0x0, true, 0xe0faf5e8ddf93b74)
#define _w57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitCloseIrp$storport.sys", 0xdfdc, 0x0, true, 0xbbaabe6a993cf15b)
#define _w58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitCreateIrp$storport.sys", 0xdfdc, 0x0, true, 0x51f61e571cb1ec39)
#define _w59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitDeleteDeviceIrp$storport.sys", 0x19c90, 0x0, true, 0x789dfa74ffc92f49)
#define _w60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitDeregisterFromIdleDetection$storport.sys", 0x16f58, 0x0, true, 0x8d8a842123f358d5)
#define _w61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitDeviceControlIrp$storport.sys", 0xb8f8, 0x0, true, 0xbee6be67c219966e)
#define _w62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitDeviceUsageNotificationIrp$storport.sys", 0x10ee4, 0x0, true, 0x57b951179ad58e60)
#define _w63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitDisableDeviceIrp$storport.sys", 0x44ee0, 0x0, true, 0x1fedd848254c5635)
#define _w64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitFlushQueueSrb$storport.sys", 0x44f6c, 0x0, true, 0x8af0590dce8ea540)
#define _w65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitGetQOSIoctl$storport.sys", 0x450e0, 0x0, true, 0xa8e6707552de802b)
#define _w66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitHwFirmwareActivateIoctl$storport.sys", 0x451f0, 0x0, true, 0x3c18815d973cd94c)
#define _w67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitHwFirmwareDownloadIoctl$storport.sys", 0x45264, 0x0, true, 0xd63d178b1e57ca5a)
#define _w68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitHwFirmwareGetInfoIoctl$storport.sys", 0x19368, 0x0, true, 0x52445de665f6dfd6)
#define _w69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitIgnorePnpIrp$storport.sys", 0x735d4, 0x0, true, 0x9709951c24cb1900)
#define _w70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitInitializeWMI$storport.sys", 0x72224, 0x0, true, 0xd20f29df7d19489a)
#define _w71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitPnpIrp$storport.sys", 0x7dd0, 0x0, true, 0x4290435e2a9f7e3)
#define _w72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitPowerCapIoctl$storport.sys", 0x452d8, 0x0, true, 0x6167f1b0e0cc8f84)
#define _w73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitPowerIrp$storport.sys", 0xef38, 0x0, true, 0x80e5c7c999ba1f8a)
#define _w74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitProtocolCommandIoctl$storport.sys", 0x45380, 0x0, true, 0x2dfa422526daa5e0)
#define _w75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitQueryCapabilitiesIrp$storport.sys", 0x70b18, 0x0, true, 0xc3e43900ec40495e)
#define _w76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitQueryDeviceRelationsIrp$storport.sys", 0x70100, 0x0, true, 0x95d629096ba8cb75)
#define _w77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitQueryDeviceTextIrp$storport.sys", 0x72a40, 0x0, true, 0x459a3a4762eb84b6)
#define _w78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitQueryIdIrp$storport.sys", 0x72970, 0x0, true, 0x5d9d14a67b584ea)
#define _w79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitQueryInterfaceIrp$storport.sys", 0x19b54, 0x0, true, 0x65b4dcac4f5461e2)
#define _w80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitQueryPnpDeviceStateIrp$storport.sys", 0x70ab0, 0x0, true, 0xaf06f8343f425125)
#define _w81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitQueryRemoveDeviceIrp$storport.sys", 0x78dd0, 0x0, true, 0xc5b4fe8a5a2a3496)
#define _w82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitQueryStopDeviceIrp$storport.sys", 0x78e1c, 0x0, true, 0xd96197603911f0de)
#define _w83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitQuiesceDeviceSrb$storport.sys", 0x124e8, 0x0, true, 0x2b05929704c6ccfb)
#define _w84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitRegisterForIdleDetection$storport.sys", 0x720a0, 0x0, true, 0x68e8f4bcf274f1e0)
#define _w85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitReleaseDeviceSrb$storport.sys", 0x4544c, 0x0, true, 0x8839cc6876664d12)
#define _w86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitReleaseRemoveLock$storport.sys", 0xbd50, 0x0, true, 0x18675ade3e48481e)
#define _w87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitRemoveDeviceIrp$storport.sys", 0x19bf4, 0x0, true, 0x90fcdcffdc808e8f)
#define _w88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitRemoveFromPendingList$storport.sys", 0x8054, 0x0, true, 0x6465504d5f405df5)
#define _w89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitRequestPowerDown$storport.sys", 0x3bf5c, 0x0, true, 0x327b7754bf149f8a)
#define _w90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitRequestPowerUp$storport.sys", 0x3c0ac, 0x0, true, 0xd6e0c09ef8bb0edd)
#define _w91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitResetBusSrb$storport.sys", 0x454d0, 0x0, true, 0xdf44b158947aed34)
#define _w92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitScsiFreeDumpPointersIoctl$storport.sys", 0x11324, 0x0, true, 0xef89d7c0c3bc3dd7)
#define _w93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitScsiGetAddressIoctl$storport.sys", 0x71068, 0x0, true, 0xbc9f7c56e00fd63b)
#define _w94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitScsiGetDumpPointersIoctl$storport.sys", 0x1263c, 0x0, true, 0x11f90edf0b9b2777)
#define _w95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitScsiIrp$storport.sys", 0xa2d0, 0x0, true, 0xe7e61b497b206ad3)
#define _w96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitScsiMiniportIoctl$storport.sys", 0x66e8, 0x0, true, 0x8bb6fd4755da7db2)
#define _w97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitScsiPassThroughIoctl$storport.sys", 0x78e54, 0x0, true, 0xdf3eecbb042889ba)
#define _w98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSetAtaPassThroughCdb$storport.sys", 0x2000, 0x0, true, 0xa642c26e5a670167)
#define _w99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSetHierarchicalResetSrbTimeoutCountdown$storport.sys", 0x45584, 0x0, true, 0x55f63900422db8b8)
#define _x00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSetQOSIoctl$storport.sys", 0x455e4, 0x0, true, 0xcf69869b2ae3cacf)
#define _x01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSetQueueDepth$storport.sys", 0x16020, 0x0, true, 0xb1624cd87ca58d3)
#define _x02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSetTemperatureThresholdIoctl$storport.sys", 0x45b30, 0x0, true, 0xa09e47b1e96c4319)
#define _x03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSetUnresponsiveAttribute$storport.sys", 0x45c28, 0x0, true, 0x1f32cd0d4f37db85)
#define _x04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStartDeviceIrp$storport.sys", 0x725ac, 0x0, true, 0x2f1d962a57006fd6)
#define _x05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStartIo$storport.sys", 0x4f30, 0x0, true, 0x815b5a365dbf87d)
#define _x06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStartResetIo$storport.sys", 0x46688, 0x0, true, 0x65631c3846fa03da)
#define _x07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStopDeviceIrp$storport.sys", 0x78f74, 0x0, true, 0xe4c34f861f204aed)
#define _x08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageBreakReservationIoctl$storport.sys", 0x78fa0, 0x0, true, 0xb4c440bd857b66a8)
#define _x09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageDataSetManagementIoctl$storport.sys", 0x710d0, 0x0, true, 0x98adaf2ac29ebb03)
#define _x10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageDiagnosticIoctl$storport.sys", 0x7906c, 0x0, true, 0xd23c628568dac125)
#define _x11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageGetIdlePowerUpReason$storport.sys", 0x79394, 0x0, true, 0xff6861eaa8d003c2)
#define _x12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStoragePowerActive$storport.sys", 0x234c, 0x0, true, 0x10f0d207f73b441f)
#define _x13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStoragePowerIdle$storport.sys", 0x22c0, 0x0, true, 0xee2301e29876e1c)
#define _x14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDeviceIdPropertyIoctl$storport.sys", 0x73420, 0x0, true, 0x70e81741d944b8)
#define _x15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl$storport.sys", 0x7383c, 0x0, true, 0x4794f33af0b712b3)
#define _x16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl$storport.sys", 0x46d4c, 0x0, true, 0xa261ea812bc4c486)
#define _x17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDevicePowerPropertyIoctl$storport.sys", 0x73764, 0x0, true, 0xf1b43bf0cb70400c)
#define _x18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDevicePropertyIoctl$storport.sys", 0x702cc, 0x0, true, 0x211a3508cba63dc8)
#define _x19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl$storport.sys", 0x46e9c, 0x0, true, 0xf62956ce7bd9a6ff)
#define _x20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryDeviceTemperaturePropertyIoctl$storport.sys", 0x47060, 0x0, true, 0x9b9e5204602e73a)
#define _x21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitStorageQueryPropertyIoctl$storport.sys", 0x701a0, 0x0, true, 0x34a91977c50acf1a)
#define _x22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSucceedPnpIrp$storport.sys", 0x738d0, 0x0, true, 0xbd48b058acc5612f)
#define _x23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSurpriseRemovalIrp$storport.sys", 0x71d84, 0x0, true, 0x7b0f8ae2055af59)
#define _x24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitSwallowStopUnitCommand$storport.sys", 0x47438, 0x0, true, 0xa24467e8b17f10ed)
#define _x25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitTelemetryIdIoctl$storport.sys", 0x17a7c, 0x0, true, 0x87296dcee4587861)
#define _x26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitUnknownSrb$storport.sys", 0x7940c, 0x0, true, 0x87cd41acf185d55c)
#define _x27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitUnresponsiveAttributeMgmt$storport.sys", 0x474a0, 0x0, true, 0x9b11e539b839023)
#define _x28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaUnitWaitForRemoveLock$storport.sys", 0x16dac, 0x0, true, 0xa01173fa8698fc7f)
#define _x29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaValidateProtocolCommandIoctl$storport.sys", 0x421fc, 0x0, true, 0x7e4d743a68452a15)
#define _x30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaWmiDispatchIrp$storport.sys", 0x72e64, 0x0, true, 0x63d05d25e3979e2e)
#define _x31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaWmiIrpNormalRequest$storport.sys", 0x79960, 0x0, true, 0x57d9296e32f1b928)
#define _x32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaWmiIrpRegisterRequest$storport.sys", 0x72fbc, 0x0, true, 0xccba943c09c48f36)
#define _x33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaWmiPassToMiniPort$storport.sys", 0x730e4, 0x0, true, 0x1c0c753628570f9)
#define _x34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAcquireAdapterRemoveLock$storport.sys", 0xc534, 0x0, true, 0x9ac125a289c21d6f)
#define _x35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct stor::port::raid_adapter_extension_t*)>*), "$RaidAdapterAcquireInterruptLock$storport.sys", 0x64e8, 0x0, true, 0x74ddb578f144868d)
#define _x36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterAcquireStartIoLock$storport.sys", 0xc4f8, 0x0, true, 0x3e6692defa92c3c5)
#define _x37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterBusChangeDpcRoutine$storport.sys", 0x29130, 0x0, true, 0xbf277c40cd6f215f)
#define _x38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCacheOperationalPowerRange$storport.sys", 0x35688, 0x0, true, 0x87c454bc5dcbe2ac)
#define _x39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCancelPauseTimer$storport.sys", 0x29160, 0x0, true, 0xcaa847a00e9b7602)
#define _x40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCancelRemoveDeviceIrp$storport.sys", 0x74de0, 0x0, true, 0xeacd44ed256ba84f)
#define _x41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCancelStopDeviceIrp$storport.sys", 0x74de0, 0x0, true, 0x4060eace74967512)
#define _x42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCheckWaitTimeout$storport.sys", 0x291ac, 0x0, true, 0xe53da352b66945d1)
#define _x43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCompleteInitialization$storport.sys", 0x295f4, 0x0, true, 0x1e690f4f7f2bc475)
#define _x44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterConfigureResources$storport.sys", 0x29824, 0x0, true, 0x438d7f0fdb0797b1)
#define _x45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterConnectInterrupt$storport.sys", 0x2996c, 0x0, true, 0xe6af6c7a778a03f8)
#define _x46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterConnectMSIInterrupt$storport.sys", 0x74e80, 0x0, true, 0x1f0f7955bf16ad3a)
#define _x47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterConnectNonMSIInterrupt$storport.sys", 0x75024, 0x0, true, 0x15b91736541d7ca8)
#define _x48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterCreateDevmapEntry$storport.sys", 0x29ac4, 0x0, true, 0xcb89857ce7bc74e4)
#define _x49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDeferredRoutine$storport.sys", 0xe120, 0x0, true, 0x5f8824f90b6e0cb)
#define _x50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDeleteChildren$storport.sys", 0x29d90, 0x0, true, 0x8d2546540bcf72a2)
#define _x51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDeviceBusy$storport.sys", 0x29dc4, 0x0, true, 0x31e49777f8009040)
#define _x52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDeviceControlIrp$storport.sys", 0xc248, 0x0, true, 0x750e5f4822c8b39d)
#define _x53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDevicePowerDownSrbComplete$storport.sys", 0xf860, 0x0, true, 0x7c2e4670b7f309b6)
#define _x54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDevicePowerUpSrbComplete$storport.sys", 0xebb0, 0x0, true, 0x5497e1ab3a8bf0a3)
#define _x55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDevicePowerstopAdapter$storport.sys", 0xf8bc, 0x0, true, 0x4b1b36e7b7d1d73f)
#define _x56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDeviceReady$storport.sys", 0x29e98, 0x0, true, 0xbe57add2e4e78080)
#define _x57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDeviceUsageNotificationIrp$storport.sys", 0x11cec, 0x0, true, 0x4d9b8651ce20e223)
#define _x58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDisConnectMSIInterrupt$storport.sys", 0x75d5c, 0x0, true, 0x77208d01dfad6f9c)
#define _x59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDisConnectNonMSIInterrupt$storport.sys", 0x75da8, 0x0, true, 0xfbf26a723c1fb0)
#define _x60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDisableDeviceInterface$storport.sys", 0x2a118, 0x0, true, 0xef44fe0da4de135f)
#define _x61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct stor::port::raid_adapter_extension_t*)>*), "$RaidAdapterDisableQosWaitTimeoutCheck$storport.sys", 0x2a208, 0x0, true, 0xeee94eaa4d016ee7)
#define _x62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterDisableRpmbInterface$storport.sys", 0x2a284, 0x0, true, 0x232faab35e94e345)
#define _x63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterEffectiveMaxOperationalPower$storport.sys", 0x3c260, 0x0, true, 0x7ed72a4ae2cff0c5)
#define _x64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct stor::port::raid_adapter_extension_t*)>*), "$RaidAdapterEnableQosWaitTimeoutCheck$storport.sys", 0x2a2b4, 0x0, true, 0x6392f8a8073061ba)
#define _x65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterEnumerateBus$storport.sys", 0x14974, 0x0, true, 0x9fe8777f11396b49)
#define _x66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterExecuteXrb$storport.sys", 0x4e00, 0x0, true, 0xc405720bc70c9973)
#define _x67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterFilterResourceRequirementsIrp$storport.sys", 0x75df4, 0x0, true, 0x28afa20498e863e0)
#define _x68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterFindUnit$storport.sys", 0x6fb4, 0x0, true, 0x7f9498c261031957)
#define _x69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterFindUnitAtDirql$storport.sys", 0x6560, 0x0, true, 0xaceef629e5f699f0)
#define _x70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterFindUnitAtPassive$storport.sys", 0x7028, 0x0, true, 0x334927325b27d049)
#define _x71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterFindZombieUnit$storport.sys", 0x15f90, 0x0, true, 0x3232511d41f1fbd2)
#define _x72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterGetSystemPowerHint$storport.sys", 0x2a6c0, 0x0, true, 0xbfe6f959d1c0e69f)
#define _x73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterGetSystemPowerResumeLatency$storport.sys", 0x2a6e4, 0x0, true, 0xb9dd794929fb4ed1)
#define _x74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterHack$storport.sys", 0x2a70c, 0x0, true, 0xb14514ea2baa3b35)
#define _x75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterHwFirmwareActivateIoctl$storport.sys", 0x2a8a0, 0x0, true, 0xfb3d6676318d118b)
#define _x76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterHwFirmwareDownloadIoctl$storport.sys", 0x2a998, 0x0, true, 0x53b3880292943661)
#define _x77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterHwFirmwareGetInfoFromMiniport$storport.sys", 0x2aae4, 0x0, true, 0x75d4c1a41420e1b0)
#define _x78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterHwFirmwareGetInfoIoctl$storport.sys", 0x2ab50, 0x0, true, 0x19cab758703ea8a)
#define _x79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterInitializeWmi$storport.sys", 0x2ac64, 0x0, true, 0xe8139727f6afb6ba)
#define _x80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterInsertUnit$storport.sys", 0x15de0, 0x0, true, 0x9526163b4a29dd54)
#define _x81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterInsertZombieUnit$storport.sys", 0x16ff4, 0x0, true, 0xdbdf0910c9dceda)
#define _x82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterLogIoError$storport.sys", 0x2ad1c, 0x0, true, 0xa7d3862eaae44e8b)
#define _x83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterLogIoErrorDeferred$storport.sys", 0x2adc8, 0x0, true, 0x9ef92ffbed39f1ae)
#define _x84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterMarkChildrenMissing$storport.sys", 0x2ae5c, 0x0, true, 0x658ae3dfd4accaf3)
#define _x85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterMiniportProcessServiceRequest$storport.sys", 0x2ae90, 0x0, true, 0xe646b2357f0ab868)
#define _x86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPassThrough$storport.sys", 0x76794, 0x0, true, 0xcf3f84ce8a4ed9d8)
#define _x87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPassiveCoolingCallback$storport.sys", 0x3c290, 0x0, true, 0xb0560a020aecabee)
#define _x88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPerfStateCallback$storport.sys", 0x3c2c0, 0x0, true, 0x744ebc691e1e7803)
#define _x89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPnpIrp$storport.sys", 0x13a74, 0x0, true, 0x54bbebb694f9a383)
#define _x90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct stor::port::raid_adapter_extension_t*, uint32_t, uint32_t)>*), "$RaidAdapterPoFxActivateComponent$storport.sys", 0x2afa0, 0x0, true, 0xe557e2ebc38b18ea)
#define _x91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct stor::port::raid_adapter_extension_t*, uint32_t, uint32_t)>*), "$RaidAdapterPoFxIdleComponent$storport.sys", 0x2b004, 0x0, true, 0x382650eae4dddf05)
#define _x92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPostScatterGatherExecute$storport.sys", 0x5c20, 0x0, true, 0x689e13f2290a2a68)
#define _x93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPowerCapIoctl$storport.sys", 0x2b040, 0x0, true, 0x3e3aadcbcccc539a)
#define _x94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPowerDownDevice$storport.sys", 0x10408, 0x0, true, 0x195e1944a34a9e7f)
#define _x95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPowerDownDeviceCompletion$storport.sys", 0x122c0, 0x0, true, 0xea7da2be9b4402c)
#define _x96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPowerIrp$storport.sys", 0xee68, 0x0, true, 0xc09bb7911dd39929)
#define _x97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPowerUpDevice$storport.sys", 0x10354, 0x0, true, 0xffd461fa4b76aa5c)
#define _x98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPowerUpDeviceCompletion$storport.sys", 0x10bd0, 0x0, true, 0x46492898257bd092)
#define _x99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterPowerUpDeviceCompletionLastStep$storport.sys", 0xebdc, 0x0, true, 0xa6563d983408cc4c)
#define _y00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryCapabilitiesIrp$storport.sys", 0x714f4, 0x0, true, 0xb204e34c5e957be0)
#define _y01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryCapabilitiesIrpCompletion$storport.sys", 0x13150, 0x0, true, 0x9f2e8fc344fa6c41)
#define _y02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryCoolingInterface$storport.sys", 0x3c310, 0x0, true, 0x6b2ba4c1b97c7a54)
#define _y03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryDevicePowerCompletionRoutine$storport.sys", 0x12450, 0x0, true, 0xed45eb86982aeb66)
#define _y04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryDeviceRelationsIrp$storport.sys", 0x13c14, 0x0, true, 0xadcbf108ce5888e7)
#define _y05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryIdIrp$storport.sys", 0x2b45c, 0x0, true, 0x6288a7fe6f787da3)
#define _y06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryInterfaceIrp$storport.sys", 0x2b4f0, 0x0, true, 0x76e239366488abe2)
#define _y07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryPnpDeviceStateIrp$storport.sys", 0x7095c, 0x0, true, 0x7eb5627ec5ba6067)
#define _y08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryPowerIrp$storport.sys", 0xf604, 0x0, true, 0x1204b21154f86949)
#define _y09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryRemoveDeviceIrp$storport.sys", 0x7690c, 0x0, true, 0xaf6d6923aa07c2da)
#define _y10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQueryStopDeviceIrp$storport.sys", 0x769ac, 0x0, true, 0xd38ae548e1885842)
#define _y11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQuerySystemPowerCompletionRoutine$storport.sys", 0x120d0, 0x0, true, 0x479f1d3347eab0d8)
#define _y12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterQuerySystemPowerIrp$storport.sys", 0xf708, 0x0, true, 0x677f198c7516a945)
#define _y13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRaiseIrqlAndExecuteXrb$storport.sys", 0x4da4, 0x0, true, 0x45bad1fe1e2ba7)
#define _y14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterReInitialize$storport.sys", 0x2b65c, 0x0, true, 0x8f4922c0def3d372)
#define _y15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRegisterDeviceInterface$storport.sys", 0x2b708, 0x0, true, 0xa8a07360235f99cd)
#define _y16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct stor::port::raid_adapter_extension_t*, uint8_t)>*), "$RaidAdapterReleaseInterruptLock$storport.sys", 0x666c, 0x0, true, 0x259eedde8665f33e)
#define _y17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterReleaseResources$storport.sys", 0x76a4c, 0x0, true, 0x6642543e4075d745)
#define _y18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRemoveDeviceIrp$storport.sys", 0x76c38, 0x0, true, 0xc75791d6b7d5396c)
#define _y19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRemoveNormalChildren$storport.sys", 0x2b8b8, 0x0, true, 0xddeda5cf4df082f1)
#define _y20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRemoveUnit$storport.sys", 0x14d24, 0x0, true, 0x35e28135e2584907)
#define _y21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRemoveZombieChildren$storport.sys", 0x2b9d0, 0x0, true, 0x24662448cd869569)
#define _y22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRemoveZombieUnit$storport.sys", 0x19d6c, 0x0, true, 0x9127c0c2930cb3ee)
#define _y23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRequestAddtionalTimerDeferred$storport.sys", 0x2baa0, 0x0, true, 0x3eb42b0130ad3f84)
#define _y24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRequestComplete$storport.sys", 0xd440, 0x0, true, 0xbebf7867f365b67d)
#define _y25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRequestTimer$storport.sys", 0x2bbdc, 0x0, true, 0xb765fdc9001155ee)
#define _y26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRequestTimerDeferred$storport.sys", 0x2bc38, 0x0, true, 0x1108b238473cce0a)
#define _y27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRescanBus$storport.sys", 0x140cc, 0x0, true, 0x26b6aec3645d9acf)
#define _y28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterResetBus$storport.sys", 0x2bc98, 0x0, true, 0x31737965e564d42b)
#define _y29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRestartAdapter$storport.sys", 0x10028, 0x0, true, 0x6b0dda7202753208)
#define _y30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRestartDpcRoutine$storport.sys", 0x2c060, 0x0, true, 0xe75325afb1745888)
#define _y31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct stor::port::raid_adapter_extension_t*)>*), "$RaidAdapterRestartQueues$storport.sys", 0x10228, 0x0, true, 0x16d1830b96e2847)
#define _y32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterRpmbRequest$storport.sys", 0x2c07c, 0x0, true, 0x10d7ba73998ca202)
#define _y33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterScatterGatherExecute$storport.sys", 0x4c34, 0x0, true, 0x4b7ae3dd36f805aa)
#define _y34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterScatterGatherExecuteBidirectionalRequest$storport.sys", 0x2c250, 0x0, true, 0xe4fb428768802ee3)
#define _y35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterScsiGetCapabilitiesIoctl$storport.sys", 0x2c3bc, 0x0, true, 0xc799854177539f09)
#define _y36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterScsiGetInquiryDataIoctl$storport.sys", 0x2c438, 0x0, true, 0xaadf508c1f3af292)
#define _y37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterScsiIrp$storport.sys", 0x76d04, 0x0, true, 0x596eb5e773e55b8d)
#define _y38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterScsiMiniportIoctlWithAddress$storport.sys", 0x7128, 0x0, true, 0xc00eb14cd2d32b3)
#define _y39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSendPoFxIdleStateToMiniport$storport.sys", 0x3c428, 0x0, true, 0x4144ab7b15b20a0c)
#define _y40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSendPoFxPowerRequiredToMiniport$storport.sys", 0x3c4ac, 0x0, true, 0x5bfdcabf18fed42f)
#define _y41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSendPowerToMiniport$storport.sys", 0x3c52c, 0x0, true, 0xe30d2ebf8cc015e5)
#define _y42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSendRPMBCommandSynchronously$storport.sys", 0x2c7f4, 0x0, true, 0xd762c89e1708de47)
#define _y43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSendSrbIoControlSynchronously$storport.sys", 0xcd70, 0x0, true, 0x84eb2dde9e606c89)
#define _y44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSendSrbProtocolCommandSynchronously$storport.sys", 0x2ccb8, 0x0, true, 0x26e3425c7a890e2c)
#define _y45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSetDevicePowerCompletionRoutine$storport.sys", 0x123a0, 0x0, true, 0xd28f46021341f76e)
#define _y46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSetDevicePowerIrp$storport.sys", 0xf4fc, 0x0, true, 0x9b5fee4657940fb3)
#define _y47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSetMaxOperationalPower$storport.sys", 0x3c5b4, 0x0, true, 0x3339efb2e7ed4848)
#define _y48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSetPauseTimer$storport.sys", 0x2d348, 0x0, true, 0x62a648ddc40d0729)
#define _y49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSetPowerIrp$storport.sys", 0xf0d8, 0x0, true, 0x39ee5cb9e4a861fa)
#define _y50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSetSystemPowerCompletion$storport.sys", 0x11b00, 0x0, true, 0x844f693f2dd02423)
#define _y51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSetSystemPowerIrp$storport.sys", 0xf424, 0x0, true, 0x93bd17382dd90f7)
#define _y52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStartDeviceIrp$storport.sys", 0x2d944, 0x0, true, 0xd6ce90b46c1b475d)
#define _y53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStartMiniport$storport.sys", 0x2da8c, 0x0, true, 0x24770af61aa89fe2)
#define _y54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStop$storport.sys", 0xff50, 0x0, true, 0xa5793860fc3d9c50)
#define _y55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStopAdapter$storport.sys", 0xffa0, 0x0, true, 0xcec763c252925efb)
#define _y56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStopDeviceIrp$storport.sys", 0x76d68, 0x0, true, 0xba971fd11f41f5f7)
#define _y57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStopOnPowerdown$storport.sys", 0x10b60, 0x0, true, 0x6847e1eeb395a711)
#define _y58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStorageBreakReservationIoctl$storport.sys", 0x2dc88, 0x0, true, 0x651d07f2cf698edf)
#define _y59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterStorageQueryPropertyIoctl$storport.sys", 0x705a0, 0x0, true, 0x726d109d7d137ac1)
#define _y60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterSurpriseRemovalIrp$storport.sys", 0x76f30, 0x0, true, 0x1b683fb6dda706cd)
#define _y61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterTargetedRescan$storport.sys", 0x2de44, 0x0, true, 0x450614d1fe076433)
#define _y62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdapterWmiDeferredRoutine$storport.sys", 0x4b1e0, 0x0, true, 0xd033f34707519155)
#define _y63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAddPortDriver$storport.sys", 0x32eac, 0x0, true, 0xaf625bbd0ac816a)
#define _y64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAdjustDeferredQueueDepth$storport.sys", 0x31670, 0x0, true, 0x24dab2bf1a77ea5c)
#define _y65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAllocateAddressMapping$storport.sys", 0x423d8, 0x0, true, 0x534535c20a915f4)
#define _y66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAllocateDeviceProperty$storport.sys", 0x2e01c, 0x0, true, 0x5e254da6399925e1)
#define _y67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAllocatePool$storport.sys", 0x7c88, 0x0, true, 0x5552dfaf0af3486a)
#define _y68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAllocateSrb$storport.sys", 0x7594, 0x0, true, 0x4b8a0cc469dc22b9)
#define _y69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidAtaIdFormatString$storport.sys", 0x1063c, 0x0, true, 0xf51192e5c1f9d329)
#define _y70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBuildMdlForXrb$storport.sys", 0x6f54, 0x0, true, 0xa71496eb05b9c9f3)
#define _y71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBuildScsiIrp$storport.sys", 0x15664, 0x0, true, 0x9198224eb14682b3)
#define _y72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorAllocateReportLunsResources$storport.sys", 0x15c84, 0x0, true, 0xb422c420fa30f3a5)
#define _y73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorAllocateUnitResources$storport.sys", 0x1598c, 0x0, true, 0x3a6f2e9334f70d69)
#define _y74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorBuildReportLuns$storport.sys", 0x15b44, 0x0, true, 0x5d72ad55066263b9)
#define _y75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorBuildVitalProductInquiry$storport.sys", 0x15724, 0x0, true, 0x10a3cb325ae060b2)
#define _y76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorFreeUnitResources$storport.sys", 0x1428c, 0x0, true, 0x5da513ae93cd6a5f)
#define _y77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorGenericInquiry$storport.sys", 0x15134, 0x0, true, 0xe4e09f586e5fc13a)
#define _y78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorGetLunList$storport.sys", 0x14a90, 0x0, true, 0xdd1590fc9e43cadc)
#define _y79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorGetLunListFromTarget$storport.sys", 0x14e4c, 0x0, true, 0xdc434da17a1461c)
#define _y80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorGetUnit$storport.sys", 0x15884, 0x0, true, 0x9fc149c8bde99048)
#define _y81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorIssueReportLuns$storport.sys", 0x15038, 0x0, true, 0x77ecb9468054140f)
#define _y82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorIssueSynchronousRequest$storport.sys", 0x15240, 0x0, true, 0xbe8c16d2a4953771)
#define _y83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProbeLunZero$storport.sys", 0xeb1c, 0x0, true, 0x268f4f1bade4d1d1)
#define _y84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcess1667DeviceInquiry$storport.sys", 0x11c60, 0x0, true, 0xfa167e6eece36478)
#define _y85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessAtaInformation$storport.sys", 0x10590, 0x0, true, 0xacadf57fdc3751d3)
#define _y86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessBusUnit$storport.sys", 0x16074, 0x0, true, 0x5a209d07e0893dec)
#define _y87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessDeviceId$storport.sys", 0x106f0, 0x0, true, 0x9a1bdf41e1f46b6e)
#define _y88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessInquiry$storport.sys", 0x136c0, 0x0, true, 0x1ba6e99990dd2218)
#define _y89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessModifiedNodes$storport.sys", 0x144b4, 0x0, true, 0xf1cade8fa59443cf)
#define _y90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessNewUnit$storport.sys", 0x1711c, 0x0, true, 0xd80f409ee9650f19)
#define _y91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessProbeLunZero$storport.sys", 0x31250, 0x0, true, 0x77ca6be064e9c86b)
#define _y92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessSerialNumber$storport.sys", 0x11fe0, 0x0, true, 0xc34b1a53f03afab0)
#define _y93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorProcessSupportedPages$storport.sys", 0x11e00, 0x0, true, 0xf6e59b6b9503b608)
#define _y94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorReAllocateDataBufferResource$storport.sys", 0x31294, 0x0, true, 0xdb4f5f55f6ee8863)
#define _y95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorReleaseDataBufferResource$storport.sys", 0x3133c, 0x0, true, 0x86b2662fc1c62c03)
#define _y96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorReleaseUnit$storport.sys", 0x14cd0, 0x0, true, 0x9a1d4df95a26a271)
#define _y97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidBusEnumeratorVisitUnit$storport.sys", 0x145c0, 0x0, true, 0xf587ec7fc7f0a97f)
#define _y98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCancelIrp$storport.sys", 0x4246c, 0x0, true, 0x13700dea8963b9ad)
#define _y99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCoalescingCallback$storport.sys", 0x2e100, 0x0, true, 0xd680d15506a75aef)
#define _z00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCompleteMiniportRequestCallback$storport.sys", 0x42508, 0x0, true, 0x4dd42cbc5963b386)
#define _z01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::irp_t*, char, int32_t)>*), "$RaidCompleteRequestEx$storport.sys", 0x9950, 0x0, true, 0x3d6ccd2a5a45ba01)
#define _z02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCompleteWmiIrp$storport.sys", 0x19a7c, 0x0, true, 0x378c0a1ea37ee3b6)
#define _z03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCompletionDpcRoutine$storport.sys", 0x2e2c0, 0x0, true, 0xfc7707fe682ca26c)
#define _z04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCreateAdapter$storport.sys", 0x2e548, 0x0, true, 0x28b04f39fcda7c23)
#define _z05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCreateDeferredQueue$storport.sys", 0x316fc, 0x0, true, 0x9451360da82c3560)
#define _z06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCreateDeviceName$storport.sys", 0x425ec, 0x0, true, 0xc4e9300df3f8a058)
#define _z07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCreateDma$storport.sys", 0x77b2c, 0x0, true, 0x734139fe4a8d41bd)
#define _z08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCreateResourceList$storport.sys", 0x78bf0, 0x0, true, 0xbdde987df5665bdd)
#define _z09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidCreateUnit$storport.sys", 0x166d8, 0x0, true, 0x1ed80d9b07d6f089)
#define _z10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDecodeSmRegistryBlob$storport.sys", 0x567e0, 0x0, true, 0xcf9f8cb247089126)
#define _z11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDeferredQueueDpcRoutine$storport.sys", 0xea20, 0x0, true, 0x13d564fa17d698f5)
#define _z12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDeleteAdapter$storport.sys", 0x2e724, 0x0, true, 0x4a232be28235a499)
#define _z13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDeleteBusEnumerator$storport.sys", 0x141fc, 0x0, true, 0x5eb04f1d30b0027a)
#define _z14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDeleteDeferredQueue$storport.sys", 0x31740, 0x0, true, 0x2e7db31827caa24e)
#define _z15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDeleteDeviceQueueEntry$storport.sys", 0x11a48, 0x0, true, 0x331353175aab3b64)
#define _z16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDeleteDma$storport.sys", 0x77b44, 0x0, true, 0x3c54df3cce53cde5)
#define _z17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDeleteResourceList$storport.sys", 0x78c04, 0x0, true, 0x54d71ba4bb8e7b46)
#define _z18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDeleteUnit$storport.sys", 0x137cc, 0x0, true, 0x732d76d43122b010)
#define _z19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDmaBuildScatterGatherList$storport.sys", 0x4d1c, 0x0, true, 0x14500403bd0180c7)
#define _z20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDmaGetScatterGatherList$storport.sys", 0x318c4, 0x0, true, 0x267e729013edfba9)
#define _z21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidDmaPutScatterGatherList$storport.sys", 0x7cec, 0x0, true, 0xba901a5f4f38da32)
#define _z22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct stor::port::raid_driver_extension_t*, nt::unicode_view*)>*), "$RaidDriverGetName$storport.sys", 0x12ee4, 0x0, true, 0xd177fd88f1fc1b0b)
#define _z23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidEnumAtaInformation$storport.sys", 0x59310, 0x0, true, 0x8a19617fb5811574)
#define _z24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidEnumDeviceIdCallback$storport.sys", 0x59340, 0x0, true, 0xf20e08255ea2c035)
#define _z25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidEnumInquiry1667Callback$storport.sys", 0x59320, 0x0, true, 0x2d5342926736a8ab)
#define _z26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidEnumInquiryCallback$storport.sys", 0x592f0, 0x0, true, 0x82e7ca4be8068a2)
#define _z27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidEnumProbeLunZeroCallback$storport.sys", 0x59020, 0x0, true, 0xc3a5497010018ce9)
#define _z28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidEnumSerialNumber$storport.sys", 0x59330, 0x0, true, 0x33ebb369e256c8a6)
#define _z29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidEnumSupportedPagesCallback$storport.sys", 0x59300, 0x0, true, 0xf4b248ad7489b52f)
#define _z30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidFreeDeferredItem$storport.sys", 0xe1f0, 0x0, true, 0x6380a33eb9ddff05)
#define _z31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidFreeMappingList$storport.sys", 0x42a14, 0x0, true, 0x7a9db72d605bfbea)
#define _z32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidFreeSrb$storport.sys", 0x1369c, 0x0, true, 0x687708b5f61e7426)
#define _z33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetD3ColdCapability$storport.sys", 0x3c8b8, 0x0, true, 0x85d6f9fb5c44114a)
#define _z34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetD3ColdInterface$storport.sys", 0x17854, 0x0, true, 0x2fa898198f342122)
#define _z35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetKeyFromUnit$storport.sys", 0xeac0, 0x0, true, 0x4a4b6ad9bb08cd37)
#define _z36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetPortData$storport.sys", 0xc8c4, 0x0, true, 0xfc3fa69cdc386eac)
#define _z37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetQosEntryForDeviceEntry$storport.sys", 0x3249c, 0x0, true, 0x9aafff08b1a742dd)
#define _z38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetResourceListElement$storport.sys", 0x40158, 0x0, true, 0x41b3fdc2df25d0aa)
#define _z39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetResourceListInterrupt$storport.sys", 0x401c8, 0x0, true, 0xe274ad263be23d7b)
#define _z40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetSrbIoctlFromIrp$storport.sys", 0x6de8, 0x0, true, 0x44ff45c9d0bcae94)
#define _z41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetStartIoPerfParams$storport.sys", 0x18f80, 0x0, true, 0x483241c13699b15c)
#define _z42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct stor::port::stor_pofx_component_t*(struct stor::port::stor_pofx_device_t*, uint32_t)>*), "$RaidGetStorPoFxComponent$storport.sys", 0xfe98, 0x0, true, 0xea10acf12aad8361)
#define _z43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct stor::port::stor_pofx_component_idle_state_t*(struct stor::port::stor_pofx_component_t*, uint32_t)>*), "$RaidGetStorPoFxFState$storport.sys", 0x35730, 0x0, true, 0xd286186d76ec5633)
#define _z44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct stor::port::stor_pofx_perf_state_t*(struct stor::port::stor_pofx_component_perf_set_t*, uint32_t)>*), "$RaidGetStorPoFxPerfState$storport.sys", 0x3576c, 0x0, true, 0x657d3526771ed564)
#define _z45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetStorageAdapterPhysicalTopologyProperty$storport.sys", 0xd020, 0x0, true, 0x4544ef3ae0de0d5d)
#define _z46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetStorageAdapterProperty$storport.sys", 0x706ac, 0x0, true, 0x1916c67adb1795ba)
#define _z47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetStorageAdapterProtocolSpecificProperty$storport.sys", 0x2ec28, 0x0, true, 0x51b8cf670ace65dc)
#define _z48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetStorageAdapterRpmbProperty$storport.sys", 0x2edd0, 0x0, true, 0x5e1c82731393a924)
#define _z49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetStorageAdapterSerialNumberProperty$storport.sys", 0x735f4, 0x0, true, 0xcb88b2d9e5378cfe)
#define _z50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetStorageAdapterTemperatureProperty$storport.sys", 0x2ee2c, 0x0, true, 0x4ff62d83cad53748)
#define _z51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetSystemAddressForMdl$storport.sys", 0x42c4c, 0x0, true, 0x4730b3df8ac37011)
#define _z52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetTelemetryLogPageIds$storport.sys", 0x13048, 0x0, true, 0xf1b0abd2c4e8b54e)
#define _z53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidGetTotalStorPoFxDeviceSize$storport.sys", 0x357a8, 0x0, true, 0x7b3219740dfe007e)
#define _z54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidHandleCreateCloseIrp$storport.sys", 0xdff4, 0x0, true, 0x15a7b019384858f4)
#define _z55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidHandleTraceNotifyType$storport.sys", 0x4104c, 0x0, true, 0xb9debdd6aa2223e8)
#define _z56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidHierarchicalResetWorkRoutine$storport.sys", 0x47580, 0x0, true, 0x6d53f5ab1d6428ea)
#define _z57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializeAdapter$storport.sys", 0x77154, 0x0, true, 0x432f8d2774aebd55)
#define _z58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializeDeferredQueue$storport.sys", 0x31784, 0x0, true, 0x1ce5d0b6d101c31f)
#define _z59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializeDma$storport.sys", 0x77b88, 0x0, true, 0xc17d9cdf0c0331d4)
#define _z60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializeInquirySrb$storport.sys", 0x71584, 0x0, true, 0xe31d30e880f7e846)
#define _z61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializePerfOpts$storport.sys", 0x2f0b0, 0x0, true, 0xdc5bcf863f71f373)
#define _z62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializePerfOptsPassive$storport.sys", 0x2f720, 0x0, true, 0xc13045423d2e6263)
#define _z63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializeReportLunsSrb$storport.sys", 0x717d4, 0x0, true, 0x416043a869b7028)
#define _z64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializeResourceList$storport.sys", 0x78c58, 0x0, true, 0xaf1c00059264d4f0)
#define _z65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInitializeRpmb$storport.sys", 0x30148, 0x0, true, 0xf5fab1ec67e87afd)
#define _z66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidInsertDeviceQueue$storport.sys", 0xb000, 0x0, true, 0xc5696ca8b53a6261)
#define _z67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct stor::port::raid_adapter_extension_t*, enum stor::port::scsi_adapter_control_type_t)>*), "$RaidIsAdapterControlSupported$storport.sys", 0x16698, 0x0, true, 0xca365e836a79cb21)
#define _z68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidIsDmaInitialized$storport.sys", 0x77d10, 0x0, true, 0x6335feaadc1c2f72)
#define _z69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidIsUnitControlSupported$storport.sys", 0x6d50, 0x0, true, 0x590ba1f760f10a1b)
#define _z70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidIsUnitQueueLocked$storport.sys", 0xea38, 0x0, true, 0x4d2d3af66c9f1fc8)
#define _z71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidIsUnresponsiveBlockedCmd$storport.sys", 0x33fa4, 0x0, true, 0xbe35ebaf4c45b668)
#define _z72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLogAllocationFailure$storport.sys", 0x42cd8, 0x0, true, 0xd72803fe2c5d8f55)
#define _z73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLogGetParm4$storport.sys", 0x61b0, 0x0, true, 0x41ab1bbc7a0b3f6d)
#define _z74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLogListSize$storport.sys", 0x67360, 0x0, true, 0x709591990b863971)
#define _z75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLogMiniportCompletion$storport.sys", 0xd600, 0x0, true, 0xf791b36ece78ef33)
#define _z76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLogRequestComplete$storport.sys", 0x4767c, 0x0, true, 0x47e673a6bea528ee)
#define _z77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLunQueueCheckWaitTimeout$storport.sys", 0x324c0, 0x0, true, 0x103fafa2ece26ffe)
#define _z78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidLunQueueWaitForQuiescence$storport.sys", 0x11f08, 0x0, true, 0xa47e9797898ad171)
#define _z79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidMachineRequireIoPortResource$storport.sys", 0x56884, 0x0, true, 0xf97c4009ed786f07)
#define _z80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidNormalizeDeviceQueue$storport.sys", 0x8388, 0x0, true, 0xb238cf21e3c65e84)
#define _z81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidNtStatusToSrbStatus$storport.sys", 0x42d74, 0x0, true, 0xc814501325090ae6)
#define _z82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidNtStatusToStorStatus$storport.sys", 0x191bc, 0x0, true, 0xab95d3177feb483c)
#define _z83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidNullAddress$storport.sys", 0x5a680, 0x0, true, 0xde3f48af7d494b54)
#define _z84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidNullReference$storport.sys", 0xea70, 0x0, true, 0x7db9bc3caa7024f2)
#define _z85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPauseAdapterQueue$storport.sys", 0x10534, 0x0, true, 0x559bf43e842b5ea5)
#define _z86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPauseTimerDpcRoutine$storport.sys", 0x301c0, 0x0, true, 0xea23c5f784bee3e6)
#define _z87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPauseUnitQueue$storport.sys", 0xe5ac, 0x0, true, 0xbcaa3b7c764efee0)
#define _z88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPnPPassToMiniPort$storport.sys", 0x1325c, 0x0, true, 0x69c7c00a7bbd53f8)
#define _z89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPortNumber$storport.sys", 0x67380, 0x0, true, 0x540d0e4e0cde852a)
#define _z90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPowerSettingCallback$storport.sys", 0x302d0, 0x0, true, 0x57bb8f60cd5b64e8)
#define _z91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPreInitializePerfOpts$storport.sys", 0x304f8, 0x0, true, 0xab8faaf20a4e52ec)
#define _z92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidPrepareSrbForReuse$storport.sys", 0x71690, 0x0, true, 0x42b16f640dbf18)
#define _z93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct stor::port::raid_deferred_queue_t*, struct nt::device_object_t*)>*), "$RaidProcessDeferredItemsWorker$storport.sys", 0xe99c, 0x0, true, 0xa09b7b856cbbaf5a)
#define _z94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryCrashdumpFunctions$storport.sys", 0x12f5c, 0x0, true, 0xf316d033791fcad5)
#define _z95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueryD3ColdInterface$storport.sys", 0x1792c, 0x0, true, 0xb2f3c825b26e3819)
#define _z96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueueDeferredItem$storport.sys", 0xe570, 0x0, true, 0x5ec70a8afa708596)
#define _z97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidQueueWaitCheckDpcRoutine$storport.sys", 0x30630, 0x0, true, 0x1d99d1e978ff4e24)
#define _z98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRegGetDeviceDumpCustomGPLogPage$storport.sys", 0x16494, 0x0, true, 0x1b154e695342a681)
#define _z99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RaidRegGetDeviceDumpMaxSize$storport.sys", 0x1658c, 0x0, true, 0xa7099548714d5f05)
#else
#define _a00(...) __VA_ARGS__
#define _a01(...) __VA_ARGS__
#define _a02(...) __VA_ARGS__
#define _a03(...) __VA_ARGS__
#define _a04(...) __VA_ARGS__
#define _a05(...) __VA_ARGS__
#define _a06(...) __VA_ARGS__
#define _a07(...) __VA_ARGS__
#define _a08(...) __VA_ARGS__
#define _a09(...) __VA_ARGS__
#define _a10(...) __VA_ARGS__
#define _a11(...) __VA_ARGS__
#define _a12(...) __VA_ARGS__
#define _a13(...) __VA_ARGS__
#define _a14(...) __VA_ARGS__
#define _a15(...) __VA_ARGS__
#define _a16(...) __VA_ARGS__
#define _a17(...) __VA_ARGS__
#define _a18(...) __VA_ARGS__
#define _a19(...) __VA_ARGS__
#define _a20(...) __VA_ARGS__
#define _a21(...) __VA_ARGS__
#define _a22(...) __VA_ARGS__
#define _a23(...) __VA_ARGS__
#define _a24(...) __VA_ARGS__
#define _a25(...) __VA_ARGS__
#define _a26(...) __VA_ARGS__
#define _a27(...) __VA_ARGS__
#define _a28(...) __VA_ARGS__
#define _a29(...) __VA_ARGS__
#define _a30(...) __VA_ARGS__
#define _a31(...) __VA_ARGS__
#define _a32(...) __VA_ARGS__
#define _a33(...) __VA_ARGS__
#define _a34(...) __VA_ARGS__
#define _a35(...) __VA_ARGS__
#define _a36(...) __VA_ARGS__
#define _a37(...) __VA_ARGS__
#define _a38(...) __VA_ARGS__
#define _a39(...) __VA_ARGS__
#define _a40(...) __VA_ARGS__
#define _a41(...) __VA_ARGS__
#define _a42(...) __VA_ARGS__
#define _a43(...) __VA_ARGS__
#define _a44(...) __VA_ARGS__
#define _a45(...) __VA_ARGS__
#define _a46(...) __VA_ARGS__
#define _a47(...) __VA_ARGS__
#define _a48(...) __VA_ARGS__
#define _a49(...) __VA_ARGS__
#define _a50(...) __VA_ARGS__
#define _a51(...) __VA_ARGS__
#define _a52(...) __VA_ARGS__
#define _a53(...) __VA_ARGS__
#define _a54(...) __VA_ARGS__
#define _a55(...) __VA_ARGS__
#define _a56(...) __VA_ARGS__
#define _a57(...) __VA_ARGS__
#define _a58(...) __VA_ARGS__
#define _a59(...) __VA_ARGS__
#define _a60(...) __VA_ARGS__
#define _a61(...) __VA_ARGS__
#define _a62(...) __VA_ARGS__
#define _a63(...) __VA_ARGS__
#define _a64(...) __VA_ARGS__
#define _a65(...) __VA_ARGS__
#define _a66(...) __VA_ARGS__
#define _a67(...) __VA_ARGS__
#define _a68(...) __VA_ARGS__
#define _a69(...) __VA_ARGS__
#define _a70(...) __VA_ARGS__
#define _a71(...) __VA_ARGS__
#define _a72(...) __VA_ARGS__
#define _a73(...) __VA_ARGS__
#define _a74(...) __VA_ARGS__
#define _a75(...) __VA_ARGS__
#define _a76(...) __VA_ARGS__
#define _a77(...) __VA_ARGS__
#define _a78(...) __VA_ARGS__
#define _a79(...) __VA_ARGS__
#define _a80(...) __VA_ARGS__
#define _a81(...) __VA_ARGS__
#define _a82(...) __VA_ARGS__
#define _a83(...) __VA_ARGS__
#define _a84(...) __VA_ARGS__
#define _a85(...) __VA_ARGS__
#define _a86(...) __VA_ARGS__
#define _a87(...) __VA_ARGS__
#define _a88(...) __VA_ARGS__
#define _a89(...) __VA_ARGS__
#define _a90(...) __VA_ARGS__
#define _a91(...) __VA_ARGS__
#define _a92(...) __VA_ARGS__
#define _a93(...) __VA_ARGS__
#define _a94(...) __VA_ARGS__
#define _a95(...) __VA_ARGS__
#define _a96(...) __VA_ARGS__
#define _a97(...) __VA_ARGS__
#define _a98(...) __VA_ARGS__
#define _a99(...) __VA_ARGS__
#define _b00(...) __VA_ARGS__
#define _b01(...) __VA_ARGS__
#define _b02(...) __VA_ARGS__
#define _b03(...) __VA_ARGS__
#define _b04(...) __VA_ARGS__
#define _b05(...) __VA_ARGS__
#define _b06(...) __VA_ARGS__
#define _b07(...) __VA_ARGS__
#define _b08(...) __VA_ARGS__
#define _b09(...) __VA_ARGS__
#define _b10(...) __VA_ARGS__
#define _b11(...) __VA_ARGS__
#define _b12(...) __VA_ARGS__
#define _b13(...) __VA_ARGS__
#define _b14(...) __VA_ARGS__
#define _b15(...) __VA_ARGS__
#define _b16(...) __VA_ARGS__
#define _b17(...) __VA_ARGS__
#define _b18(...) __VA_ARGS__
#define _b19(...) __VA_ARGS__
#define _b20(...) __VA_ARGS__
#define _b21(...) __VA_ARGS__
#define _b22(...) __VA_ARGS__
#define _b23(...) __VA_ARGS__
#define _b24(...) __VA_ARGS__
#define _b25(...) __VA_ARGS__
#define _b26(...) __VA_ARGS__
#define _b27(...) __VA_ARGS__
#define _b28(...) __VA_ARGS__
#define _b29(...) __VA_ARGS__
#define _b30(...) __VA_ARGS__
#define _b31(...) __VA_ARGS__
#define _b32(...) __VA_ARGS__
#define _b33(...) __VA_ARGS__
#define _b34(...) __VA_ARGS__
#define _b35(...) __VA_ARGS__
#define _b36(...) __VA_ARGS__
#define _b37(...) __VA_ARGS__
#define _b38(...) __VA_ARGS__
#define _b39(...) __VA_ARGS__
#define _b40(...) __VA_ARGS__
#define _b41(...) __VA_ARGS__
#define _b42(...) __VA_ARGS__
#define _b43(...) __VA_ARGS__
#define _b44(...) __VA_ARGS__
#define _b45(...) __VA_ARGS__
#define _b46(...) __VA_ARGS__
#define _b47(...) __VA_ARGS__
#define _b48(...) __VA_ARGS__
#define _b49(...) __VA_ARGS__
#define _b50(...) __VA_ARGS__
#define _b51(...) __VA_ARGS__
#define _b52(...) __VA_ARGS__
#define _b53(...) __VA_ARGS__
#define _b54(...) __VA_ARGS__
#define _b55(...) __VA_ARGS__
#define _b56(...) __VA_ARGS__
#define _b57(...) __VA_ARGS__
#define _b58(...) __VA_ARGS__
#define _b59(...) __VA_ARGS__
#define _b60(...) __VA_ARGS__
#define _b61(...) __VA_ARGS__
#define _b62(...) __VA_ARGS__
#define _b63(...) __VA_ARGS__
#define _b64(...) __VA_ARGS__
#define _b65(...) __VA_ARGS__
#define _b66(...) __VA_ARGS__
#define _b67(...) __VA_ARGS__
#define _b68(...) __VA_ARGS__
#define _b69(...) __VA_ARGS__
#define _b70(...) __VA_ARGS__
#define _b71(...) __VA_ARGS__
#define _b72(...) __VA_ARGS__
#define _b73(...) __VA_ARGS__
#define _b74(...) __VA_ARGS__
#define _b75(...) __VA_ARGS__
#define _b76(...) __VA_ARGS__
#define _b77(...) __VA_ARGS__
#define _b78(...) __VA_ARGS__
#define _b79(...) __VA_ARGS__
#define _b80(...) __VA_ARGS__
#define _b81(...) __VA_ARGS__
#define _b82(...) __VA_ARGS__
#define _b83(...) __VA_ARGS__
#define _b84(...) __VA_ARGS__
#define _b85(...) __VA_ARGS__
#define _b86(...) __VA_ARGS__
#define _b87(...) __VA_ARGS__
#define _b88(...) __VA_ARGS__
#define _b89(...) __VA_ARGS__
#define _b90(...) __VA_ARGS__
#define _b91(...) __VA_ARGS__
#define _b92(...) __VA_ARGS__
#define _b93(...) __VA_ARGS__
#define _b94(...) __VA_ARGS__
#define _b95(...) __VA_ARGS__
#define _b96(...) __VA_ARGS__
#define _b97(...) __VA_ARGS__
#define _b98(...) __VA_ARGS__
#define _b99(...) __VA_ARGS__
#define _c00(...) __VA_ARGS__
#define _c01(...) __VA_ARGS__
#define _c02(...) __VA_ARGS__
#define _c03(...) __VA_ARGS__
#define _c04(...) __VA_ARGS__
#define _c05(...) __VA_ARGS__
#define _c06(...) __VA_ARGS__
#define _c07(...) __VA_ARGS__
#define _c08(...) __VA_ARGS__
#define _c09(...) __VA_ARGS__
#define _c10(...) __VA_ARGS__
#define _c11(...) __VA_ARGS__
#define _c12(...) __VA_ARGS__
#define _c13(...) __VA_ARGS__
#define _c14(...) __VA_ARGS__
#define _c15(...) __VA_ARGS__
#define _c16(...) __VA_ARGS__
#define _c17(...) __VA_ARGS__
#define _c18(...) __VA_ARGS__
#define _c19(...) __VA_ARGS__
#define _c20(...) __VA_ARGS__
#define _c21(...) __VA_ARGS__
#define _c22(...) __VA_ARGS__
#define _c23(...) __VA_ARGS__
#define _c24(...) __VA_ARGS__
#define _c25(...) __VA_ARGS__
#define _c26(...) __VA_ARGS__
#define _c27(...) __VA_ARGS__
#define _c28(...) __VA_ARGS__
#define _c29(...) __VA_ARGS__
#define _c30(...) __VA_ARGS__
#define _c31(...) __VA_ARGS__
#define _c32(...) __VA_ARGS__
#define _c33(...) __VA_ARGS__
#define _c34(...) __VA_ARGS__
#define _c35(...) __VA_ARGS__
#define _c36(...) __VA_ARGS__
#define _c37(...) __VA_ARGS__
#define _c38(...) __VA_ARGS__
#define _c39(...) __VA_ARGS__
#define _c40(...) __VA_ARGS__
#define _c41(...) __VA_ARGS__
#define _c42(...) __VA_ARGS__
#define _c43(...) __VA_ARGS__
#define _c44(...) __VA_ARGS__
#define _c45(...) __VA_ARGS__
#define _c46(...) __VA_ARGS__
#define _c47(...) __VA_ARGS__
#define _c48(...) __VA_ARGS__
#define _c49(...) __VA_ARGS__
#define _c50(...) __VA_ARGS__
#define _c51(...) __VA_ARGS__
#define _c52(...) __VA_ARGS__
#define _c53(...) __VA_ARGS__
#define _c54(...) __VA_ARGS__
#define _c55(...) __VA_ARGS__
#define _c56(...) __VA_ARGS__
#define _c57(...) __VA_ARGS__
#define _c58(...) __VA_ARGS__
#define _c59(...) __VA_ARGS__
#define _c60(...) __VA_ARGS__
#define _c61(...) __VA_ARGS__
#define _c62(...) __VA_ARGS__
#define _c63(...) __VA_ARGS__
#define _c64(...) __VA_ARGS__
#define _c65(...) __VA_ARGS__
#define _c66(...) __VA_ARGS__
#define _c67(...) __VA_ARGS__
#define _c68(...) __VA_ARGS__
#define _c69(...) __VA_ARGS__
#define _c70(...) __VA_ARGS__
#define _c71(...) __VA_ARGS__
#define _c72(...) __VA_ARGS__
#define _c73(...) __VA_ARGS__
#define _c74(...) __VA_ARGS__
#define _c75(...) __VA_ARGS__
#define _c76(...) __VA_ARGS__
#define _c77(...) __VA_ARGS__
#define _c78(...) __VA_ARGS__
#define _c79(...) __VA_ARGS__
#define _c80(...) __VA_ARGS__
#define _c81(...) __VA_ARGS__
#define _c82(...) __VA_ARGS__
#define _c83(...) __VA_ARGS__
#define _c84(...) __VA_ARGS__
#define _c85(...) __VA_ARGS__
#define _c86(...) __VA_ARGS__
#define _c87(...) __VA_ARGS__
#define _c88(...) __VA_ARGS__
#define _c89(...) __VA_ARGS__
#define _c90(...) __VA_ARGS__
#define _c91(...) __VA_ARGS__
#define _c92(...) __VA_ARGS__
#define _c93(...) __VA_ARGS__
#define _c94(...) __VA_ARGS__
#define _c95(...) __VA_ARGS__
#define _c96(...) __VA_ARGS__
#define _c97(...) __VA_ARGS__
#define _c98(...) __VA_ARGS__
#define _c99(...) __VA_ARGS__
#define _d00(...) __VA_ARGS__
#define _d01(...) __VA_ARGS__
#define _d02(...) __VA_ARGS__
#define _d03(...) __VA_ARGS__
#define _d04(...) __VA_ARGS__
#define _d05(...) __VA_ARGS__
#define _d06(...) __VA_ARGS__
#define _d07(...) __VA_ARGS__
#define _d08(...) __VA_ARGS__
#define _d09(...) __VA_ARGS__
#define _d10(...) __VA_ARGS__
#define _d11(...) __VA_ARGS__
#define _d12(...) __VA_ARGS__
#define _d13(...) __VA_ARGS__
#define _d14(...) __VA_ARGS__
#define _d15(...) __VA_ARGS__
#define _d16(...) __VA_ARGS__
#define _d17(...) __VA_ARGS__
#define _d18(...) __VA_ARGS__
#define _d19(...) __VA_ARGS__
#define _d20(...) __VA_ARGS__
#define _d21(...) __VA_ARGS__
#define _d22(...) __VA_ARGS__
#define _d23(...) __VA_ARGS__
#define _d24(...) __VA_ARGS__
#define _d25(...) __VA_ARGS__
#define _d26(...) __VA_ARGS__
#define _d27(...) __VA_ARGS__
#define _d28(...) __VA_ARGS__
#define _d29(...) __VA_ARGS__
#define _d30(...) __VA_ARGS__
#define _d31(...) __VA_ARGS__
#define _d32(...) __VA_ARGS__
#define _d33(...) __VA_ARGS__
#define _d34(...) __VA_ARGS__
#define _d35(...) __VA_ARGS__
#define _d36(...) __VA_ARGS__
#define _d37(...) __VA_ARGS__
#define _d38(...) __VA_ARGS__
#define _d39(...) __VA_ARGS__
#define _d40(...) __VA_ARGS__
#define _d41(...) __VA_ARGS__
#define _d42(...) __VA_ARGS__
#define _d43(...) __VA_ARGS__
#define _d44(...) __VA_ARGS__
#define _d45(...) __VA_ARGS__
#define _d46(...) __VA_ARGS__
#define _d47(...) __VA_ARGS__
#define _d48(...) __VA_ARGS__
#define _d49(...) __VA_ARGS__
#define _d50(...) __VA_ARGS__
#define _d51(...) __VA_ARGS__
#define _d52(...) __VA_ARGS__
#define _d53(...) __VA_ARGS__
#define _d54(...) __VA_ARGS__
#define _d55(...) __VA_ARGS__
#define _d56(...) __VA_ARGS__
#define _d57(...) __VA_ARGS__
#define _d58(...) __VA_ARGS__
#define _d59(...) __VA_ARGS__
#define _d60(...) __VA_ARGS__
#define _d61(...) __VA_ARGS__
#define _d62(...) __VA_ARGS__
#define _d63(...) __VA_ARGS__
#define _d64(...) __VA_ARGS__
#define _d65(...) __VA_ARGS__
#define _d66(...) __VA_ARGS__
#define _d67(...) __VA_ARGS__
#define _d68(...) __VA_ARGS__
#define _d69(...) __VA_ARGS__
#define _d70(...) __VA_ARGS__
#define _d71(...) __VA_ARGS__
#define _d72(...) __VA_ARGS__
#define _d73(...) __VA_ARGS__
#define _d74(...) __VA_ARGS__
#define _d75(...) __VA_ARGS__
#define _d76(...) __VA_ARGS__
#define _d77(...) __VA_ARGS__
#define _d78(...) __VA_ARGS__
#define _d79(...) __VA_ARGS__
#define _d80(...) __VA_ARGS__
#define _d81(...) __VA_ARGS__
#define _d82(...) __VA_ARGS__
#define _d83(...) __VA_ARGS__
#define _d84(...) __VA_ARGS__
#define _d85(...) __VA_ARGS__
#define _d86(...) __VA_ARGS__
#define _d87(...) __VA_ARGS__
#define _d88(...) __VA_ARGS__
#define _d89(...) __VA_ARGS__
#define _d90(...) __VA_ARGS__
#define _d91(...) __VA_ARGS__
#define _d92(...) __VA_ARGS__
#define _d93(...) __VA_ARGS__
#define _d94(...) __VA_ARGS__
#define _d95(...) __VA_ARGS__
#define _d96(...) __VA_ARGS__
#define _d97(...) __VA_ARGS__
#define _d98(...) __VA_ARGS__
#define _d99(...) __VA_ARGS__
#define _e00(...) __VA_ARGS__
#define _e01(...) __VA_ARGS__
#define _e02(...) __VA_ARGS__
#define _e03(...) __VA_ARGS__
#define _e04(...) __VA_ARGS__
#define _e05(...) __VA_ARGS__
#define _e06(...) __VA_ARGS__
#define _e07(...) __VA_ARGS__
#define _e08(...) __VA_ARGS__
#define _e09(...) __VA_ARGS__
#define _e10(...) __VA_ARGS__
#define _e11(...) __VA_ARGS__
#define _e12(...) __VA_ARGS__
#define _e13(...) __VA_ARGS__
#define _e14(...) __VA_ARGS__
#define _e15(...) __VA_ARGS__
#define _e16(...) __VA_ARGS__
#define _e17(...) __VA_ARGS__
#define _e18(...) __VA_ARGS__
#define _e19(...) __VA_ARGS__
#define _e20(...) __VA_ARGS__
#define _e21(...) __VA_ARGS__
#define _e22(...) __VA_ARGS__
#define _e23(...) __VA_ARGS__
#define _e24(...) __VA_ARGS__
#define _e25(...) __VA_ARGS__
#define _e26(...) __VA_ARGS__
#define _e27(...) __VA_ARGS__
#define _m00(...) __VA_ARGS__
#define _m01(...) __VA_ARGS__
#define _m02(...) __VA_ARGS__
#define _m03(...) __VA_ARGS__
#define _m04(...) __VA_ARGS__
#define _m05(...) __VA_ARGS__
#define _m06(...) __VA_ARGS__
#define _m07(...) __VA_ARGS__
#define _m08(...) __VA_ARGS__
#define _m09(...) __VA_ARGS__
#define _m10(...) __VA_ARGS__
#define _m11(...) __VA_ARGS__
#define _m12(...) __VA_ARGS__
#define _m13(...) __VA_ARGS__
#define _m14(...) __VA_ARGS__
#define _m15(...) __VA_ARGS__
#define _m16(...) __VA_ARGS__
#define _m17(...) __VA_ARGS__
#define _m18(...) __VA_ARGS__
#define _m19(...) __VA_ARGS__
#define _m20(...) __VA_ARGS__
#define _m21(...) __VA_ARGS__
#define _m22(...) __VA_ARGS__
#define _m23(...) __VA_ARGS__
#define _m24(...) __VA_ARGS__
#define _m25(...) __VA_ARGS__
#define _m26(...) __VA_ARGS__
#define _m27(...) __VA_ARGS__
#define _m28(...) __VA_ARGS__
#define _m29(...) __VA_ARGS__
#define _m30(...) __VA_ARGS__
#define _m31(...) __VA_ARGS__
#define _m32(...) __VA_ARGS__
#define _m33(...) __VA_ARGS__
#define _m34(...) __VA_ARGS__
#define _m35(...) __VA_ARGS__
#define _m36(...) __VA_ARGS__
#define _m37(...) __VA_ARGS__
#define _m38(...) __VA_ARGS__
#define _m39(...) __VA_ARGS__
#define _m40(...) __VA_ARGS__
#define _m41(...) __VA_ARGS__
#define _m42(...) __VA_ARGS__
#define _m43(...) __VA_ARGS__
#define _m44(...) __VA_ARGS__
#define _m45(...) __VA_ARGS__
#define _m46(...) __VA_ARGS__
#define _m47(...) __VA_ARGS__
#define _m48(...) __VA_ARGS__
#define _m49(...) __VA_ARGS__
#define _m50(...) __VA_ARGS__
#define _m51(...) __VA_ARGS__
#define _m52(...) __VA_ARGS__
#define _m53(...) __VA_ARGS__
#define _m54(...) __VA_ARGS__
#define _m55(...) __VA_ARGS__
#define _m56(...) __VA_ARGS__
#define _m57(...) __VA_ARGS__
#define _m58(...) __VA_ARGS__
#define _m59(...) __VA_ARGS__
#define _m60(...) __VA_ARGS__
#define _m61(...) __VA_ARGS__
#define _m62(...) __VA_ARGS__
#define _m63(...) __VA_ARGS__
#define _m64(...) __VA_ARGS__
#define _m65(...) __VA_ARGS__
#define _m66(...) __VA_ARGS__
#define _m67(...) __VA_ARGS__
#define _m68(...) __VA_ARGS__
#define _m69(...) __VA_ARGS__
#define _m70(...) __VA_ARGS__
#define _m71(...) __VA_ARGS__
#define _m72(...) __VA_ARGS__
#define _m73(...) __VA_ARGS__
#define _m74(...) __VA_ARGS__
#define _m75(...) __VA_ARGS__
#define _m76(...) __VA_ARGS__
#define _m77(...) __VA_ARGS__
#define _m78(...) __VA_ARGS__
#define _m79(...) __VA_ARGS__
#define _m80(...) __VA_ARGS__
#define _m81(...) __VA_ARGS__
#define _m82(...) __VA_ARGS__
#define _m83(...) __VA_ARGS__
#define _m84(...) __VA_ARGS__
#define _m85(...) __VA_ARGS__
#define _m86(...) __VA_ARGS__
#define _m87(...) __VA_ARGS__
#define _m88(...) __VA_ARGS__
#define _m89(...) __VA_ARGS__
#define _m90(...) __VA_ARGS__
#define _m91(...) __VA_ARGS__
#define _m92(...) __VA_ARGS__
#define _m93(...) __VA_ARGS__
#define _m94(...) __VA_ARGS__
#define _m95(...) __VA_ARGS__
#define _m96(...) __VA_ARGS__
#define _m97(...) __VA_ARGS__
#define _m98(...) __VA_ARGS__
#define _m99(...) __VA_ARGS__
#define _n00(...) __VA_ARGS__
#define _n01(...) __VA_ARGS__
#define _n02(...) __VA_ARGS__
#define _n03(...) __VA_ARGS__
#define _n04(...) __VA_ARGS__
#define _n05(...) __VA_ARGS__
#define _n06(...) __VA_ARGS__
#define _n07(...) __VA_ARGS__
#define _n08(...) __VA_ARGS__
#define _n09(...) __VA_ARGS__
#define _n10(...) __VA_ARGS__
#define _n11(...) __VA_ARGS__
#define _n12(...) __VA_ARGS__
#define _n13(...) __VA_ARGS__
#define _n14(...) __VA_ARGS__
#define _n15(...) __VA_ARGS__
#define _n16(...) __VA_ARGS__
#define _n17(...) __VA_ARGS__
#define _n18(...) __VA_ARGS__
#define _n19(...) __VA_ARGS__
#define _n20(...) __VA_ARGS__
#define _n21(...) __VA_ARGS__
#define _n22(...) __VA_ARGS__
#define _n23(...) __VA_ARGS__
#define _n24(...) __VA_ARGS__
#define _n25(...) __VA_ARGS__
#define _n26(...) __VA_ARGS__
#define _n27(...) __VA_ARGS__
#define _n28(...) __VA_ARGS__
#define _n29(...) __VA_ARGS__
#define _n30(...) __VA_ARGS__
#define _n31(...) __VA_ARGS__
#define _n32(...) __VA_ARGS__
#define _n33(...) __VA_ARGS__
#define _n34(...) __VA_ARGS__
#define _n35(...) __VA_ARGS__
#define _n36(...) __VA_ARGS__
#define _n37(...) __VA_ARGS__
#define _n38(...) __VA_ARGS__
#define _n39(...) __VA_ARGS__
#define _n40(...) __VA_ARGS__
#define _n41(...) __VA_ARGS__
#define _n42(...) __VA_ARGS__
#define _n43(...) __VA_ARGS__
#define _n44(...) __VA_ARGS__
#define _n45(...) __VA_ARGS__
#define _n46(...) __VA_ARGS__
#define _n47(...) __VA_ARGS__
#define _n48(...) __VA_ARGS__
#define _n49(...) __VA_ARGS__
#define _n50(...) __VA_ARGS__
#define _n51(...) __VA_ARGS__
#define _n52(...) __VA_ARGS__
#define _n53(...) __VA_ARGS__
#define _n54(...) __VA_ARGS__
#define _n55(...) __VA_ARGS__
#define _n56(...) __VA_ARGS__
#define _n57(...) __VA_ARGS__
#define _n58(...) __VA_ARGS__
#define _n59(...) __VA_ARGS__
#define _n60(...) __VA_ARGS__
#define _n61(...) __VA_ARGS__
#define _n62(...) __VA_ARGS__
#define _n63(...) __VA_ARGS__
#define _n64(...) __VA_ARGS__
#define _n65(...) __VA_ARGS__
#define _n66(...) __VA_ARGS__
#define _n67(...) __VA_ARGS__
#define _n68(...) __VA_ARGS__
#define _n69(...) __VA_ARGS__
#define _n70(...) __VA_ARGS__
#define _n71(...) __VA_ARGS__
#define _n72(...) __VA_ARGS__
#define _n73(...) __VA_ARGS__
#define _n74(...) __VA_ARGS__
#define _n75(...) __VA_ARGS__
#define _n76(...) __VA_ARGS__
#define _n77(...) __VA_ARGS__
#define _n78(...) __VA_ARGS__
#define _n79(...) __VA_ARGS__
#define _n80(...) __VA_ARGS__
#define _n81(...) __VA_ARGS__
#define _n82(...) __VA_ARGS__
#define _n83(...) __VA_ARGS__
#define _n84(...) __VA_ARGS__
#define _n85(...) __VA_ARGS__
#define _n86(...) __VA_ARGS__
#define _n87(...) __VA_ARGS__
#define _n88(...) __VA_ARGS__
#define _n89(...) __VA_ARGS__
#define _n90(...) __VA_ARGS__
#define _n91(...) __VA_ARGS__
#define _n92(...) __VA_ARGS__
#define _n93(...) __VA_ARGS__
#define _n94(...) __VA_ARGS__
#define _n95(...) __VA_ARGS__
#define _n96(...) __VA_ARGS__
#define _n97(...) __VA_ARGS__
#define _n98(...) __VA_ARGS__
#define _n99(...) __VA_ARGS__
#define _o00(...) __VA_ARGS__
#define _o01(...) __VA_ARGS__
#define _o02(...) __VA_ARGS__
#define _o03(...) __VA_ARGS__
#define _o04(...) __VA_ARGS__
#define _o05(...) __VA_ARGS__
#define _o06(...) __VA_ARGS__
#define _o07(...) __VA_ARGS__
#define _o08(...) __VA_ARGS__
#define _o09(...) __VA_ARGS__
#define _o10(...) __VA_ARGS__
#define _o11(...) __VA_ARGS__
#define _o12(...) __VA_ARGS__
#define _o13(...) __VA_ARGS__
#define _o14(...) __VA_ARGS__
#define _o15(...) __VA_ARGS__
#define _o16(...) __VA_ARGS__
#define _o17(...) __VA_ARGS__
#define _o18(...) __VA_ARGS__
#define _o19(...) __VA_ARGS__
#define _o20(...) __VA_ARGS__
#define _o21(...) __VA_ARGS__
#define _o22(...) __VA_ARGS__
#define _o23(...) __VA_ARGS__
#define _o24(...) __VA_ARGS__
#define _o25(...) __VA_ARGS__
#define _o26(...) __VA_ARGS__
#define _o27(...) __VA_ARGS__
#define _o28(...) __VA_ARGS__
#define _o29(...) __VA_ARGS__
#define _o30(...) __VA_ARGS__
#define _o31(...) __VA_ARGS__
#define _o32(...) __VA_ARGS__
#define _o33(...) __VA_ARGS__
#define _o34(...) __VA_ARGS__
#define _o35(...) __VA_ARGS__
#define _o36(...) __VA_ARGS__
#define _o37(...) __VA_ARGS__
#define _o38(...) __VA_ARGS__
#define _o39(...) __VA_ARGS__
#define _o40(...) __VA_ARGS__
#define _o41(...) __VA_ARGS__
#define _o42(...) __VA_ARGS__
#define _o43(...) __VA_ARGS__
#define _o44(...) __VA_ARGS__
#define _o45(...) __VA_ARGS__
#define _o46(...) __VA_ARGS__
#define _o47(...) __VA_ARGS__
#define _o48(...) __VA_ARGS__
#define _o49(...) __VA_ARGS__
#define _o50(...) __VA_ARGS__
#define _o51(...) __VA_ARGS__
#define _o52(...) __VA_ARGS__
#define _o53(...) __VA_ARGS__
#define _o54(...) __VA_ARGS__
#define _o55(...) __VA_ARGS__
#define _o56(...) __VA_ARGS__
#define _o57(...) __VA_ARGS__
#define _o58(...) __VA_ARGS__
#define _o59(...) __VA_ARGS__
#define _o60(...) __VA_ARGS__
#define _o61(...) __VA_ARGS__
#define _o62(...) __VA_ARGS__
#define _o63(...) __VA_ARGS__
#define _o64(...) __VA_ARGS__
#define _o65(...) __VA_ARGS__
#define _o66(...) __VA_ARGS__
#define _o67(...) __VA_ARGS__
#define _o68(...) __VA_ARGS__
#define _o69(...) __VA_ARGS__
#define _o70(...) __VA_ARGS__
#define _o71(...) __VA_ARGS__
#define _o72(...) __VA_ARGS__
#define _o73(...) __VA_ARGS__
#define _o74(...) __VA_ARGS__
#define _o75(...) __VA_ARGS__
#define _o76(...) __VA_ARGS__
#define _o77(...) __VA_ARGS__
#define _o78(...) __VA_ARGS__
#define _o79(...) __VA_ARGS__
#define _o80(...) __VA_ARGS__
#define _o81(...) __VA_ARGS__
#define _o82(...) __VA_ARGS__
#define _o83(...) __VA_ARGS__
#define _o84(...) __VA_ARGS__
#define _o85(...) __VA_ARGS__
#define _o86(...) __VA_ARGS__
#define _o87(...) __VA_ARGS__
#define _o88(...) __VA_ARGS__
#define _o89(...) __VA_ARGS__
#define _o90(...) __VA_ARGS__
#define _o91(...) __VA_ARGS__
#define _o92(...) __VA_ARGS__
#define _o93(...) __VA_ARGS__
#define _o94(...) __VA_ARGS__
#define _o95(...) __VA_ARGS__
#define _o96(...) __VA_ARGS__
#define _o97(...) __VA_ARGS__
#define _o98(...) __VA_ARGS__
#define _o99(...) __VA_ARGS__
#define _p00(...) __VA_ARGS__
#define _p01(...) __VA_ARGS__
#define _p02(...) __VA_ARGS__
#define _p03(...) __VA_ARGS__
#define _p04(...) __VA_ARGS__
#define _p05(...) __VA_ARGS__
#define _p06(...) __VA_ARGS__
#define _p07(...) __VA_ARGS__
#define _p08(...) __VA_ARGS__
#define _p09(...) __VA_ARGS__
#define _p10(...) __VA_ARGS__
#define _p11(...) __VA_ARGS__
#define _p12(...) __VA_ARGS__
#define _p13(...) __VA_ARGS__
#define _p14(...) __VA_ARGS__
#define _p15(...) __VA_ARGS__
#define _p16(...) __VA_ARGS__
#define _p17(...) __VA_ARGS__
#define _p18(...) __VA_ARGS__
#define _p19(...) __VA_ARGS__
#define _p20(...) __VA_ARGS__
#define _p21(...) __VA_ARGS__
#define _p22(...) __VA_ARGS__
#define _p23(...) __VA_ARGS__
#define _p24(...) __VA_ARGS__
#define _p25(...) __VA_ARGS__
#define _p26(...) __VA_ARGS__
#define _p27(...) __VA_ARGS__
#define _p28(...) __VA_ARGS__
#define _p29(...) __VA_ARGS__
#define _p30(...) __VA_ARGS__
#define _p31(...) __VA_ARGS__
#define _p32(...) __VA_ARGS__
#define _p33(...) __VA_ARGS__
#define _p34(...) __VA_ARGS__
#define _p35(...) __VA_ARGS__
#define _p36(...) __VA_ARGS__
#define _p37(...) __VA_ARGS__
#define _p38(...) __VA_ARGS__
#define _p39(...) __VA_ARGS__
#define _p40(...) __VA_ARGS__
#define _p41(...) __VA_ARGS__
#define _p42(...) __VA_ARGS__
#define _p43(...) __VA_ARGS__
#define _p44(...) __VA_ARGS__
#define _p45(...) __VA_ARGS__
#define _p46(...) __VA_ARGS__
#define _p47(...) __VA_ARGS__
#define _p48(...) __VA_ARGS__
#define _p49(...) __VA_ARGS__
#define _p50(...) __VA_ARGS__
#define _p51(...) __VA_ARGS__
#define _p52(...) __VA_ARGS__
#define _p53(...) __VA_ARGS__
#define _p54(...) __VA_ARGS__
#define _p55(...) __VA_ARGS__
#define _p56(...) __VA_ARGS__
#define _p57(...) __VA_ARGS__
#define _p58(...) __VA_ARGS__
#define _p59(...) __VA_ARGS__
#define _p60(...) __VA_ARGS__
#define _p61(...) __VA_ARGS__
#define _p62(...) __VA_ARGS__
#define _p63(...) __VA_ARGS__
#define _p64(...) __VA_ARGS__
#define _p65(...) __VA_ARGS__
#define _p66(...) __VA_ARGS__
#define _p67(...) __VA_ARGS__
#define _p68(...) __VA_ARGS__
#define _p69(...) __VA_ARGS__
#define _p70(...) __VA_ARGS__
#define _p71(...) __VA_ARGS__
#define _p72(...) __VA_ARGS__
#define _p73(...) __VA_ARGS__
#define _p74(...) __VA_ARGS__
#define _p75(...) __VA_ARGS__
#define _p76(...) __VA_ARGS__
#define _p77(...) __VA_ARGS__
#define _p78(...) __VA_ARGS__
#define _p79(...) __VA_ARGS__
#define _p80(...) __VA_ARGS__
#define _p81(...) __VA_ARGS__
#define _p82(...) __VA_ARGS__
#define _p83(...) __VA_ARGS__
#define _p84(...) __VA_ARGS__
#define _p85(...) __VA_ARGS__
#define _p86(...) __VA_ARGS__
#define _p87(...) __VA_ARGS__
#define _p88(...) __VA_ARGS__
#define _p89(...) __VA_ARGS__
#define _p90(...) __VA_ARGS__
#define _p91(...) __VA_ARGS__
#define _p92(...) __VA_ARGS__
#define _p93(...) __VA_ARGS__
#define _p94(...) __VA_ARGS__
#define _p95(...) __VA_ARGS__
#define _p96(...) __VA_ARGS__
#define _p97(...) __VA_ARGS__
#define _p98(...) __VA_ARGS__
#define _p99(...) __VA_ARGS__
#define _q00(...) __VA_ARGS__
#define _q01(...) __VA_ARGS__
#define _q02(...) __VA_ARGS__
#define _q03(...) __VA_ARGS__
#define _q04(...) __VA_ARGS__
#define _q05(...) __VA_ARGS__
#define _q06(...) __VA_ARGS__
#define _q07(...) __VA_ARGS__
#define _q08(...) __VA_ARGS__
#define _q09(...) __VA_ARGS__
#define _q10(...) __VA_ARGS__
#define _q11(...) __VA_ARGS__
#define _q12(...) __VA_ARGS__
#define _q13(...) __VA_ARGS__
#define _q14(...) __VA_ARGS__
#define _q15(...) __VA_ARGS__
#define _q16(...) __VA_ARGS__
#define _q17(...) __VA_ARGS__
#define _q18(...) __VA_ARGS__
#define _q19(...) __VA_ARGS__
#define _q20(...) __VA_ARGS__
#define _q21(...) __VA_ARGS__
#define _q22(...) __VA_ARGS__
#define _q23(...) __VA_ARGS__
#define _q24(...) __VA_ARGS__
#define _q25(...) __VA_ARGS__
#define _q26(...) __VA_ARGS__
#define _q27(...) __VA_ARGS__
#define _q28(...) __VA_ARGS__
#define _q29(...) __VA_ARGS__
#define _q30(...) __VA_ARGS__
#define _q31(...) __VA_ARGS__
#define _q32(...) __VA_ARGS__
#define _q33(...) __VA_ARGS__
#define _q34(...) __VA_ARGS__
#define _q35(...) __VA_ARGS__
#define _q36(...) __VA_ARGS__
#define _q37(...) __VA_ARGS__
#define _q38(...) __VA_ARGS__
#define _q39(...) __VA_ARGS__
#define _q40(...) __VA_ARGS__
#define _q41(...) __VA_ARGS__
#define _q42(...) __VA_ARGS__
#define _q43(...) __VA_ARGS__
#define _q44(...) __VA_ARGS__
#define _q45(...) __VA_ARGS__
#define _q46(...) __VA_ARGS__
#define _q47(...) __VA_ARGS__
#define _q48(...) __VA_ARGS__
#define _q49(...) __VA_ARGS__
#define _q50(...) __VA_ARGS__
#define _q51(...) __VA_ARGS__
#define _q52(...) __VA_ARGS__
#define _q53(...) __VA_ARGS__
#define _q54(...) __VA_ARGS__
#define _q55(...) __VA_ARGS__
#define _q56(...) __VA_ARGS__
#define _q57(...) __VA_ARGS__
#define _q58(...) __VA_ARGS__
#define _q59(...) __VA_ARGS__
#define _q60(...) __VA_ARGS__
#define _q61(...) __VA_ARGS__
#define _q62(...) __VA_ARGS__
#define _q63(...) __VA_ARGS__
#define _q64(...) __VA_ARGS__
#define _q65(...) __VA_ARGS__
#define _q66(...) __VA_ARGS__
#define _q67(...) __VA_ARGS__
#define _q68(...) __VA_ARGS__
#define _q69(...) __VA_ARGS__
#define _q70(...) __VA_ARGS__
#define _q71(...) __VA_ARGS__
#define _q72(...) __VA_ARGS__
#define _q73(...) __VA_ARGS__
#define _q74(...) __VA_ARGS__
#define _q75(...) __VA_ARGS__
#define _q76(...) __VA_ARGS__
#define _q77(...) __VA_ARGS__
#define _q78(...) __VA_ARGS__
#define _q79(...) __VA_ARGS__
#define _q80(...) __VA_ARGS__
#define _q81(...) __VA_ARGS__
#define _q82(...) __VA_ARGS__
#define _q83(...) __VA_ARGS__
#define _q84(...) __VA_ARGS__
#define _q85(...) __VA_ARGS__
#define _q86(...) __VA_ARGS__
#define _q87(...) __VA_ARGS__
#define _q88(...) __VA_ARGS__
#define _q89(...) __VA_ARGS__
#define _q90(...) __VA_ARGS__
#define _q91(...) __VA_ARGS__
#define _q92(...) __VA_ARGS__
#define _q93(...) __VA_ARGS__
#define _q94(...) __VA_ARGS__
#define _q95(...) __VA_ARGS__
#define _q96(...) __VA_ARGS__
#define _q97(...) __VA_ARGS__
#define _q98(...) __VA_ARGS__
#define _q99(...) __VA_ARGS__
#define _r00(...) __VA_ARGS__
#define _r01(...) __VA_ARGS__
#define _r02(...) __VA_ARGS__
#define _r03(...) __VA_ARGS__
#define _r04(...) __VA_ARGS__
#define _r05(...) __VA_ARGS__
#define _r06(...) __VA_ARGS__
#define _r07(...) __VA_ARGS__
#define _r08(...) __VA_ARGS__
#define _r09(...) __VA_ARGS__
#define _r10(...) __VA_ARGS__
#define _r11(...) __VA_ARGS__
#define _r12(...) __VA_ARGS__
#define _r13(...) __VA_ARGS__
#define _r14(...) __VA_ARGS__
#define _r15(...) __VA_ARGS__
#define _r16(...) __VA_ARGS__
#define _r17(...) __VA_ARGS__
#define _r18(...) __VA_ARGS__
#define _r19(...) __VA_ARGS__
#define _r20(...) __VA_ARGS__
#define _r21(...) __VA_ARGS__
#define _r22(...) __VA_ARGS__
#define _r23(...) __VA_ARGS__
#define _r24(...) __VA_ARGS__
#define _r25(...) __VA_ARGS__
#define _r26(...) __VA_ARGS__
#define _r27(...) __VA_ARGS__
#define _r28(...) __VA_ARGS__
#define _r29(...) __VA_ARGS__
#define _r30(...) __VA_ARGS__
#define _r31(...) __VA_ARGS__
#define _r32(...) __VA_ARGS__
#define _r33(...) __VA_ARGS__
#define _r34(...) __VA_ARGS__
#define _r35(...) __VA_ARGS__
#define _r36(...) __VA_ARGS__
#define _r37(...) __VA_ARGS__
#define _r38(...) __VA_ARGS__
#define _r39(...) __VA_ARGS__
#define _r40(...) __VA_ARGS__
#define _r41(...) __VA_ARGS__
#define _r42(...) __VA_ARGS__
#define _r43(...) __VA_ARGS__
#define _r44(...) __VA_ARGS__
#define _r45(...) __VA_ARGS__
#define _r46(...) __VA_ARGS__
#define _r47(...) __VA_ARGS__
#define _r48(...) __VA_ARGS__
#define _r49(...) __VA_ARGS__
#define _r50(...) __VA_ARGS__
#define _r51(...) __VA_ARGS__
#define _r52(...) __VA_ARGS__
#define _r53(...) __VA_ARGS__
#define _r54(...) __VA_ARGS__
#define _r55(...) __VA_ARGS__
#define _r56(...) __VA_ARGS__
#define _r57(...) __VA_ARGS__
#define _r58(...) __VA_ARGS__
#define _r59(...) __VA_ARGS__
#define _r60(...) __VA_ARGS__
#define _r61(...) __VA_ARGS__
#define _r62(...) __VA_ARGS__
#define _r63(...) __VA_ARGS__
#define _r64(...) __VA_ARGS__
#define _r65(...) __VA_ARGS__
#define _r66(...) __VA_ARGS__
#define _r67(...) __VA_ARGS__
#define _r68(...) __VA_ARGS__
#define _r69(...) __VA_ARGS__
#define _r70(...) __VA_ARGS__
#define _r71(...) __VA_ARGS__
#define _r72(...) __VA_ARGS__
#define _r73(...) __VA_ARGS__
#define _r74(...) __VA_ARGS__
#define _r75(...) __VA_ARGS__
#define _r76(...) __VA_ARGS__
#define _r77(...) __VA_ARGS__
#define _r78(...) __VA_ARGS__
#define _r79(...) __VA_ARGS__
#define _r80(...) __VA_ARGS__
#define _r81(...) __VA_ARGS__
#define _r82(...) __VA_ARGS__
#define _r83(...) __VA_ARGS__
#define _r84(...) __VA_ARGS__
#define _r85(...) __VA_ARGS__
#define _r86(...) __VA_ARGS__
#define _r87(...) __VA_ARGS__
#define _r88(...) __VA_ARGS__
#define _r89(...) __VA_ARGS__
#define _r90(...) __VA_ARGS__
#define _r91(...) __VA_ARGS__
#define _r92(...) __VA_ARGS__
#define _r93(...) __VA_ARGS__
#define _r94(...) __VA_ARGS__
#define _r95(...) __VA_ARGS__
#define _r96(...) __VA_ARGS__
#define _r97(...) __VA_ARGS__
#define _r98(...) __VA_ARGS__
#define _r99(...) __VA_ARGS__
#define _s00(...) __VA_ARGS__
#define _s01(...) __VA_ARGS__
#define _s02(...) __VA_ARGS__
#define _s03(...) __VA_ARGS__
#define _s04(...) __VA_ARGS__
#define _s05(...) __VA_ARGS__
#define _s06(...) __VA_ARGS__
#define _s07(...) __VA_ARGS__
#define _s08(...) __VA_ARGS__
#define _s09(...) __VA_ARGS__
#define _s10(...) __VA_ARGS__
#define _s11(...) __VA_ARGS__
#define _s12(...) __VA_ARGS__
#define _s13(...) __VA_ARGS__
#define _s14(...) __VA_ARGS__
#define _s15(...) __VA_ARGS__
#define _s16(...) __VA_ARGS__
#define _s17(...) __VA_ARGS__
#define _s18(...) __VA_ARGS__
#define _s19(...) __VA_ARGS__
#define _s20(...) __VA_ARGS__
#define _s21(...) __VA_ARGS__
#define _s22(...) __VA_ARGS__
#define _s23(...) __VA_ARGS__
#define _s24(...) __VA_ARGS__
#define _s25(...) __VA_ARGS__
#define _s26(...) __VA_ARGS__
#define _s27(...) __VA_ARGS__
#define _s28(...) __VA_ARGS__
#define _s29(...) __VA_ARGS__
#define _s30(...) __VA_ARGS__
#define _s31(...) __VA_ARGS__
#define _s32(...) __VA_ARGS__
#define _s33(...) __VA_ARGS__
#define _s34(...) __VA_ARGS__
#define _s35(...) __VA_ARGS__
#define _s36(...) __VA_ARGS__
#define _s37(...) __VA_ARGS__
#define _s38(...) __VA_ARGS__
#define _s39(...) __VA_ARGS__
#define _s40(...) __VA_ARGS__
#define _s41(...) __VA_ARGS__
#define _s42(...) __VA_ARGS__
#define _s43(...) __VA_ARGS__
#define _s44(...) __VA_ARGS__
#define _s45(...) __VA_ARGS__
#define _s46(...) __VA_ARGS__
#define _s47(...) __VA_ARGS__
#define _s48(...) __VA_ARGS__
#define _s49(...) __VA_ARGS__
#define _s50(...) __VA_ARGS__
#define _s51(...) __VA_ARGS__
#define _s52(...) __VA_ARGS__
#define _s53(...) __VA_ARGS__
#define _s54(...) __VA_ARGS__
#define _s55(...) __VA_ARGS__
#define _s56(...) __VA_ARGS__
#define _s57(...) __VA_ARGS__
#define _s58(...) __VA_ARGS__
#define _s59(...) __VA_ARGS__
#define _s60(...) __VA_ARGS__
#define _s61(...) __VA_ARGS__
#define _s62(...) __VA_ARGS__
#define _s63(...) __VA_ARGS__
#define _s64(...) __VA_ARGS__
#define _s65(...) __VA_ARGS__
#define _s66(...) __VA_ARGS__
#define _s67(...) __VA_ARGS__
#define _s68(...) __VA_ARGS__
#define _s69(...) __VA_ARGS__
#define _s70(...) __VA_ARGS__
#define _s71(...) __VA_ARGS__
#define _s72(...) __VA_ARGS__
#define _s73(...) __VA_ARGS__
#define _s74(...) __VA_ARGS__
#define _s75(...) __VA_ARGS__
#define _s76(...) __VA_ARGS__
#define _s77(...) __VA_ARGS__
#define _s78(...) __VA_ARGS__
#define _s79(...) __VA_ARGS__
#define _s80(...) __VA_ARGS__
#define _s81(...) __VA_ARGS__
#define _s82(...) __VA_ARGS__
#define _s83(...) __VA_ARGS__
#define _s84(...) __VA_ARGS__
#define _s85(...) __VA_ARGS__
#define _s86(...) __VA_ARGS__
#define _s87(...) __VA_ARGS__
#define _s88(...) __VA_ARGS__
#define _s89(...) __VA_ARGS__
#define _s90(...) __VA_ARGS__
#define _s91(...) __VA_ARGS__
#define _s92(...) __VA_ARGS__
#define _s93(...) __VA_ARGS__
#define _s94(...) __VA_ARGS__
#define _s95(...) __VA_ARGS__
#define _s96(...) __VA_ARGS__
#define _s97(...) __VA_ARGS__
#define _s98(...) __VA_ARGS__
#define _s99(...) __VA_ARGS__
#define _t00(...) __VA_ARGS__
#define _t01(...) __VA_ARGS__
#define _t02(...) __VA_ARGS__
#define _t03(...) __VA_ARGS__
#define _t04(...) __VA_ARGS__
#define _t05(...) __VA_ARGS__
#define _t06(...) __VA_ARGS__
#define _t07(...) __VA_ARGS__
#define _t08(...) __VA_ARGS__
#define _t09(...) __VA_ARGS__
#define _t10(...) __VA_ARGS__
#define _t11(...) __VA_ARGS__
#define _t12(...) __VA_ARGS__
#define _t13(...) __VA_ARGS__
#define _t14(...) __VA_ARGS__
#define _t15(...) __VA_ARGS__
#define _t16(...) __VA_ARGS__
#define _t17(...) __VA_ARGS__
#define _t18(...) __VA_ARGS__
#define _t19(...) __VA_ARGS__
#define _t20(...) __VA_ARGS__
#define _t21(...) __VA_ARGS__
#define _t22(...) __VA_ARGS__
#define _t23(...) __VA_ARGS__
#define _t24(...) __VA_ARGS__
#define _t25(...) __VA_ARGS__
#define _t26(...) __VA_ARGS__
#define _t27(...) __VA_ARGS__
#define _t28(...) __VA_ARGS__
#define _t29(...) __VA_ARGS__
#define _t30(...) __VA_ARGS__
#define _t31(...) __VA_ARGS__
#define _t32(...) __VA_ARGS__
#define _t33(...) __VA_ARGS__
#define _t34(...) __VA_ARGS__
#define _t35(...) __VA_ARGS__
#define _t36(...) __VA_ARGS__
#define _t37(...) __VA_ARGS__
#define _t38(...) __VA_ARGS__
#define _t39(...) __VA_ARGS__
#define _t40(...) __VA_ARGS__
#define _t41(...) __VA_ARGS__
#define _t42(...) __VA_ARGS__
#define _t43(...) __VA_ARGS__
#define _t44(...) __VA_ARGS__
#define _t45(...) __VA_ARGS__
#define _t46(...) __VA_ARGS__
#define _t47(...) __VA_ARGS__
#define _t48(...) __VA_ARGS__
#define _t49(...) __VA_ARGS__
#define _t50(...) __VA_ARGS__
#define _t51(...) __VA_ARGS__
#define _t52(...) __VA_ARGS__
#define _t53(...) __VA_ARGS__
#define _t54(...) __VA_ARGS__
#define _t55(...) __VA_ARGS__
#define _t56(...) __VA_ARGS__
#define _t57(...) __VA_ARGS__
#define _t58(...) __VA_ARGS__
#define _t59(...) __VA_ARGS__
#define _t60(...) __VA_ARGS__
#define _t61(...) __VA_ARGS__
#define _t62(...) __VA_ARGS__
#define _t63(...) __VA_ARGS__
#define _t64(...) __VA_ARGS__
#define _t65(...) __VA_ARGS__
#define _t66(...) __VA_ARGS__
#define _t67(...) __VA_ARGS__
#define _t68(...) __VA_ARGS__
#define _t69(...) __VA_ARGS__
#define _t70(...) __VA_ARGS__
#define _t71(...) __VA_ARGS__
#define _t72(...) __VA_ARGS__
#define _t73(...) __VA_ARGS__
#define _t74(...) __VA_ARGS__
#define _t75(...) __VA_ARGS__
#define _t76(...) __VA_ARGS__
#define _t77(...) __VA_ARGS__
#define _t78(...) __VA_ARGS__
#define _t79(...) __VA_ARGS__
#define _t80(...) __VA_ARGS__
#define _t81(...) __VA_ARGS__
#define _t82(...) __VA_ARGS__
#define _t83(...) __VA_ARGS__
#define _t84(...) __VA_ARGS__
#define _t85(...) __VA_ARGS__
#define _t86(...) __VA_ARGS__
#define _t87(...) __VA_ARGS__
#define _t88(...) __VA_ARGS__
#define _t89(...) __VA_ARGS__
#define _t90(...) __VA_ARGS__
#define _t91(...) __VA_ARGS__
#define _t92(...) __VA_ARGS__
#define _t93(...) __VA_ARGS__
#define _t94(...) __VA_ARGS__
#define _t95(...) __VA_ARGS__
#define _t96(...) __VA_ARGS__
#define _t97(...) __VA_ARGS__
#define _t98(...) __VA_ARGS__
#define _t99(...) __VA_ARGS__
#define _u00(...) __VA_ARGS__
#define _u01(...) __VA_ARGS__
#define _u02(...) __VA_ARGS__
#define _u03(...) __VA_ARGS__
#define _u04(...) __VA_ARGS__
#define _u05(...) __VA_ARGS__
#define _u06(...) __VA_ARGS__
#define _u07(...) __VA_ARGS__
#define _u08(...) __VA_ARGS__
#define _u09(...) __VA_ARGS__
#define _u10(...) __VA_ARGS__
#define _u11(...) __VA_ARGS__
#define _u12(...) __VA_ARGS__
#define _u13(...) __VA_ARGS__
#define _u14(...) __VA_ARGS__
#define _u15(...) __VA_ARGS__
#define _u16(...) __VA_ARGS__
#define _u17(...) __VA_ARGS__
#define _u18(...) __VA_ARGS__
#define _u19(...) __VA_ARGS__
#define _u20(...) __VA_ARGS__
#define _u21(...) __VA_ARGS__
#define _u22(...) __VA_ARGS__
#define _u23(...) __VA_ARGS__
#define _u24(...) __VA_ARGS__
#define _u25(...) __VA_ARGS__
#define _u26(...) __VA_ARGS__
#define _u27(...) __VA_ARGS__
#define _u28(...) __VA_ARGS__
#define _u29(...) __VA_ARGS__
#define _u30(...) __VA_ARGS__
#define _u31(...) __VA_ARGS__
#define _u32(...) __VA_ARGS__
#define _u33(...) __VA_ARGS__
#define _u34(...) __VA_ARGS__
#define _u35(...) __VA_ARGS__
#define _u36(...) __VA_ARGS__
#define _u37(...) __VA_ARGS__
#define _u38(...) __VA_ARGS__
#define _u39(...) __VA_ARGS__
#define _u40(...) __VA_ARGS__
#define _u41(...) __VA_ARGS__
#define _u42(...) __VA_ARGS__
#define _u43(...) __VA_ARGS__
#define _u44(...) __VA_ARGS__
#define _u45(...) __VA_ARGS__
#define _u46(...) __VA_ARGS__
#define _u47(...) __VA_ARGS__
#define _u48(...) __VA_ARGS__
#define _u49(...) __VA_ARGS__
#define _u50(...) __VA_ARGS__
#define _u51(...) __VA_ARGS__
#define _u52(...) __VA_ARGS__
#define _u53(...) __VA_ARGS__
#define _u54(...) __VA_ARGS__
#define _u55(...) __VA_ARGS__
#define _u56(...) __VA_ARGS__
#define _u57(...) __VA_ARGS__
#define _u58(...) __VA_ARGS__
#define _u59(...) __VA_ARGS__
#define _u60(...) __VA_ARGS__
#define _u61(...) __VA_ARGS__
#define _u62(...) __VA_ARGS__
#define _u63(...) __VA_ARGS__
#define _u64(...) __VA_ARGS__
#define _u65(...) __VA_ARGS__
#define _u66(...) __VA_ARGS__
#define _u67(...) __VA_ARGS__
#define _u68(...) __VA_ARGS__
#define _u69(...) __VA_ARGS__
#define _u70(...) __VA_ARGS__
#define _u71(...) __VA_ARGS__
#define _u72(...) __VA_ARGS__
#define _u73(...) __VA_ARGS__
#define _u74(...) __VA_ARGS__
#define _u75(...) __VA_ARGS__
#define _u76(...) __VA_ARGS__
#define _u77(...) __VA_ARGS__
#define _u78(...) __VA_ARGS__
#define _u79(...) __VA_ARGS__
#define _u80(...) __VA_ARGS__
#define _u81(...) __VA_ARGS__
#define _u82(...) __VA_ARGS__
#define _u83(...) __VA_ARGS__
#define _u84(...) __VA_ARGS__
#define _u85(...) __VA_ARGS__
#define _u86(...) __VA_ARGS__
#define _u87(...) __VA_ARGS__
#define _u88(...) __VA_ARGS__
#define _u89(...) __VA_ARGS__
#define _u90(...) __VA_ARGS__
#define _u91(...) __VA_ARGS__
#define _u92(...) __VA_ARGS__
#define _u93(...) __VA_ARGS__
#define _u94(...) __VA_ARGS__
#define _u95(...) __VA_ARGS__
#define _u96(...) __VA_ARGS__
#define _u97(...) __VA_ARGS__
#define _u98(...) __VA_ARGS__
#define _u99(...) __VA_ARGS__
#define _v00(...) __VA_ARGS__
#define _v01(...) __VA_ARGS__
#define _v02(...) __VA_ARGS__
#define _v03(...) __VA_ARGS__
#define _v04(...) __VA_ARGS__
#define _v05(...) __VA_ARGS__
#define _v06(...) __VA_ARGS__
#define _v07(...) __VA_ARGS__
#define _v08(...) __VA_ARGS__
#define _v09(...) __VA_ARGS__
#define _v10(...) __VA_ARGS__
#define _v11(...) __VA_ARGS__
#define _v12(...) __VA_ARGS__
#define _v13(...) __VA_ARGS__
#define _v14(...) __VA_ARGS__
#define _v15(...) __VA_ARGS__
#define _v16(...) __VA_ARGS__
#define _v17(...) __VA_ARGS__
#define _v18(...) __VA_ARGS__
#define _v19(...) __VA_ARGS__
#define _v20(...) __VA_ARGS__
#define _v21(...) __VA_ARGS__
#define _v22(...) __VA_ARGS__
#define _v23(...) __VA_ARGS__
#define _v24(...) __VA_ARGS__
#define _v25(...) __VA_ARGS__
#define _v26(...) __VA_ARGS__
#define _v27(...) __VA_ARGS__
#define _v28(...) __VA_ARGS__
#define _v29(...) __VA_ARGS__
#define _v30(...) __VA_ARGS__
#define _v31(...) __VA_ARGS__
#define _v32(...) __VA_ARGS__
#define _v33(...) __VA_ARGS__
#define _v34(...) __VA_ARGS__
#define _v35(...) __VA_ARGS__
#define _v36(...) __VA_ARGS__
#define _v37(...) __VA_ARGS__
#define _v38(...) __VA_ARGS__
#define _v39(...) __VA_ARGS__
#define _v40(...) __VA_ARGS__
#define _v41(...) __VA_ARGS__
#define _v42(...) __VA_ARGS__
#define _v43(...) __VA_ARGS__
#define _v44(...) __VA_ARGS__
#define _v45(...) __VA_ARGS__
#define _v46(...) __VA_ARGS__
#define _v47(...) __VA_ARGS__
#define _v48(...) __VA_ARGS__
#define _v49(...) __VA_ARGS__
#define _v50(...) __VA_ARGS__
#define _v51(...) __VA_ARGS__
#define _v52(...) __VA_ARGS__
#define _v53(...) __VA_ARGS__
#define _v54(...) __VA_ARGS__
#define _v55(...) __VA_ARGS__
#define _v56(...) __VA_ARGS__
#define _v57(...) __VA_ARGS__
#define _v58(...) __VA_ARGS__
#define _v59(...) __VA_ARGS__
#define _v60(...) __VA_ARGS__
#define _v61(...) __VA_ARGS__
#define _v62(...) __VA_ARGS__
#define _v63(...) __VA_ARGS__
#define _v64(...) __VA_ARGS__
#define _v65(...) __VA_ARGS__
#define _v66(...) __VA_ARGS__
#define _v67(...) __VA_ARGS__
#define _v68(...) __VA_ARGS__
#define _v69(...) __VA_ARGS__
#define _v70(...) __VA_ARGS__
#define _v71(...) __VA_ARGS__
#define _v72(...) __VA_ARGS__
#define _v73(...) __VA_ARGS__
#define _v74(...) __VA_ARGS__
#define _v75(...) __VA_ARGS__
#define _v76(...) __VA_ARGS__
#define _v77(...) __VA_ARGS__
#define _v78(...) __VA_ARGS__
#define _v79(...) __VA_ARGS__
#define _v80(...) __VA_ARGS__
#define _v81(...) __VA_ARGS__
#define _v82(...) __VA_ARGS__
#define _v83(...) __VA_ARGS__
#define _v84(...) __VA_ARGS__
#define _v85(...) __VA_ARGS__
#define _v86(...) __VA_ARGS__
#define _v87(...) __VA_ARGS__
#define _v88(...) __VA_ARGS__
#define _v89(...) __VA_ARGS__
#define _v90(...) __VA_ARGS__
#define _v91(...) __VA_ARGS__
#define _v92(...) __VA_ARGS__
#define _v93(...) __VA_ARGS__
#define _v94(...) __VA_ARGS__
#define _v95(...) __VA_ARGS__
#define _v96(...) __VA_ARGS__
#define _v97(...) __VA_ARGS__
#define _v98(...) __VA_ARGS__
#define _v99(...) __VA_ARGS__
#define _w00(...) __VA_ARGS__
#define _w01(...) __VA_ARGS__
#define _w02(...) __VA_ARGS__
#define _w03(...) __VA_ARGS__
#define _w04(...) __VA_ARGS__
#define _w05(...) __VA_ARGS__
#define _w06(...) __VA_ARGS__
#define _w07(...) __VA_ARGS__
#define _w08(...) __VA_ARGS__
#define _w09(...) __VA_ARGS__
#define _w10(...) __VA_ARGS__
#define _w11(...) __VA_ARGS__
#define _w12(...) __VA_ARGS__
#define _w13(...) __VA_ARGS__
#define _w14(...) __VA_ARGS__
#define _w15(...) __VA_ARGS__
#define _w16(...) __VA_ARGS__
#define _w17(...) __VA_ARGS__
#define _w18(...) __VA_ARGS__
#define _w19(...) __VA_ARGS__
#define _w20(...) __VA_ARGS__
#define _w21(...) __VA_ARGS__
#define _w22(...) __VA_ARGS__
#define _w23(...) __VA_ARGS__
#define _w24(...) __VA_ARGS__
#define _w25(...) __VA_ARGS__
#define _w26(...) __VA_ARGS__
#define _w27(...) __VA_ARGS__
#define _w28(...) __VA_ARGS__
#define _w29(...) __VA_ARGS__
#define _w30(...) __VA_ARGS__
#define _w31(...) __VA_ARGS__
#define _w32(...) __VA_ARGS__
#define _w33(...) __VA_ARGS__
#define _w34(...) __VA_ARGS__
#define _w35(...) __VA_ARGS__
#define _w36(...) __VA_ARGS__
#define _w37(...) __VA_ARGS__
#define _w38(...) __VA_ARGS__
#define _w39(...) __VA_ARGS__
#define _w40(...) __VA_ARGS__
#define _w41(...) __VA_ARGS__
#define _w42(...) __VA_ARGS__
#define _w43(...) __VA_ARGS__
#define _w44(...) __VA_ARGS__
#define _w45(...) __VA_ARGS__
#define _w46(...) __VA_ARGS__
#define _w47(...) __VA_ARGS__
#define _w48(...) __VA_ARGS__
#define _w49(...) __VA_ARGS__
#define _w50(...) __VA_ARGS__
#define _w51(...) __VA_ARGS__
#define _w52(...) __VA_ARGS__
#define _w53(...) __VA_ARGS__
#define _w54(...) __VA_ARGS__
#define _w55(...) __VA_ARGS__
#define _w56(...) __VA_ARGS__
#define _w57(...) __VA_ARGS__
#define _w58(...) __VA_ARGS__
#define _w59(...) __VA_ARGS__
#define _w60(...) __VA_ARGS__
#define _w61(...) __VA_ARGS__
#define _w62(...) __VA_ARGS__
#define _w63(...) __VA_ARGS__
#define _w64(...) __VA_ARGS__
#define _w65(...) __VA_ARGS__
#define _w66(...) __VA_ARGS__
#define _w67(...) __VA_ARGS__
#define _w68(...) __VA_ARGS__
#define _w69(...) __VA_ARGS__
#define _w70(...) __VA_ARGS__
#define _w71(...) __VA_ARGS__
#define _w72(...) __VA_ARGS__
#define _w73(...) __VA_ARGS__
#define _w74(...) __VA_ARGS__
#define _w75(...) __VA_ARGS__
#define _w76(...) __VA_ARGS__
#define _w77(...) __VA_ARGS__
#define _w78(...) __VA_ARGS__
#define _w79(...) __VA_ARGS__
#define _w80(...) __VA_ARGS__
#define _w81(...) __VA_ARGS__
#define _w82(...) __VA_ARGS__
#define _w83(...) __VA_ARGS__
#define _w84(...) __VA_ARGS__
#define _w85(...) __VA_ARGS__
#define _w86(...) __VA_ARGS__
#define _w87(...) __VA_ARGS__
#define _w88(...) __VA_ARGS__
#define _w89(...) __VA_ARGS__
#define _w90(...) __VA_ARGS__
#define _w91(...) __VA_ARGS__
#define _w92(...) __VA_ARGS__
#define _w93(...) __VA_ARGS__
#define _w94(...) __VA_ARGS__
#define _w95(...) __VA_ARGS__
#define _w96(...) __VA_ARGS__
#define _w97(...) __VA_ARGS__
#define _w98(...) __VA_ARGS__
#define _w99(...) __VA_ARGS__
#define _x00(...) __VA_ARGS__
#define _x01(...) __VA_ARGS__
#define _x02(...) __VA_ARGS__
#define _x03(...) __VA_ARGS__
#define _x04(...) __VA_ARGS__
#define _x05(...) __VA_ARGS__
#define _x06(...) __VA_ARGS__
#define _x07(...) __VA_ARGS__
#define _x08(...) __VA_ARGS__
#define _x09(...) __VA_ARGS__
#define _x10(...) __VA_ARGS__
#define _x11(...) __VA_ARGS__
#define _x12(...) __VA_ARGS__
#define _x13(...) __VA_ARGS__
#define _x14(...) __VA_ARGS__
#define _x15(...) __VA_ARGS__
#define _x16(...) __VA_ARGS__
#define _x17(...) __VA_ARGS__
#define _x18(...) __VA_ARGS__
#define _x19(...) __VA_ARGS__
#define _x20(...) __VA_ARGS__
#define _x21(...) __VA_ARGS__
#define _x22(...) __VA_ARGS__
#define _x23(...) __VA_ARGS__
#define _x24(...) __VA_ARGS__
#define _x25(...) __VA_ARGS__
#define _x26(...) __VA_ARGS__
#define _x27(...) __VA_ARGS__
#define _x28(...) __VA_ARGS__
#define _x29(...) __VA_ARGS__
#define _x30(...) __VA_ARGS__
#define _x31(...) __VA_ARGS__
#define _x32(...) __VA_ARGS__
#define _x33(...) __VA_ARGS__
#define _x34(...) __VA_ARGS__
#define _x35(...) __VA_ARGS__
#define _x36(...) __VA_ARGS__
#define _x37(...) __VA_ARGS__
#define _x38(...) __VA_ARGS__
#define _x39(...) __VA_ARGS__
#define _x40(...) __VA_ARGS__
#define _x41(...) __VA_ARGS__
#define _x42(...) __VA_ARGS__
#define _x43(...) __VA_ARGS__
#define _x44(...) __VA_ARGS__
#define _x45(...) __VA_ARGS__
#define _x46(...) __VA_ARGS__
#define _x47(...) __VA_ARGS__
#define _x48(...) __VA_ARGS__
#define _x49(...) __VA_ARGS__
#define _x50(...) __VA_ARGS__
#define _x51(...) __VA_ARGS__
#define _x52(...) __VA_ARGS__
#define _x53(...) __VA_ARGS__
#define _x54(...) __VA_ARGS__
#define _x55(...) __VA_ARGS__
#define _x56(...) __VA_ARGS__
#define _x57(...) __VA_ARGS__
#define _x58(...) __VA_ARGS__
#define _x59(...) __VA_ARGS__
#define _x60(...) __VA_ARGS__
#define _x61(...) __VA_ARGS__
#define _x62(...) __VA_ARGS__
#define _x63(...) __VA_ARGS__
#define _x64(...) __VA_ARGS__
#define _x65(...) __VA_ARGS__
#define _x66(...) __VA_ARGS__
#define _x67(...) __VA_ARGS__
#define _x68(...) __VA_ARGS__
#define _x69(...) __VA_ARGS__
#define _x70(...) __VA_ARGS__
#define _x71(...) __VA_ARGS__
#define _x72(...) __VA_ARGS__
#define _x73(...) __VA_ARGS__
#define _x74(...) __VA_ARGS__
#define _x75(...) __VA_ARGS__
#define _x76(...) __VA_ARGS__
#define _x77(...) __VA_ARGS__
#define _x78(...) __VA_ARGS__
#define _x79(...) __VA_ARGS__
#define _x80(...) __VA_ARGS__
#define _x81(...) __VA_ARGS__
#define _x82(...) __VA_ARGS__
#define _x83(...) __VA_ARGS__
#define _x84(...) __VA_ARGS__
#define _x85(...) __VA_ARGS__
#define _x86(...) __VA_ARGS__
#define _x87(...) __VA_ARGS__
#define _x88(...) __VA_ARGS__
#define _x89(...) __VA_ARGS__
#define _x90(...) __VA_ARGS__
#define _x91(...) __VA_ARGS__
#define _x92(...) __VA_ARGS__
#define _x93(...) __VA_ARGS__
#define _x94(...) __VA_ARGS__
#define _x95(...) __VA_ARGS__
#define _x96(...) __VA_ARGS__
#define _x97(...) __VA_ARGS__
#define _x98(...) __VA_ARGS__
#define _x99(...) __VA_ARGS__
#define _y00(...) __VA_ARGS__
#define _y01(...) __VA_ARGS__
#define _y02(...) __VA_ARGS__
#define _y03(...) __VA_ARGS__
#define _y04(...) __VA_ARGS__
#define _y05(...) __VA_ARGS__
#define _y06(...) __VA_ARGS__
#define _y07(...) __VA_ARGS__
#define _y08(...) __VA_ARGS__
#define _y09(...) __VA_ARGS__
#define _y10(...) __VA_ARGS__
#define _y11(...) __VA_ARGS__
#define _y12(...) __VA_ARGS__
#define _y13(...) __VA_ARGS__
#define _y14(...) __VA_ARGS__
#define _y15(...) __VA_ARGS__
#define _y16(...) __VA_ARGS__
#define _y17(...) __VA_ARGS__
#define _y18(...) __VA_ARGS__
#define _y19(...) __VA_ARGS__
#define _y20(...) __VA_ARGS__
#define _y21(...) __VA_ARGS__
#define _y22(...) __VA_ARGS__
#define _y23(...) __VA_ARGS__
#define _y24(...) __VA_ARGS__
#define _y25(...) __VA_ARGS__
#define _y26(...) __VA_ARGS__
#define _y27(...) __VA_ARGS__
#define _y28(...) __VA_ARGS__
#define _y29(...) __VA_ARGS__
#define _y30(...) __VA_ARGS__
#define _y31(...) __VA_ARGS__
#define _y32(...) __VA_ARGS__
#define _y33(...) __VA_ARGS__
#define _y34(...) __VA_ARGS__
#define _y35(...) __VA_ARGS__
#define _y36(...) __VA_ARGS__
#define _y37(...) __VA_ARGS__
#define _y38(...) __VA_ARGS__
#define _y39(...) __VA_ARGS__
#define _y40(...) __VA_ARGS__
#define _y41(...) __VA_ARGS__
#define _y42(...) __VA_ARGS__
#define _y43(...) __VA_ARGS__
#define _y44(...) __VA_ARGS__
#define _y45(...) __VA_ARGS__
#define _y46(...) __VA_ARGS__
#define _y47(...) __VA_ARGS__
#define _y48(...) __VA_ARGS__
#define _y49(...) __VA_ARGS__
#define _y50(...) __VA_ARGS__
#define _y51(...) __VA_ARGS__
#define _y52(...) __VA_ARGS__
#define _y53(...) __VA_ARGS__
#define _y54(...) __VA_ARGS__
#define _y55(...) __VA_ARGS__
#define _y56(...) __VA_ARGS__
#define _y57(...) __VA_ARGS__
#define _y58(...) __VA_ARGS__
#define _y59(...) __VA_ARGS__
#define _y60(...) __VA_ARGS__
#define _y61(...) __VA_ARGS__
#define _y62(...) __VA_ARGS__
#define _y63(...) __VA_ARGS__
#define _y64(...) __VA_ARGS__
#define _y65(...) __VA_ARGS__
#define _y66(...) __VA_ARGS__
#define _y67(...) __VA_ARGS__
#define _y68(...) __VA_ARGS__
#define _y69(...) __VA_ARGS__
#define _y70(...) __VA_ARGS__
#define _y71(...) __VA_ARGS__
#define _y72(...) __VA_ARGS__
#define _y73(...) __VA_ARGS__
#define _y74(...) __VA_ARGS__
#define _y75(...) __VA_ARGS__
#define _y76(...) __VA_ARGS__
#define _y77(...) __VA_ARGS__
#define _y78(...) __VA_ARGS__
#define _y79(...) __VA_ARGS__
#define _y80(...) __VA_ARGS__
#define _y81(...) __VA_ARGS__
#define _y82(...) __VA_ARGS__
#define _y83(...) __VA_ARGS__
#define _y84(...) __VA_ARGS__
#define _y85(...) __VA_ARGS__
#define _y86(...) __VA_ARGS__
#define _y87(...) __VA_ARGS__
#define _y88(...) __VA_ARGS__
#define _y89(...) __VA_ARGS__
#define _y90(...) __VA_ARGS__
#define _y91(...) __VA_ARGS__
#define _y92(...) __VA_ARGS__
#define _y93(...) __VA_ARGS__
#define _y94(...) __VA_ARGS__
#define _y95(...) __VA_ARGS__
#define _y96(...) __VA_ARGS__
#define _y97(...) __VA_ARGS__
#define _y98(...) __VA_ARGS__
#define _y99(...) __VA_ARGS__
#define _z00(...) __VA_ARGS__
#define _z01(...) __VA_ARGS__
#define _z02(...) __VA_ARGS__
#define _z03(...) __VA_ARGS__
#define _z04(...) __VA_ARGS__
#define _z05(...) __VA_ARGS__
#define _z06(...) __VA_ARGS__
#define _z07(...) __VA_ARGS__
#define _z08(...) __VA_ARGS__
#define _z09(...) __VA_ARGS__
#define _z10(...) __VA_ARGS__
#define _z11(...) __VA_ARGS__
#define _z12(...) __VA_ARGS__
#define _z13(...) __VA_ARGS__
#define _z14(...) __VA_ARGS__
#define _z15(...) __VA_ARGS__
#define _z16(...) __VA_ARGS__
#define _z17(...) __VA_ARGS__
#define _z18(...) __VA_ARGS__
#define _z19(...) __VA_ARGS__
#define _z20(...) __VA_ARGS__
#define _z21(...) __VA_ARGS__
#define _z22(...) __VA_ARGS__
#define _z23(...) __VA_ARGS__
#define _z24(...) __VA_ARGS__
#define _z25(...) __VA_ARGS__
#define _z26(...) __VA_ARGS__
#define _z27(...) __VA_ARGS__
#define _z28(...) __VA_ARGS__
#define _z29(...) __VA_ARGS__
#define _z30(...) __VA_ARGS__
#define _z31(...) __VA_ARGS__
#define _z32(...) __VA_ARGS__
#define _z33(...) __VA_ARGS__
#define _z34(...) __VA_ARGS__
#define _z35(...) __VA_ARGS__
#define _z36(...) __VA_ARGS__
#define _z37(...) __VA_ARGS__
#define _z38(...) __VA_ARGS__
#define _z39(...) __VA_ARGS__
#define _z40(...) __VA_ARGS__
#define _z41(...) __VA_ARGS__
#define _z42(...) __VA_ARGS__
#define _z43(...) __VA_ARGS__
#define _z44(...) __VA_ARGS__
#define _z45(...) __VA_ARGS__
#define _z46(...) __VA_ARGS__
#define _z47(...) __VA_ARGS__
#define _z48(...) __VA_ARGS__
#define _z49(...) __VA_ARGS__
#define _z50(...) __VA_ARGS__
#define _z51(...) __VA_ARGS__
#define _z52(...) __VA_ARGS__
#define _z53(...) __VA_ARGS__
#define _z54(...) __VA_ARGS__
#define _z55(...) __VA_ARGS__
#define _z56(...) __VA_ARGS__
#define _z57(...) __VA_ARGS__
#define _z58(...) __VA_ARGS__
#define _z59(...) __VA_ARGS__
#define _z60(...) __VA_ARGS__
#define _z61(...) __VA_ARGS__
#define _z62(...) __VA_ARGS__
#define _z63(...) __VA_ARGS__
#define _z64(...) __VA_ARGS__
#define _z65(...) __VA_ARGS__
#define _z66(...) __VA_ARGS__
#define _z67(...) __VA_ARGS__
#define _z68(...) __VA_ARGS__
#define _z69(...) __VA_ARGS__
#define _z70(...) __VA_ARGS__
#define _z71(...) __VA_ARGS__
#define _z72(...) __VA_ARGS__
#define _z73(...) __VA_ARGS__
#define _z74(...) __VA_ARGS__
#define _z75(...) __VA_ARGS__
#define _z76(...) __VA_ARGS__
#define _z77(...) __VA_ARGS__
#define _z78(...) __VA_ARGS__
#define _z79(...) __VA_ARGS__
#define _z80(...) __VA_ARGS__
#define _z81(...) __VA_ARGS__
#define _z82(...) __VA_ARGS__
#define _z83(...) __VA_ARGS__
#define _z84(...) __VA_ARGS__
#define _z85(...) __VA_ARGS__
#define _z86(...) __VA_ARGS__
#define _z87(...) __VA_ARGS__
#define _z88(...) __VA_ARGS__
#define _z89(...) __VA_ARGS__
#define _z90(...) __VA_ARGS__
#define _z91(...) __VA_ARGS__
#define _z92(...) __VA_ARGS__
#define _z93(...) __VA_ARGS__
#define _z94(...) __VA_ARGS__
#define _z95(...) __VA_ARGS__
#define _z96(...) __VA_ARGS__
#define _z97(...) __VA_ARGS__
#define _z98(...) __VA_ARGS__
#define _z99(...) __VA_ARGS__
#endif