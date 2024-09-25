#if !IN_PARSER
#define _m00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::lookaside_list_ex_t*)>*), "$ExAllocateFromLookasideListEx$ntoskrnl.exe", 0x0, 0x0, false, 0x6ee75556b6d51e7c)
#define _m01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocatePoolZero$ntoskrnl.exe", 0x0, 0x0, false, 0x93d399efc7729ed4)
#define _m02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAtsSvmDevicePowerCallback$ntoskrnl.exe", 0x0, 0x0, false, 0xf0d885d6665fcb0f)
#define _m03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBootAppErrorDiagCode$ntoskrnl.exe", 0x0, 0x0, false, 0x58a1734a26d54dc9)
#define _m04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBootLoaderMetadataLock$ntoskrnl.exe", 0x0, 0x0, false, 0xe0fd57f16b8469c4)
#define _m05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCancelDpcEventWait$ntoskrnl.exe", 0x0, 0x0, false, 0x6736f07fb7e58c59)
#define _m06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCreateDpcEvent$ntoskrnl.exe", 0x0, 0x0, false, 0xe9302b57932b764e)
#define _m07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCreatePool$ntoskrnl.exe", 0x0, 0x0, false, 0xfa87501c5b754e85)
#define _m08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDeferredFreePool$ntoskrnl.exe", 0x0, 0x0, false, 0x3d7faae85eaf002b)
#define _m09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDeleteDpcEvent$ntoskrnl.exe", 0x0, 0x0, false, 0x4b7e8b6d57a89f2d)
#define _m10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDestroyHandleTable$ntoskrnl.exe", 0x0, 0x0, false, 0xafb57f9c665bf9cd)
#define _m11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDestroyPool$ntoskrnl.exe", 0x0, 0x0, false, 0x71837fa31da270f8)
#define _m12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDrainPoolLookasideList$ntoskrnl.exe", 0x0, 0x0, false, 0xc32fc5c70c3c82a)
#define _m13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFastReferenceHandleTableEntry$ntoskrnl.exe", 0x0, 0x0, false, 0xef560602858cffac)
#define _m14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFreeLargePool$ntoskrnl.exe", 0x0, 0x0, false, 0xd4389e0a2e14872f)
#define _m15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFreePool2$ntoskrnl.exe", 0x0, 0x0, false, 0x44e77a5ef7b0c770)
#define _m16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::lookaside_list_ex_t*, void*)>*), "$ExFreeToLookasideListEx$ntoskrnl.exe", 0x0, 0x0, false, 0xd6b0d58522c03a89)
#define _m17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetCallBackBlockContext$ntoskrnl.exe", 0x0, 0x0, false, 0x4bb95f245ad1197f)
#define _m18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetHandlePointer$ntoskrnl.exe", 0x0, 0x0, false, 0xe6c4dd317a38d37b)
#define _m19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeDeviceAts$ntoskrnl.exe", 0x0, 0x0, false, 0x11f7633553c778a6)
#define _m20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializePoolDescriptor$ntoskrnl.exe", 0x0, 0x0, false, 0x5ed48103a76e369a)
#define _m21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsAppLicensed$ntoskrnl.exe", 0x0, 0x0, false, 0xbd0707cb932475d8)
#define _m22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsAppLicensedProduct$ntoskrnl.exe", 0x0, 0x0, false, 0x4d48f981fbe1f119)
#define _m23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsStateSeparationEnabled$ntoskrnl.exe", 0x0, 0x0, false, 0x6a0a52b623ba0bda)
#define _m24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsWindowsToGo$ntoskrnl.exe", 0x0, 0x0, false, 0x475f5af7ff19d2fc)
#define _m25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExLogTimeZoneInformation$ntoskrnl.exe", 0x0, 0x0, false, 0x6e0d63da7f7e5598)
#define _m26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolLimitState$ntoskrnl.exe", 0x0, 0x0, false, 0xf404ffde898f68d5)
#define _m27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolQueryLimits$ntoskrnl.exe", 0x0, 0x0, false, 0x6e6f818f5a93b08f)
#define _m28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolSetLimit$ntoskrnl.exe", 0x0, 0x0, false, 0x958c19ba08c99e8)
#define _m29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPreInitializeNls$ntoskrnl.exe", 0x0, 0x0, false, 0xba1d8776b8baa324)
#define _m30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExProcessCounterSetCallback$ntoskrnl.exe", 0x0, 0x0, false, 0x924a923af1f18904)
#define _m31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueryHandleExceptions$ntoskrnl.exe", 0x947ee4, 0x0, true, 0x235aa4094ec3d847)
#define _m32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueryRaiseUMExceptionOnInvalidHandleClose$ntoskrnl.exe", 0x76c740, 0x0, true, 0x1874bf24c0784dc3)
#define _m33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueueDpcEventWait$ntoskrnl.exe", 0x0, 0x0, false, 0xaa41f3e2dc02ab1b)
#define _m34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReArmFastCache$ntoskrnl.exe", 0x0, 0x0, false, 0x3cb4efddc0aaef82)
#define _m35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSecurePoolUpdate$ntoskrnl.exe", 0x0, 0x0, false, 0x50df7bc64c9e45e)
#define _m36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSecurePoolValidate$ntoskrnl.exe", 0x0, 0x0, false, 0xc94cfcabfa20b1b4)
#define _m37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExShareUltraSpaceWithDevice$ntoskrnl.exe", 0x0, 0x0, false, 0x31ff5f254d8b8367)
#define _m38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExTryQueueWorkItemFromIo$ntoskrnl.exe", 0x0, 0x0, false, 0xc18f4b1e0f6e04b8)
#define _m39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExUninitializeDeviceAts$ntoskrnl.exe", 0x0, 0x0, false, 0xabe901c9df3fd978)
#define _m40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExUpdateLicenseRegistry$ntoskrnl.exe", 0x0, 0x0, false, 0x9783acef8f6e5f6)
#define _m41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWnfHiveUnloaded$ntoskrnl.exe", 0x0, 0x0, false, 0x62402e99c838208f)
#define _m42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCleanupSessionHeapManager$ntoskrnl.exe", 0x385e68, 0x0, true, 0x166387b2c63d2)
#define _m43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeNls$ntoskrnl.exe", 0x0, 0x0, false, 0xa1677d7f0458aaa4)
#define _m44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeSessionHeapManager$ntoskrnl.exe", 0x399f84, 0x0, true, 0x35f27be2f7e001d2)
#define _m45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAcquireFastResourceExclusive$ntoskrnl.exe", 0x38b610, 0x0, true, 0x32cc0e95f15f5775)
#define _m46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAcquireFastResourceShared$ntoskrnl.exe", 0x38bcf0, 0x0, true, 0xa5351f86037f7302)
#define _m47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAcquireFastResourceSharedStarveExclusive$ntoskrnl.exe", 0x38b9f0, 0x0, true, 0x7a58d2814a569612)
#define _m48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExActivationObjectType$ntoskrnl.exe", 0xcfb7b0, 0x0, true, 0xb75af82d21a45a75)
#define _m49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocateContiguousHeapPool$ntoskrnl.exe", 0x2f93b0, 0x0, true, 0xaae769ca00f87fae)
#define _m50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocateHeapPages$ntoskrnl.exe", 0x371ec8, 0x0, true, 0x4d3c001332f94d73)
#define _m51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocateHeapPool$ntoskrnl.exe", 0x24ff10, 0x0, true, 0xf21710db538e3fc8)
#define _m52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocateHeapSpecialPool$ntoskrnl.exe", 0x5b3b3c, 0x0, true, 0xe455c943b73253f3)
#define _m53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(uint64_t, uint64_t, uint32_t)>*), "$ExAllocatePool2$ntoskrnl.exe", 0x9b1280, 0x0, true, 0xf6ef71c9028e7665)
#define _m54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(uint64_t, uint64_t, uint32_t, const struct ndis::pool_extended_parameter_t*, uint32_t)>*), "$ExAllocatePool3$ntoskrnl.exe", 0x9b1340, 0x0, true, 0xc29bca40d1db5d86)
#define _m55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(uint64_t, uint64_t, uint32_t, uint32_t)>*), "$ExAllocatePoolMm$ntoskrnl.exe", 0x2a1070, 0x0, true, 0x7a170a112a28626e)
#define _m56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocatePrivateWorkerPool$ntoskrnl.exe", 0x7ac1a4, 0x0, true, 0x321360094c0a3a0c)
#define _m57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocateTimerInternal2$ntoskrnl.exe", 0x35bc40, 0x0, true, 0xe8bcd5ac5e9e4728)
#define _m58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCheckFullProcessInformationAccess$ntoskrnl.exe", 0x70daa4, 0x0, true, 0x9083934455e458bc)
#define _m59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCheckValidIRTimerId$ntoskrnl.exe", 0x37e694, 0x0, true, 0xb1ba9092d7401cab)
#define _m60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExConvertFastResourceExclusiveToShared$ntoskrnl.exe", 0x5ade40, 0x0, true, 0xca1f8be78979bab9)
#define _m61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCreateHandle$ntoskrnl.exe", 0x947c80, 0x0, true, 0x3afcadd3bace8d33)
#define _m62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCreateHeap$ntoskrnl.exe", 0x39a108, 0x0, true, 0x8d5bb809cdd98ec9)
#define _m63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCrossVmEventObjectType$ntoskrnl.exe", 0xc15ed8, 0x0, true, 0x59a51012c322d888)
#define _m64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCrossVmMutantObjectType$ntoskrnl.exe", 0xc15ee0, 0x0, true, 0xf226a366206686c0)
#define _m65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDeleteFastResource$ntoskrnl.exe", 0x390560, 0x0, true, 0xaaf8a4e080bb4746)
#define _m66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDisownFastResource$ntoskrnl.exe", 0x38c0d0, 0x0, true, 0x5b9433057db33ce9)
#define _m67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFreeHeapPool$ntoskrnl.exe", 0x24c790, 0x0, true, 0x81d068a0d0428702)
#define _m68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetAttachedSessionPoolTagInfo$ntoskrnl.exe", 0x6bc988, 0x0, true, 0x1c774929b9717021)
#define _m69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<enum nt::firmware_type_t()>*), "$ExGetFirmwareType$ntoskrnl.exe", 0x3cbdc0, 0x0, true, 0x8279194611062f4b)
#define _m70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetHeapFromType$ntoskrnl.exe", 0x2f95dc, 0x0, true, 0xecf6b97a5b983646)
#define _m71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetHeapFromVA$ntoskrnl.exe", 0x2ac2ac, 0x0, true, 0xcf0b43e543d93498)
#define _m72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetSessionBigPoolInformation$ntoskrnl.exe", 0x9456b0, 0x0, true, 0xae16b2a970605bcb)
#define _m73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetSessionPoolTagInfo$ntoskrnl.exe", 0x2f82e8, 0x0, true, 0xe913573c9e655d72)
#define _m74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetSessionPoolTagInformation$ntoskrnl.exe", 0x6bc79c, 0x0, true, 0xaf6c7131b164a1c1)
#define _m75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExHeapQueryPoolUsage$ntoskrnl.exe", 0x2040c8, 0x0, true, 0xabd3f71a000d0318)
#define _m76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitLicenseCallback$ntoskrnl.exe", 0x7be158, 0x0, true, 0x34c95c7430d091dc)
#define _m77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeFastOwnerEntry$ntoskrnl.exe", 0x38d600, 0x0, true, 0xc3ddeb25a70ebecb)
#define _m78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeFastResource$ntoskrnl.exe", 0x396580, 0x0, true, 0xddca5f37f7c58251)
#define _m79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeLeapSecondData$ntoskrnl.exe", 0xa53534, 0x0, true, 0xa1001ddb9b0417fc)
#define _m80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializePagedHeaps$ntoskrnl.exe", 0x3bfc40, 0x0, true, 0x5f281b445b722db9)
#define _m81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializePoolHeapManagement$ntoskrnl.exe", 0x3bfa34, 0x0, true, 0x389ec9ebd9f1c4a9)
#define _m82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializePoolTracker$ntoskrnl.exe", 0xa6496c, 0x0, true, 0x178908e0fbc86e79)
#define _m83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsFastResourceContended$ntoskrnl.exe", 0x5adf90, 0x0, true, 0x680f319a41cca9d6)
#define _m84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsFastResourceHeld$ntoskrnl.exe", 0x38b940, 0x0, true, 0x367d548c90c83ea0)
#define _m85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsFastResourceHeldExclusive$ntoskrnl.exe", 0x38d740, 0x0, true, 0x7e74288453465c01)
#define _m86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsSpecialPoolAddress$ntoskrnl.exe", 0x5b3e80, 0x0, true, 0xc517bb5c64c3874)
#define _m87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExKsrInterface$ntoskrnl.exe", 0xc196c0, 0x0, true, 0xdf2c41c93f825007)
#define _m88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExLeapSecondData$ntoskrnl.exe", 0xc192e8, 0x0, true, 0x9e359cd09d22f785)
#define _m89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExLeapSecondDataLastParseResult$ntoskrnl.exe", 0xd2c7cc, 0x0, true, 0x73b594af3f3ea277)
#define _m90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExLeapSecondDataSectionPointer$ntoskrnl.exe", 0xd2cbc8, 0x0, true, 0x4512dd990418fb17)
#define _m91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolCleanupExpansionTable$ntoskrnl.exe", 0x385de8, 0x0, true, 0x96555079f0e58e0e)
#define _m92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolState$ntoskrnl.exe", 0xc54580, 0x0, true, 0xe88c628cf753ea31)
#define _m93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueryBigPoolTag$ntoskrnl.exe", 0x5ad920, 0x0, true, 0x95f69ba53ff5fbbf)
#define _m94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueueWorkItemToPartition$ntoskrnl.exe", 0x23505c, 0x0, true, 0x3387a81b4bd47a67)
#define _m95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExRebootSystemForRecovery$ntoskrnl.exe", 0x5ac3f8, 0x0, true, 0x5ae414cd060cf869)
#define _m96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExRecordOneTimerExpiry$ntoskrnl.exe", 0x5b04f0, 0x0, true, 0x86c4ee128414130a)
#define _m97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReinitializeFastResource$ntoskrnl.exe", 0x391370, 0x0, true, 0x74893b1277300f81)
#define _m98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReleaseDisownedFastResource$ntoskrnl.exe", 0x38aeb0, 0x0, true, 0xfe3a79668c613e75)
#define _m99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReleaseDisownedFastResourceExclusive$ntoskrnl.exe", 0x5ae000, 0x0, true, 0x3968c8b346fa40eb)
#define _n00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReleaseDisownedFastResourceShared$ntoskrnl.exe", 0x5ae110, 0x0, true, 0x86cb4cb2906b8d21)
#define _n01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReleaseFastResource$ntoskrnl.exe", 0x38b230, 0x0, true, 0x8c61d7b22a8973da)
#define _n02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReleaseFastResourceExclusive$ntoskrnl.exe", 0x5ae230, 0x0, true, 0x9ed93f355df2fc1d)
#define _n03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReleaseFastResourceShared$ntoskrnl.exe", 0x5ae360, 0x0, true, 0x1f013e747328f479)
#define _n04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExRemovePoolTag$ntoskrnl.exe", 0x2fab78, 0x0, true, 0x22571d5132c74ce4)
#define _n05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSaAllocate$ntoskrnl.exe", 0x38df04, 0x0, true, 0xf7aaeb28ef011c1c)
#define _n06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSaFree$ntoskrnl.exe", 0x390d1c, 0x0, true, 0xa4c2ed180ab4d251)
#define _n07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSetLeapSecondEnabled$ntoskrnl.exe", 0x946f14, 0x0, true, 0xbfea6bd884799b51)
#define _n08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSoftRebootState$ntoskrnl.exe", 0xc54564, 0x0, true, 0x86a8ae165235b5d6)
#define _n09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExStartRecordingIRTimerExpiries$ntoskrnl.exe", 0x94a674, 0x0, true, 0xce2c373f567ec197)
#define _n10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExStopRecordingIRTimerExpiries$ntoskrnl.exe", 0x94a700, 0x0, true, 0xe205b9b7aa9f7f3f)
#define _n11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSvmBeginDeviceReset$ntoskrnl.exe", 0x5b1cc0, 0x0, true, 0x55bf8dac97f3df0f)
#define _n12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSvmDevicePowerCallback$ntoskrnl.exe", 0x5b20b0, 0x0, true, 0xe8799d3ee4b04e07)
#define _n13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSvmFinalizeDeviceReset$ntoskrnl.exe", 0x5b20f0, 0x0, true, 0x21253dea9b2f497)
#define _n14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExTryToConvertFastResourceSharedToExclusive$ntoskrnl.exe", 0x5ae4a0, 0x0, true, 0xfe5e593115e24cd)
#define _n15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWnfCleanupServerSiloState$ntoskrnl.exe", 0x958020, 0x0, true, 0x3b8bcbf706808d48)
#define _n16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWnfCrossVmCallback$ntoskrnl.exe", 0x9512f0, 0x0, true, 0x17e2a15071883d9d)
#define _n17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_auto_expand_t*, uint32_t)>*), "$ExAcquireAutoExpandPushLockExclusive$ntoskrnl.exe", 0x2f6030, 0x0, true, 0x1f83583c1ac22c8d)
#define _n18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct ex::push_lock_auto_expand_t*, uint32_t)>*), "$ExAcquireAutoExpandPushLockShared$ntoskrnl.exe", 0x359730, 0x0, true, 0x41f8cc03d0fd3e3)
#define _n19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*)>*), "$ExAcquireCacheAwarePushLockExclusive$ntoskrnl.exe", 0x359bf0, 0x0, true, 0x7fa0989d7ac32e83)
#define _n20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*), "$ExAcquireCacheAwarePushLockExclusiveEx$ntoskrnl.exe", 0x3f1230, 0x0, true, 0xa05dcb1e74198da5)
#define _n21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct ex::push_lock_t*(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*/*types differ*/), "$ExAcquireCacheAwarePushLockSharedEx$ntoskrnl.exe", 0x260440, 0x0, true, 0x16f28d37c8d64f26)
#define _n22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::fast_mutex_t*)>*), "$ExAcquireFastMutex$ntoskrnl.exe", 0x2600d0, 0x0, true, 0x15038f58a23b5dc)
#define _n23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::fast_mutex_t*)>*), "$ExAcquireFastMutexUnsafe$ntoskrnl.exe", 0x25bc80, 0x0, true, 0x13d7a15e64e9a0aa)
#define _n24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_t*, uint32_t)>*/*types differ*/), "$ExAcquirePushLockExclusiveEx$ntoskrnl.exe", 0x2609e0, 0x0, true, 0x57ab62e4ceb59cf8)
#define _n25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_t*, uint32_t)>*/*types differ*/), "$ExAcquirePushLockSharedEx$ntoskrnl.exe", 0x260ba0, 0x0, true, 0x11965002dbed5386)
#define _n26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::eresource_t*, uint8_t)>*), "$ExAcquireResourceExclusiveLite$ntoskrnl.exe", 0x261c10, 0x0, true, 0x1a4115ef1e3939ce)
#define _n27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::eresource_t*, uint8_t)>*), "$ExAcquireResourceSharedLite$ntoskrnl.exe", 0x261fd0, 0x0, true, 0x10aac99816581d06)
#define _n28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::rundown_ref_t*)>*), "$ExAcquireRundownProtection$ntoskrnl.exe", 0x2068e0, 0x0, true, 0x5638fba7b37bc656)
#define _n29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::rundown_ref_cache_aware_t*)>*), "$ExAcquireRundownProtectionCacheAware$ntoskrnl.exe", 0x2eac50, 0x0, true, 0xa5e7f4c534f95a90)
#define _n30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::rundown_ref_cache_aware_t*, uint32_t)>*), "$ExAcquireRundownProtectionCacheAwareEx$ntoskrnl.exe", 0x2c2730, 0x0, true, 0xc992f9ca0080c8d5)
#define _n31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::rundown_ref_t*, uint32_t)>*), "$ExAcquireRundownProtectionEx$ntoskrnl.exe", 0x2c2780, 0x0, true, 0x45f9f5b3b22256ed)
#define _n32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::eresource_t*, uint8_t)>*), "$ExAcquireSharedStarveExclusive$ntoskrnl.exe", 0x2838f0, 0x0, true, 0xa9f6e8c3400ad905)
#define _n33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::eresource_t*, uint8_t)>*), "$ExAcquireSharedWaitForExclusive$ntoskrnl.exe", 0x5aeb60, 0x0, true, 0xc21e69a57269c304)
#define _n34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(volatile int32_t*)>*), "$ExAcquireSpinLockExclusive$ntoskrnl.exe", 0x23c6e0, 0x0, true, 0xd1c381b0a560abbe)
#define _n35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(volatile int32_t*)>*), "$ExAcquireSpinLockExclusiveAtDpcLevel$ntoskrnl.exe", 0x2a37d0, 0x0, true, 0x1db190802a58c51b)
#define _n36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(volatile int32_t*)>*), "$ExAcquireSpinLockShared$ntoskrnl.exe", 0x2814c0, 0x0, true, 0x7ad9dc012f6b71b8)
#define _n37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(volatile int32_t*)>*), "$ExAcquireSpinLockSharedAtDpcLevel$ntoskrnl.exe", 0x27d890, 0x0, true, 0x9c0be55d7d623723)
#define _n38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAcquireTimeRefreshLock$ntoskrnl.exe", 0x5d0be8, 0x0, true, 0x5b7d625dd59603cc)
#define _n39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAddPrivateDataToCrashDump$ntoskrnl.exe", 0x5ad340, 0x0, true, 0xa9f12ad8e8474b69)
#define _n40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct ex::push_lock_auto_expand_t*(uint32_t)>*), "$ExAllocateAutoExpandPushLock$ntoskrnl.exe", 0x38ee70, 0x0, true, 0x27d737d73ca854a2)
#define _n41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct ex::push_lock_cache_aware_legacy_t*(uint32_t)>*), "$ExAllocateCacheAwarePushLock$ntoskrnl.exe", 0x3c3e70, 0x0, true, 0xea47b4255471f7fd)
#define _n42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct ex::rundown_ref_cache_aware_t*(enum nt::pool_type_t, uint32_t)>*), "$ExAllocateCacheAwareRundownProtection$ntoskrnl.exe", 0x7022c0, 0x0, true, 0x73a9ba108ac53fac)
#define _n43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocateCallBack$ntoskrnl.exe", 0x7879d0, 0x0, true, 0x59f038ed5b20ed8e)
#define _n44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::npaged_lookaside_list_t*)>*), "$ExAllocateFromNPagedLookasideList$ntoskrnl.exe", 0x2c1284, 0x0, true, 0xf52b559c47b62cf7)
#define _n45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::paged_lookaside_list_t*)>*), "$ExAllocateFromPagedLookasideList$ntoskrnl.exe", 0x2c1284, 0x0, true, 0x7bc6cd80b6438e59)
#define _n46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(enum nt::pool_type_t, uint64_t)>*), "$ExAllocatePool$ntoskrnl.exe", 0x322500, 0x0, true, 0x337d267359c1006d)
#define _n47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocatePoolEx$ntoskrnl.exe", 0x25c5c0, 0x0, true, 0x3401d1a5cf5e53f9)
#define _n48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExAllocatePoolSanityChecks$ntoskrnl.exe", 0x9e9d84, 0x0, true, 0xa75159e47241ad49)
#define _n49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(enum nt::pool_type_t, uint64_t)>*), "$ExAllocatePoolWithQuota$ntoskrnl.exe", 0x5ad3d0, 0x0, true, 0x416755c60f90a2de)
#define _n50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t)>*), "$ExAllocatePoolWithQuotaTag$ntoskrnl.exe", 0x2421d0, 0x0, true, 0x42614616fb413f08)
#define _n51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t)>*), "$ExAllocatePoolWithTag$ntoskrnl.exe", 0x9b1030, 0x0, true, 0x2b3be6896809ee2a)
#define _n52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t, enum ex::pool_priority_t)>*), "$ExAllocatePoolWithTagPriority$ntoskrnl.exe", 0x24fde0, 0x0, true, 0x610d921a149eecfc)
#define _n53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct ex::timer_t*(sdk::function<void(struct ex::timer_t*, void*)>*, void*, uint32_t)>*), "$ExAllocateTimer$ntoskrnl.exe", 0x35bc10, 0x0, true, 0x4c989e72035b5d21)
#define _n54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct ex::timer_t*(sdk::function<void(struct ex::timer_t*, void*)>*, void*, uint32_t)>*), "$ExAllocateTimerInternal$ntoskrnl.exe", 0x5afe00, 0x0, true, 0x28c3b8184217260b)
#define _n55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t*, volatile void*, void*, uint64_t, int64_t*)>*), "$ExBlockOnAddressPushLock$ntoskrnl.exe", 0x2ebc50, 0x0, true, 0x3287b53c76fe0350)
#define _n56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBlockPushLock$ntoskrnl.exe", 0x2ebd10, 0x0, true, 0x75480ad1fa255087)
#define _n57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBootAppFailureStatus$ntoskrnl.exe", 0xcf9e28, 0x0, true, 0x41b7978f9e20da4a)
#define _n58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBootDeviceList$ntoskrnl.exe", 0xc19150, 0x0, true, 0x5da2b942c1211263)
#define _n59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBootDeviceListSpinLock$ntoskrnl.exe", 0xc19198, 0x0, true, 0x68972b55748c8e99)
#define _n60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBootDeviceRemovalHandler$ntoskrnl.exe", 0xc19160, 0x0, true, 0x5c26819d1ada8c24)
#define _n61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBootDevicesRemovedEvent$ntoskrnl.exe", 0xc19180, 0x0, true, 0x512818b6758646da)
#define _n62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBootLoaderMetadata$ntoskrnl.exe", 0xc54558, 0x0, true, 0x67535dd513ca687a)
#define _n63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExBurnMemory$ntoskrnl.exe", 0xa8a0c8, 0x0, true, 0xee7ac56374be1908)
#define _n64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCallCallBack$ntoskrnl.exe", 0x63731c, 0x0, true, 0x1740da5a7473769f)
#define _n65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCallSessionCallBack$ntoskrnl.exe", 0x710788, 0x0, true, 0x4f539d1d0036b842)
#define _n66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCallbackObjectType$ntoskrnl.exe", 0xcfb938, 0x0, true, 0x4c73f7819ca91a17)
#define _n67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::timer_t*, void*)>*), "$ExCancelTimer$ntoskrnl.exe", 0x35b320, 0x0, true, 0xaf2231540053cff1)
#define _n68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCbEnlightenmentState$ntoskrnl.exe", 0xc19230, 0x0, true, 0xb3c145ef45f68f67)
#define _n69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCbPhase1InitComplete$ntoskrnl.exe", 0xc19208, 0x0, true, 0xe2cfe35d47f7caf0)
#define _n70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCbPowerState$ntoskrnl.exe", 0xc19200, 0x0, true, 0x204f35539bc28375)
#define _n71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCbProcessorAdd$ntoskrnl.exe", 0xc191f8, 0x0, true, 0xdfb3de69ae57e362)
#define _n72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCbSeImageVerificationDriverInfo$ntoskrnl.exe", 0xc19240, 0x0, true, 0xa1a228116aba3e07)
#define _n73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCbSetSystemState$ntoskrnl.exe", 0xc19210, 0x0, true, 0x2a750a084f60325e)
#define _n74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCbSetSystemTime$ntoskrnl.exe", 0xc19238, 0x0, true, 0xcbc6c1b603894605)
#define _n75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCheckSingleFilter$ntoskrnl.exe", 0x5ad3ec, 0x0, true, 0xe9d9be722f772842)
#define _n76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCleanTimerResolutionRequest$ntoskrnl.exe", 0x369d84, 0x0, true, 0xd6be7ae47bc95bbf)
#define _n77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_auto_expand_t*)>*), "$ExCleanupAutoExpandPushLock$ntoskrnl.exe", 0x2d4de0, 0x0, true, 0x35dd3fe82cabee13)
#define _n78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*), "$ExCleanupRundownProtectionCacheAware$ntoskrnl.exe", 0x3973d0, 0x0, true, 0xe969459f3b00518c)
#define _n79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExClearPoolFlags$ntoskrnl.exe", 0x5ad428, 0x0, true, 0xebd677f9b6f6f8e7)
#define _n80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCompareExchangeCallBack$ntoskrnl.exe", 0x3af4dc, 0x0, true, 0x7ddc7b43ebdc8629)
#define _n81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCompositionObjectType$ntoskrnl.exe", 0xcfb7c0, 0x0, true, 0x8997fade51f5079b)
#define _n82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExComputeTickCountMultiplier$ntoskrnl.exe", 0xa6af74, 0x0, true, 0x2f5c1976cfc4917f)
#define _n83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::eresource_t*)>*), "$ExConvertExclusiveToSharedLite$ntoskrnl.exe", 0x3039a0, 0x0, true, 0xa300653f689304b3)
#define _n84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_t*)>*), "$ExConvertPushLockExclusiveToShared$ntoskrnl.exe", 0x3f1210, 0x0, true, 0xad0b62528f228592)
#define _n85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCopyWakeTimerInfo$ntoskrnl.exe", 0x5afe30, 0x0, true, 0x8d6dc273b16221ca)
#define _n86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCoreMessagingObjectType$ntoskrnl.exe", 0xcfb7a0, 0x0, true, 0x11638ffdb6b9a8d0)
#define _n87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCovMaxPagedPoolToUse$ntoskrnl.exe", 0xc11f58, 0x0, true, 0xee56b67b9b2dadc0)
#define _n88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCovReadjustUnloadedModuleEntry$ntoskrnl.exe", 0x75e478, 0x0, true, 0xd3c8d308e301aa43)
#define _n89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCpuSetResourceManagerAccessCheck$ntoskrnl.exe", 0x202268, 0x0, true, 0x59382233dac1375)
#define _n90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::callback_object_t**, struct nt::object_attributes_t*, uint8_t, uint8_t)>*), "$ExCreateCallback$ntoskrnl.exe", 0x6e6b90, 0x0, true, 0x85d8d16af75ecafc)
#define _n91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCreateHandleEx$ntoskrnl.exe", 0x61d5d0, 0x0, true, 0x775ddb5b0a076474)
#define _n92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCreateHandleTable$ntoskrnl.exe", 0x69f1c8, 0x0, true, 0xabfa6069dc25d56b)
#define _n93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCreatePoolTagTable$ntoskrnl.exe", 0x78214c, 0x0, true, 0x1248e54d9d368704)
#define _n94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExCriticalWorkerThreads$ntoskrnl.exe", 0xc167cc, 0x0, true, 0xe01381ed9dd7c485)
#define _n95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDelayedWorkerThreads$ntoskrnl.exe", 0xc16718, 0x0, true, 0x879d47b9987e52df)
#define _n96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::lookaside_list_ex_t*)>*), "$ExDeleteLookasideListEx$ntoskrnl.exe", 0x30ebb0, 0x0, true, 0x5c805d9cf030ffd9)
#define _n97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::npaged_lookaside_list_t*)>*), "$ExDeleteNPagedLookasideList$ntoskrnl.exe", 0x3974a0, 0x0, true, 0x2b8bb47954d1bf71)
#define _n98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::paged_lookaside_list_t*)>*), "$ExDeletePagedLookasideList$ntoskrnl.exe", 0x30eb30, 0x0, true, 0xd86eb653c91c93e9)
#define _n99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDeletePoolTagTable$ntoskrnl.exe", 0x5ad43c, 0x0, true, 0x2b0d8392d79eca43)
#define _o00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::eresource_t*)>*), "$ExDeleteResourceLite$ntoskrnl.exe", 0x231040, 0x0, true, 0xde8202df710396b0)
#define _o01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::timer_t*, uint8_t, uint8_t, struct ext::delete_parameters_t*)>*), "$ExDeleteTimer$ntoskrnl.exe", 0x35b3a0, 0x0, true, 0x84a45a0de5385503)
#define _o02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDeleteWakeTimerInfo$ntoskrnl.exe", 0x30d8c0, 0x0, true, 0xbef288ab5fd0e075)
#define _o03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDereferenceCallBackBlock$ntoskrnl.exe", 0x2a5ad0, 0x0, true, 0xf89d2e4a94ec12b2)
#define _o04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDereferenceHandleDebugInfo$ntoskrnl.exe", 0x947ca4, 0x0, true, 0xd18c5c5f371ec4be)
#define _o05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDesktopObjectType$ntoskrnl.exe", 0xcfb7c8, 0x0, true, 0x82748870c7dbb12d)
#define _o06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDestroyHandle$ntoskrnl.exe", 0x5f1908, 0x0, true, 0xc97c5597c12d3662)
#define _o07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDisableAllLookasideLists$ntoskrnl.exe", 0x5b06ac, 0x0, true, 0xe22f1a71e7ab3f4)
#define _o08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDisableHandleTracing$ntoskrnl.exe", 0x5ac788, 0x0, true, 0x1a4a983792f6ea98)
#define _o09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::eresource_t*)>*), "$ExDisableResourceBoostLite$ntoskrnl.exe", 0x315310, 0x0, true, 0xec29691434c8b79c)
#define _o10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExDupHandleTable$ntoskrnl.exe", 0x670ba0, 0x0, true, 0x9cfe857493709cd1)
#define _o11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExEnableHandleExceptions$ntoskrnl.exe", 0x6e3e3c, 0x0, true, 0xe0ab46607674b71f)
#define _o12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExEnableHandleTracing$ntoskrnl.exe", 0x947d04, 0x0, true, 0xc12ca9d7e16e162e)
#define _o13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExEnableRaiseUMExceptionOnInvalidHandleClose$ntoskrnl.exe", 0x6d7f54, 0x0, true, 0xefb9ceae9ec20369)
#define _o14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::fast_mutex_t*)>*), "$ExEnterCriticalRegionAndAcquireFastMutexUnsafe$ntoskrnl.exe", 0x2f31e0, 0x0, true, 0x855e00a348f0b05e)
#define _o15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::eresource_t*)>*), "$ExEnterCriticalRegionAndAcquireResourceExclusive$ntoskrnl.exe", 0x261f10, 0x0, true, 0xdf4138e1d4e21bbc)
#define _o16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::eresource_t*)>*), "$ExEnterCriticalRegionAndAcquireResourceShared$ntoskrnl.exe", 0x2e9570, 0x0, true, 0x959d47eca64cd2dd)
#define _o17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::eresource_t*)>*), "$ExEnterCriticalRegionAndAcquireSharedWaitForExclusive$ntoskrnl.exe", 0x5af140, 0x0, true, 0x85f313149df7a2ae)
#define _o18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::eresource_t*)>*), "$ExEnterPriorityRegionAndAcquireResourceExclusive$ntoskrnl.exe", 0x5af180, 0x0, true, 0xb9018424c21751a5)
#define _o19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::eresource_t*)>*), "$ExEnterPriorityRegionAndAcquireResourceShared$ntoskrnl.exe", 0x2edf30, 0x0, true, 0xba3d24cea13c548b)
#define _o20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExEnumHandleTable$ntoskrnl.exe", 0x6b7cf0, 0x0, true, 0x88e18af4c9b379bb)
#define _o21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, uint32_t, uint32_t*)>*), "$ExEnumerateSystemFirmwareTables$ntoskrnl.exe", 0x9455c0, 0x0, true, 0x4a46e4f6d575b4a5)
#define _o22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExEventObjectType$ntoskrnl.exe", 0xcfb4a0, 0x0, true, 0x4ceeafd158489792)
#define _o23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::zone_header_t*, void*, uint32_t)>*), "$ExExtendZone$ntoskrnl.exe", 0x5b0970, 0x0, true, 0xb9e67fbac9e74c60)
#define _o24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExExternalBootSupportInitializationEvent$ntoskrnl.exe", 0xc191a0, 0x0, true, 0x5fb081885fda98b8)
#define _o25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFastReplenishHandleTableEntry$ntoskrnl.exe", 0x319e90, 0x0, true, 0x1aa5c1308bc0017a)
#define _o26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::lookaside_list_ex_t*)>*), "$ExFlushLookasideListEx$ntoskrnl.exe", 0x30ebf0, 0x0, true, 0xe48f56c478795e47)
#define _o27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFlushTb$ntoskrnl.exe", 0x5b0fd8, 0x0, true, 0xc174b49a2e1e1ccd)
#define _o28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_auto_expand_t*)>*), "$ExFreeAutoExpandPushLock$ntoskrnl.exe", 0x38ef40, 0x0, true, 0xe34aae55d7486093)
#define _o29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*)>*), "$ExFreeCacheAwarePushLock$ntoskrnl.exe", 0x5adc20, 0x0, true, 0xd147b95771e19f1e)
#define _o30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*), "$ExFreeCacheAwareRundownProtection$ntoskrnl.exe", 0x2f3340, 0x0, true, 0x52dfa0a84ed60af7)
#define _o31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFreeCallBack$ntoskrnl.exe", 0x6e26b0, 0x0, true, 0xec7d4369890ce6f)
#define _o32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$ExFreePool$ntoskrnl.exe", 0x9b1010, 0x0, true, 0x34e494c200ac4de4)
#define _o33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFreePoolEx$ntoskrnl.exe", 0x30d8c0, 0x0, true, 0x2802043aaab977ed)
#define _o34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFreePoolSanityChecks$ntoskrnl.exe", 0x9e9ef0, 0x0, true, 0x2ad8c6cc3566bf93)
#define _o35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "$ExFreePoolWithTag$ntoskrnl.exe", 0x9b1010, 0x0, true, 0xf4779d881783cf88)
#define _o36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExFreeSvmAsid$ntoskrnl.exe", 0x318fcc, 0x0, true, 0xd67f3e84ab97e604)
#define _o37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::npaged_lookaside_list_t*, void*)>*), "$ExFreeToNPagedLookasideList$ntoskrnl.exe", 0x2d7298, 0x0, true, 0x5c32161d45f50d96)
#define _o38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::paged_lookaside_list_t*, void*)>*), "$ExFreeToPagedLookasideList$ntoskrnl.exe", 0x2d7298, 0x0, true, 0x5e10d9c4d01f69c3)
#define _o39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(enum ex::gen_random_domain_t)>*), "$ExGenRandom$ntoskrnl.exe", 0x2a9670, 0x0, true, 0x9ac6d0ab7562320a)
#define _o40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetBigPoolInfo$ntoskrnl.exe", 0x5ad54c, 0x0, true, 0xeac1ead83f32eeed)
#define _o41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetCallBackBlockRoutine$ntoskrnl.exe", 0x37f220, 0x0, true, 0xd6bb317796104b8b)
#define _o42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t*, uint32_t*, uint32_t*)>*), "$ExGetCurrentProcessorCounts$ntoskrnl.exe", 0x2fcc00, 0x0, true, 0x9bfa89aa68addbdf)
#define _o43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t*)>*), "$ExGetCurrentProcessorCpuUsage$ntoskrnl.exe", 0x5aba60, 0x0, true, 0xe30a2150af20b6a)
#define _o44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::eresource_t*)>*), "$ExGetExclusiveWaiterCount$ntoskrnl.exe", 0x5af1d0, 0x0, true, 0xeaefc01390f8eadc)
#define _o45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetExpirationDate$ntoskrnl.exe", 0x790bd4, 0x0, true, 0xfe436bd879a0aadd)
#define _o46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetExtensionTable$ntoskrnl.exe", 0x2d3fe8, 0x0, true, 0x4bfc8baa78732801)
#define _o47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t*, uint32_t*)>*), "$ExGetFirmwareEnvironmentVariable$ntoskrnl.exe", 0x6e9e90, 0x0, true, 0x2ddc98fb6751d7e1)
#define _o48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(enum nt::licensing_tamper_state_t*)>*), "$ExGetLicenseTamperState$ntoskrnl.exe", 0x948860, 0x0, true, 0x88ecd6cc8155bf8a)
#define _o49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetNextProcess$ntoskrnl.exe", 0x5ef0b4, 0x0, true, 0xc0b040d73715ea5d)
#define _o50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetNextWakeTime$ntoskrnl.exe", 0x9af118, 0x0, true, 0x673eb77a9f3171ed)
#define _o51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetNextWakeTimeForDeepSleep$ntoskrnl.exe", 0x5afe94, 0x0, true, 0xe3a5f34dcf37e137)
#define _o52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetPoolTagInfo$ntoskrnl.exe", 0x6c536c, 0x0, true, 0xfdd51b099dc8e138)
#define _o53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char()>*), "$ExGetPreviousMode$ntoskrnl.exe", 0x2042c0, 0x0, true, 0xd49854426bf07647)
#define _o54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::eresource_t*)>*), "$ExGetSharedWaiterCount$ntoskrnl.exe", 0x5af210, 0x0, true, 0x81e509bb50ceccbd)
#define _o55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetSuiteMask$ntoskrnl.exe", 0x7a7c70, 0x0, true, 0xbf369617c2da580)
#define _o56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, void*, uint32_t, uint32_t*)>*), "$ExGetSystemFirmwareTable$ntoskrnl.exe", 0x7ba7b0, 0x0, true, 0x3c0d7117a6731531)
#define _o57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExGetWakeTimerList$ntoskrnl.exe", 0x5aff08, 0x0, true, 0x81a7c21c6431844a)
#define _o58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExHandleLogBadReference$ntoskrnl.exe", 0x2011b8, 0x0, true, 0xee2e38b2063a2abe)
#define _o59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExHandleTableQuery$ntoskrnl.exe", 0x616650, 0x0, true, 0x1821a44d8d45842d)
#define _o60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExHandleTraceDbDefaultStacks$ntoskrnl.exe", 0x97ee24, 0x0, true, 0x78b81f95ba9be6c8)
#define _o61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExHandleTraceDbMaxStacks$ntoskrnl.exe", 0x97ec44, 0x0, true, 0x4160984573fd5103)
#define _o62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExHandleTraceDbMinStacks$ntoskrnl.exe", 0x97ec58, 0x0, true, 0xc215a2ff1deaeb2)
#define _o63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitPoolLookasidePointers$ntoskrnl.exe", 0x997be8, 0x0, true, 0x795099ac92d96d14)
#define _o64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitSystem$ntoskrnl.exe", 0xa647bc, 0x0, true, 0xd77098e6940596a2)
#define _o65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitSystemPhase2$ntoskrnl.exe", 0xa3e0b4, 0x0, true, 0x98a060f69820352d)
#define _o66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_auto_expand_t*, uint32_t)>*), "$ExInitializeAutoExpandPushLock$ntoskrnl.exe", 0x2f6c20, 0x0, true, 0xf76032ae6eb0e926)
#define _o67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeCallBack$ntoskrnl.exe", 0x77dbb0, 0x0, true, 0x7158e95b91632696)
#define _o68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeExternalBootSupport$ntoskrnl.exe", 0xa6fc34, 0x0, true, 0x321f5ec1ef8c0fd3)
#define _o69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::lookaside_list_ex_t*, sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t, struct nt::lookaside_list_ex_t*)>*, sdk::function<void(void*, struct nt::lookaside_list_ex_t*)>*, enum nt::pool_type_t, uint32_t, uint64_t, uint32_t, uint16_t)>*), "$ExInitializeLookasideListEx$ntoskrnl.exe", 0x2c1d20, 0x0, true, 0x574848fb59398a21)
#define _o70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeLookasideListExInternal$ntoskrnl.exe", 0x2c1d70, 0x0, true, 0xb795a4abe7ac9a6e)
#define _o71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::npaged_lookaside_list_t*, sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t)>*, sdk::function<void(void*)>*, uint32_t, uint64_t, uint32_t, uint16_t)>*), "$ExInitializeNPagedLookasideList$ntoskrnl.exe", 0x377860, 0x0, true, 0xad07cc0f884125ca)
#define _o72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeNPagedLookasideListInternal$ntoskrnl.exe", 0x3778a0, 0x0, true, 0x5d79e6e3ff929452)
#define _o73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::paged_lookaside_list_t*, sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t)>*, sdk::function<void(void*)>*, uint32_t, uint64_t, uint32_t, uint16_t)>*), "$ExInitializePagedLookasideList$ntoskrnl.exe", 0x651980, 0x0, true, 0xfa57f4b0567ae0d1)
#define _o74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializePagedLookasideListInternal$ntoskrnl.exe", 0x2c2430, 0x0, true, 0x4006454ea03cdcbd)
#define _o75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeProcessor$ntoskrnl.exe", 0x3a977c, 0x0, true, 0x7b4f92509b719c7d)
#define _o76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_t*)>*), "$ExInitializePushLock$ntoskrnl.exe", 0x2c0830, 0x0, true, 0x51ea382c1ffbc7df)
#define _o77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::eresource_t*)>*), "$ExInitializeResourceLite$ntoskrnl.exe", 0x26c4c0, 0x0, true, 0xa8ff05c05267e6b7)
#define _o78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_t*)>*), "$ExInitializeRundownProtection$ntoskrnl.exe", 0x2c0830, 0x0, true, 0xeb7e5a2175da6c48)
#define _o79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_cache_aware_t*, uint64_t)>*), "$ExInitializeRundownProtectionCacheAware$ntoskrnl.exe", 0x702220, 0x0, true, 0x4c363647c2845928)
#define _o80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_cache_aware_t*, uint32_t)>*), "$ExInitializeRundownProtectionCacheAwareEx$ntoskrnl.exe", 0x3973d0, 0x0, true, 0xbdf8659e2ce3691c)
#define _o81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeSystemLookasideList$ntoskrnl.exe", 0x997d24, 0x0, true, 0xe0c9ae9b9435eed5)
#define _o82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeTimeRefresh$ntoskrnl.exe", 0xa53734, 0x0, true, 0xce29d6d889fc5f90)
#define _o83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInitializeUtcTimeZoneBias$ntoskrnl.exe", 0xa6ffd4, 0x0, true, 0x563beecd45e0ca89)
#define _o84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::zone_header_t*, uint32_t, void*, uint32_t)>*), "$ExInitializeZone$ntoskrnl.exe", 0x5b09e0, 0x0, true, 0xae9e7076f10466b6)
#define _o85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExInsertPoolTag$ntoskrnl.exe", 0x2f965c, 0x0, true, 0x4e70546111cdedcb)
#define _o86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int64_t(int64_t*, int64_t, uint64_t*)>*), "$ExInterlockedAddLargeInteger$ntoskrnl.exe", 0x5b0c20, 0x0, true, 0xe08c1f6c3e5f96ec)
#define _o87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t*, uint32_t, uint64_t*)>*), "$ExInterlockedAddUlong$ntoskrnl.exe", 0x376a80, 0x0, true, 0x333623e5b8ca3d97)
#define _o88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::zone_header_t*, void*, uint32_t, uint64_t*)>*), "$ExInterlockedExtendZone$ntoskrnl.exe", 0x5b0a50, 0x0, true, 0xbd61f398abdf4d15)
#define _o89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<nt::list_entry_t*(nt::list_entry_t*, nt::list_entry_t*, uint64_t*)>*), "$ExInterlockedInsertHeadList$ntoskrnl.exe", 0x2f3e90, 0x0, true, 0x17528a46b0e509f0)
#define _o90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<nt::list_entry_t*(nt::list_entry_t*, nt::list_entry_t*, uint64_t*)>*), "$ExInterlockedInsertTailList$ntoskrnl.exe", 0x2f3f10, 0x0, true, 0x1c1c0e2c5b26652a)
#define _o91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct nt::single_list_entry_t*(struct nt::single_list_entry_t*, uint64_t*)>*), "$ExInterlockedPopEntryList$ntoskrnl.exe", 0x5b0c80, 0x0, true, 0xcbd4e416d85c664d)
#define _o92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct nt::single_list_entry_t*(struct nt::single_list_entry_t*, struct nt::single_list_entry_t*, uint64_t*)>*), "$ExInterlockedPushEntryList$ntoskrnl.exe", 0x5b0cd0, 0x0, true, 0xa5275ae354da2c1f)
#define _o93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<nt::list_entry_t*(nt::list_entry_t*, uint64_t*)>*), "$ExInterlockedRemoveHeadList$ntoskrnl.exe", 0x2f3fc0, 0x0, true, 0xb76560ea12a4ff7e)
#define _o94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$ExIsManufacturingModeEnabled$ntoskrnl.exe", 0x727cf0, 0x0, true, 0x3e44d8863c7f1ba6)
#define _o95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsMultiSessionSku$ntoskrnl.exe", 0x7bb2d8, 0x0, true, 0x931ac7aeb195b96a)
#define _o96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t)>*), "$ExIsProcessorFeaturePresent$ntoskrnl.exe", 0x3214e0, 0x0, true, 0xab39d09f179bee9)
#define _o97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::eresource_t*)>*), "$ExIsResourceAcquiredExclusiveLite$ntoskrnl.exe", 0x2e7dd0, 0x0, true, 0x38ddad123cbae319)
#define _o98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::eresource_t*)>*), "$ExIsResourceAcquiredSharedLite$ntoskrnl.exe", 0x2090d0, 0x0, true, 0x4a3f371274a19962)
#define _o99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsRestrictedCaller$ntoskrnl.exe", 0x5cec6c, 0x0, true, 0x43cd136aaa5f921d)
#define _p00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExIsSafeWorkItem$ntoskrnl.exe", 0x3d7720, 0x0, true, 0xb3dff8a1b4756966)
#define _p01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$ExIsSoftBoot$ntoskrnl.exe", 0x397e30, 0x0, true, 0xea4badc70222cf8)
#define _p02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(int64_t*, int64_t*)>*), "$ExLocalTimeToSystemTime$ntoskrnl.exe", 0x201810, 0x0, true, 0x1ab882145cf0c2d5)
#define _p03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExLockHandleTableEntry$ntoskrnl.exe", 0x264150, 0x0, true, 0xdf1659ff50e194d)
#define _p04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExLockUserBuffer$ntoskrnl.exe", 0x6bcad8, 0x0, true, 0x87eb9d28cac5aaf7)
#define _p05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExMapHandleToPointer$ntoskrnl.exe", 0x637fa0, 0x0, true, 0xf6e4319b388f97d4)
#define _p06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExMapHandleToPointerEx$ntoskrnl.exe", 0x5f1ec8, 0x0, true, 0xeb5008aa09a86530)
#define _p07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExMinimumLookasideDepth$ntoskrnl.exe", 0xc11f38, 0x0, true, 0x3ea836fbc7d3ee1b)
#define _p08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExMutantObjectType$ntoskrnl.exe", 0xcfa248, 0x0, true, 0x1c4b52947073baa0)
#define _p09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExNPagedLookasideListHead$ntoskrnl.exe", 0xc16840, 0x0, true, 0x4670b7ec2dc43cd)
#define _p10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExNPagedLookasideLock$ntoskrnl.exe", 0xc16850, 0x0, true, 0x9e5505e1e72ca6c9)
#define _p11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExNode0$ntoskrnl.exe", 0xd24440, 0x0, true, 0xad89a6a4f18b0223)
#define _p12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::boot_device_handle_t*)>*), "$ExNotifyBootDeviceRemoval$ntoskrnl.exe", 0x5aced0, 0x0, true, 0xc1f2ba81afeba8ee)
#define _p13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, void*, void*)>*), "$ExNotifyCallback$ntoskrnl.exe", 0x3005a0, 0x0, true, 0xf650e63a96644961)
#define _p14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExNotifyPlatformBinaryExecuted$ntoskrnl.exe", 0x779f34, 0x0, true, 0xd9c199469bed6ff7)
#define _p15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExNotifyWithProcessing$ntoskrnl.exe", 0x3005b8, 0x0, true, 0xd41cadd9b2cef993)
#define _p16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExNumMissingBootDevices$ntoskrnl.exe", 0xc19140, 0x0, true, 0xd3552267b14671c6)
#define _p17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPageLockHandle$ntoskrnl.exe", 0xcfb528, 0x0, true, 0x854b5c2a1f26fa2c)
#define _p18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPagedLookasideListHead$ntoskrnl.exe", 0xc16860, 0x0, true, 0xd954aa3aecc522d6)
#define _p19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPagedLookasideLock$ntoskrnl.exe", 0xc16870, 0x0, true, 0x236f32a4e1256db3)
#define _p20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolCodeEnd$ntoskrnl.exe", 0xc2a220, 0x0, true, 0x1d73e2788dafa7fb)
#define _p21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolCodeStart$ntoskrnl.exe", 0xc2a218, 0x0, true, 0x275cc9a1a5b71e33)
#define _p22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolFailures$ntoskrnl.exe", 0xc190f8, 0x0, true, 0x6a76087c023f331a)
#define _p23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolLookasideListHead$ntoskrnl.exe", 0xc16830, 0x0, true, 0x4bae255f14f36ee2)
#define _p24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExPoolTagTables$ntoskrnl.exe", 0xc168e0, 0x0, true, 0x29ba1aacd8e7762a)
#define _p25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExProcessorCounterSetCallback$ntoskrnl.exe", 0x6efbe0, 0x0, true, 0x6ad8021a02fe950d)
#define _p26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExProfileObjectType$ntoskrnl.exe", 0xcfa2d0, 0x0, true, 0x432fb0e6665512b9)
#define _p27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExProtectPool$ntoskrnl.exe", 0x2df9a4, 0x0, true, 0x2cdfcd46775076e6)
#define _p28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExProtectPoolEx$ntoskrnl.exe", 0x2df9c4, 0x0, true, 0xa0846fb9f04b07e0)
#define _p29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueryBootEntropyInformation$ntoskrnl.exe", 0x780a24, 0x0, true, 0x62fe41b1046d47e2)
#define _p30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint16_t(union nt::slist_header_t*)>*), "$ExQueryDepthSList$ntoskrnl.exe", 0x2ee050, 0x0, true, 0x1365e3bc57127e09)
#define _p31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueryHandleExceptionsPermanency$ntoskrnl.exe", 0x37df00, 0x0, true, 0x65285f6c0b0afd34)
#define _p32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(void*, uint8_t*)>*), "$ExQueryPoolBlockSize$ntoskrnl.exe", 0x3c9740, 0x0, true, 0x10d790a9c0238df0)
#define _p33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueryPoolUsage$ntoskrnl.exe", 0x204084, 0x0, true, 0xcfdb18b0b56270e2)
#define _p34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueryProcessHandleInformation$ntoskrnl.exe", 0x947ef4, 0x0, true, 0x5d91383a5a0315ef)
#define _p35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQuerySystemLockInformation$ntoskrnl.exe", 0x9aef94, 0x0, true, 0xc6ecf89c2a471d59)
#define _p36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t*, uint32_t*, uint32_t*)>*), "$ExQueryTimerResolution$ntoskrnl.exe", 0x3cb970, 0x0, true, 0xd409bc7d2f786eb7)
#define _p37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueryWnfStateData$ntoskrnl.exe", 0x6e4e90, 0x0, true, 0x2a5343d36cb33734)
#define _p38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueueDebuggerWorker$ntoskrnl.exe", 0x3c2acc, 0x0, true, 0x2a17645adb04ff78)
#define _p39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::work_queue_item_t*, enum nt::work_queue_type_t)>*), "$ExQueueWorkItem$ntoskrnl.exe", 0x226f40, 0x0, true, 0x530d7ebfdee082c3)
#define _p40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueueWorkItemEx$ntoskrnl.exe", 0x356c10, 0x0, true, 0x515afac6a8a0688b)
#define _p41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueueWorkItemExFromIo$ntoskrnl.exe", 0x5b0d28, 0x0, true, 0xb7f18b60e490b5d)
#define _p42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueueWorkItemFromIo$ntoskrnl.exe", 0x304f98, 0x0, true, 0xb3e0c74f9220310a)
#define _p43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExQueueWorkItemToPrivatePool$ntoskrnl.exe", 0x387ab8, 0x0, true, 0x4dc5fcc15fd7404c)
#define _p44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$ExRaiseAccessViolation$ntoskrnl.exe", 0x951740, 0x0, true, 0x430632f8b6345d92)
#define _p45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$ExRaiseDatatypeMisalignment$ntoskrnl.exe", 0x766ba0, 0x0, true, 0xdaebaa60d2cadeb0)
#define _p46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int32_t, uint32_t, uint32_t, uint64_t*, uint32_t, uint32_t*)>*), "$ExRaiseHardError$ntoskrnl.exe", 0x951760, 0x0, true, 0xaad1a17a4e74bed2)
#define _p47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExRawInputManagerObjectType$ntoskrnl.exe", 0xcfb7a8, 0x0, true, 0x9a95e6b10c630a38)
#define _p48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_t*)>*), "$ExReInitializeRundownProtection$ntoskrnl.exe", 0x37bac0, 0x0, true, 0x8a90c39440e8c6e)
#define _p49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*), "$ExReInitializeRundownProtectionCacheAware$ntoskrnl.exe", 0x33f6d0, 0x0, true, 0x9b7150086888f5ee)
#define _p50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReadyForErrors$ntoskrnl.exe", 0xc5456c, 0x0, true, 0x218a761cc7dc6cf1)
#define _p51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExRealTimeIsUniversal$ntoskrnl.exe", 0x201990, 0x0, true, 0x7d0ecc88225d8623)
#define _p52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReferenceCallBackBlock$ntoskrnl.exe", 0x2a5a10, 0x0, true, 0x3ca1ebeafa350327)
#define _p53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReferenceHandleDebugInfo$ntoskrnl.exe", 0x9480f4, 0x0, true, 0xd6bfac14fe47cde4)
#define _p54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct ex::boot_device_registration_t*, struct ex::boot_device_handle_t**)>*), "$ExRegisterBootDevice$ntoskrnl.exe", 0x5acf20, 0x0, true, 0x41b31058db247adf)
#define _p55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::callback_object_t*, sdk::function<void(void*, void*, void*)>*, void*)>*), "$ExRegisterCallback$ntoskrnl.exe", 0x37bea0, 0x0, true, 0x4b359e7634ec64be)
#define _p56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct ex::extension_t**, uint32_t, void*)>*), "$ExRegisterExtension$ntoskrnl.exe", 0x7a5de0, 0x0, true, 0x60c9a4101dfe9054)
#define _p57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExRegisterHost$ntoskrnl.exe", 0x7a6000, 0x0, true, 0x1f60ae3f34ca203e)
#define _p58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::eresource_t*)>*), "$ExReinitializeResourceLite$ntoskrnl.exe", 0x2dcc60, 0x0, true, 0x20145185410b3eb5)
#define _p59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_auto_expand_t*, uint32_t)>*), "$ExReleaseAutoExpandPushLockExclusive$ntoskrnl.exe", 0x2f5090, 0x0, true, 0x9b59918307699d32)
#define _p60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "$ExReleaseAutoExpandPushLockShared$ntoskrnl.exe", 0x2e92c0, 0x0, true, 0x6f5ecb456160461d)
#define _p61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*)>*), "$ExReleaseCacheAwarePushLockExclusive$ntoskrnl.exe", 0x35a450, 0x0, true, 0xaeea23280dfc6e8c)
#define _p62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*), "$ExReleaseCacheAwarePushLockExclusiveEx$ntoskrnl.exe", 0x3f1280, 0x0, true, 0xcabdfa63e507ac94)
#define _p63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_t*, uint32_t)>*/*types differ*/), "$ExReleaseCacheAwarePushLockSharedEx$ntoskrnl.exe", 0x260600, 0x0, true, 0xac9872290ba87a5e)
#define _p64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReleaseExtensionTable$ntoskrnl.exe", 0x2d3fcc, 0x0, true, 0xb544888c910e4c72)
#define _p65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::fast_mutex_t*)>*), "$ExReleaseFastMutex$ntoskrnl.exe", 0x263bb0, 0x0, true, 0x14962f73c9d38709)
#define _p66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::fast_mutex_t*)>*), "$ExReleaseFastMutexUnsafe$ntoskrnl.exe", 0x25be10, 0x0, true, 0xb04f6c63ed00a31e)
#define _p67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::fast_mutex_t*)>*), "$ExReleaseFastMutexUnsafeAndLeaveCriticalRegion$ntoskrnl.exe", 0x2f32a0, 0x0, true, 0x7f88d2fd232f8645)
#define _p68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_t*, uint32_t)>*/*types differ*/), "$ExReleasePushLockEx$ntoskrnl.exe", 0x260ee0, 0x0, true, 0xc95733336e1da610)
#define _p69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_t*, uint32_t)>*/*types differ*/), "$ExReleasePushLockExclusiveEx$ntoskrnl.exe", 0x260770, 0x0, true, 0xcb45fd482dde31a5)
#define _p70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::push_lock_t*, uint32_t)>*/*types differ*/), "$ExReleasePushLockSharedEx$ntoskrnl.exe", 0x263b50, 0x0, true, 0x82dad243ad06065f)
#define _p71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::eresource_t*)>*), "$ExReleaseResourceAndLeaveCriticalRegion$ntoskrnl.exe", 0x2630e0, 0x0, true, 0xfe5e57f4b1bb3aec)
#define _p72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::eresource_t*)>*), "$ExReleaseResourceAndLeavePriorityRegion$ntoskrnl.exe", 0x5af250, 0x0, true, 0x7f783ab1b7fcc1d8)
#define _p73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::eresource_t*, uint64_t)>*), "$ExReleaseResourceForThreadLite$ntoskrnl.exe", 0x2eea80, 0x0, true, 0xae605679a49cb6ad)
#define _p74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::eresource_t*)>*), "$ExReleaseResourceLite$ntoskrnl.exe", 0x261460, 0x0, true, 0xa39fb0294c1e6410)
#define _p75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_t*)>*), "$ExReleaseRundownProtection$ntoskrnl.exe", 0x206420, 0x0, true, 0xc4fe0b5fe69a775e)
#define _p76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*), "$ExReleaseRundownProtectionCacheAware$ntoskrnl.exe", 0x2ed500, 0x0, true, 0x1667d35473f57756)
#define _p77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_cache_aware_t*, uint32_t)>*), "$ExReleaseRundownProtectionCacheAwareEx$ntoskrnl.exe", 0x2e5060, 0x0, true, 0x3bdf8a5a6d4e16ad)
#define _p78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_t*, uint32_t)>*), "$ExReleaseRundownProtectionEx$ntoskrnl.exe", 0x5af880, 0x0, true, 0x81a0c041995b40ae)
#define _p79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(volatile int32_t*, uint8_t)>*), "$ExReleaseSpinLockExclusive$ntoskrnl.exe", 0x2f3180, 0x0, true, 0x4eb2654cb6f88007)
#define _p80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(volatile int32_t*)>*), "$ExReleaseSpinLockExclusiveFromDpcLevel$ntoskrnl.exe", 0x26b750, 0x0, true, 0xdac6a165a6f29c29)
#define _p81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(volatile int32_t*, uint8_t)>*), "$ExReleaseSpinLockShared$ntoskrnl.exe", 0x2ed5d0, 0x0, true, 0x37447f09952c8b6e)
#define _p82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(volatile int32_t*)>*), "$ExReleaseSpinLockSharedFromDpcLevel$ntoskrnl.exe", 0x27d690, 0x0, true, 0xe2e7aa82f3ce13f8)
#define _p83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReleaseTimeRefreshLock$ntoskrnl.exe", 0x5d0bc4, 0x0, true, 0x6cdc8c6c4a64403d)
#define _p84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExRemoveLowBoxAtomReferences$ntoskrnl.exe", 0x202fe8, 0x0, true, 0xaf43b960097bd75a)
#define _p85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExResourceCheckFlags$ntoskrnl.exe", 0xc120e0, 0x0, true, 0xd4ea41759cfc5d9)
#define _p86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExResourceTimeoutCount$ntoskrnl.exe", 0xcf4b7c, 0x0, true, 0x84fe5c974d6abbba)
#define _p87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExReturnPoolQuota$ntoskrnl.exe", 0x2ff22c, 0x0, true, 0xed34a1565006962d)
#define _p88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExRngInitializeSystem$ntoskrnl.exe", 0xa6aad4, 0x0, true, 0xc69c3fef587190a0)
#define _p89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_t*)>*), "$ExRundownCompleted$ntoskrnl.exe", 0x2d44c0, 0x0, true, 0xcdf01d039fe65a64)
#define _p90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*), "$ExRundownCompletedCacheAware$ntoskrnl.exe", 0x33f720, 0x0, true, 0x1b235a6d59cc3e7b)
#define _p91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSaNonPagedSlotAllocator$ntoskrnl.exe", 0xc15ea8, 0x0, true, 0x5951b2d12a94ff2)
#define _p92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSaPageArrays$ntoskrnl.exe", 0xc15eb0, 0x0, true, 0xe2677787498b7591)
#define _p93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSaPageGroupDescriptorArray$ntoskrnl.exe", 0xc15ec0, 0x0, true, 0xcfb3894e7f6a5076)
#define _p94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSaPageGroupDescriptorArrayLock$ntoskrnl.exe", 0xc15eb8, 0x0, true, 0x88b3ea849c820565)
#define _p95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSaPagedSlotAllocator$ntoskrnl.exe", 0xc15ea0, 0x0, true, 0xc676e6bf6618bd86)
#define _p96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSemaphoreObjectType$ntoskrnl.exe", 0xcfa258, 0x0, true, 0xf7776a724f16b2ef)
#define _p97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t, uint32_t)>*), "$ExSetFirmwareEnvironmentVariable$ntoskrnl.exe", 0x94aaf0, 0x0, true, 0x8e033cf5b9c488da)
#define _p98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSetHandleAttributes$ntoskrnl.exe", 0x2fcd34, 0x0, true, 0xac9301e7e3ef0e4a)
#define _p99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(enum nt::licensing_tamper_state_t)>*), "$ExSetLicenseTamperState$ntoskrnl.exe", 0x948920, 0x0, true, 0x28f29476b2827408)
#define _q00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSetPoolFlags$ntoskrnl.exe", 0x5ad9c8, 0x0, true, 0x1313103419f3357b)
#define _q01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::eresource_t*, void*)>*), "$ExSetResourceOwnerPointer$ntoskrnl.exe", 0x5af290, 0x0, true, 0xffcecea78ffac34b)
#define _q02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::eresource_t*, void*, uint32_t)>*), "$ExSetResourceOwnerPointerEx$ntoskrnl.exe", 0x2da520, 0x0, true, 0x5f6955634525d9f7)
#define _q03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::timer_t*, int64_t, int64_t, struct ext::set_parameters_v0_t*)>*), "$ExSetTimer$ntoskrnl.exe", 0x35ba80, 0x0, true, 0xe90d0390846448f1)
#define _q04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, uint8_t)>*), "$ExSetTimerResolution$ntoskrnl.exe", 0x5ac1b0, 0x0, true, 0x200b7d5d3fe7c342)
#define _q05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, uint32_t*)>*), "$ExShareAddressSpaceWithDevice$ntoskrnl.exe", 0x5b1040, 0x0, true, 0x53dc641013617a0e)
#define _q06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExShortTime$ntoskrnl.exe", 0xc12d40, 0x0, true, 0xf632ac574caad23d)
#define _q07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExShutdownSystem$ntoskrnl.exe", 0x9aee88, 0x0, true, 0x4cb096c88f0db759)
#define _q08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(uint32_t)>*), "$ExSizeOfAutoExpandPushLock$ntoskrnl.exe", 0x5adc10, 0x0, true, 0x177a1be4d2741e0f)
#define _q09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t()>*), "$ExSizeOfRundownProtectionCacheAware$ntoskrnl.exe", 0x76c4c0, 0x0, true, 0xd755a42c1f664760)
#define _q10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSlowReplenishHandleTableEntry$ntoskrnl.exe", 0x264320, 0x0, true, 0xc043b81b47dc12fe)
#define _q11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSoftRebootFlags$ntoskrnl.exe", 0xc54560, 0x0, true, 0x2190b57f491a73bc)
#define _q12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSubscribeWnfStateChange$ntoskrnl.exe", 0x6dd360, 0x0, true, 0xdd604709711954d9)
#define _q13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSwapinWorkerThreads$ntoskrnl.exe", 0x75f464, 0x0, true, 0x7db01bdf00cdf0aa)
#define _q14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSweepHandleTable$ntoskrnl.exe", 0x5d5e80, 0x0, true, 0xc7d8a675aebcb6f5)
#define _q15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSweepSingleHandle$ntoskrnl.exe", 0x23f444, 0x0, true, 0x657b750579344887)
#define _q16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSystemExceptionFilter$ntoskrnl.exe", 0x7be1c0, 0x0, true, 0x63e2e216e5e22ae3)
#define _q17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExSystemLookasideListHead$ntoskrnl.exe", 0xc16820, 0x0, true, 0xbba0199e90e575b6)
#define _q18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(int64_t*, int64_t*)>*), "$ExSystemTimeToLocalTime$ntoskrnl.exe", 0x3227c0, 0x0, true, 0x3b51264d5de9bdc4)
#define _q19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExTbFlushActive$ntoskrnl.exe", 0xcf4b78, 0x0, true, 0x795f433222f0df09)
#define _q20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExTimedWaitForUnblockPushLock$ntoskrnl.exe", 0x2ebd30, 0x0, true, 0xcb0acc9a16edc347)
#define _q21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExTimerObjectType$ntoskrnl.exe", 0xcfb678, 0x0, true, 0x591eb755cd3d746d)
#define _q22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExTimerRundown$ntoskrnl.exe", 0x355f74, 0x0, true, 0xdc82e4bfde4741a1)
#define _q23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExTraceAllTables$ntoskrnl.exe", 0x97ebf6, 0x0, true, 0x7001e31eaf7f3dee)
#define _q24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExTraceTimerResolution$ntoskrnl.exe", 0x5ceb68, 0x0, true, 0x8aec2fd0c09b2855)
#define _q25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::push_lock_auto_expand_t*, uint32_t)>*), "$ExTryAcquireAutoExpandPushLockExclusive$ntoskrnl.exe", 0x38db20, 0x0, true, 0x8776bc9ce67cf643)
#define _q26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct ex::push_lock_auto_expand_t*, uint32_t)>*), "$ExTryAcquireAutoExpandPushLockShared$ntoskrnl.exe", 0x38d3b0, 0x0, true, 0xc189fb470278c64b)
#define _q27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*), "$ExTryAcquireCacheAwarePushLockExclusiveEx$ntoskrnl.exe", 0x5adc90, 0x0, true, 0xae69243c215b5031)
#define _q28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*), "$ExTryAcquireCacheAwarePushLockSharedEx$ntoskrnl.exe", 0x5add60, 0x0, true, 0x2cb4c390f84b462b)
#define _q29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::push_lock_t*, uint32_t)>*/*types differ*/), "$ExTryAcquirePushLockExclusiveEx$ntoskrnl.exe", 0x340d40, 0x0, true, 0xffd3e32a74ad0194)
#define _q30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::push_lock_t*, uint32_t)>*/*types differ*/), "$ExTryAcquirePushLockSharedEx$ntoskrnl.exe", 0x3406f0, 0x0, true, 0xceed65b84e9e2c6a)
#define _q31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(volatile int32_t*)>*), "$ExTryAcquireSpinLockExclusiveAtDpcLevel$ntoskrnl.exe", 0x2d80a0, 0x0, true, 0x691ee3504a9d1203)
#define _q32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(volatile int32_t*)>*), "$ExTryAcquireSpinLockSharedAtDpcLevel$ntoskrnl.exe", 0x5af8f0, 0x0, true, 0x3863a625c098c30)
#define _q33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ex::push_lock_t*, uint32_t)>*/*types differ*/), "$ExTryConvertPushLockSharedToExclusiveEx$ntoskrnl.exe", 0x3084a0, 0x0, true, 0xf24d7e4bf6e14348)
#define _q34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(volatile int32_t*)>*), "$ExTryConvertSharedSpinLockExclusive$ntoskrnl.exe", 0x37ebd0, 0x0, true, 0x15915f309a85ca70)
#define _q35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExTryConvertSharedToExclusiveLite$ntoskrnl.exe", 0x5af2cc, 0x0, true, 0x50a31f45cc5a718a)
#define _q36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::work_queue_item_t*, enum nt::work_queue_type_t)>*), "$ExTryQueueWorkItem$ntoskrnl.exe", 0x22a0e0, 0x0, true, 0x7fe2b495e2d9c062)
#define _q37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::fast_mutex_t*)>*), "$ExTryToAcquireFastMutex$ntoskrnl.exe", 0x340ca0, 0x0, true, 0xc32795de11ee3ade)
#define _q38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::eresource_t*)>*), "$ExTryToAcquireResourceExclusiveLite$ntoskrnl.exe", 0x5af310, 0x0, true, 0xf605b8e27857305e)
#define _q39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint64_t*, uint32_t)>*), "$ExUnblockOnAddressPushLockEx$ntoskrnl.exe", 0x3f1320, 0x0, true, 0x369663148005eb3e)
#define _q40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint64_t*, uint32_t)>*), "$ExUnblockPushLockEx$ntoskrnl.exe", 0x2d2e20, 0x0, true, 0x416251d3745d98dd)
#define _q41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExUnlockHandleTableEntry$ntoskrnl.exe", 0x5cc2f0, 0x0, true, 0xcbcfc051e043b44e)
#define _q42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExUnlockUserBuffer$ntoskrnl.exe", 0x2f85b0, 0x0, true, 0xa6ed633fca45ff74)
#define _q43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$ExUnregisterCallback$ntoskrnl.exe", 0x37ea30, 0x0, true, 0x338e9122f9bc8066)
#define _q44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::extension_t*)>*), "$ExUnregisterExtension$ntoskrnl.exe", 0x951f90, 0x0, true, 0x7ebe7eecf47ea229)
#define _q45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExUnsubscribeWnfStateChange$ntoskrnl.exe", 0x6de350, 0x0, true, 0xf2a59409a939bcda)
#define _q46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExUpdateLicenseData$ntoskrnl.exe", 0x6ed6a0, 0x0, true, 0x48525ba11d58eaa2)
#define _q47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExUpdateOsPfnInRegistry$ntoskrnl.exe", 0x948a40, 0x0, true, 0xdf65bfe38486e95a)
#define _q48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExUpdateSystemTimeFromCmos$ntoskrnl.exe", 0x98b2e0, 0x0, true, 0xbecdecabc94c1ef3)
#define _q49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::guid_t*)>*), "$ExUuidCreate$ntoskrnl.exe", 0x65b290, 0x0, true, 0x41de25af3b904acf)
#define _q50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(enum nt::suite_type_t)>*), "$ExVerifySuite$ntoskrnl.exe", 0x3aafd0, 0x0, true, 0x167cdc27107ba107)
#define _q51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWaitForCallBacks$ntoskrnl.exe", 0x94a65c, 0x0, true, 0xcd68db6ccd06464b)
#define _q52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_t*)>*), "$ExWaitForRundownProtectionRelease$ntoskrnl.exe", 0x356010, 0x0, true, 0xf5cca5a0d9813fec)
#define _q53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*), "$ExWaitForRundownProtectionReleaseCacheAware$ntoskrnl.exe", 0x33f610, 0x0, true, 0x24720837f43c1d3c)
#define _q54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWaitForUnblockPushLock$ntoskrnl.exe", 0x5ade20, 0x0, true, 0xa64b7747460807db)
#define _q55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWakeTimersPause$ntoskrnl.exe", 0x3896a4, 0x0, true, 0x26cd4e32a5830a38)
#define _q56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWakeTimersResume$ntoskrnl.exe", 0x3898c4, 0x0, true, 0x2b901d488a97c5b1)
#define _q57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWindowStationObjectType$ntoskrnl.exe", 0xcfb7b8, 0x0, true, 0x8a16d7b5fa73cd03)
#define _q58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWnfExitProcess$ntoskrnl.exe", 0x665444, 0x0, true, 0xca5a870402f1409a)
#define _q59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExWorkerQueue$ntoskrnl.exe", 0xc166c8, 0x0, true, 0x45fbf4b6ca1841d1)
#define _q60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(uint8_t*), "$ExPoolZeroingNativelySupported$win32kbase.sys", 0x0, 0x0, false, 0x34eca81569ce7082)
#else
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
#endif