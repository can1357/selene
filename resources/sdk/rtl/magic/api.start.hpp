#if !IN_PARSER
#define _a00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringToLcid$ntdll.dll", 0xeeef8, 0x0, true, 0xf488560a0cd055b6)
#define _a01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t*)>*), "$RtlUniform$ntdll.dll", 0x74670, 0x0, true, 0x11bfb050bb2404cf)
#define _a02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t()>*), "$RtlUnlockCurrentThread$ntdll.dll", 0x85d50, 0x0, true, 0x58fcbf92961398aa)
#define _a03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RtlUnlockHeap$ntdll.dll", 0x64680, 0x0, true, 0xad1cdd9797158f48)
#define _a04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnlockHeapManagerForCloning$ntdll.dll", 0xf2a08, 0x0, true, 0x2ab44b8923412087)
#define _a05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlUnlockMemoryBlockLookaside$ntdll.dll", 0x7fe60, 0x0, true, 0x9dfe65dbeada808c)
#define _a06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnlockMemoryStreamRegion$ntdll.dll", 0xd5770, 0x0, true, 0x3295dad5e2c6cba6)
#define _a07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlUnlockMemoryZone$ntdll.dll", 0x7fec0, 0x0, true, 0x4e4e502e4a175705)
#define _a08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlUnlockModuleSection$ntdll.dll", 0x80240, 0x0, true, 0xafb5440dfed70bc5)
#define _a09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnlockProcessHeapOnProcessTerminate$ntdll.dll", 0x64220, 0x0, true, 0xfa6a747b6569b723)
#define _a10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnsubscribeWnfNotificationWaitForCompletion$ntdll.dll", 0x45c70, 0x0, true, 0x745337311139e46c)
#define _a11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnsubscribeWnfNotificationWithCompletionCallback$ntdll.dll", 0x46e80, 0x0, true, 0x5ca4a82106051d76)
#define _a12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnsubscribeWnfStateChangeNotification$ntdll.dll", 0x469f0, 0x0, true, 0xc806257fbd1ac113)
#define _a13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::critical_section_t*)>*), "$RtlUpdateClonedCriticalSection$ntdll.dll", 0x641f0, 0x0, true, 0x7ec9d9f00e0291b)
#define _a14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::srwlock_t*, uint32_t)>*), "$RtlUpdateClonedSRWLock$ntdll.dll", 0x9b4e0, 0x0, true, 0x4e3b7abd9bbeb300)
#define _a15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUpdateProcessRegistryInfo$ntdll.dll", 0x6a0a8, 0x0, true, 0xf3766b2fdd08a916)
#define _a16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, uint32_t)>*), "$RtlUpdateTimer$ntdll.dll", 0x46900, 0x0, true, 0x40941572b5087a70)
#define _a17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(sdk::function<uint32_t(void*)>*, void*)>*), "$RtlUserThreadStart$ntdll.dll", 0x4cea0, 0x0, true, 0xb9ece79d25543a4a)
#define _a18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, void*)>*), "$RtlValidateHeap$ntdll.dll", 0x642d0, 0x0, true, 0x56ba7251ef72515)
#define _a19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$RtlValidateProcessHeaps$ntdll.dll", 0xf2b40, 0x0, true, 0x6c1971e540332188)
#define _a20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWaitForWnfMetaNotification$ntdll.dll", 0x46cb0, 0x0, true, 0xa78453ff09d4f191)
#define _a21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(volatile void*, void*, uint64_t, int64_t*)>*), "$RtlWaitOnAddress$ntdll.dll", 0x45d50, 0x0, true, 0x192d850d1df06b32)
#define _a22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$RtlWakeAddressAll$ntdll.dll", 0x45a40, 0x0, true, 0x310c19625b89b3ce)
#define _a23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWakeAddressAllNoFence$ntdll.dll", 0x102ac0, 0x0, true, 0x59692276a93f0bd9)
#define _a24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$RtlWakeAddressSingle$ntdll.dll", 0x46430, 0x0, true, 0x27426e3049175096)
#define _a25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWakeAddressSingleNoFence$ntdll.dll", 0x102ad0, 0x0, true, 0x80af19f2eb10afc5)
#define _a26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::condition_variable_t*)>*), "$RtlWakeAllConditionVariable$ntdll.dll", 0x4d3d0, 0x0, true, 0x6d582341b729695e)
#define _a27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::condition_variable_t*)>*), "$RtlWakeConditionVariable$ntdll.dll", 0x79780, 0x0, true, 0xfb7eb300998493c4)
#define _a28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct rtl::heap_walk_entry_t*)>*), "$RtlWalkHeap$ntdll.dll", 0xf2c70, 0x0, true, 0xccbf3344565a89b6)
#define _a29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, uint32_t, void**)>*), "$RtlWerpReportException$ntdll.dll", 0xdd1a0, 0x0, true, 0xf957318831fc72e1)
#define _a30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWnfCompareChangeStamp$ntdll.dll", 0xde640, 0x0, true, 0x8eb6d8c35c8b8097)
#define _a31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWnfDllUnloadCallback$ntdll.dll", 0x84b70, 0x0, true, 0x3f0cb880cb458294)
#define _a32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64CallFunction64$ntdll.dll", 0x84a60, 0x0, true, 0x5c1f3e6620a7cb97)
#define _a33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t)>*), "$RtlWow64EnableFsRedirection$ntdll.dll", 0x84a60, 0x0, true, 0x5b8fee4b14fea5f4)
#define _a34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**)>*), "$RtlWow64EnableFsRedirectionEx$ntdll.dll", 0x84a60, 0x0, true, 0x7a550e6047513489)
#define _a35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64GetCurrentCpuArea$ntdll.dll", 0x4bd80, 0x0, true, 0xbd7ff325b9039989)
#define _a36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64GetCurrentMachine$ntdll.dll", 0x4ada0, 0x0, true, 0xa925a2959ccaa81c)
#define _a37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64GetProcessMachines$ntdll.dll", 0x7a720, 0x0, true, 0xaa4617df5ab8e8f6)
#define _a38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct win::wow64_context_t*)>*), "$RtlWow64GetThreadContext$ntdll.dll", 0xdbe70, 0x0, true, 0x4a46f772cb24e808)
#define _a39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64GetThreadSelectorEntry$ntdll.dll", 0xdbea0, 0x0, true, 0x58d6a5f870f80359)
#define _a40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64IsWowGuestMachineSupported$ntdll.dll", 0x7b740, 0x0, true, 0xc877de317507eab4)
#define _a41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64LogMessageInEventLogger$ntdll.dll", 0xd6580, 0x0, true, 0x4ef2d784edea84a)
#define _a42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct win::wow64_context_t*)>*), "$RtlWow64SetThreadContext$ntdll.dll", 0xdc040, 0x0, true, 0x26ec4df455b8ba51)
#define _a43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64SuspendThread$ntdll.dll", 0xdc1d0, 0x0, true, 0x150e1c786f08bef)
#define _a44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWriteMemoryStream$ntdll.dll", 0xd5770, 0x0, true, 0xdd9efff90056d151)
#define _a45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlZombifyActivationContext$ntdll.dll", 0xdf590, 0x0, true, 0xdefb822bef7646bd)
#define _m00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplyFunctionOverrideFixups$ntoskrnl.exe", 0x0, 0x0, false, 0x94a02e4ee753465)
#define _m01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplyFunctionOverrideFixupsToImage$ntoskrnl.exe", 0x0, 0x0, false, 0x8abd1df6c1044a5c)
#define _m02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCheckXfgFailureInformation$ntoskrnl.exe", 0x0, 0x0, false, 0x3a19b90c4b6a6162)
#define _m03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void const**, void**)>*), "$RtlCompareExchangePointerMapping$ntoskrnl.exe", 0x0, 0x0, false, 0xc02b5d3f41b14a18)
#define _m04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct nt::guid_t*, uint64_t, const uint64_t*, uint64_t*)>*), "$RtlCompareExchangePropertyStore$ntoskrnl.exe", 0x0, 0x0, false, 0x53277d2bb6170354)
#define _m05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferXp10$ntoskrnl.exe", 0x0, 0x0, false, 0x8cf2f34e16300b3e)
#define _m06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressWorkSpaceSizeXp10$ntoskrnl.exe", 0x0, 0x0, false, 0xd5af74ccdf46d58e)
#define _m07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlConvertHostPerfCounterToPerfCounter$ntoskrnl.exe", 0x0, 0x0, false, 0x4e0e4657404ae6dd)
#define _m08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateFunctionOverrideFixupInfo$ntoskrnl.exe", 0x0, 0x0, false, 0x5f591fdd292eb02)
#define _m09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressBuffer2Xp10$ntoskrnl.exe", 0x0, 0x0, false, 0xdafa9c3f06302e5e)
#define _m10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressBufferXp10$ntoskrnl.exe", 0x0, 0x0, false, 0xa9da843ae6cb2310)
#define _m11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDisableXfgOnTarget$ntoskrnl.exe", 0x0, 0x0, false, 0xa755dbfcd58a68d4)
#define _m12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDoesRequireFunctionOverrideFixups$ntoskrnl.exe", 0x0, 0x0, false, 0xb0e7c812442600)
#define _m13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFailFast3$ntoskrnl.exe", 0x0, 0x0, false, 0xf437aa5f43b2be46)
#define _m14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindLowerBoundInSortedArray$ntoskrnl.exe", 0x0, 0x0, false, 0xb0e51ef738d36aef)
#define _m15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindMessageInTable$ntoskrnl.exe", 0x0, 0x0, false, 0x2e9f5149fb9bdb20)
#define _m16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindNextClearBitBackwardsEx$ntoskrnl.exe", 0x0, 0x0, false, 0xbca33365e41f42d0)
#define _m17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindNextForwardRunClearCappedEx$ntoskrnl.exe", 0x0, 0x0, false, 0xddfacb303de83eee)
#define _m18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindNextForwardRunSetEx$ntoskrnl.exe", 0x0, 0x0, false, 0x15b79786700bd868)
#define _m19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeFunctionOverrideInfo$ntoskrnl.exe", 0x0, 0x0, false, 0xcffc9e41364b2639)
#define _m20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetCpuVendor$ntoskrnl.exe", 0x0, 0x0, false, 0x8f3416eca81f8bc6)
#define _m21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetFunctionEndAddress$ntoskrnl.exe", 0x0, 0x0, false, 0x85e3d506aaa8482c)
#define _m22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetFunctionOverrideRelocationMaxVpn$ntoskrnl.exe", 0x0, 0x0, false, 0x6a818a6f265b7f16)
#define _m23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetHpatEntryAddress$ntoskrnl.exe", 0x0, 0x0, false, 0xc12927b66c30701)
#define _m24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetProcessorSignature$ntoskrnl.exe", 0x0, 0x0, false, 0x129eadeb81f08b63)
#define _m25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetSystemGlobalData$ntoskrnl.exe", 0x0, 0x0, false, 0x1c891166ff7d50d)
#define _m26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHeapZero$ntoskrnl.exe", 0x0, 0x0, false, 0xff162647a00c5d7b)
#define _m27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitFunctionOverrideCapabilities$ntoskrnl.exe", 0x0, 0x0, false, 0xd12746946f9c0ecc)
#define _m28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitKernelModeSpecialMachineFrameEntries$ntoskrnl.exe", 0x0, 0x0, false, 0x5ae25de548a1bdbb)
#define _m29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsApiSetImplemented$ntoskrnl.exe", 0x0, 0x0, false, 0xa2d4a6e1393992e7)
#define _m30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsEnclaveFeaturePresent$ntoskrnl.exe", 0x0, 0x0, false, 0xd6bcfe1576bf1a55)
#define _m31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsSpecialUnwind$ntoskrnl.exe", 0x0, 0x0, false, 0xb48e17d62c6c56ea)
#define _m32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLengthSecurityDescriptorStrict$ntoskrnl.exe", 0x0, 0x0, false, 0x108431c24f6a7ce)
#define _m33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLookupPrimaryFunctionEntry$ntoskrnl.exe", 0x0, 0x0, false, 0xe6ed761978f918e9)
#define _m34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlNlsDeleteState$ntoskrnl.exe", 0x0, 0x0, false, 0x42d818a6f1c2ebfd)
#define _m35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlNlsInitState$ntoskrnl.exe", 0x0, 0x0, false, 0x956a51f8292dc72f)
#define _m36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPatchContainsCallTarget$ntoskrnl.exe", 0x0, 0x0, false, 0xb4213cfcb17ca92e)
#define _m37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPopulateHpatEntry$ntoskrnl.exe", 0x0, 0x0, false, 0x61ad3c46f621d868)
#define _m38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryImageXfgFilter$ntoskrnl.exe", 0x0, 0x0, false, 0x32e72c3a595517f8)
#define _m39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryPointerMapping$ntoskrnl.exe", 0x0, 0x0, false, 0x5a3bb891d1e8da07)
#define _m40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryPropertyStore$ntoskrnl.exe", 0x0, 0x0, false, 0x15d4c46b10f0ff47)
#define _m41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRemovePointerMapping$ntoskrnl.exe", 0x0, 0x0, false, 0xca199fc9cf3104a9)
#define _m42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRemovePropertyStore$ntoskrnl.exe", 0x0, 0x0, false, 0xfedd6f0eef3d7ccd)
#define _m43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRevertFunctionPatchFromUndoEntry$ntoskrnl.exe", 0x0, 0x0, false, 0xef8f5dee7cb6982f)
#define _m44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetSystemGlobalData$ntoskrnl.exe", 0x0, 0x0, false, 0xa87f2142a01e9f05)
#define _m45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint64_t, uint64_t*)>*), "$RtlSizeTAdd$ntoskrnl.exe", 0x0, 0x0, false, 0x565a453d5537192)
#define _m46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringCopyStringEx$ntoskrnl.exe", 0x0, 0x0, false, 0x25ddaf458d127df8)
#define _m47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlVirtualUnwind2$ntoskrnl.exe", 0x0, 0x0, false, 0x42094c683dea00e5)
#define _m48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddDynamicEnforcedAddressRange$ntoskrnl.exe", 0x5c7614, 0x0, true, 0x8fd1510842bf8bf2)
#define _m49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCSparseBitmapCleanup$ntoskrnl.exe", 0x389150, 0x0, true, 0xdb930ef84a9ae088)
#define _m50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeleteDynamicEnforcedAddressRangeTreeNode$ntoskrnl.exe", 0x6e26b0, 0x0, true, 0x8e9ece34f52d6b22)
#define _m51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnlargedUnsignedDivide$ntoskrnl.exe", 0x0, 0x0, false, 0x465b818ce74935d)
#define _m52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFcpCompareFeatureToFeature$ntoskrnl.exe", 0x3f0e18, 0x0, true, 0xca943ce8ca88976c)
#define _m53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindDynamicEnforcedAddressInRanges$ntoskrnl.exe", 0x5c76dc, 0x0, true, 0x5cf52cf4ff36afef)
#define _m54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetImageBaseAndLoadConfig$ntoskrnl.exe", 0x3f0f08, 0x0, true, 0x585215de9acaf653)
#define _m55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHpKInitializeHeapManager$ntoskrnl.exe", 0x3bfef8, 0x0, true, 0xed2853133c815e22)
#define _m56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, char)>*), "$RtlIsSandboxedTokenHandle$ntoskrnl.exe", 0x322620, 0x0, true, 0xf1332639b59f236f)
#define _m57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRemoveDynamicEnforcedAddressRange$ntoskrnl.exe", 0x5c7788, 0x0, true, 0x92aba22d58bd6cf9)
#define _m58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbCopyNA$ntoskrnl.exe", 0x3b2294, 0x0, true, 0x741a6c0e7a941b56)
#define _m59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAcquireSwapReference$ntoskrnl.exe", 0x3a34a8, 0x0, true, 0x49219c962e2125db)
#define _m60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddAccessFilterAce$ntoskrnl.exe", 0x90daf0, 0x0, true, 0xb6dd9070c5c4ab97)
#define _m61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddDynamicEHContinuationTarget$ntoskrnl.exe", 0x916198, 0x0, true, 0x7121eac26db1c992)
#define _m62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplyHotPatch$ntoskrnl.exe", 0x9aea74, 0x0, true, 0xe385a63a44fea3e8)
#define _m63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplyImportRelocationToImage$ntoskrnl.exe", 0x3ad15c, 0x0, true, 0x8129150b3ad5a3ab)
#define _m64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplyImportRelocationToPage$ntoskrnl.exe", 0x2efc5c, 0x0, true, 0x578a217be45800db)
#define _m65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplyIndirectRelocationToPage$ntoskrnl.exe", 0x589c64, 0x0, true, 0xb4fcae4249bd84f4)
#define _m66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplySwitchJumpRelocationToPage$ntoskrnl.exe", 0x589d10, 0x0, true, 0x304e509cf74fe376)
#define _m67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlBootStatusDisableFlushing$ntoskrnl.exe", 0x3a44a0, 0x0, true, 0x876b5cc2f82f569b)
#define _m68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlBootStatusItemInfo$ntoskrnl.exe", 0x77547c, 0x0, true, 0x28d896f91bee2442)
#define _m69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(struct rtl::csparse_bitmap_t*, uint64_t, uint64_t)>*), "$RtlCSparseBitmapBitmaskRead$ntoskrnl.exe", 0x2f5320, 0x0, true, 0x1c77bb390f8a84de)
#define _m70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::csparse_bitmap_t*, uint64_t, uint64_t, uint64_t)>*), "$RtlCSparseBitmapBitmaskWrite$ntoskrnl.exe", 0x360b44, 0x0, true, 0xf3d446200c5a4c30)
#define _m71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::csparse_bitmap_t*, uint64_t, uint64_t)>*), "$RtlCSparseBitmapBitsClear$ntoskrnl.exe", 0x360410, 0x0, true, 0xc136f2805245cb18)
#define _m72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCSparseBitmapEnterLockingRegion$ntoskrnl.exe", 0x361948, 0x0, true, 0xc89cc57411ec6121)
#define _m73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCSparseBitmapFindBitSetCapped$ntoskrnl.exe", 0x2b358c, 0x0, true, 0x2b5c8ed402ab370a)
#define _m74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCSparseBitmapLeaveLockingRegion$ntoskrnl.exe", 0x3614e8, 0x0, true, 0xf96133d2e4014112)
#define _m75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCSparseBitmapStart$ntoskrnl.exe", 0x39a310, 0x0, true, 0x231e5fda583cc0be)
#define _m76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCalculateUnwindInfoSizeForRetpoline$ntoskrnl.exe", 0x589898, 0x0, true, 0x716e2e70e99957e)
#define _m77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCalculateUserShadowStackSizes$ntoskrnl.exe", 0x90b7e4, 0x0, true, 0x9f26c46c01c9a6b8)
#define _m78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCapabilityCheckForSingleSessionSku$ntoskrnl.exe", 0x90efd0, 0x0, true, 0xabdb71e53ed5dcb5)
#define _m79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCaptureContext2$ntoskrnl.exe", 0x3fd920, 0x0, true, 0xda955e5c4006f11a)
#define _m80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCaptureRetpolineImportRvas$ntoskrnl.exe", 0x3945c8, 0x0, true, 0x6da6d3e1b2ae5e02)
#define _m81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCheckCurrentPatchesApplied$ntoskrnl.exe", 0x9164f0, 0x0, true, 0xe8db82f57fae5ac)
#define _m82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCheckSystemBootStatusIntegrity$ntoskrnl.exe", 0x910e00, 0x0, true, 0xe021df8833bf9206)
#define _m83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlConstructCrossVmEventPath$ntoskrnl.exe", 0x911070, 0x0, true, 0x5e33a9f1a5c574f8)
#define _m84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlConstructCrossVmMutexPath$ntoskrnl.exe", 0x911070, 0x0, true, 0xcc6c224a2d35418e)
#define _m85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlContinue$ntoskrnl.exe", 0x5898d8, 0x0, true, 0xbb909cb433e2feb3)
#define _m86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlContinueLongJump$ntoskrnl.exe", 0x5898f0, 0x0, true, 0x14077794b125c973)
#define _m87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyRetpolineStubsUnwindInfo$ntoskrnl.exe", 0x589940, 0x0, true, 0x95436e2f1acb610f)
#define _m88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCountRequiredHotPatchAddressTableEntries$ntoskrnl.exe", 0x916558, 0x0, true, 0xd2df46043bd9bb20)
#define _m89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateEnclaveReturnFrame$ntoskrnl.exe", 0x58d160, 0x0, true, 0xfc949df2e5b40068)
#define _m90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateInvertedFunctionTableCacheEntry$ntoskrnl.exe", 0xa4e924, 0x0, true, 0x83a243d2db60be50)
#define _m91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateRetpolineRelocationInformation$ntoskrnl.exe", 0x32440c, 0x0, true, 0x65d0f2e76f24dfbd)
#define _m92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateRetpolineStubsFunctionTable$ntoskrnl.exe", 0x589a28, 0x0, true, 0x108f098476410009)
#define _m93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateRvaList$ntoskrnl.exe", 0x6ee81c, 0x0, true, 0x50a4fcf46aaec09d)
#define _m94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, struct rtl::user_process_parameters_t*, uint8_t, uint32_t, struct rtl::user_process_information_t*)>*), "$RtlCreateUserProcessEx$ntoskrnl.exe", 0xa3eaf4, 0x0, true, 0xc9247ce6b92c5c17)
#define _m95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeleteDynamicEHContinuationTargetTreeNode$ntoskrnl.exe", 0x6e26b0, 0x0, true, 0xf865ed5ded871949)
#define _m96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDetermineHotPatchExtent$ntoskrnl.exe", 0x91669c, 0x0, true, 0x50841b87752b13f7)
#define _m97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDetermineHotPatchUndoExtent$ntoskrnl.exe", 0x916700, 0x0, true, 0xcb99068fa9d3e449)
#define _m98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlDrainNonVolatileFlush$ntoskrnl.exe", 0x57fb90, 0x0, true, 0xebde5c96b2bdefba)
#define _m99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnumRvaListFirst$ntoskrnl.exe", 0x6ce9b4, 0x0, true, 0xdcd2cff56dbce8dc)
#define _n00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnumerateHotPatchPatches$ntoskrnl.exe", 0x916748, 0x0, true, 0x369714f330d363ec)
#define _n01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::correlation_vector_t*)>*), "$RtlExtendCorrelationVector$ntoskrnl.exe", 0x911970, 0x0, true, 0x4b0e818ffe148f9d)
#define _n02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlExtractBitMapEx$ntoskrnl.exe", 0x580f20, 0x0, true, 0x886fa79c06a2492a)
#define _n03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFcpCompareFeatureIdToFeature$ntoskrnl.exe", 0x915460, 0x0, true, 0x17254cfdd2295e4b)
#define _n04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFcpCompareFeatureIdToFeatureUsageSubscription$ntoskrnl.exe", 0x915460, 0x0, true, 0x5fedabcfe7e8f581)
#define _n05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(__unaligned void*, uint64_t, const uint8_t)>*), "$RtlFillMemoryNonTemporal$ntoskrnl.exe", 0x3fe110, 0x0, true, 0xdf18bdc4239f2bb6)
#define _n06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, __unaligned void*, uint64_t, const uint8_t, uint32_t)>*), "$RtlFillNonVolatileMemory$ntoskrnl.exe", 0x586ca0, 0x0, true, 0x9bdbe11d816dbb80)
#define _n07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindHotPatchBase$ntoskrnl.exe", 0x9167d0, 0x0, true, 0xfcad7464257882b5)
#define _n08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindHotPatchInformation$ntoskrnl.exe", 0x916800, 0x0, true, 0x6e4c44abfaeb59a2)
#define _n09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindLongestRunClearEx$ntoskrnl.exe", 0x398020, 0x0, true, 0x19f3d4ec9eaeff1e)
#define _n10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindNextForwardRunSet$ntoskrnl.exe", 0x34d7c0, 0x0, true, 0x6e771701db1a569d)
#define _n11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint64_t, uint32_t)>*), "$RtlFlushNonVolatileMemory$ntoskrnl.exe", 0x57fbc0, 0x0, true, 0xabeeff9814ef9e22)
#define _n12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::nv_memory_range_t*, uint64_t, uint32_t)>*), "$RtlFlushNonVolatileMemoryRanges$ntoskrnl.exe", 0x586d50, 0x0, true, 0x2830a345ae7fbcb3)
#define _n13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlFreeNonVolatileToken$ntoskrnl.exe", 0x586de0, 0x0, true, 0xbc8b8ef36f42baa9)
#define _n14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeUTF8String$ntoskrnl.exe", 0x90b3e0, 0x0, true, 0xd03aade51fff846c)
#define _n15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(uint64_t)>*), "$RtlGetEnabledExtendedAndSupervisorFeatures$ntoskrnl.exe", 0x586f60, 0x0, true, 0xa48eb7b595e4bd79)
#define _n16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetExtendedContextLength2$ntoskrnl.exe", 0x32ee40, 0x0, true, 0x59984d1bd6e12bc0)
#define _n17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetHostNtSystemRoot$ntoskrnl.exe", 0x6ed720, 0x0, true, 0x41b826ff81b93edc)
#define _n18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetHotPatchSize$ntoskrnl.exe", 0x589c4c, 0x0, true, 0xd74b6a8329af7804)
#define _n19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetMultiTimePrecise$ntoskrnl.exe", 0x2de9b0, 0x0, true, 0x3a9eeab783729240)
#define _n20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t, void**)>*), "$RtlGetNonVolatileToken$ntoskrnl.exe", 0x586e00, 0x0, true, 0xdeb408e198260381)
#define _n21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<const wchar_t*()>*), "$RtlGetNtSystemRoot$ntoskrnl.exe", 0x6e5cc0, 0x0, true, 0xf818607ea6b74b8)
#define _n22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, const wchar_t*, const wchar_t*, enum nt::state_location_type_t, wchar_t*, uint32_t, uint32_t*)>*), "$RtlGetPersistedStateLocation$ntoskrnl.exe", 0x682550, 0x0, true, 0x84a46c0a662e324d)
#define _n23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetRvaListIteratorState$ntoskrnl.exe", 0x6ce9fc, 0x0, true, 0x96afca264726b40f)
#define _n24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetSessionProperties$ntoskrnl.exe", 0x90f130, 0x0, true, 0xf84bd5c37abfa8ec)
#define _n25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetSwapReferenceIndex$ntoskrnl.exe", 0x7be3b4, 0x0, true, 0x32866218c5ad8c68)
#define _n26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum rtl::bsd_item_type_t, void*, uint32_t, uint32_t*)>*), "$RtlGetSystemBootStatus$ntoskrnl.exe", 0x77a170, 0x0, true, 0x25b8e207d3378701)
#define _n27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetSystemBootStatusEx$ntoskrnl.exe", 0x77a1b0, 0x0, true, 0xf34419ee0be0e30d)
#define _n28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, nt::unicode_view*)>*), "$RtlGetTokenNamedObjectPath$ntoskrnl.exe", 0x90f190, 0x0, true, 0x9143b7ded169b6d7)
#define _n29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetUmsContextExtendedSize$ntoskrnl.exe", 0x58d13c, 0x0, true, 0xf0ca2aa0e6ef30b8)
#define _n30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHashBytes2$ntoskrnl.exe", 0x3f1084, 0x0, true, 0x9209293c5d6f0491)
#define _n31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHotPatchSynchronizationRequired$ntoskrnl.exe", 0x916934, 0x0, true, 0x7dec1da340a81c38)
#define _n32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHpGlobalsInitialize$ntoskrnl.exe", 0x3bff80, 0x0, true, 0x9de5c1b39fe58fa8)
#define _n33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHpHeapManagerInitialize$ntoskrnl.exe", 0x39a6fc, 0x0, true, 0x21f4444adb35941c)
#define _n34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHpHeapManagerStart$ntoskrnl.exe", 0x39a148, 0x0, true, 0xf1c32c5a73f89ed8)
#define _n35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::correlation_vector_t*)>*), "$RtlIncrementCorrelationVector$ntoskrnl.exe", 0x9119c0, 0x0, true, 0x36399546a5f10ad1)
#define _n36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitMinimalBarrier$ntoskrnl.exe", 0xa0e550, 0x0, true, 0xea40f74987ca4b55)
#define _n37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitUTF8String$ntoskrnl.exe", 0x57f440, 0x0, true, 0xf27d20c7fbe3d608)
#define _n38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitUTF8StringEx$ntoskrnl.exe", 0x57f420, 0x0, true, 0xe6c128c0806d2072)
#define _n39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeBootStatDataCache$ntoskrnl.exe", 0x3c3b74, 0x0, true, 0x161801d056295c14)
#define _n40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeBootStatusDataBlackBox$ntoskrnl.exe", 0x77a308, 0x0, true, 0xd94650f157b4b1c6)
#define _n41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::correlation_vector_t*, int32_t, const struct nt::guid_t*)>*), "$RtlInitializeCorrelationVector$ntoskrnl.exe", 0x911aa0, 0x0, true, 0x116db6a066bf82a3)
#define _n42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeExtendedContext2$ntoskrnl.exe", 0x32f840, 0x0, true, 0x1673a5e2e25e77e6)
#define _n43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeSwapReference$ntoskrnl.exe", 0x7bd9d8, 0x0, true, 0xf18d678da491f1b8)
#define _n44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInsertHeadCircularList$ntoskrnl.exe", 0x31c944, 0x0, true, 0x69b1f9fb959c56e)
#define _n45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInternEntryDereference$ntoskrnl.exe", 0x5f2020, 0x0, true, 0xff15748d1005eecc)
#define _n46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInternTableInitialize$ntoskrnl.exe", 0x7b5044, 0x0, true, 0x15c82f149d63e8fe)
#define _n47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInternTableIntern$ntoskrnl.exe", 0x6c6720, 0x0, true, 0x9b65aa358a1258aa)
#define _n48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIntersectBitMaps$ntoskrnl.exe", 0x581c30, 0x0, true, 0xca0dfaa5af926b42)
#define _n49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIntersectBitMapsEx$ntoskrnl.exe", 0x2fe750, 0x0, true, 0x2646cee7eda5385f)
#define _n50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, uint32_t)>*), "$RtlIsCloudFilesPlaceholder$ntoskrnl.exe", 0x587890, 0x0, true, 0xeddb3c82e51fc0cb)
#define _n51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::sid_and_attributes_t*)>*), "$RtlIsElevatedRid$ntoskrnl.exe", 0x70d740, 0x0, true, 0x6a46579ca1ee90b4)
#define _n52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsImageFullyRetpolined$ntoskrnl.exe", 0x36e710, 0x0, true, 0x6ffa32f37ad36235)
#define _n53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(nt::unicode_view*, nt::unicode_view*, uint8_t, wchar_t*)>*), "$RtlIsNameInUnUpcasedExpression$ntoskrnl.exe", 0x357e90, 0x0, true, 0x979c7c51d8af93d6)
#define _n54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t)>*), "$RtlIsNonEmptyDirectoryReparsePointAllowed$ntoskrnl.exe", 0x319760, 0x0, true, 0x570e4f54bbb4cbbd)
#define _n55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, uint32_t)>*), "$RtlIsPartialPlaceholder$ntoskrnl.exe", 0x912d40, 0x0, true, 0xdd2bbeb16e68fa66)
#define _n56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "$RtlIsPartialPlaceholderFileHandle$ntoskrnl.exe", 0x912d60, 0x0, true, 0xb18156af5f949942)
#define _n57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const void*, enum nt::file_information_class_t, uint8_t*)>*), "$RtlIsPartialPlaceholderFileInfo$ntoskrnl.exe", 0x912dc0, 0x0, true, 0xc1e98c667bb55158)
#define _n58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$RtlIsStateSeparationEnabled$ntoskrnl.exe", 0x6e2900, 0x0, true, 0x36ecbfe35d4b9a52)
#define _n59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsZeroMemory$ntoskrnl.exe", 0x5878c0, 0x0, true, 0xcd55f6e145ca6e8a)
#define _n60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLengthCurrentClearRunBackward$ntoskrnl.exe", 0x34e874, 0x0, true, 0x668273f0f4ed3e7b)
#define _n61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLengthCurrentClearRunBackwardEx$ntoskrnl.exe", 0x581ca4, 0x0, true, 0x45b5f205e0cf2796)
#define _n62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLengthCurrentClearRunForwardEx$ntoskrnl.exe", 0x581d48, 0x0, true, 0xb69149525684f4ac)
#define _n63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::xsave_area_header_t*, uint32_t, uint32_t*)>*), "$RtlLocateSupervisorFeature$ntoskrnl.exe", 0x586f90, 0x0, true, 0xe26f761994e90b79)
#define _n64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLongLongAdd$ntoskrnl.exe", 0x569548, 0x0, true, 0xa4d28b4cfc5a0a0d)
#define _n65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLookupFunctionTableEx$ntoskrnl.exe", 0x37c820, 0x0, true, 0x3ace4603a2f72560)
#define _n66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLookupImageSectionByName$ntoskrnl.exe", 0x586ed4, 0x0, true, 0x4db6bbe29a8f4d00)
#define _n67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMinimalBarrier$ntoskrnl.exe", 0xa0e560, 0x0, true, 0x37fb4b6d6a5f9c4)
#define _n68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlNormalizeSecurityDescriptor$ntoskrnl.exe", 0x2d91b0, 0x0, true, 0x6e106585a779ef43)
#define _n69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::feature_usage_report_t*)>*), "$RtlNotifyFeatureUsage$ntoskrnl.exe", 0x588100, 0x0, true, 0x74756e12bba7b368)
#define _n70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlNumberOfSetBitsInRangeEx$ntoskrnl.exe", 0x5822a0, 0x0, true, 0xd633b80ad0ae6f4d)
#define _n71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlParseLeapSecondData$ntoskrnl.exe", 0x97c20c, 0x0, true, 0x3387222e10174472)
#define _n72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPerformRetpolineRelocationsOnImage$ntoskrnl.exe", 0x589dbc, 0x0, true, 0x639969f5b269f717)
#define _n73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPerformRetpolineRelocationsOnImageEx$ntoskrnl.exe", 0x589dfc, 0x0, true, 0xd97f328bc710ce4f)
#define _n74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPrepareEnclaveCall$ntoskrnl.exe", 0x58d254, 0x0, true, 0xf160fddac212a71f)
#define _n75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum rtl::feature_configuration_type_t, uint64_t*, struct rtl::feature_configuration_t*, uint32_t*)>*), "$RtlQueryAllFeatureConfigurations$ntoskrnl.exe", 0x914860, 0x0, true, 0x201a1277cbccbbb5)
#define _n76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, enum rtl::feature_configuration_type_t, uint64_t*, struct rtl::feature_configuration_t*)>*), "$RtlQueryFeatureConfiguration$ntoskrnl.exe", 0x763c90, 0x0, true, 0x1db6903598eb3bf0)
#define _n77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t()>*), "$RtlQueryFeatureConfigurationChangeStamp$ntoskrnl.exe", 0x588120, 0x0, true, 0x144d9175f9613ef1)
#define _n78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char()>*), "$RtlQueryProcessPlaceholderCompatibilityMode$ntoskrnl.exe", 0x912e20, 0x0, true, 0x5623a8b1facfab55)
#define _n79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, nt::unicode_view*, uint32_t, uint32_t*, void*, uint32_t*)>*), "$RtlQueryRegistryValueWithFallback$ntoskrnl.exe", 0x5f29b0, 0x0, true, 0xd97ff9a00470cd95)
#define _n80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char()>*), "$RtlQueryThreadPlaceholderCompatibilityMode$ntoskrnl.exe", 0x912e50, 0x0, true, 0xdb2ad0e441048674)
#define _n81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRaiseCustomSystemEventTrigger$ntoskrnl.exe", 0x588520, 0x0, true, 0xf1040e5e01a5f034)
#define _n82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRaiseNoncontinuableException$ntoskrnl.exe", 0x3fdeb0, 0x0, true, 0x57bce659623bf684)
#define _n83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<void(void*)>*, void*, uint64_t*, void**)>*), "$RtlRegisterFeatureConfigurationChangeNotification$ntoskrnl.exe", 0x914920, 0x0, true, 0xab8bacd736ca3ad0)
#define _n84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReleaseSwapReference$ntoskrnl.exe", 0x3a381c, 0x0, true, 0x57bc10f112f0a3fe)
#define _n85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRestoreSystemBootStatusDefaults$ntoskrnl.exe", 0x911030, 0x0, true, 0xe8b79283367cc8cf)
#define _n86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRetpolineStubsFunctionTable$ntoskrnl.exe", 0xe01a70, 0x0, true, 0x370efea4d88a6254)
#define _n87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRetpolineStubsFunctionTableSize$ntoskrnl.exe", 0xe01844, 0x0, true, 0x6ca3455eea4730bb)
#define _n88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char(char)>*), "$RtlSetProcessPlaceholderCompatibilityMode$ntoskrnl.exe", 0x912e90, 0x0, true, 0x89842b6b4a536f5)
#define _n89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum rtl::bsd_item_type_t, void*, uint32_t, uint32_t*)>*), "$RtlSetSystemBootStatus$ntoskrnl.exe", 0x77a280, 0x0, true, 0xc661b29f4d0af3f6)
#define _n90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetSystemBootStatusEx$ntoskrnl.exe", 0x6ed100, 0x0, true, 0x4e98134b4b9e28ea)
#define _n91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char(char)>*), "$RtlSetThreadPlaceholderCompatibilityMode$ntoskrnl.exe", 0x912ed0, 0x0, true, 0x28d307c57c8ed613)
#define _n92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlShiftLeftBitMap$ntoskrnl.exe", 0x582520, 0x0, true, 0xdafa82bdf0fb870d)
#define _n93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlShiftLeftBitMapEx$ntoskrnl.exe", 0x582590, 0x0, true, 0xfbfff7e4bcb18a6b)
#define _n94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSizeOfRetpolineIndirectFixup$ntoskrnl.exe", 0x58a1c8, 0x0, true, 0x720e373434ad0fe7)
#define _n95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSizeOfRetpolineRelocationEntry$ntoskrnl.exe", 0x324730, 0x0, true, 0x5667416fba5518b3)
#define _n96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::sparse_array_t*, uint64_t, void*)>*), "$RtlSparseArrayElementAllocate$ntoskrnl.exe", 0x361444, 0x0, true, 0x5efd459d319eecf5)
#define _n97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::sparse_array_t*, uint64_t)>*), "$RtlSparseArrayElementAllocated$ntoskrnl.exe", 0x2b3530, 0x0, true, 0x29116b170a9ecac)
#define _n98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseArrayElementFindCapped$ntoskrnl.exe", 0x58f164, 0x0, true, 0x8816e7c0244065fa)
#define _n99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStateDurationCapture$ntoskrnl.exe", 0x2d462c, 0x0, true, 0xf39672fd1b266579)
#define _o00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStateDurationDelta$ntoskrnl.exe", 0x23f400, 0x0, true, 0x42a8a96a18fc0aab)
#define _o01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStateDurationUpdate$ntoskrnl.exe", 0x2d3138, 0x0, true, 0x7c3d79515d8effc6)
#define _o02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbCatNW$ntoskrnl.exe", 0x5baa90, 0x0, true, 0x71b6106775789a3d)
#define _o03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbLengthA$ntoskrnl.exe", 0x503fac, 0x0, true, 0x72575078c7ced927)
#define _o04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTimelineBitmapMerge$ntoskrnl.exe", 0x23fc98, 0x0, true, 0xeb88ff052d9e33c9)
#define _o05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTimelineBitmapUpdate$ntoskrnl.exe", 0x2d4170, 0x0, true, 0xeebd4bde9d51af61)
#define _o06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTimelineBitmapUpdateRange$ntoskrnl.exe", 0x2d2d68, 0x0, true, 0x2f5d0ff4e885ab5b)
#define _o07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint32_t*)>*), "$RtlULongSub$ntoskrnl.exe", 0x2e90b0, 0x0, true, 0xa0a43dcaa08c0e5a)
#define _o08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUdiv128$ntoskrnl.exe", 0x3a60e0, 0x0, true, 0x6047cafe27d64159)
#define _o09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringCchCopyStringN$ntoskrnl.exe", 0x578fa8, 0x0, true, 0xcabc13feb4f73853)
#define _o10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringToUTF8String$ntoskrnl.exe", 0x915150, 0x0, true, 0x3ac509d31f531738)
#define _o11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*/*types differ*/), "$RtlUnregisterFeatureConfigurationChangeNotification$ntoskrnl.exe", 0x914950, 0x0, true, 0x70d77902c6d716de)
#define _o12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnsignedMultiplyHigh$ntoskrnl.exe", 0x3f0db0, 0x0, true, 0xaa5f7c6a23b2dfad)
#define _o13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUpdateImportRelocationsInImage$ntoskrnl.exe", 0x3acf18, 0x0, true, 0x4afef8e5044b292e)
#define _o14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUpdateSwapReference$ntoskrnl.exe", 0x7b443c, 0x0, true, 0xbd2688aed7290618)
#define _o15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUTF8StringToUnicodeString$ntoskrnl.exe", 0x915050, 0x0, true, 0xebb1034d3f17c5e9)
#define _o16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::correlation_vector_t*)>*), "$RtlValidateCorrelationVector$ntoskrnl.exe", 0x911b20, 0x0, true, 0x52bdd00eb87e7bfd)
#define _o17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlValidateHotPatchBase$ntoskrnl.exe", 0x916a94, 0x0, true, 0xe1b450d58ae86208)
#define _o18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlValidateRetpolineRelocation$ntoskrnl.exe", 0x324330, 0x0, true, 0x36c7171f13c1d174)
#define _o19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlVerifyUserUnwindTarget$ntoskrnl.exe", 0x916244, 0x0, true, 0xa369030846302281)
#define _o20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64GetEquivalentMachineCHPE$ntoskrnl.exe", 0x2c1358, 0x0, true, 0x9bb6012b304fe9f9)
#define _o21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, __unaligned void*, __unaligned const void*, uint64_t, uint32_t)>*), "$RtlWriteNonVolatileMemory$ntoskrnl.exe", 0x586e20, 0x0, true, 0xe3a373db32ae1f29)
#define _o22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlXRestoreS$ntoskrnl.exe", 0x37edd8, 0x0, true, 0xf4a9c354218aeb94)
#define _o23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlXSaveS$ntoskrnl.exe", 0x31131c, 0x0, true, 0x864bc2e20cc31094)
#define _o24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t*)>*), "$RtlAbsoluteToSelfRelativeSD$ntoskrnl.exe", 0x7512c0, 0x0, true, 0xe58535a44db27e35)
#define _o25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, uint32_t, uint32_t, void**)>*), "$RtlAcquirePrivilege$ntoskrnl.exe", 0x6dcd2c, 0x0, true, 0x8e4b75be5ee5df2d)
#define _o26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*)>*), "$RtlAddAccessAllowedAce$ntoskrnl.exe", 0x70d360, 0x0, true, 0xb82b599bd6ff581e)
#define _o27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, void*)>*), "$RtlAddAccessAllowedAceEx$ntoskrnl.exe", 0x76c590, 0x0, true, 0xb213b8ce504520be)
#define _o28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, struct nt::guid_t*, struct nt::guid_t*, void*)>*), "$RtlAddAccessAllowedObjectAce$ntoskrnl.exe", 0x90da30, 0x0, true, 0xf17793c5902c1f47)
#define _o29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, void*)>*), "$RtlAddAccessDeniedAceEx$ntoskrnl.exe", 0x789d70, 0x0, true, 0x4e32ae5c1ddf9b45)
#define _o30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, struct nt::guid_t*, struct nt::guid_t*, void*)>*), "$RtlAddAccessDeniedObjectAce$ntoskrnl.exe", 0x90da90, 0x0, true, 0x9e8013534b7a9c37)
#define _o31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*, uint32_t)>*), "$RtlAddAce$ntoskrnl.exe", 0x6152c0, 0x0, true, 0xc6de09caeced7092)
#define _o32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, wchar_t*, wchar_t*)>*), "$RtlAddAtomToAtomTable$ntoskrnl.exe", 0x6e8330, 0x0, true, 0x3aeea1cbfd118076)
#define _o33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddAtomToAtomTableEx$ntoskrnl.exe", 0x2a8f50, 0x0, true, 0xf1d88e9401a9d7c9)
#define _o34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*, uint8_t, uint8_t)>*), "$RtlAddAuditAccessAce$ntoskrnl.exe", 0x90dcf0, 0x0, true, 0x3f4a7dd3fa610fef)
#define _o35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, void*, uint8_t, uint8_t)>*), "$RtlAddAuditAccessAceEx$ntoskrnl.exe", 0x90dd30, 0x0, true, 0x5bc36e292dcf1d73)
#define _o36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, struct nt::guid_t*, struct nt::guid_t*, void*, uint8_t, uint8_t)>*), "$RtlAddAuditAccessObjectAce$ntoskrnl.exe", 0x90dd80, 0x0, true, 0x57715d513ae160ea)
#define _o37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*, uint8_t, uint32_t)>*), "$RtlAddMandatoryAce$ntoskrnl.exe", 0x605370, 0x0, true, 0x44d043058de56c3b)
#define _o38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddProcessTrustLabelAce$ntoskrnl.exe", 0x7a6370, 0x0, true, 0x9cd3ee182df06d32)
#define _o39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddRange$ntoskrnl.exe", 0x74c4d0, 0x0, true, 0x96f71cb3730e62d3)
#define _o40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddResourceAttributeAce$ntoskrnl.exe", 0x90de10, 0x0, true, 0x5cabb1dbe03e3b2d)
#define _o41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct image::nt_headers64_t*, void*, uint32_t)>*), "$RtlAddressInSectionTable$ntoskrnl.exe", 0x33b234, 0x0, true, 0xc288ce8e56c685a0)
#define _o42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*, uint32_t, uint64_t)>*), "$RtlAllocateHeap$ntoskrnl.exe", 0x35ee20, 0x0, true, 0x8248972ffd34df7d)
#define _o43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAllocateStringRoutine$ntoskrnl.exe", 0x97ebe0, 0x0, true, 0x199b2748cce29f83)
#define _o44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<wchar_t(uint8_t**)>*), "$RtlAnsiCharToUnicodeChar$ntoskrnl.exe", 0x61ba70, 0x0, true, 0xc64a46e31ef44320)
#define _o45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, nt::ascii_view*, uint8_t)>*), "$RtlAnsiStringToUnicodeString$ntoskrnl.exe", 0x68a060, 0x0, true, 0x3f6046e439e162d7)
#define _o46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, const char*)>*), "$RtlAppendAsciizToString$ntoskrnl.exe", 0x90bfa0, 0x0, true, 0x2ccd484c96abcd12)
#define _o47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, const nt::ascii_view*)>*), "$RtlAppendStringToString$ntoskrnl.exe", 0x758b60, 0x0, true, 0x633cbc7e1dcc7a77)
#define _o48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, const nt::unicode_view*)>*), "$RtlAppendUnicodeStringToString$ntoskrnl.exe", 0x2e1fa0, 0x0, true, 0xccb0e790526879a3)
#define _o49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, const wchar_t*)>*), "$RtlAppendUnicodeToString$ntoskrnl.exe", 0x25ba90, 0x0, true, 0x2bbcb267ef7a031)
#define _o50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, uint32_t)>*), "$RtlAreAllAccessesGranted$ntoskrnl.exe", 0x6c1cc0, 0x0, true, 0xc7a1ec903101d166)
#define _o51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, uint32_t)>*), "$RtlAreAnyAccessesGranted$ntoskrnl.exe", 0x6ecc00, 0x0, true, 0xc8e5a93aac4ac46)
#define _o52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlAreBitsClear$ntoskrnl.exe", 0x2e0bc0, 0x0, true, 0xbd20bf67c2579e1e)
#define _o53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAreBitsClearEx$ntoskrnl.exe", 0x2f54a0, 0x0, true, 0xcadbc860728e6f99)
#define _o54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlAreBitsSet$ntoskrnl.exe", 0x2ff170, 0x0, true, 0x7e05ec637eada615)
#define _o55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAreBitsSetEx$ntoskrnl.exe", 0x580ca0, 0x0, true, 0xef0ef0adfc5ab45a)
#define _o56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAreNamesEqual$ntoskrnl.exe", 0x2e7e50, 0x0, true, 0x3af1ea6df0f6c99)
#define _o57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, void*, uint32_t, char*)>*), "$RtlAssert$ntoskrnl.exe", 0x5827e0, 0x0, true, 0xc977edfdb22a1ea1)
#define _o58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::avl_tree_t*, struct rtl::balanced_node_t*, uint8_t, struct rtl::balanced_node_t*)>*), "$RtlAvlInsertNodeEx$ntoskrnl.exe", 0x2a2c20, 0x0, true, 0x3921a1dc90a825d7)
#define _o59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAvlRemoveNode$ntoskrnl.exe", 0x296cc0, 0x0, true, 0x9f7a54f94e56f5ba)
#define _o60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlBackoff$ntoskrnl.exe", 0x35a210, 0x0, true, 0xf356af1d6a8dcbcd)
#define _o61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlBaseAceType$ntoskrnl.exe", 0x97ec38, 0x0, true, 0xfa991b717697c9bd)
#define _o62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlBeginReadTickLock$ntoskrnl.exe", 0x3376a4, 0x0, true, 0x938fe858cd85c378)
#define _o63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*, uint8_t*)>*), "$RtlCapabilityCheck$ntoskrnl.exe", 0x90ebf0, 0x0, true, 0x43f38dc62c2e6f7c)
#define _o64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::context*)>*), "$RtlCaptureContext$ntoskrnl.exe", 0x3fd7c0, 0x0, true, 0xbf45c7a4f2301d95)
#define _o65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCaptureImageExceptionValues$ntoskrnl.exe", 0x36f110, 0x0, true, 0x4cef255721c8fbfd)
#define _o66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint16_t(uint32_t, uint32_t, void**, uint32_t*)>*), "$RtlCaptureStackBackTrace$ntoskrnl.exe", 0x32c890, 0x0, true, 0x4d887a28436e97b7)
#define _o67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const char*, uint32_t, uint32_t*)>*), "$RtlCharToInteger$ntoskrnl.exe", 0x788660, 0x0, true, 0xccf386220750851)
#define _o68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t*)>*), "$RtlCheckPortableOperatingSystem$ntoskrnl.exe", 0x320c20, 0x0, true, 0xeb48a2f6554ca4a2)
#define _o69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, wchar_t*)>*), "$RtlCheckRegistryKey$ntoskrnl.exe", 0x6e8a60, 0x0, true, 0xa2cebeac51addb13)
#define _o70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t*)>*), "$RtlCheckTokenCapability$ntoskrnl.exe", 0x5806b0, 0x0, true, 0x6f917fec0f65a518)
#define _o71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t*)>*), "$RtlCheckTokenMembership$ntoskrnl.exe", 0x35c080, 0x0, true, 0x53a77e8db24fe468)
#define _o72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, uint8_t*)>*), "$RtlCheckTokenMembershipEx$ntoskrnl.exe", 0x35c0a0, 0x0, true, 0xf213ab1b6d5b15fe)
#define _o73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*)>*), "$RtlClearAllBits$ntoskrnl.exe", 0x2e0fc0, 0x0, true, 0x1c11aab226ae2762)
#define _o74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlClearAllBitsEx$ntoskrnl.exe", 0x311a60, 0x0, true, 0x7981874ed38be941)
#define _o75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*, uint32_t)>*), "$RtlClearBit$ntoskrnl.exe", 0x2fc280, 0x0, true, 0x2784fdc32c6c1afc)
#define _o76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlClearBitEx$ntoskrnl.exe", 0x30a650, 0x0, true, 0xaf86cce036327627)
#define _o77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlClearBits$ntoskrnl.exe", 0x244970, 0x0, true, 0x9e8b23894f35d4e)
#define _o78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlClearBitsEx$ntoskrnl.exe", 0x2aa000, 0x0, true, 0x97018c69fc6d54da)
#define _o79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(struct cm::partial_resource_descriptor_t*, uint64_t*)>*), "$RtlCmDecodeMemIoResource$ntoskrnl.exe", 0x320d30, 0x0, true, 0x92ebe7736b5ecff4)
#define _o80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct cm::partial_resource_descriptor_t*, uint8_t, uint64_t, uint64_t)>*), "$RtlCmEncodeMemIoResource$ntoskrnl.exe", 0x3a9120, 0x0, true, 0x9b6b4c179c3a22d3)
#define _o81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const nt::unicode_view*, const nt::unicode_view*)>*), "$RtlCompareAltitudes$ntoskrnl.exe", 0x30a6f0, 0x0, true, 0x2ded09953b283304)
#define _o82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(const void*, const void*, uint64_t)>*), "$RtlCompareMemory$ntoskrnl.exe", 0x3fdf20, 0x0, true, 0x8bdc19c81f020338)
#define _o83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(void*, uint64_t, uint32_t)>*), "$RtlCompareMemoryUlong$ntoskrnl.exe", 0x3fdfa0, 0x0, true, 0x472e9575f06bdbf0)
#define _o84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const nt::ascii_view*, const nt::ascii_view*, uint8_t)>*), "$RtlCompareString$ntoskrnl.exe", 0x619930, 0x0, true, 0x79abcb040c2c6fce)
#define _o85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const nt::unicode_view*, const nt::unicode_view*, uint8_t)>*), "$RtlCompareUnicodeString$ntoskrnl.exe", 0x61b8e0, 0x0, true, 0xfc0e069ec1e7ad69)
#define _o86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, uint64_t, const wchar_t*, uint64_t, uint8_t)>*), "$RtlCompareUnicodeStrings$ntoskrnl.exe", 0x6b58d0, 0x0, true, 0xaacf5c731dc7bf5c)
#define _o87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t, uint32_t*, void*)>*), "$RtlCompressBuffer$ntoskrnl.exe", 0x23aa00, 0x0, true, 0xf7c5a891660bfcbc)
#define _o88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferLZNT1$ntoskrnl.exe", 0x98b5f0, 0x0, true, 0x4e9b71cd8ed169f0)
#define _o89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferProcs$ntoskrnl.exe", 0x61f0, 0x0, true, 0xcccb17fc489a87a1)
#define _o90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferProgress$ntoskrnl.exe", 0x380980, 0x0, true, 0xa5ffc8ae1f216aa3)
#define _o91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferXpressHuff$ntoskrnl.exe", 0x3630b0, 0x0, true, 0x7f6b367c020d707f)
#define _o92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferXpressHuffMax$ntoskrnl.exe", 0x58b084, 0x0, true, 0xdebb67aa2e8f794d)
#define _o93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferXpressHuffStandard$ntoskrnl.exe", 0x363120, 0x0, true, 0x2ac01a8c5a36ce97)
#define _o94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferXpressLz$ntoskrnl.exe", 0x2e75f0, 0x0, true, 0xe7033e2f6efe47db)
#define _o95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferXpressLzMax$ntoskrnl.exe", 0x58b7a8, 0x0, true, 0x95466d8717854953)
#define _o96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressBufferXpressLzStandard$ntoskrnl.exe", 0x2e7660, 0x0, true, 0xdeb33ecd8a5beb82)
#define _o97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t*, uint32_t, uint8_t*, uint32_t, struct nt::compressed_data_info_t*, uint32_t, void*)>*), "$RtlCompressChunks$ntoskrnl.exe", 0x90ba80, 0x0, true, 0xaf4fe365696f4171)
#define _o98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressWorkSpaceSizeLZNT1$ntoskrnl.exe", 0x98b9c0, 0x0, true, 0xda7c7e1ba6b7b781)
#define _o99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressWorkSpaceSizeXpressHuff$ntoskrnl.exe", 0x320d60, 0x0, true, 0xe2a52c22070b5565)
#define _p00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompressWorkSpaceSizeXpressLz$ntoskrnl.exe", 0x3225e0, 0x0, true, 0x10087e0c34ecaefa)
#define _p01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, void*, uint32_t)>*), "$RtlComputeCrc32$ntoskrnl.exe", 0x2f5e90, 0x0, true, 0xda5648348e4387cc)
#define _p02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlComputeLfnChecksum$ntoskrnl.exe", 0x6bd6c0, 0x0, true, 0xa740e5dffcc4b8ed)
#define _p03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*)>*), "$RtlContractHashTable$ntoskrnl.exe", 0x339ec0, 0x0, true, 0x58da6d82c505ad)
#define _p04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlConvertLuidToUlonglong$ntoskrnl.exe", 0x590510, 0x0, true, 0x24db9e63c5b9110f)
#define _p05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, uint8_t)>*), "$RtlConvertSidToUnicodeString$ntoskrnl.exe", 0x690360, 0x0, true, 0x9222b0582f917a28)
#define _p06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*, struct rtl::bitmap_t*, uint32_t)>*), "$RtlCopyBitMap$ntoskrnl.exe", 0x2e16a0, 0x0, true, 0xef3d738b4f37be84)
#define _p07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyBitMapEx$ntoskrnl.exe", 0x2fcb10, 0x0, true, 0x2db961fe47ae1353)
#define _p08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyContext$ntoskrnl.exe", 0x6f20ac, 0x0, true, 0x67cf547e33a0ae3a)
#define _p09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::luid_t*, struct nt::luid_t*)>*), "$RtlCopyLuid$ntoskrnl.exe", 0x756390, 0x0, true, 0xa1d1c98289636e83)
#define _p10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t, struct nt::luid_and_attributes_t*, struct nt::luid_and_attributes_t*)>*), "$RtlCopyLuidAndAttributesArray$ntoskrnl.exe", 0x6bbbd0, 0x0, true, 0x3f1dd1664acdf8ce)
#define _p11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(__unaligned void*, __unaligned const void*, uint64_t)>*), "$RtlCopyMemoryNonTemporal$ntoskrnl.exe", 0x3fdfd0, 0x0, true, 0xac84021058520b4f)
#define _p12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyRangeList$ntoskrnl.exe", 0x7492c0, 0x0, true, 0x5f165d35e15e038c)
#define _p13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, void*)>*), "$RtlCopySid$ntoskrnl.exe", 0x66acd0, 0x0, true, 0xd27502ab1c401a48)
#define _p14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, struct nt::sid_and_attributes_t*, uint32_t, struct nt::sid_and_attributes_t*, void*, void**, uint32_t*)>*), "$RtlCopySidAndAttributesArray$ntoskrnl.exe", 0x608ad0, 0x0, true, 0xf8b0059b136924f5)
#define _p15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::ascii_view*, const nt::ascii_view*)>*), "$RtlCopyString$ntoskrnl.exe", 0x57f3e0, 0x0, true, 0xc4b33a096dba986d)
#define _p16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::unicode_view*, const nt::unicode_view*)>*), "$RtlCopyUnicodeString$ntoskrnl.exe", 0x254130, 0x0, true, 0xa7671ccd323d24d8)
#define _p17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const void*, uint64_t, uint32_t)>*), "$RtlCrc32$ntoskrnl.exe", 0x582ae0, 0x0, true, 0xed3af4c98f6b5c70)
#define _p18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCrc32Table$ntoskrnl.exe", 0x11580, 0x0, true, 0x19ef05c70bde27f)
#define _p19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(const void*, uint64_t, uint64_t)>*), "$RtlCrc64$ntoskrnl.exe", 0x2fec10, 0x0, true, 0xe90408f5d163b445)
#define _p20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t)>*), "$RtlCreateAcl$ntoskrnl.exe", 0x6153f0, 0x0, true, 0x98933b6eb49e6d23)
#define _p21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void**)>*), "$RtlCreateAtomTable$ntoskrnl.exe", 0x69f170, 0x0, true, 0xb9b9c001484c5eab)
#define _p22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateAtomTableEx$ntoskrnl.exe", 0x2e50e0, 0x0, true, 0x2d9b7989de913444)
#define _p23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t**, uint32_t, uint32_t)>*), "$RtlCreateHashTable$ntoskrnl.exe", 0x372fc0, 0x0, true, 0xf6c55f4583e5f12e)
#define _p24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t**, uint32_t, uint32_t, uint32_t)>*), "$RtlCreateHashTableEx$ntoskrnl.exe", 0x397990, 0x0, true, 0x33c77621117ecd54)
#define _p25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(uint32_t, void*, uint64_t, uint64_t, void*, struct rtl::heap_parameters_t*)>*), "$RtlCreateHeap$ntoskrnl.exe", 0x752540, 0x0, true, 0x5617b209590cf274)
#define _p26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, wchar_t*)>*), "$RtlCreateRegistryKey$ntoskrnl.exe", 0x7ba430, 0x0, true, 0x5a6c20875b89407f)
#define _p27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "$RtlCreateSecurityDescriptor$ntoskrnl.exe", 0x5d81e0, 0x0, true, 0x80ffcfb119c9567a)
#define _p28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const nt::unicode_view*)>*), "$RtlCreateSystemVolumeInformationFolder$ntoskrnl.exe", 0x71d440, 0x0, true, 0xb17a5d91f9ee457f)
#define _p29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(nt::unicode_view*, const wchar_t*)>*), "$RtlCreateUnicodeString$ntoskrnl.exe", 0x690680, 0x0, true, 0xc14e88d186c00237)
#define _p30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(nt::unicode_view*, const char*)>*), "$RtlCreateUnicodeStringFromAsciiz$ntoskrnl.exe", 0x78de50, 0x0, true, 0xb82c2e1d0b2a2ca2)
#define _p31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, struct win::initial_teb_t*)>*), "$RtlCreateUserStack$ntoskrnl.exe", 0x638b1c, 0x0, true, 0xd17b2f25f080b16c)
#define _p32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t, uint32_t, uint64_t, uint64_t, sdk::function<int32_t(void*)>*, void*, void**, struct nt::client_id_t*)>*), "$RtlCreateUserThread$ntoskrnl.exe", 0x90b8a0, 0x0, true, 0x2d777ab66ff59a51)
#define _p33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(nt::unicode_view*, uint32_t*)>*), "$RtlCultureNameToLCID$ntoskrnl.exe", 0x7947f0, 0x0, true, 0x495671db9912b132)
#define _p34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::cptableinfo_t*, wchar_t*, uint32_t, uint32_t*, char*, uint32_t)>*), "$RtlCustomCPToUnicodeN$ntoskrnl.exe", 0x90c300, 0x0, true, 0x435df8e8432ad08a)
#define _p35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::time_fields_t*, int64_t*, int64_t*, uint8_t)>*), "$RtlCutoverTimeToSystemTime$ntoskrnl.exe", 0x790200, 0x0, true, 0x4b77afe37cb444)
#define _p36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t*)>*), "$RtlDecompressBuffer$ntoskrnl.exe", 0x57f360, 0x0, true, 0x228b4d8626273917)
#define _p37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t*, void*)>*), "$RtlDecompressBufferEx$ntoskrnl.exe", 0x2c4270, 0x0, true, 0x90b22dc30f186c33)
#define _p38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t, uint32_t*, void*)>*), "$RtlDecompressBufferEx2$ntoskrnl.exe", 0x321bb0, 0x0, true, 0xa58126c264a9b193)
#define _p39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressBufferLZNT1$ntoskrnl.exe", 0x6b6f30, 0x0, true, 0x9b65d06c9e12e918)
#define _p40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressBufferProcs$ntoskrnl.exe", 0x6298, 0x0, true, 0x722d2319d06be407)
#define _p41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressBufferProgress$ntoskrnl.exe", 0x58bdf0, 0x0, true, 0xeaa6ea359d1e280d)
#define _p42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressBufferXpressHuff$ntoskrnl.exe", 0x2d2320, 0x0, true, 0xe1b06af0a221939e)
#define _p43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressBufferXpressHuffProgress$ntoskrnl.exe", 0x58bec0, 0x0, true, 0xbac081a05f821a00)
#define _p44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressBufferXpressLz$ntoskrnl.exe", 0x2f4990, 0x0, true, 0x39bf4e904aa19cf)
#define _p45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressBufferXpressLzProgress$ntoskrnl.exe", 0x58c4e8, 0x0, true, 0x5a6ee98fb30127f5)
#define _p46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t*, uint32_t, uint8_t*, uint32_t, uint8_t*, uint32_t, struct nt::compressed_data_info_t*)>*), "$RtlDecompressChunks$ntoskrnl.exe", 0x90bbf0, 0x0, true, 0x8e3a7dd68a4a090d)
#define _p47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t, uint32_t*, void*)>*), "$RtlDecompressFragment$ntoskrnl.exe", 0x90be50, 0x0, true, 0x34c012d9bf12b80e)
#define _p48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t, uint32_t, uint32_t*, void*)>*), "$RtlDecompressFragmentEx$ntoskrnl.exe", 0x31ff90, 0x0, true, 0xb6502942ad1c1aa0)
#define _p49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressFragmentLZNT1$ntoskrnl.exe", 0x6b70a0, 0x0, true, 0x1d7000dcf38db12f)
#define _p50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressFragmentNS$ntoskrnl.exe", 0x711bf0, 0x0, true, 0x10c0944855160a20)
#define _p51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDecompressFragmentProcs$ntoskrnl.exe", 0x97fc78, 0x0, true, 0xc0fc18da33473115)
#define _p52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*), "$RtlDelete$ntoskrnl.exe", 0x2e4d80, 0x0, true, 0x96b370f57031ad0b)
#define _p53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t)>*), "$RtlDeleteAce$ntoskrnl.exe", 0x6dcb90, 0x0, true, 0xe7bb6212a4f794df)
#define _p54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t)>*), "$RtlDeleteAtomFromAtomTable$ntoskrnl.exe", 0x5d5b00, 0x0, true, 0x4a63e814d16a3c93)
#define _p55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::generic_table_t*, void*)>*), "$RtlDeleteElementGenericTable$ntoskrnl.exe", 0x306b00, 0x0, true, 0x76d06e84c2e87de8)
#define _p56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::avl_table_t*, void*)>*), "$RtlDeleteElementGenericTableAvl$ntoskrnl.exe", 0x2e5430, 0x0, true, 0xadbfac336b8dcc0d)
#define _p57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::avl_table_t*, void*)>*), "$RtlDeleteElementGenericTableAvlEx$ntoskrnl.exe", 0x37e330, 0x0, true, 0xa209f5f8ed74a2eb)
#define _p58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::dynamic_hash_table_t*)>*), "$RtlDeleteHashTable$ntoskrnl.exe", 0x3762f0, 0x0, true, 0xd93fea7526f1b343)
#define _p59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::splay_links_t*, struct rtl::splay_links_t**)>*), "$RtlDeleteNoSplay$ntoskrnl.exe", 0x2f3a80, 0x0, true, 0x6e1cfbfe6f0cdbcb)
#define _p60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeleteOwnersRanges$ntoskrnl.exe", 0x749570, 0x0, true, 0x46702660e7b74d5c)
#define _p61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeleteRange$ntoskrnl.exe", 0x7494c0, 0x0, true, 0xe78fee955f6b1337)
#define _p62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const wchar_t*, const wchar_t*)>*), "$RtlDeleteRegistryValue$ntoskrnl.exe", 0x76c440, 0x0, true, 0x99e5680a0f4e6a8c)
#define _p63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDereferenceAtomTable$ntoskrnl.exe", 0x203000, 0x0, true, 0x3f7b8016f057ef22)
#define _p64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, void*)>*), "$RtlDeriveCapabilitySidsFromName$ntoskrnl.exe", 0x2defd0, 0x0, true, 0x94fd732c3b041ef9)
#define _p65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint8_t**, uint8_t*, uint8_t**, uint32_t*)>*), "$RtlDescribeChunk$ntoskrnl.exe", 0x90bee0, 0x0, true, 0x5fa955c0f12a0f92)
#define _p66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDescribeChunkLZNT1$ntoskrnl.exe", 0x916cc0, 0x0, true, 0xec72a9e26b8c3120)
#define _p67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDescribeChunkNS$ntoskrnl.exe", 0x711bf0, 0x0, true, 0x30faa05caacca99e)
#define _p68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDescribeChunkProcs$ntoskrnl.exe", 0x9800f8, 0x0, true, 0x9345cd7a08f2929e)
#define _p69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlDestroyAtomTable$ntoskrnl.exe", 0x5d59c0, 0x0, true, 0x923a2e1247cc434)
#define _p70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*)>*), "$RtlDestroyHeap$ntoskrnl.exe", 0x75d780, 0x0, true, 0x86bd1bc6da3f116a)
#define _p71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDestroyLowBoxAtoms$ntoskrnl.exe", 0x203018, 0x0, true, 0x2121c42dce79b97a)
#define _p72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::exception_record_t*, nt::context*)>*), "$RtlDispatchException$ntoskrnl.exe", 0x32bd00, 0x0, true, 0x6b2f51d905475c2f)
#define _p73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDissectName$ntoskrnl.exe", 0x2e9640, 0x0, true, 0xc7821847a112527c)
#define _p74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDoesNameContainWildCards$ntoskrnl.exe", 0x3583e0, 0x0, true, 0xb18ca9dd7b75d9b8)
#define _p75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<wchar_t(wchar_t)>*), "$RtlDowncaseUnicodeChar$ntoskrnl.exe", 0x90b3c0, 0x0, true, 0xfd2de1c3a2e1bdd6)
#define _p76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, const nt::unicode_view*, uint8_t)>*), "$RtlDowncaseUnicodeString$ntoskrnl.exe", 0x6c5540, 0x0, true, 0x130aafbb62faeb1a)
#define _p77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const nt::unicode_view*, nt::unicode_view*)>*), "$RtlDuplicateUnicodeString$ntoskrnl.exe", 0x6afe00, 0x0, true, 0x199bf573d13e5c7d)
#define _p78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "$RtlEmptyAtomTable$ntoskrnl.exe", 0x90e950, 0x0, true, 0xfbe456cecfa07862)
#define _p79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*), "$RtlEndEnumerationHashTable$ntoskrnl.exe", 0x316c60, 0x0, true, 0x8d812766df1bcef0)
#define _p80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*), "$RtlEndStrongEnumerationHashTable$ntoskrnl.exe", 0x3973d0, 0x0, true, 0xa667df24dc73ee82)
#define _p81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*), "$RtlEndWeakEnumerationHashTable$ntoskrnl.exe", 0x582a80, 0x0, true, 0x311da1536e622523)
#define _p82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnoughStackSpaceForStackCapture$ntoskrnl.exe", 0x57fc44, 0x0, true, 0xcfbf5a2f326c8b3)
#define _p83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnumerateBoundaryDescriptorEntries$ntoskrnl.exe", 0x70d540, 0x0, true, 0xc6e68c5492f6df99)
#define _p84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*), "$RtlEnumerateEntryHashTable$ntoskrnl.exe", 0x339d40, 0x0, true, 0x791a6daaeab52469)
#define _p85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::generic_table_t*, uint8_t)>*), "$RtlEnumerateGenericTable$ntoskrnl.exe", 0x37f250, 0x0, true, 0x423e29ebe5037bb3)
#define _p86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::avl_table_t*, uint8_t)>*), "$RtlEnumerateGenericTableAvl$ntoskrnl.exe", 0x31a550, 0x0, true, 0xba5a5dadbef9b7d1)
#define _p87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::avl_table_t*, sdk::function<int32_t(struct rtl::avl_table_t*, void*, void*)>*, void*, uint32_t, void**, uint32_t*, void*)>*), "$RtlEnumerateGenericTableLikeADirectory$ntoskrnl.exe", 0x2e5b90, 0x0, true, 0x193b57accc0c9215)
#define _p88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::generic_table_t*, void**)>*), "$RtlEnumerateGenericTableWithoutSplaying$ntoskrnl.exe", 0x31a7f0, 0x0, true, 0x8ca17a8ec56dc07a)
#define _p89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::avl_table_t*, void**)>*), "$RtlEnumerateGenericTableWithoutSplayingAvl$ntoskrnl.exe", 0x2e5a80, 0x0, true, 0xac62be4558ec311d)
#define _p90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEqualLuid$ntoskrnl.exe", 0x90f040, 0x0, true, 0x848bb6c8cab79258)
#define _p91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, void*)>*), "$RtlEqualPrefixSid$ntoskrnl.exe", 0x6bc104, 0x0, true, 0xc750019783ab4038)
#define _p92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, void*)>*), "$RtlEqualSid$ntoskrnl.exe", 0x206340, 0x0, true, 0xc68eb74c7f21d232)
#define _p93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const nt::ascii_view*, const nt::ascii_view*, uint8_t)>*), "$RtlEqualString$ntoskrnl.exe", 0x25bbe0, 0x0, true, 0x96092f31897aa521)
#define _p94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const nt::unicode_view*, const nt::unicode_view*, uint8_t)>*), "$RtlEqualUnicodeString$ntoskrnl.exe", 0x609920, 0x0, true, 0xffbc9e2e1e938bda)
#define _p95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEqualWnfChangeStamps$ntoskrnl.exe", 0x911960, 0x0, true, 0x8aa7f4e9d418f22c)
#define _p96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char*(const union ndis::dl_eui48_t*, char*)>*), "$RtlEthernetAddressToStringA$ntoskrnl.exe", 0x585de0, 0x0, true, 0xe4eafd2c05ddf496)
#define _p97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<wchar_t*(const union ndis::dl_eui48_t*, wchar_t*)>*), "$RtlEthernetAddressToStringW$ntoskrnl.exe", 0x586030, 0x0, true, 0xf8b3c82838b124b9)
#define _p98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const char*, const char**, union ndis::dl_eui48_t*)>*), "$RtlEthernetStringToAddressA$ntoskrnl.exe", 0x5860a0, 0x0, true, 0x5aecd3ae8702e543)
#define _p99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, const wchar_t**, union ndis::dl_eui48_t*)>*), "$RtlEthernetStringToAddressW$ntoskrnl.exe", 0x586aa0, 0x0, true, 0xdb1f9998abc907bf)
#define _q00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*)>*), "$RtlExpandHashTable$ntoskrnl.exe", 0x33a000, 0x0, true, 0x97fc35e45820319a)
#define _q01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlExtendedMagicDivide$ntoskrnl.exe", 0x201f64, 0x0, true, 0x89f7951210d0e3c1)
#define _q02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*, struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlExtractBitMap$ntoskrnl.exe", 0x580d70, 0x0, true, 0x5845b8ee6e32e99a)
#define _q03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFatIllegalTable$ntoskrnl.exe", 0x97f320, 0x0, true, 0x870f5b74cf6afe40)
#define _q04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFileMapFree$ntoskrnl.exe", 0x36e15c, 0x0, true, 0xf52ead6a8c712a2d)
#define _q05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFileMapInitializeByNtPath$ntoskrnl.exe", 0x36e23c, 0x0, true, 0x292fb239327de332)
#define _q06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFileMapMapView$ntoskrnl.exe", 0x3b9494, 0x0, true, 0x75f9dd72eef51208)
#define _q07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFillMemory$ntoskrnl.exe", 0x586c80, 0x0, true, 0x54e171c38babbb34)
#define _q08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindAceBySid$ntoskrnl.exe", 0x25b320, 0x0, true, 0xef8d0d1b08d50f2)
#define _q09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct nt::acl_t*, uint8_t, uint32_t*)>*), "$RtlFindAceByType$ntoskrnl.exe", 0x257f00, 0x0, true, 0x765e842b843a1585)
#define _q10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlFindClearBits$ntoskrnl.exe", 0x2e4120, 0x0, true, 0x1c8401021ffa541b)
#define _q11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlFindClearBitsAndSet$ntoskrnl.exe", 0x338f10, 0x0, true, 0x67e2882c443547e2)
#define _q12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindClearBitsAndSetEx$ntoskrnl.exe", 0x2a92f0, 0x0, true, 0x8b1fe5eb16632960)
#define _q13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindClearBitsEx$ntoskrnl.exe", 0x276390, 0x0, true, 0x1afbd4013163976)
#define _q14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, struct rtl::bitmap_run_t*, uint32_t, uint8_t)>*), "$RtlFindClearRuns$ntoskrnl.exe", 0x323490, 0x0, true, 0x326467f4a677a02e)
#define _q15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindClearRunsEx$ntoskrnl.exe", 0x398058, 0x0, true, 0x506485a7e2ac997)
#define _q16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint64_t*)>*), "$RtlFindClosestEncodableLength$ntoskrnl.exe", 0x5829d0, 0x0, true, 0xe13b2122bdf8c2e3)
#define _q17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*, const char*)>*), "$RtlFindExportedRoutineByName$ntoskrnl.exe", 0x6fa1b0, 0x0, true, 0x4495b73b5e1de92)
#define _q18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t*)>*), "$RtlFindFirstRunClear$ntoskrnl.exe", 0x34d6b0, 0x0, true, 0xcbdf1e4634fa16c8)
#define _q19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t*)>*), "$RtlFindLastBackwardRunClear$ntoskrnl.exe", 0x34d440, 0x0, true, 0xd231916cd4195462)
#define _q20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char(uint64_t)>*), "$RtlFindLeastSignificantBit$ntoskrnl.exe", 0x3104c0, 0x0, true, 0xf566740e1e07311e)
#define _q21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t*)>*), "$RtlFindLongestRunClear$ntoskrnl.exe", 0x5810e0, 0x0, true, 0xe890b8729c1cdd82)
#define _q22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindLongestRunClearCapped$ntoskrnl.exe", 0x581120, 0x0, true, 0xcee0752680ba1815)
#define _q23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, struct win::message_resource_entry_t**)>*), "$RtlFindMessage$ntoskrnl.exe", 0x6fc030, 0x0, true, 0xf4298c7e055764e1)
#define _q24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char(uint64_t)>*), "$RtlFindMostSignificantBit$ntoskrnl.exe", 0x3055c0, 0x0, true, 0x98a6a13e5b43af68)
#define _q25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindNextAlignedForwardRunClear$ntoskrnl.exe", 0x34dad0, 0x0, true, 0x2d50df3ecfdc3166)
#define _q26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindNextClearRunUlong$ntoskrnl.exe", 0x305ff4, 0x0, true, 0x34b56775f10f65b0)
#define _q27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t*)>*), "$RtlFindNextForwardRunClear$ntoskrnl.exe", 0x34edf0, 0x0, true, 0xcc96c69a47944ddb)
#define _q28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindNextForwardRunClearCapped$ntoskrnl.exe", 0x581380, 0x0, true, 0xd5557abacaa3d1f7)
#define _q29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindNextForwardRunClearEx$ntoskrnl.exe", 0x5814c0, 0x0, true, 0x38c68cfc242a1f55)
#define _q30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindRange$ntoskrnl.exe", 0x748420, 0x0, true, 0x77b1ab358576e4a8)
#define _q31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlFindSetBits$ntoskrnl.exe", 0x2e3d60, 0x0, true, 0xf9bcdaf8bde3c49a)
#define _q32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlFindSetBitsAndClear$ntoskrnl.exe", 0x581610, 0x0, true, 0xf47e0076d873cfee)
#define _q33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindSetBitsAndClearEx$ntoskrnl.exe", 0x31d670, 0x0, true, 0x287a47ab9c940309)
#define _q34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindSetBitsEx$ntoskrnl.exe", 0x276700, 0x0, true, 0x26bb45513a92f39b)
#define _q35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct nt::unicode_prefix_table_entry_t*(struct nt::unicode_prefix_table_t*, const nt::unicode_view*, uint32_t)>*), "$RtlFindUnicodePrefix$ntoskrnl.exe", 0x6c2a40, 0x0, true, 0xcd763ab49c41d1e8)
#define _q36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::acl_t*, void**)>*), "$RtlFirstFreeAce$ntoskrnl.exe", 0x6054d0, 0x0, true, 0xf73e97e1fcff19cd)
#define _q37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFnToFxFrame$ntoskrnl.exe", 0x33b7ec, 0x0, true, 0xf52c722ea2689268)
#define _q38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*)>*), "$RtlFormatCurrentUserKeyPath$ntoskrnl.exe", 0x68ec50, 0x0, true, 0xe774dd8413cb34ab)
#define _q39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint32_t, uint8_t, uint8_t, uint8_t, char**, wchar_t*, uint32_t, uint32_t*)>*), "$RtlFormatMessage$ntoskrnl.exe", 0x90c6e0, 0x0, true, 0x17596cb18179ff60)
#define _q40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint32_t, uint8_t, uint8_t, uint8_t, char**, wchar_t*, uint32_t, uint32_t*, struct win::parse_message_context_t*)>*), "$RtlFormatMessageEx$ntoskrnl.exe", 0x90c738, 0x0, true, 0x2a8e36bb42d1de8b)
#define _q41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::ascii_view*)>*), "$RtlFreeAnsiString$ntoskrnl.exe", 0x5d8600, 0x0, true, 0xfddc24653295c60d)
#define _q42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t, void*)>*), "$RtlFreeHeap$ntoskrnl.exe", 0x35ed30, 0x0, true, 0x5a8886b91f1c2aa4)
#define _q43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::ascii_view*)>*), "$RtlFreeOemString$ntoskrnl.exe", 0x75e730, 0x0, true, 0x3e89d0e91db80ebc)
#define _q44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeRangeList$ntoskrnl.exe", 0x749650, 0x0, true, 0x26fb14468de77212)
#define _q45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeStringRoutine$ntoskrnl.exe", 0x97ebe8, 0x0, true, 0x826600f946f8d08e)
#define _q46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::unicode_view*)>*), "$RtlFreeUnicodeString$ntoskrnl.exe", 0x5d8600, 0x0, true, 0x905036c719e3aaf6)
#define _q47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFxToFnFrame$ntoskrnl.exe", 0x33b700, 0x0, true, 0x556c174b2e0084cf)
#define _q48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const nt::unicode_view*, uint8_t, struct nt::generate_name_context_t*, nt::unicode_view*)>*), "$RtlGenerate8dot3Name$ntoskrnl.exe", 0x6bd210, 0x0, true, 0xdf39be94d289034f)
#define _q49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct nt::guid_t const*, void*, uint32_t, struct nt::guid_t*)>*), "$RtlGenerateClass5Guid$ntoskrnl.exe", 0x792440, 0x0, true, 0xcfd18dcd351afed2)
#define _q50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGenerateQpcToIncrementConstants$ntoskrnl.exe", 0x3949ac, 0x0, true, 0x7e31982c033588f2)
#define _q51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, void**)>*), "$RtlGetAce$ntoskrnl.exe", 0x25b420, 0x0, true, 0x921b0b34bb77dc67)
#define _q52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t()>*), "$RtlGetActiveConsoleId$ntoskrnl.exe", 0x35db30, 0x0, true, 0xa6d272b6a0bc9f41)
#define _q53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t, nt::unicode_view*)>*), "$RtlGetAppContainerNamedObjectPath$ntoskrnl.exe", 0x580a80, 0x0, true, 0x4bc9c997e7ca531f)
#define _q54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**)>*), "$RtlGetAppContainerParent$ntoskrnl.exe", 0x90f060, 0x0, true, 0x4451562608cc654a)
#define _q55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::appcontainer_sid_type_t*)>*), "$RtlGetAppContainerSidType$ntoskrnl.exe", 0x70cc80, 0x0, true, 0xfc28555351568010)
#define _q56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void**, void**)>*), "$RtlGetCallersAddress$ntoskrnl.exe", 0x582910, 0x0, true, 0x79f10b44110053b6)
#define _q57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint32_t*, uint32_t*)>*), "$RtlGetCompressionWorkSpaceSize$ntoskrnl.exe", 0x2c3020, 0x0, true, 0x37ef6036d1e61207)
#define _q58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t()>*), "$RtlGetConsoleSessionForegroundProcessId$ntoskrnl.exe", 0x90b910, 0x0, true, 0xa0b41d1128106a59)
#define _q59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, wchar_t*, uint32_t*)>*), "$RtlGetControlSecurityDescriptor$ntoskrnl.exe", 0x68e740, 0x0, true, 0x644b2abc1f3c2448)
#define _q60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t()>*), "$RtlGetCurrentServiceSessionId$ntoskrnl.exe", 0x3a2b40, 0x0, true, 0xcd8b6e45e27a66c2)
#define _q61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*, struct nt::acl_t**, uint8_t*)>*), "$RtlGetDaclSecurityDescriptor$ntoskrnl.exe", 0x2d70e0, 0x0, true, 0xea6f56b16cc8ed4f)
#define _q62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetDefaultCodePage$ntoskrnl.exe", 0x75c910, 0x0, true, 0xf3538a41944915f5)
#define _q63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::generic_table_t*, uint32_t)>*), "$RtlGetElementGenericTable$ntoskrnl.exe", 0x30ba70, 0x0, true, 0x9994a97ee387eadc)
#define _q64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::avl_table_t*, uint32_t)>*), "$RtlGetElementGenericTableAvl$ntoskrnl.exe", 0x585cc0, 0x0, true, 0x2a817d2caa8a4fc9)
#define _q65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(uint64_t)>*), "$RtlGetEnabledExtendedFeatures$ntoskrnl.exe", 0x3a3f00, 0x0, true, 0x6ef0a112fb4e740)
#define _q66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, uint32_t*)>*), "$RtlGetExtendedContextLength$ntoskrnl.exe", 0x32fa90, 0x0, true, 0x131b2449e66aaf97)
#define _q67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetFirstRange$ntoskrnl.exe", 0x7487d0, 0x0, true, 0x932d795f59983edc)
#define _q68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint8_t*)>*), "$RtlGetGroupSecurityDescriptor$ntoskrnl.exe", 0x7216b0, 0x0, true, 0x64a6629ecbe0bb16)
#define _q69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(wchar_t*, wchar_t*)>*), "$RtlGetIntegerAtom$ntoskrnl.exe", 0x637bc0, 0x0, true, 0x868f7e8cb57a3189)
#define _q70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetInterruptTimePrecise$ntoskrnl.exe", 0x278330, 0x0, true, 0xf570ae59f523f8a8)
#define _q71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetLastRange$ntoskrnl.exe", 0x748830, 0x0, true, 0x33a1b4c279107abf)
#define _q72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_context_t*)>*), "$RtlGetNextEntryHashTable$ntoskrnl.exe", 0x2f5530, 0x0, true, 0xa940166654e12afd)
#define _q73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetNextRange$ntoskrnl.exe", 0x748720, 0x0, true, 0x856112f9cf45d35b)
#define _q74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t()>*), "$RtlGetNtGlobalFlags$ntoskrnl.exe", 0x910940, 0x0, true, 0x1c67488549445a1a)
#define _q75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(enum os::product_type_t*)>*), "$RtlGetNtProductType$ntoskrnl.exe", 0x312320, 0x0, true, 0xe0c5c8d05c3a1733)
#define _q76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint8_t*)>*), "$RtlGetOwnerSecurityDescriptor$ntoskrnl.exe", 0x6cbc80, 0x0, true, 0x286a8f91e96bd37a)
#define _q77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*)>*), "$RtlGetProductInfo$ntoskrnl.exe", 0x320630, 0x0, true, 0xaa033d8bf4e84635)
#define _q78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*, struct nt::acl_t**, uint8_t*)>*), "$RtlGetSaclSecurityDescriptor$ntoskrnl.exe", 0x66b990, 0x0, true, 0xf3efd392adbd0078)
#define _q79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, enum rtl::bsd_item_type_t, void*, uint32_t, uint32_t*)>*), "$RtlGetSetBootStatusData$ntoskrnl.exe", 0x775130, 0x0, true, 0xf91a0eba908d6c81)
#define _q80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t()>*), "$RtlGetSuiteMask$ntoskrnl.exe", 0x6d7c90, 0x0, true, 0x32b416a38adbfaa4)
#define _q81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetSystemTimePrecise$ntoskrnl.exe", 0x3554e0, 0x0, true, 0xc66b9348d717f068)
#define _q82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetThreadLangIdByIndex$ntoskrnl.exe", 0x33e530, 0x0, true, 0x3967b98ea043bfd6)
#define _q83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::osversioninfoexw_t*)>*), "$RtlGetVersion$ntoskrnl.exe", 0x6d7bd0, 0x0, true, 0x318c7a1358b612fe)
#define _q84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGuardIsValidStackPointer$ntoskrnl.exe", 0x6f26f0, 0x0, true, 0xf48b5e8c89ccd5dd)
#define _q85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGuardIsValidWow64StackPointer$ntoskrnl.exe", 0x6fd7e4, 0x0, true, 0x434b406c64fc4a47)
#define _q86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const nt::unicode_view*, struct nt::guid_t*)>*), "$RtlGUIDFromString$ntoskrnl.exe", 0x6aa2a0, 0x0, true, 0x5ba62e96acd05a37)
#define _q87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const nt::unicode_view*, uint8_t, uint32_t, uint32_t*)>*), "$RtlHashUnicodeString$ntoskrnl.exe", 0x6a85f0, 0x0, true, 0xb1bc150d9cbd5d22)
#define _q88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct nt::sid_identifier_authority_t*(void*)>*), "$RtlIdentifierAuthoritySid$ntoskrnl.exe", 0x673a74, 0x0, true, 0x49d27fb7bb791c7e)
#define _q89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, wchar_t*, int32_t*)>*), "$RtlIdnToAscii$ntoskrnl.exe", 0x911e50, 0x0, true, 0x7fd43474146ddc45)
#define _q90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, wchar_t*, int32_t*)>*), "$RtlIdnToNameprepUnicode$ntoskrnl.exe", 0x911e80, 0x0, true, 0xd4edb574f7d96046)
#define _q91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, wchar_t*, int32_t*)>*), "$RtlIdnToUnicode$ntoskrnl.exe", 0x911eb0, 0x0, true, 0x6542bcb7731afa67)
#define _q92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*, uint8_t, uint16_t, uint32_t*)>*), "$RtlImageDirectoryEntryToData$ntoskrnl.exe", 0x33aa00, 0x0, true, 0x88b7b1f956bff98f)
#define _q93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct image::nt_headers64_t*(void*)>*), "$RtlImageNtHeader$ntoskrnl.exe", 0x27dae0, 0x0, true, 0xb9c900f5bea5d434)
#define _q94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, uint64_t, struct image::nt_headers64_t**)>*), "$RtlImageNtHeaderEx$ntoskrnl.exe", 0x27db10, 0x0, true, 0x48b0807d7ddd6090)
#define _q95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum sec::impersonation_level_t, uint32_t, void**)>*), "$RtlImpersonateSelfEx$ntoskrnl.exe", 0x6dcf68, 0x0, true, 0x2539a7fcd337d599)
#define _q96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::ascii_view*, const char*)>*), "$RtlInitAnsiString$ntoskrnl.exe", 0x203280, 0x0, true, 0xf8c988443157e656)
#define _q97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, const char*)>*), "$RtlInitAnsiStringEx$ntoskrnl.exe", 0x3b2f10, 0x0, true, 0x91ebda0c006e4557)
#define _q98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(wchar_t*, struct nt::cptableinfo_t*)>*), "$RtlInitCodePageTable$ntoskrnl.exe", 0x7b5fa0, 0x0, true, 0x5e81609febae9453)
#define _q99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*), "$RtlInitEnumerationHashTable$ntoskrnl.exe", 0x316650, 0x0, true, 0x6f5e1eba0daf60d6)
#define _r00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::ascii_view*, const char*)>*), "$RtlInitString$ntoskrnl.exe", 0x203280, 0x0, true, 0x5bc936331f21148b)
#define _r01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, const char*)>*), "$RtlInitStringEx$ntoskrnl.exe", 0x57f420, 0x0, true, 0xbdf131b4c25d323)
#define _r02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*), "$RtlInitStrongEnumerationHashTable$ntoskrnl.exe", 0x391320, 0x0, true, 0xc606987a4fcca223)
#define _r03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::unicode_view*, const wchar_t*)>*), "$RtlInitUnicodeString$ntoskrnl.exe", 0x206450, 0x0, true, 0x9bba401386a84f6c)
#define _r04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, const wchar_t*)>*), "$RtlInitUnicodeStringEx$ntoskrnl.exe", 0x25bb40, 0x0, true, 0xbbee7cd406483128)
#define _r05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*), "$RtlInitWeakEnumerationHashTable$ntoskrnl.exe", 0x582aa0, 0x0, true, 0xd225415d5fe1779b)
#define _r06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*, uint32_t*, uint32_t)>*), "$RtlInitializeBitMap$ntoskrnl.exe", 0x303eb0, 0x0, true, 0xcc5ceb2ab402092)
#define _r07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_ex_t*, uint64_t*, uint64_t)>*), "$RtlInitializeBitMapEx$ntoskrnl.exe", 0x3209a0, 0x0, true, 0xa08350773fc1f91e)
#define _r08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(nt::context*, uint32_t, struct win::context_ex_t**)>*), "$RtlInitializeExtendedContext$ntoskrnl.exe", 0x32ed70, 0x0, true, 0x6e5b19705af12516)
#define _r09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::generic_table_t*, sdk::function<enum rtl::generic_compare_results_t(struct rtl::generic_table_t*, void*, void*)>*, sdk::function<void*(struct rtl::generic_table_t*, uint32_t)>*, sdk::function<void(struct rtl::generic_table_t*, void*)>*, void*)>*), "$RtlInitializeGenericTable$ntoskrnl.exe", 0x31a330, 0x0, true, 0xcaf036f752947e6d)
#define _r10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::avl_table_t*, sdk::function<enum rtl::generic_compare_results_t(struct rtl::avl_table_t*, void*, void*)>*, sdk::function<void*(struct rtl::avl_table_t*, uint32_t)>*, sdk::function<void(struct rtl::avl_table_t*, void*)>*, void*)>*), "$RtlInitializeGenericTableAvl$ntoskrnl.exe", 0x2e59f0, 0x0, true, 0x4bbdab61bcb0d663)
#define _r11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeHistoryTable$ntoskrnl.exe", 0xa4e2d4, 0x0, true, 0x9f16999022513924)
#define _r12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeRangeList$ntoskrnl.exe", 0x789180, 0x0, true, 0x7b69bb79e917edc6)
#define _r13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::sid_identifier_authority_t*, uint8_t)>*), "$RtlInitializeSid$ntoskrnl.exe", 0x67da80, 0x0, true, 0x91fc2126b44706cc)
#define _r14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::sid_identifier_authority_t*, uint8_t, ...)>*), "$RtlInitializeSidEx$ntoskrnl.exe", 0x3c56e0, 0x0, true, 0xce88315566c77eec)
#define _r15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::unicode_prefix_table_t*)>*), "$RtlInitializeUnicodePrefix$ntoskrnl.exe", 0x7bc3f0, 0x0, true, 0x1b26f554b402e512)
#define _r16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInsertDynamicFunctionTable$ntoskrnl.exe", 0x2f6fa4, 0x0, true, 0x1397d9c39184ee92)
#define _r17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::generic_table_t*, void*, uint32_t, uint8_t*)>*), "$RtlInsertElementGenericTable$ntoskrnl.exe", 0x306b90, 0x0, true, 0xe97ea62bbcfc1e58)
#define _r18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::avl_table_t*, void*, uint32_t, uint8_t*)>*), "$RtlInsertElementGenericTableAvl$ntoskrnl.exe", 0x2e5690, 0x0, true, 0x6e22289df34cecd0)
#define _r19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::generic_table_t*, void*, uint32_t, uint8_t*, void*, enum nt::table_search_result_t)>*), "$RtlInsertElementGenericTableFull$ntoskrnl.exe", 0x306c00, 0x0, true, 0x784f3eff3b248f8b)
#define _r20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::avl_table_t*, void*, uint32_t, uint8_t*, void*, enum nt::table_search_result_t)>*), "$RtlInsertElementGenericTableFullAvl$ntoskrnl.exe", 0x2e5700, 0x0, true, 0xfbd95bff2b06a38d)
#define _r21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_entry_t*, uint64_t, struct rtl::dynamic_hash_table_context_t*)>*), "$RtlInsertEntryHashTable$ntoskrnl.exe", 0x3393a0, 0x0, true, 0x561de438592ba9ff)
#define _r22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInsertInvertedFunctionTable$ntoskrnl.exe", 0x36ed4c, 0x0, true, 0xbe504df508f18d50)
#define _r23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::unicode_prefix_table_t*, nt::unicode_view*, struct nt::unicode_prefix_table_entry_t*)>*), "$RtlInsertUnicodePrefix$ntoskrnl.exe", 0x6c28e0, 0x0, true, 0xacd6a11d63345008)
#define _r24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint32_t, nt::unicode_view*)>*), "$RtlInt64ToUnicodeString$ntoskrnl.exe", 0x689fb0, 0x0, true, 0xcc846ebd52d30b58)
#define _r25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, int32_t, char*)>*), "$RtlIntegerToChar$ntoskrnl.exe", 0x6dc0c0, 0x0, true, 0xabfd32034e1ba57)
#define _r26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIntegerToUnicode$ntoskrnl.exe", 0x690540, 0x0, true, 0x1b5c7476d0e49cd2)
#define _r27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, nt::unicode_view*)>*), "$RtlIntegerToUnicodeString$ntoskrnl.exe", 0x6dc030, 0x0, true, 0x3130a796c46d4dc0)
#define _r28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlInterlockedClearBitRun$ntoskrnl.exe", 0x3bb470, 0x0, true, 0x9d3ab8bf3d0d8615)
#define _r29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInterlockedClearBitRunEx$ntoskrnl.exe", 0x5819f0, 0x0, true, 0xa8f2fd8e6e46f42a)
#define _r30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInterlockedPopEntrySList$ntoskrnl.exe", 0x3fd6a0, 0x0, true, 0x720a5cb98f7865bb)
#define _r31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlInterlockedSetBitRun$ntoskrnl.exe", 0x581ab0, 0x0, true, 0xb8d80ca273c4c948)
#define _r32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInterlockedSetBitRunEx$ntoskrnl.exe", 0x581b70, 0x0, true, 0xc313ba0af41a2650)
#define _r33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInterlockedSetClearBits$ntoskrnl.exe", 0x2d4018, 0x0, true, 0x51a5d29afe4c4ff6)
#define _r34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInterlockedSetClearRun$ntoskrnl.exe", 0x34f6e0, 0x0, true, 0x9e28409cd7efb250)
#define _r35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInterlockedSetClearRunEx$ntoskrnl.exe", 0x276a80, 0x0, true, 0x36924eb5b26134bd)
#define _r36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInvertRangeList$ntoskrnl.exe", 0x79ed90, 0x0, true, 0xa7053a8cec047726)
#define _r37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInvertRangeListEx$ntoskrnl.exe", 0x79edc0, 0x0, true, 0xc007c97499e9b27e)
#define _r38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(struct io::resource_descriptor_t*, uint64_t*, uint64_t*, uint64_t*)>*), "$RtlIoDecodeMemIoResource$ntoskrnl.exe", 0x37a3f0, 0x0, true, 0x73c99ea2754e75c5)
#define _r39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct io::resource_descriptor_t*, uint8_t, uint64_t, uint64_t, uint64_t, uint64_t)>*), "$RtlIoEncodeMemIoResource$ntoskrnl.exe", 0x3c1c70, 0x0, true, 0xf09cb26f56c61eeb)
#define _r40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char*(const struct nt::in_addr_t*, char*)>*), "$RtlIpv4AddressToStringA$ntoskrnl.exe", 0x38d7a0, 0x0, true, 0xcb03ed197c9981a5)
#define _r41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct nt::in_addr_t*, uint16_t, char*, uint32_t*)>*), "$RtlIpv4AddressToStringExA$ntoskrnl.exe", 0x585e50, 0x0, true, 0x70f6beafcb080dad)
#define _r42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct nt::in_addr_t*, uint16_t, wchar_t*, uint32_t*)>*), "$RtlIpv4AddressToStringExW$ntoskrnl.exe", 0x37ece0, 0x0, true, 0xf0fbf6bf8a44f334)
#define _r43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<wchar_t*(const struct nt::in_addr_t*, wchar_t*)>*), "$RtlIpv4AddressToStringW$ntoskrnl.exe", 0x37ed80, 0x0, true, 0x1e3dcffc3fe4f7c2)
#define _r44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const char*, uint8_t, const char**, struct nt::in_addr_t*)>*), "$RtlIpv4StringToAddressA$ntoskrnl.exe", 0x38d910, 0x0, true, 0x78219bf77384255d)
#define _r45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const char*, uint8_t, struct nt::in_addr_t*, wchar_t*)>*), "$RtlIpv4StringToAddressExA$ntoskrnl.exe", 0x5861e0, 0x0, true, 0x626b1586b3cfda6b)
#define _r46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, uint8_t, struct nt::in_addr_t*, wchar_t*)>*), "$RtlIpv4StringToAddressExW$ntoskrnl.exe", 0x3159e0, 0x0, true, 0x372c49a53966a7ee)
#define _r47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, uint8_t, const wchar_t**, struct nt::in_addr_t*)>*), "$RtlIpv4StringToAddressW$ntoskrnl.exe", 0x315a60, 0x0, true, 0xeab8b91d7361142b)
#define _r48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char*(const struct nt::in6_addr_t*, char*)>*), "$RtlIpv6AddressToStringA$ntoskrnl.exe", 0x369940, 0x0, true, 0xf66fa5dc62329d34)
#define _r49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct nt::in6_addr_t*, uint32_t, uint16_t, char*, uint32_t*)>*), "$RtlIpv6AddressToStringExA$ntoskrnl.exe", 0x585f10, 0x0, true, 0xaa986745406b9d29)
#define _r50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct nt::in6_addr_t*, uint32_t, uint16_t, wchar_t*, uint32_t*)>*), "$RtlIpv6AddressToStringExW$ntoskrnl.exe", 0x37b3f0, 0x0, true, 0x292b75c3fcba079)
#define _r51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<wchar_t*(const struct nt::in6_addr_t*, wchar_t*)>*), "$RtlIpv6AddressToStringW$ntoskrnl.exe", 0x37b4d0, 0x0, true, 0x6a02ff1190f60226)
#define _r52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const char*, const char**, struct nt::in6_addr_t*)>*), "$RtlIpv6StringToAddressA$ntoskrnl.exe", 0x5863c0, 0x0, true, 0xb456fde227f64819)
#define _r53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const char*, struct nt::in6_addr_t*, uint32_t*, wchar_t*)>*), "$RtlIpv6StringToAddressExA$ntoskrnl.exe", 0x5867e0, 0x0, true, 0x850e3bc0b042dfc8)
#define _r54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, struct nt::in6_addr_t*, uint32_t*, wchar_t*)>*), "$RtlIpv6StringToAddressExW$ntoskrnl.exe", 0x313550, 0x0, true, 0x613b131221940410)
#define _r55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, const wchar_t**, struct nt::in6_addr_t*)>*), "$RtlIpv6StringToAddressW$ntoskrnl.exe", 0x3135f0, 0x0, true, 0xd5c2d1a7ccc8b869)
#define _r56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RtlIsCapabilitySid$ntoskrnl.exe", 0x70d310, 0x0, true, 0xe516982746a0bb)
#define _r57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::generic_table_t*)>*), "$RtlIsGenericTableEmpty$ntoskrnl.exe", 0x3918c0, 0x0, true, 0x3f381e669781680f)
#define _r58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::avl_table_t*)>*), "$RtlIsGenericTableEmptyAvl$ntoskrnl.exe", 0x2e5420, 0x0, true, 0x51ebf3251c4fa627)
#define _r59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$RtlIsMultiSessionSku$ntoskrnl.exe", 0x6cc460, 0x0, true, 0x1d0be130cc2b5b0e)
#define _r60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$RtlIsMultiUsersInSessionSku$ntoskrnl.exe", 0x90f1c0, 0x0, true, 0x89239c53ce2838ca)
#define _r61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(nt::unicode_view*, nt::unicode_view*, uint8_t, wchar_t*)>*), "$RtlIsNameInExpression$ntoskrnl.exe", 0x357e10, 0x0, true, 0xe182925aa7d5724c)
#define _r62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const nt::unicode_view*, nt::ascii_view*, uint8_t*)>*), "$RtlIsNameLegalDOS8Dot3$ntoskrnl.exe", 0x6c4270, 0x0, true, 0x54222fa22f97d9de)
#define _r63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, uint8_t*)>*), "$RtlIsNormalizedString$ntoskrnl.exe", 0x9146a0, 0x0, true, 0x804f3cc2effb9678)
#define _r64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsNtDdiVersionAvailable$ntoskrnl.exe", 0x3c8760, 0x0, true, 0x8bb0f1c880fde67f)
#define _r65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RtlIsPackageSid$ntoskrnl.exe", 0x703930, 0x0, true, 0xc98a1e6fe0a83109)
#define _r66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, void*)>*), "$RtlIsParentOfChildAppContainer$ntoskrnl.exe", 0x70d4a8, 0x0, true, 0x725e3cc6bdff8ca2)
#define _r67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsRangeAvailable$ntoskrnl.exe", 0x748580, 0x0, true, 0xba8f7ec4960e3d3f)
#define _r68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct sec::subject_context_t*, char)>*), "$RtlIsSandboxedToken$ntoskrnl.exe", 0x649530, 0x0, true, 0x80191cbe3b12ee8e)
#define _r69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsServicePackVersionInstalled$ntoskrnl.exe", 0x5870a0, 0x0, true, 0x4832c9d6be28d26e)
#define _r70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsSystemAceType$ntoskrnl.exe", 0x97ef28, 0x0, true, 0xa15ae85f37fce18)
#define _r71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t*)>*), "$RtlIsUntrustedObject$ntoskrnl.exe", 0x315bf0, 0x0, true, 0xbb1f235c4f87f6e3)
#define _r72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(wchar_t*)>*), "$RtlIsValidOemCharacter$ntoskrnl.exe", 0x911d80, 0x0, true, 0x99c2be93e7233cfc)
#define _r73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RtlIsValidProcessTrustLabelSid$ntoskrnl.exe", 0x609480, 0x0, true, 0xf6f15a839ef9c029)
#define _r74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int64_t*, uint32_t, int32_t, char*)>*), "$RtlLargeIntegerToChar$ntoskrnl.exe", 0x68a290, 0x0, true, 0xcedbca03723668e7)
#define _r75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLargeIntegerToUnicode$ntoskrnl.exe", 0x91072c, 0x0, true, 0xf6e3c1413bd239f9)
#define _r76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, nt::unicode_view*)>*), "$RtlLCIDToCultureName$ntoskrnl.exe", 0x9118e0, 0x0, true, 0x316c364750011ba7)
#define _r77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLengthCurrentClearRunForward$ntoskrnl.exe", 0x34f4bc, 0x0, true, 0x482aa6f71f05e597)
#define _r78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t)>*), "$RtlLengthRequiredSid$ntoskrnl.exe", 0x673a80, 0x0, true, 0xd6e9e293001c921d)
#define _r79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "$RtlLengthSecurityDescriptor$ntoskrnl.exe", 0x614340, 0x0, true, 0xb640eb2bd7422dc)
#define _r80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "$RtlLengthSid$ntoskrnl.exe", 0x25b480, 0x0, true, 0xb2e2575adb575f2f)
#define _r81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "$RtlLengthSidAsUnicodeString$ntoskrnl.exe", 0x68ebf8, 0x0, true, 0x76af5d40f20854c2)
#define _r82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLoadString$ntoskrnl.exe", 0x90cf60, 0x0, true, 0x8ba7317cccfbea32)
#define _r83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int64_t*, int64_t*)>*), "$RtlLocalTimeToSystemTime$ntoskrnl.exe", 0x90b950, 0x0, true, 0x9b30156781a08204)
#define _r84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**)>*), "$RtlLockBootStatusData$ntoskrnl.exe", 0x769d10, 0x0, true, 0x63d13598600325c8)
#define _r85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, wchar_t*, wchar_t*)>*), "$RtlLookupAtomInAtomTable$ntoskrnl.exe", 0x637a60, 0x0, true, 0x69669b2d6c09d5d8)
#define _r86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::generic_table_t*, void*)>*), "$RtlLookupElementGenericTable$ntoskrnl.exe", 0x2e4b10, 0x0, true, 0x3be91dfb3e86388d)
#define _r87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::avl_table_t*, void*)>*), "$RtlLookupElementGenericTableAvl$ntoskrnl.exe", 0x2e5e00, 0x0, true, 0x4ab69bb112204c61)
#define _r88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::generic_table_t*, void*, void**, enum nt::table_search_result_t*)>*), "$RtlLookupElementGenericTableFull$ntoskrnl.exe", 0x585c60, 0x0, true, 0xf274d9533ac5de1e)
#define _r89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::avl_table_t*, void*, void**, enum nt::table_search_result_t*)>*), "$RtlLookupElementGenericTableFullAvl$ntoskrnl.exe", 0x2e5d00, 0x0, true, 0x4e28e6f793a569f0)
#define _r90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, uint64_t, struct rtl::dynamic_hash_table_context_t*)>*), "$RtlLookupEntryHashTable$ntoskrnl.exe", 0x2de7e0, 0x0, true, 0xf0ffaaae44a4273f)
#define _r91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLookupExceptionHandler$ntoskrnl.exe", 0x32181c, 0x0, true, 0xb615e9b2279ad562)
#define _r92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::avl_table_t*, void*, void**)>*), "$RtlLookupFirstMatchingElementGenericTableAvl$ntoskrnl.exe", 0x3913d0, 0x0, true, 0xe662edea6104c0b4)
#define _r93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLookupFunctionEntry$ntoskrnl.exe", 0x32e600, 0x0, true, 0xf898341be07eb213)
#define _r94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLookupFunctionEntryEx$ntoskrnl.exe", 0xa0e040, 0x0, true, 0x175a4b0c72cdca8)
#define _r95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLookupFunctionTable$ntoskrnl.exe", 0x3c1bdc, 0x0, true, 0x60b0afd2446afb)
#define _r96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLznt1DecompressChunkLookaside$ntoskrnl.exe", 0xcdb140, 0x0, true, 0xbb7c3b65b57bfb49)
#define _r97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t*)>*), "$RtlMakeSelfRelativeSD$ntoskrnl.exe", 0x7512e4, 0x0, true, 0xdaa6d65a9f892054)
#define _r98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t*, struct nt::generic_mapping_t*)>*), "$RtlMapGenericMask$ntoskrnl.exe", 0x5ff990, 0x0, true, 0xd8660ee2d939e6ad)
#define _r99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMapSecurityErrorToNtStatus$ntoskrnl.exe", 0x314060, 0x0, true, 0xcfa237155b81129a)
#define _s00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMarkExceptionHandlingPages$ntoskrnl.exe", 0x746648, 0x0, true, 0xe0a4b5a16d4e66c8)
#define _s01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMarkHiberPhase$ntoskrnl.exe", 0x58cc24, 0x0, true, 0xe2ad882e7613b3ea)
#define _s02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMergeBitMaps$ntoskrnl.exe", 0x2e1944, 0x0, true, 0x72f97a51ba1e3f58)
#define _s03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMergeBitMapsEx$ntoskrnl.exe", 0x3c3204, 0x0, true, 0x7efee61e28d34e65)
#define _s04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMergeRangeLists$ntoskrnl.exe", 0x90b6d0, 0x0, true, 0x30610ee1b64f5b7)
#define _s05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMoveMemory$ntoskrnl.exe", 0x362430, 0x0, true, 0xf47173af1db7664f)
#define _s06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_RtlMuiRegAddLIPParent$ntoskrnl.exe", 0x97d240, 0x0, true, 0x896871fa9c8b9277)
#define _s07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint32_t, uint32_t*, const char*, uint32_t)>*), "$RtlMultiByteToUnicodeN$ntoskrnl.exe", 0x68a150, 0x0, true, 0xf7b55e7dcbb5f9ca)
#define _s08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, const char*, uint32_t)>*), "$RtlMultiByteToUnicodeSize$ntoskrnl.exe", 0x68a220, 0x0, true, 0x6ee81c533299719a)
#define _s09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct nt::unicode_prefix_table_entry_t*(struct nt::unicode_prefix_table_t*, uint8_t)>*), "$RtlNextUnicodePrefix$ntoskrnl.exe", 0x75e5c0, 0x0, true, 0xb9793bd954718e32)
#define _s10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, wchar_t*, int32_t*)>*), "$RtlNormalizeString$ntoskrnl.exe", 0x914730, 0x0, true, 0x718743096b123499)
#define _s11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(int32_t)>*), "$RtlNtStatusToDosError$ntoskrnl.exe", 0x6ba0a0, 0x0, true, 0xcf6a85ab42389f4f)
#define _s12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(int32_t)>*), "$RtlNtStatusToDosErrorNoTeb$ntoskrnl.exe", 0x2f4fc0, 0x0, true, 0xcb454620a9e76444)
#define _s13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::generic_table_t*)>*), "$RtlNumberGenericTableElements$ntoskrnl.exe", 0x3154e0, 0x0, true, 0xc90479fd6d3cc675)
#define _s14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::avl_table_t*)>*), "$RtlNumberGenericTableElementsAvl$ntoskrnl.exe", 0x2febb0, 0x0, true, 0x9000f7736f85ebef)
#define _s15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*)>*), "$RtlNumberOfClearBits$ntoskrnl.exe", 0x2e1390, 0x0, true, 0x133f7d14fc34bf1e)
#define _s16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlNumberOfClearBitsEx$ntoskrnl.exe", 0x581e20, 0x0, true, 0x5392438ac144a09b)
#define _s17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlNumberOfClearBitsInRange$ntoskrnl.exe", 0x581e50, 0x0, true, 0xd3bc0a64f2e34a53)
#define _s18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*)>*), "$RtlNumberOfSetBits$ntoskrnl.exe", 0x2e13c0, 0x0, true, 0xac029925e1361ba8)
#define _s19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlNumberOfSetBitsEx$ntoskrnl.exe", 0x581e80, 0x0, true, 0xe8d4b3f2abe8a93a)
#define _s20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlNumberOfSetBitsInRange$ntoskrnl.exe", 0x582020, 0x0, true, 0x23244814c9bf7d0c)
#define _s21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint64_t)>*), "$RtlNumberOfSetBitsUlongPtr$ntoskrnl.exe", 0x3084d0, 0x0, true, 0xd96b2cc093080ba7)
#define _s22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, const nt::ascii_view*, uint8_t)>*), "$RtlOemStringToCountedUnicodeString$ntoskrnl.exe", 0x90b410, 0x0, true, 0x36a43a01042f010e)
#define _s23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, const nt::ascii_view*, uint8_t)>*), "$RtlOemStringToUnicodeString$ntoskrnl.exe", 0x748e10, 0x0, true, 0x551814b2411f3258)
#define _s24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint32_t, uint32_t*, const char*, uint32_t)>*), "$RtlOemToUnicodeN$ntoskrnl.exe", 0x748f00, 0x0, true, 0xa9a94be95ace3aaa)
#define _s25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void**)>*), "$RtlOpenCurrentUser$ntoskrnl.exe", 0x7774e0, 0x0, true, 0x386aee65506e33b5)
#define _s26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<enum nt::os_deployement_state_values_t(uint32_t)>*), "$RtlOsDeploymentState$ntoskrnl.exe", 0x914970, 0x0, true, 0x9a585a9f0c987688)
#define _s27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::acl_t*)>*), "$RtlOwnerAcesPresent$ntoskrnl.exe", 0x2efb50, 0x0, true, 0xbbed5ed2cbfe3b87)
#define _s28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPcToFileHeader$ntoskrnl.exe", 0x311c10, 0x0, true, 0x2d979dcc7895a440)
#define _s29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPcToFileName$ntoskrnl.exe", 0x3c80b0, 0x0, true, 0x109bd7685c105d18)
#define _s30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPcToFilePath$ntoskrnl.exe", 0x914ad0, 0x0, true, 0xc826c7a704bad324)
#define _s31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t)>*), "$RtlPinAtomInAtomTable$ntoskrnl.exe", 0x6dc610, 0x0, true, 0x1ceddf5b28d5ff3d)
#define _s32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint64_t)>*), "$RtlPrefetchMemoryNonTemporal$ntoskrnl.exe", 0x3fe0f0, 0x0, true, 0xa83927e7786c890a)
#define _s33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const nt::ascii_view*, const nt::ascii_view*, uint8_t)>*), "$RtlPrefixString$ntoskrnl.exe", 0x6c4d60, 0x0, true, 0xaab12fd06939431c)
#define _s34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const nt::unicode_view*, const nt::unicode_view*, uint8_t)>*), "$RtlPrefixUnicodeString$ntoskrnl.exe", 0x61b2c0, 0x0, true, 0xe9509199fabc9c9a)
#define _s35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlProtectedAccess$ntoskrnl.exe", 0x97fbc0, 0x0, true, 0x791d0c3ed4202d4c)
#define _s36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t, uint32_t*, uint32_t*, wchar_t*, uint32_t*)>*), "$RtlQueryAtomInAtomTable$ntoskrnl.exe", 0x637c70, 0x0, true, 0x2ee81812bbe406ee)
#define _s37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryAtomsInAtomTable$ntoskrnl.exe", 0x90ea58, 0x0, true, 0x2477695dd6f94992)
#define _s38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryDynamicTimeZoneInformation$ntoskrnl.exe", 0x910950, 0x0, true, 0xb30d46fc29d02fc8)
#define _s39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(union rtl::elevation_flags_t*)>*), "$RtlQueryElevationFlags$ntoskrnl.exe", 0x6d4390, 0x0, true, 0x9f478bc9330fdc8e)
#define _s40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryImageFileExecutionOptions$ntoskrnl.exe", 0x78f590, 0x0, true, 0xfbae31978d9c0206)
#define _s41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryImageFileKeyOption$ntoskrnl.exe", 0x6d9ee0, 0x0, true, 0x58f5eba0c587131e)
#define _s42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, void*, uint32_t, enum win::acl_information_class_t)>*), "$RtlQueryInformationAcl$ntoskrnl.exe", 0x613d10, 0x0, true, 0x9f52c07cfb0d6b7)
#define _s43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryModuleInformation$ntoskrnl.exe", 0x7730f0, 0x0, true, 0xc64aac2e3ad80a63)
#define _s44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, wchar_t*, uint64_t*, wchar_t*, uint64_t*, struct nt::guid_t*, struct ps::pkg_claim_t*, uint64_t*)>*), "$RtlQueryPackageClaims$ntoskrnl.exe", 0x2e65a0, 0x0, true, 0x9c14286bb2d56c0d)
#define _s45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryPackageIdentity$ntoskrnl.exe", 0x2e64f0, 0x0, true, 0xcd7d5a4dd2846819)
#define _s46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const wchar_t*, struct rtl::query_registry_table_t*, void*, void*)>*), "$RtlQueryRegistryValues$ntoskrnl.exe", 0x681700, 0x0, true, 0xa27849a0534c13a2)
#define _s47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const wchar_t*, struct rtl::query_registry_table_t*, void*, void*)>*), "$RtlQueryRegistryValuesEx$ntoskrnl.exe", 0x6814d0, 0x0, true, 0xa8dd1d57bacfe467)
#define _s48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::time_zone_information_t*)>*), "$RtlQueryTimeZoneInformation$ntoskrnl.exe", 0x910970, 0x0, true, 0x99df18a7b7e5d043)
#define _s49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const nt::unicode_view*)>*), "$RtlQueryValidationRunlevel$ntoskrnl.exe", 0x588440, 0x0, true, 0x71d9fa0279a55786)
#define _s50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::exception_record_t*)>*), "$RtlRaiseException$ntoskrnl.exe", 0x32b900, 0x0, true, 0x2bc790f53d455996)
#define _s51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(int32_t)>*), "$RtlRaiseStatus$ntoskrnl.exe", 0x2ee870, 0x0, true, 0x9b5a734b72b9aabe)
#define _s52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t*)>*), "$RtlRandom$ntoskrnl.exe", 0x6e6aa0, 0x0, true, 0x195ec16571e39d39)
#define _s53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t*)>*), "$RtlRandomEx$ntoskrnl.exe", 0x328450, 0x0, true, 0x6db9cb72b953bae6)
#define _s54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::rb_tree_t*, struct rtl::balanced_node_t*, uint8_t, struct rtl::balanced_node_t*)>*), "$RtlRbInsertNodeEx$ntoskrnl.exe", 0x24f7f0, 0x0, true, 0xf06abe2bce5644cf)
#define _s55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::rb_tree_t*, struct rtl::balanced_node_t*)>*), "$RtlRbRemoveNode$ntoskrnl.exe", 0x24ead0, 0x0, true, 0x44ae77d991deb92f)
#define _s56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRbReplaceNode$ntoskrnl.exe", 0x341470, 0x0, true, 0x180b766865fbed)
#define _s57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*), "$RtlRealPredecessor$ntoskrnl.exe", 0x201770, 0x0, true, 0xb603b8b2c9ffd19e)
#define _s58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*), "$RtlRealSuccessor$ntoskrnl.exe", 0x2f3830, 0x0, true, 0xe3955284c8cdc914)
#define _s59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$RtlReleasePrivilege$ntoskrnl.exe", 0x6e49a0, 0x0, true, 0x2683f59916f92ac9)
#define _s60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRemoveDynamicFunctionTable$ntoskrnl.exe", 0x2fda6c, 0x0, true, 0xa141c41130cb4d10)
#define _s61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_entry_t*, struct rtl::dynamic_hash_table_context_t*)>*), "$RtlRemoveEntryHashTable$ntoskrnl.exe", 0x339e60, 0x0, true, 0x9755bd68a47db8af)
#define _s62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRemoveInvertedFunctionTable$ntoskrnl.exe", 0x36f858, 0x0, true, 0x1e904ef2b7485a9d)
#define _s63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::unicode_prefix_table_t*, struct nt::unicode_prefix_table_entry_t*)>*), "$RtlRemoveUnicodePrefix$ntoskrnl.exe", 0x6e46b0, 0x0, true, 0x714eb9cdaa189226)
#define _s64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t*)>*), "$RtlReplaceSidInSd$ntoskrnl.exe", 0x90f1e0, 0x0, true, 0x6b835e028a77f88a)
#define _s65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint8_t**, uint8_t*, uint8_t**, uint32_t)>*), "$RtlReserveChunk$ntoskrnl.exe", 0x90bf40, 0x0, true, 0xd391c70edbea15c9)
#define _s66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReserveChunkLZNT1$ntoskrnl.exe", 0x916d90, 0x0, true, 0xcfc470b88a64d849)
#define _s67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReserveChunkNS$ntoskrnl.exe", 0x711bf0, 0x0, true, 0xd791cd50ce219f5c)
#define _s68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReserveChunkProcs$ntoskrnl.exe", 0x980088, 0x0, true, 0xe14ca8c1944ecfe0)
#define _s69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRestoreContext$ntoskrnl.exe", 0x3fda70, 0x0, true, 0x8732dc0512623564)
#define _s70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(union rtl::run_once_t*, uint32_t, void**)>*), "$RtlRunOnceBeginInitialize$ntoskrnl.exe", 0x711240, 0x0, true, 0x6be896ee9ad74e99)
#define _s71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(union rtl::run_once_t*, uint32_t, void*)>*), "$RtlRunOnceComplete$ntoskrnl.exe", 0x7112f0, 0x0, true, 0x7860f59267041881)
#define _s72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(union rtl::run_once_t*, sdk::function<uint32_t(union rtl::run_once_t*, void*, void**)>*, void*, void**)>*), "$RtlRunOnceExecuteOnce$ntoskrnl.exe", 0x711160, 0x0, true, 0x70ac43df4e6ac0da)
#define _s73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(union rtl::run_once_t*)>*), "$RtlRunOnceInitialize$ntoskrnl.exe", 0x77dbb0, 0x0, true, 0x3018d81873ac8366)
#define _s74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlScrubMemory$ntoskrnl.exe", 0x58a4a8, 0x0, true, 0xfcc390ed59ae434d)
#define _s75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t, int64_t*)>*), "$RtlSecondsSince1970ToTime$ntoskrnl.exe", 0x3c9060, 0x0, true, 0x2c17706eeec67c5c)
#define _s76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t, int64_t*)>*), "$RtlSecondsSince1980ToTime$ntoskrnl.exe", 0x57f2f0, 0x0, true, 0xa97c47019954ebd1)
#define _s77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct image::section_header_t*(struct image::nt_headers64_t*, void*, uint32_t)>*), "$RtlSectionTableFromVirtualAddress$ntoskrnl.exe", 0x33b290, 0x0, true, 0x13197deb8508cde3)
#define _s78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t*, struct nt::acl_t*, uint32_t*, struct nt::acl_t*, uint32_t*, void*, uint32_t*, void*, uint32_t*)>*), "$RtlSelfRelativeToAbsoluteSD$ntoskrnl.exe", 0x750f00, 0x0, true, 0x43942721a2d95426)
#define _s79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "$RtlSelfRelativeToAbsoluteSD2$ntoskrnl.exe", 0x90d870, 0x0, true, 0x744b748b071b21d6)
#define _s80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetActiveConsoleId$ntoskrnl.exe", 0x7799d0, 0x0, true, 0xd1338b5d2ab9d55e)
#define _s81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetActiveTimeBias$ntoskrnl.exe", 0x79078c, 0x0, true, 0x92c115058445bcf7)
#define _s82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*)>*), "$RtlSetAllBits$ntoskrnl.exe", 0x2cad50, 0x0, true, 0xf8ac65d87c7023c5)
#define _s83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetAllBitsEx$ntoskrnl.exe", 0x3c7070, 0x0, true, 0xfaf2bdffa5ed9462)
#define _s84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*, uint32_t)>*), "$RtlSetBit$ntoskrnl.exe", 0x2fd950, 0x0, true, 0xb9ffb317057bdc97)
#define _s85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetBitEx$ntoskrnl.exe", 0x305950, 0x0, true, 0x2098f00712fd900e)
#define _s86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::bitmap_t*, uint32_t, uint32_t)>*), "$RtlSetBits$ntoskrnl.exe", 0x2e30c0, 0x0, true, 0xdd5dce50ba8605e)
#define _s87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetBitsEx$ntoskrnl.exe", 0x2a30d0, 0x0, true, 0x97aea49be047698d)
#define _s88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetConsoleSessionForegroundProcessId$ntoskrnl.exe", 0x6de680, 0x0, true, 0xe0e31c8196e8cda7)
#define _s89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t, uint16_t)>*), "$RtlSetControlSecurityDescriptor$ntoskrnl.exe", 0x75e6e0, 0x0, true, 0xa8ffaba49d829ada)
#define _s90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, struct nt::acl_t*, uint8_t)>*), "$RtlSetDaclSecurityDescriptor$ntoskrnl.exe", 0x615250, 0x0, true, 0x7af443159fada0bb)
#define _s91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetDynamicTimeZoneInformation$ntoskrnl.exe", 0x910990, 0x0, true, 0x27485e8ceefa202d)
#define _s92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t)>*), "$RtlSetGroupSecurityDescriptor$ntoskrnl.exe", 0x70d390, 0x0, true, 0x2ed04565e2f93cec)
#define _s93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t)>*), "$RtlSetOwnerSecurityDescriptor$ntoskrnl.exe", 0x70d3f0, 0x0, true, 0x5492c435bd7ffc7e)
#define _s94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t)>*), "$RtlSetPortableOperatingSystem$ntoskrnl.exe", 0x582980, 0x0, true, 0xe2d2b014111b3717)
#define _s95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, struct nt::acl_t*, uint8_t)>*), "$RtlSetSaclSecurityDescriptor$ntoskrnl.exe", 0x703980, 0x0, true, 0xe2a3bc530e1ee2c1)
#define _s96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::time_zone_information_t*)>*), "$RtlSetTimeZoneInformation$ntoskrnl.exe", 0x9109b0, 0x0, true, 0xcd2e0cb61e813bde)
#define _s97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t*)>*), "$RtlSidDominates$ntoskrnl.exe", 0x258190, 0x0, true, 0x24695ab91c2b602e)
#define _s98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t*)>*), "$RtlSidDominatesForTrust$ntoskrnl.exe", 0x2597c0, 0x0, true, 0x4f702ba05488a6b4)
#define _s99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::sid_and_attributes_t*, uint32_t, struct nt::sid_and_attributes_hash_t*)>*), "$RtlSidHashInitialize$ntoskrnl.exe", 0x256b40, 0x0, true, 0xb35c7c9c704a59c)
#define _t00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct nt::sid_and_attributes_t*(struct nt::sid_and_attributes_hash_t*, void*)>*), "$RtlSidHashLookup$ntoskrnl.exe", 0x204e00, 0x0, true, 0xdb4709edec1c96c2)
#define _t01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(void*, uint32_t, void*)>*), "$RtlSizeHeap$ntoskrnl.exe", 0x580580, 0x0, true, 0x11b8c250761b25db)
#define _t02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*), "$RtlSplay$ntoskrnl.exe", 0x2e4b90, 0x0, true, 0x7db8b61ff97e26b)
#define _t03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStackTraceHashFunction$ntoskrnl.exe", 0x3f0dd0, 0x0, true, 0xa12c711152bb0f11)
#define _t04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStdInitializeStackDatabase$ntoskrnl.exe", 0x90d1bc, 0x0, true, 0xf70807756a8e3234)
#define _t05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStdLogStackTrace$ntoskrnl.exe", 0x57fc90, 0x0, true, 0xb0323b07ef3d7b0c)
#define _t06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStdReleaseStackTrace$ntoskrnl.exe", 0x57fd1c, 0x0, true, 0x8229f385e6f8cd8a)
#define _t07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbCatExA$ntoskrnl.exe", 0x4b0688, 0x0, true, 0xa3dab1b4ebb371ee)
#define _t08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint64_t, const wchar_t*)>*), "$RtlStringCbCatW$ntoskrnl.exe", 0x2df358, 0x0, true, 0x906197a14cd3ca3a)
#define _t09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(char*, uint64_t, const char*)>*), "$RtlStringCbCopyA$ntoskrnl.exe", 0x239bd8, 0x0, true, 0x57b0db08ada8b93d)
#define _t10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbCopyExA$ntoskrnl.exe", 0x3c91ec, 0x0, true, 0x4702b0b282be5691)
#define _t11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbCopyExW$ntoskrnl.exe", 0x312b10, 0x0, true, 0x8f28fba44c68f0eb)
#define _t12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbCopyNW$ntoskrnl.exe", 0x2e20a8, 0x0, true, 0x4c3c08b8a7700185)
#define _t13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint64_t, const nt::unicode_view*)>*), "$RtlStringCbCopyUnicodeString$ntoskrnl.exe", 0x5975ec, 0x0, true, 0xeaba0c46dfdb3d39)
#define _t14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbCopyW$ntoskrnl.exe", 0x2df118, 0x0, true, 0x66b9daac1a4f82d7)
#define _t15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbLengthW$ntoskrnl.exe", 0x2e535c, 0x0, true, 0xf20898c8dd04e726)
#define _t16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbPrintfA$ntoskrnl.exe", 0x3a9204, 0x0, true, 0x8d804c9d155bc495)
#define _t17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbPrintfExA$ntoskrnl.exe", 0x4b0744, 0x0, true, 0x690e6f83860d3eac)
#define _t18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbPrintfExW$ntoskrnl.exe", 0x2e63cc, 0x0, true, 0x4dbfaf95ae01e146)
#define _t19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbPrintfW$ntoskrnl.exe", 0x25b494, 0x0, true, 0x427d054347c5c7f3)
#define _t20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbVPrintfA$ntoskrnl.exe", 0x36e53c, 0x0, true, 0xcab0c3fc41133a0d)
#define _t21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchCatExW$ntoskrnl.exe", 0x3bf46c, 0x0, true, 0xdde5dfd973de57a6)
#define _t22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchCatNW$ntoskrnl.exe", 0x3c3c84, 0x0, true, 0x7dd55249d48d7727)
#define _t23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint64_t, const wchar_t*)>*), "$RtlStringCchCatW$ntoskrnl.exe", 0x36e5d0, 0x0, true, 0xd29d64eccb60e9f1)
#define _t24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(char*, uint64_t, const char*)>*), "$RtlStringCchCopyA$ntoskrnl.exe", 0x318f14, 0x0, true, 0xf65f7266982cf96e)
#define _t25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchCopyExW$ntoskrnl.exe", 0x2e6214, 0x0, true, 0x9515bf37b5e100f9)
#define _t26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchCopyNExW$ntoskrnl.exe", 0x2e6040, 0x0, true, 0x765b85347656c69)
#define _t27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchCopyNW$ntoskrnl.exe", 0x36e1e0, 0x0, true, 0xf4ec90a8e17ef010)
#define _t28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint64_t, const wchar_t*)>*), "$RtlStringCchCopyW$ntoskrnl.exe", 0x36e310, 0x0, true, 0xb3438421de0fb629)
#define _t29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, uint64_t, uint64_t*)>*), "$RtlStringCchLengthW$ntoskrnl.exe", 0x2df438, 0x0, true, 0x33cb28c91db34a02)
#define _t30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchPrintfA$ntoskrnl.exe", 0x3b32b4, 0x0, true, 0xfd2a11aa3ff9b765)
#define _t31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchPrintfExW$ntoskrnl.exe", 0x2e5eac, 0x0, true, 0x1c2d0adb0c2ef40f)
#define _t32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint64_t, const wchar_t*, ...)>*), "$RtlStringCchPrintfW$ntoskrnl.exe", 0x2e2030, 0x0, true, 0x64380b0ce96e73f6)
#define _t33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct nt::guid_t const*, nt::unicode_view*)>*), "$RtlStringFromGUID$ntoskrnl.exe", 0x70ea00, 0x0, true, 0x8e4e365e802cdc6b)
#define _t34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::guid_t*, nt::unicode_view*, uint8_t)>*), "$RtlStringFromGUIDEx$ntoskrnl.exe", 0x70ea18, 0x0, true, 0x20e6573690f63cbe)
#define _t35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*), "$RtlStronglyEnumerateEntryHashTable$ntoskrnl.exe", 0x38c850, 0x0, true, 0x4ed34e427dca6b42)
#define _t36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t*(void*)>*), "$RtlSubAuthorityCountSid$ntoskrnl.exe", 0x35c3e0, 0x0, true, 0x1edb8e1db67b6b40)
#define _t37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t*(void*, uint32_t)>*), "$RtlSubAuthoritySid$ntoskrnl.exe", 0x35c3f0, 0x0, true, 0x2fb807903d5a3be0)
#define _t38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*), "$RtlSubtreePredecessor$ntoskrnl.exe", 0x2f3cc0, 0x0, true, 0xa38d4eaf3869ec6f)
#define _t39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*), "$RtlSubtreeSuccessor$ntoskrnl.exe", 0x585c30, 0x0, true, 0x25209fd035c52ebe)
#define _t40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const nt::unicode_view*, const nt::unicode_view*, uint8_t)>*), "$RtlSuffixUnicodeString$ntoskrnl.exe", 0x90b520, 0x0, true, 0xd0ee24451815f15d)
#define _t41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int64_t*, int64_t*)>*), "$RtlSystemTimeToLocalTime$ntoskrnl.exe", 0x7b7240, 0x0, true, 0x38700488965edcc0)
#define _t42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::bitmap_t*, uint32_t)>*), "$RtlTestBit$ntoskrnl.exe", 0x2f66c0, 0x0, true, 0xf986e53bd87f198e)
#define _t43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::bitmap_ex_t*, uint64_t)>*), "$RtlTestBitEx$ntoskrnl.exe", 0x36a6b0, 0x0, true, 0x512fd7b9873fd1e4)
#define _t44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ps::protection_t, struct ps::protection_t)>*), "$RtlTestProtectedAccess$ntoskrnl.exe", 0x64ca5c, 0x0, true, 0xe67bb02c09af36c7)
#define _t45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::time_fields_t*, int64_t*)>*), "$RtlTimeFieldsToTime$ntoskrnl.exe", 0x2019b0, 0x0, true, 0x501aa27b2883ec0d)
#define _t46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(int64_t*, struct nt::time_fields_t*)>*), "$RtlTimeToElapsedTimeFields$ntoskrnl.exe", 0x90b9d0, 0x0, true, 0xdaa89a366c3910fc)
#define _t47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(int64_t*, uint32_t*)>*), "$RtlTimeToSecondsSince1970$ntoskrnl.exe", 0x57f320, 0x0, true, 0x83f716a0095ca745)
#define _t48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(int64_t*, uint32_t*)>*), "$RtlTimeToSecondsSince1980$ntoskrnl.exe", 0x391e60, 0x0, true, 0x3259503a4cb603ab)
#define _t49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(int64_t*, struct nt::time_fields_t*)>*), "$RtlTimeToTimeFields$ntoskrnl.exe", 0x36ccd0, 0x0, true, 0x8e45a1a6d8807257)
#define _t50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTraceDatabaseAdd$ntoskrnl.exe", 0x5887a0, 0x0, true, 0xeb60544d6974ed53)
#define _t51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTraceDatabaseCreate$ntoskrnl.exe", 0x588800, 0x0, true, 0xd7d592a718e7b5bc)
#define _t52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTraceDatabaseDestroy$ntoskrnl.exe", 0x588970, 0x0, true, 0x470d767fa79f0a67)
#define _t53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTraceDatabaseEnumerate$ntoskrnl.exe", 0x5889c0, 0x0, true, 0x13e11e6ecdab021b)
#define _t54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTraceDatabaseFind$ntoskrnl.exe", 0x588a90, 0x0, true, 0x6660ad6cb5750d57)
#define _t55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTraceDatabaseLock$ntoskrnl.exe", 0x588b00, 0x0, true, 0xb916a1889c4c6bfb)
#define _t56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTraceDatabaseUnlock$ntoskrnl.exe", 0x588b20, 0x0, true, 0x101dbaf726bfdf92)
#define _t57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTraceDatabaseValidate$ntoskrnl.exe", 0x588b40, 0x0, true, 0xa1016d9580619f62)
#define _t58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTryEndReadTickLock$ntoskrnl.exe", 0x337690, 0x0, true, 0x3197dd72dc6d8723)
#define _t59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUIntAdd$ntoskrnl.exe", 0x242a20, 0x0, true, 0xef4fbdc732aa230)
#define _t60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint64_t, uint64_t*)>*), "$RtlULongLongAdd$ntoskrnl.exe", 0x242a00, 0x0, true, 0xc4b8af37ffc39f46)
#define _t61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint64_t, uint64_t*)>*), "$RtlULongLongMult$ntoskrnl.exe", 0x2c1ccc, 0x0, true, 0xe7a854418ccd74d)
#define _t62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint64_t, uint64_t*)>*), "$RtlULongLongSub$ntoskrnl.exe", 0x2367d4, 0x0, true, 0x22cd3bbfa0f377e4)
#define _t63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint16_t, wchar_t*)>*/*types differ*/), "$RtlUShortAdd$ntoskrnl.exe", 0x303cd4, 0x0, true, 0xb186ec8dd0e71e00)
#define _t64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnalignedStringCbLengthW$ntoskrnl.exe", 0x2e535c, 0x0, true, 0x2c4ea5aa712ac51e)
#define _t65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnalignedStringCchLengthW$ntoskrnl.exe", 0x25bb84, 0x0, true, 0x2632b920a6ba250d)
#define _t66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringCat$ntoskrnl.exe", 0x25c320, 0x0, true, 0x986bd40cd6af7d9f)
#define _t67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringCatString$ntoskrnl.exe", 0x3c021c, 0x0, true, 0xeb1f7d95c731c2c4)
#define _t68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, const nt::unicode_view*)>*), "$RtlUnicodeStringCopy$ntoskrnl.exe", 0x25c490, 0x0, true, 0x8b058c91be580ddf)
#define _t69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, const wchar_t*, ...)>*), "$RtlUnicodeStringPrintf$ntoskrnl.exe", 0x36a83c, 0x0, true, 0xe97eed34f6320a2e)
#define _t70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringPrintfEx$ntoskrnl.exe", 0x36a900, 0x0, true, 0xcce6796e3a2a3f39)
#define _t71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*), "$RtlUnicodeStringToAnsiString$ntoskrnl.exe", 0x61b1e0, 0x0, true, 0xa9bb609b6335e47c)
#define _t72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*), "$RtlUnicodeStringToCountedOemString$ntoskrnl.exe", 0x6c41b0, 0x0, true, 0xdcfef48bbac57cd9)
#define _t73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringToInt64$ntoskrnl.exe", 0x910820, 0x0, true, 0xb92d1d75eeed2259)
#define _t74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const nt::unicode_view*, uint32_t, uint32_t*)>*), "$RtlUnicodeStringToInteger$ntoskrnl.exe", 0x6b7540, 0x0, true, 0x18f50a6b21950ab0)
#define _t75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*), "$RtlUnicodeStringToOemString$ntoskrnl.exe", 0x6c4000, 0x0, true, 0x18a2a120bb6e9960)
#define _t76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringValidateEx$ntoskrnl.exe", 0x57f298, 0x0, true, 0x107070a2156eac18)
#define _t77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::cptableinfo_t*, char*, uint32_t, uint32_t*, wchar_t*, uint32_t)>*), "$RtlUnicodeToCustomCPN$ntoskrnl.exe", 0x90c460, 0x0, true, 0x21bcf1da5f43245a)
#define _t78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*), "$RtlUnicodeToMultiByteN$ntoskrnl.exe", 0x61b520, 0x0, true, 0x516898c29619301f)
#define _t79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, const wchar_t*, uint32_t)>*), "$RtlUnicodeToMultiByteSize$ntoskrnl.exe", 0x61b360, 0x0, true, 0xa29b167ebc1f4fa5)
#define _t80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*), "$RtlUnicodeToOemN$ntoskrnl.exe", 0x6c4640, 0x0, true, 0xe7ea1cfbfffcd7ef)
#define _t81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*), "$RtlUnicodeToUTF8N$ntoskrnl.exe", 0x6e3a90, 0x0, true, 0x63676513c44c8ae3)
#define _t82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlUnlockBootStatusData$ntoskrnl.exe", 0x777610, 0x0, true, 0x6781a7a443b41cbe)
#define _t83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnwind$ntoskrnl.exe", 0x3204d0, 0x0, true, 0x4c9bcc8da65e70ac)
#define _t84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnwindEx$ntoskrnl.exe", 0x32c1c0, 0x0, true, 0x4313ff001cb6c4f7)
#define _t85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<wchar_t(wchar_t)>*), "$RtlUpcaseUnicodeChar$ntoskrnl.exe", 0x63dd90, 0x0, true, 0x898fd942542f6c70)
#define _t86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, const nt::unicode_view*, uint8_t)>*), "$RtlUpcaseUnicodeString$ntoskrnl.exe", 0x64f970, 0x0, true, 0x8d41be668d12c337)
#define _t87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, nt::unicode_view*, uint8_t)>*), "$RtlUpcaseUnicodeStringToAnsiString$ntoskrnl.exe", 0x90b5c0, 0x0, true, 0xd0c78f8d35fd2a18)
#define _t88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*), "$RtlUpcaseUnicodeStringToCountedOemString$ntoskrnl.exe", 0x6c4420, 0x0, true, 0x94fad2cbefb7b3e4)
#define _t89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*), "$RtlUpcaseUnicodeStringToOemString$ntoskrnl.exe", 0x6c40c0, 0x0, true, 0xb8a48af6160e8478)
#define _t90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::cptableinfo_t*, char*, uint32_t, uint32_t*, wchar_t*, uint32_t)>*), "$RtlUpcaseUnicodeToCustomCPN$ntoskrnl.exe", 0x90c590, 0x0, true, 0xc5261385c439569c)
#define _t91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*), "$RtlUpcaseUnicodeToMultiByteN$ntoskrnl.exe", 0x61b5c0, 0x0, true, 0x549486f4f21a5381)
#define _t92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*), "$RtlUpcaseUnicodeToOemN$ntoskrnl.exe", 0x6c4570, 0x0, true, 0x957de9a2dadbf08d)
#define _t93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<char(char)>*), "$RtlUpperChar$ntoskrnl.exe", 0x61acf0, 0x0, true, 0xd707ae79f1d96f95)
#define _t94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::ascii_view*, const nt::ascii_view*)>*), "$RtlUpperString$ntoskrnl.exe", 0x61b9f0, 0x0, true, 0x31d0b42ab9160ffe)
#define _t95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint32_t, uint32_t*, const char*, uint32_t)>*), "$RtlUTF8ToUnicodeN$ntoskrnl.exe", 0x6e12f0, 0x0, true, 0x3378e6ba2cfc9dbc)
#define _t96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::acl_t*)>*), "$RtlValidAcl$ntoskrnl.exe", 0x606210, 0x0, true, 0x680684e666151287)
#define _t97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct ps::protection_t)>*), "$RtlValidProcessProtection$ntoskrnl.exe", 0x6ecf00, 0x0, true, 0x460355c04e99a566)
#define _t98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, uint32_t)>*), "$RtlValidRelativeSecurityDescriptor$ntoskrnl.exe", 0x68b840, 0x0, true, 0x66d99a3f287d8890)
#define _t99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RtlValidSecurityDescriptor$ntoskrnl.exe", 0x6bb0a0, 0x0, true, 0x58e5a0671e9d4bbd)
#define _u00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RtlValidSid$ntoskrnl.exe", 0x606370, 0x0, true, 0x248532dd76abdeb9)
#define _u01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const nt::unicode_view*)>*), "$RtlValidateUnicodeString$ntoskrnl.exe", 0x2e6b10, 0x0, true, 0x8ec6aa2fa3dc3923)
#define _u02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::osversioninfoexw_t*, uint32_t, uint64_t)>*), "$RtlVerifyVersionInfo$ntoskrnl.exe", 0x37a960, 0x0, true, 0xfd5091ae82dd9922)
#define _u03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlVirtualUnwind$ntoskrnl.exe", 0x32c150, 0x0, true, 0x6a291f951181540c)
#define _u04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void**, uint32_t, uint32_t)>*), "$RtlWalkFrameChain$ntoskrnl.exe", 0x32c920, 0x0, true, 0x284549e6deace22e)
#define _u05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*), "$RtlWeaklyEnumerateEntryHashTable$ntoskrnl.exe", 0x582ac0, 0x0, true, 0x29ebf79d42eb307b)
#define _u06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWorkSpaceProcs$ntoskrnl.exe", 0x6270, 0x0, true, 0xedb55c23859399a1)
#define _u07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64GetCpuAreaInfo$ntoskrnl.exe", 0x6fd330, 0x0, true, 0x636f13ac0ac9ab8e)
#define _u08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWriteAcquireTickLock$ntoskrnl.exe", 0x240c34, 0x0, true, 0x6589070929a4f113)
#define _u09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, const wchar_t*, const wchar_t*, uint32_t, void*, uint32_t)>*), "$RtlWriteRegistryValue$ntoskrnl.exe", 0x6e0530, 0x0, true, 0xec1599d14ef135b8)
#define _u10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWriteReleaseTickLock$ntoskrnl.exe", 0x3a3e94, 0x0, true, 0xb3371165c7a92383)
#define _u11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWriteTryAcquireTickLock$ntoskrnl.exe", 0x589348, 0x0, true, 0x178c366cdcb9b421)
#define _u12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlXRestore$ntoskrnl.exe", 0x312e5c, 0x0, true, 0x75acdb1a5ee1f02b)
#define _u13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlXSave$ntoskrnl.exe", 0x311350, 0x0, true, 0xcafac89b352ebb7)
#define _u14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "$RtlZeroHeap$ntoskrnl.exe", 0x9111f0, 0x0, true, 0xb8c80b6054edbaf8)
#define _u15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlZeroMemory$ntoskrnl.exe", 0x36a690, 0x0, true, 0x7b6c58077adcc2d0)
#define _u16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchCatA$win32kbase.sys", 0x1a3ccc, 0x0, true, 0xb4658d6f3fa80f6d)
#define _u17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetExpWinVer$win32kbase.sys", 0x63450, 0x0, true, 0x69641d31a29ff3a8)
#define _u18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitLargeAnsiString$win32kfull.sys", 0x4ddf8, 0x0, true, 0x5c8fed78c8a9b15a)
#define _u19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitLargeUnicodeString$win32kfull.sys", 0x4ddac, 0x0, true, 0x3816dfc24e47d286)
#define _u20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitUnicodeStringOrId$win32kfull.sys", 0x222c8, 0x0, true, 0xae46b1eced116c11)
#define _u21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLoadStringOrError$win32kbase.sys", 0x67a40, 0x0, true, 0x8dfaa28a0f7530bb)
#define _u22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMBMessageWParamCharToWCS$win32kfull.sys", 0x25e4a0, 0x0, true, 0x5886fd68136c1631)
#define _u23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchLengthA$win32kbase.sys", 0x18bc60, 0x0, true, 0xa58f55e6f4ce3aac)
#define _u24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWCSMessageWParamCharToMB$win32kfull.sys", 0x1208a0, 0x0, true, 0xc88f0d895d3430f)
#define _u25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyBufferToMdl$ndis.sys", 0xadfcc, 0x0, true, 0x963530cd2ff2f72c)
#define _u26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyMdlToBuffer$ndis.sys", 0xae0c4, 0x0, true, 0x64ad41ab3870a8b2)
#define _u27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyMdlToMdl$ndis.sys", 0xae1bc, 0x0, true, 0x3bea4d086955badf)
#define _u28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCchCopyNA$ataport.sys", 0x16dcc, 0x0, true, 0xc524448ea9e5eb17)
#define _u29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringCatStringEx$fltMgr.sys", 0x1a404, 0x0, true, 0xed8b97420c658202)
#define _u30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringInit$ci.dll", 0x278c, 0x0, true, 0xbe69cf84c75a3723)
#define _u31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAcquireWriteLock$netio.sys", 0x0, 0x0, false, 0xfdb7a315b989366)
#define _u32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReinitializeToeplitzHash$netio.sys", 0x24440, 0x0, true, 0xe83360c44fc7837b)
#define _u33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAcquireReadLock$netio.sys", 0x169a8, 0x0, true, 0x45ec3cf3f344b35f)
#define _u34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAcquireScalableWriteLock$netio.sys", 0x62b30, 0x0, true, 0x9b72695e1bb5d40e)
#define _u35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAllocateDummyMdlChain$netio.sys", 0x3e7a0, 0x0, true, 0x14dd60bf0f7e29b3)
#define _u36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCleanupTimerWheel$netio.sys", 0x1c5b0, 0x0, true, 0x46a9177964c9d6c5)
#define _u37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCleanupTimerWheelEntry$netio.sys", 0x185e0, 0x0, true, 0xe4244cea1584b997)
#define _u38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCleanupToeplitzHash$netio.sys", 0x3edf0, 0x0, true, 0x3bad565763eeb4c1)
#define _u39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompute37Hash$netio.sys", 0x18b10, 0x0, true, 0x3cadbc2802017579)
#define _u40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlComputeToeplitzHash$netio.sys", 0x13670, 0x0, true, 0x349c9fa61e4b1644)
#define _u41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyBufferToMdlWithReservedMappingAtDpcLevel$netio.sys", 0x3e824, 0x0, true, 0xccbca8d100d0eacb)
#define _u42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyMdlToBufferWithReservedMappingAtDpcLevel$netio.sys", 0x3e97c, 0x0, true, 0xad074138b14b628b)
#define _u43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyMdlToMdlIndirect$netio.sys", 0x17aa0, 0x0, true, 0x921e6e0b28b3774e)
#define _u44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyMdlToMdlWithReservedMappingAtDpcLevel$netio.sys", 0x3ead4, 0x0, true, 0x44c5d34a6328bddb)
#define _u45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeleteElementGenericTableBasicAvl$netio.sys", 0x1c0c0, 0x0, true, 0xe084a0cae83914d6)
#define _u46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDummyPage$netio.sys", 0x7aa40, 0x0, true, 0x3468430cb695fd46)
#define _u47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDummyPageMdl$netio.sys", 0x7aa60, 0x0, true, 0xa9495be97396ba5b)
#define _u48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEndTimerWheelEnumeration$netio.sys", 0x47cc0, 0x0, true, 0xdac4ac30d9f6736d)
#define _u49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnumerateNextTimerWheelEntry$netio.sys", 0x47d00, 0x0, true, 0xe66bee983ab8fb8f)
#define _u50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeDummyMdlChain$netio.sys", 0x3ed90, 0x0, true, 0x48d7a256bb086631)
#define _u51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetNextExpirationTimerWheelTick$netio.sys", 0x135f0, 0x0, true, 0x121a6d1b506f767b)
#define _u52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetNextExpiredTimerWheelEntry$netio.sys", 0x13460, 0x0, true, 0xe4645c561e8d4d6a)
#define _u53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIndicateTimerWheelEntryTimerStart$netio.sys", 0x16b90, 0x0, true, 0xcb8e2be803002ccb)
#define _u54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeTimerWheel$netio.sys", 0x24130, 0x0, true, 0x7bc770015d287049)
#define _u55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeTimerWheelEntry$netio.sys", 0x18e50, 0x0, true, 0xe60872fd8026a5e3)
#define _u56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeTimerWheelEnumeration$netio.sys", 0x47db0, 0x0, true, 0xa051f72bf1ef9066)
#define _u57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeToeplitzHash$netio.sys", 0x24370, 0x0, true, 0xa6d3393da7b0c787)
#define _u58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInsertElementGenericTableBasicAvl$netio.sys", 0x1c370, 0x0, true, 0xc3c5ed8d8fd06018)
#define _u59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInvokeStartRoutines$netio.sys", 0x85b30, 0x0, true, 0x9b49ef7116689002)
#define _u60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInvokeStopRoutines$netio.sys", 0x87190, 0x0, true, 0x7e841baea89f43cb)
#define _u61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsTimerWheelSuspended$netio.sys", 0x18ae0, 0x0, true, 0x8e0c3007f288b704)
#define _u62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMappingAddressLock$netio.sys", 0x7aa50, 0x0, true, 0x1662844f71c077f4)
#define _u63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMappingSourceAddress$netio.sys", 0x7aa58, 0x0, true, 0x7af2dc330e79f1b1)
#define _u64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMappingTargetAddress$netio.sys", 0x7aa48, 0x0, true, 0xab79b1bc38d56739)
#define _u65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlResumeTimerWheel$netio.sys", 0x19e90, 0x0, true, 0x82c4cbc324cc6491)
#define _u66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReturnTimerWheelEntry$netio.sys", 0x177c0, 0x0, true, 0x1493f2c955ac1655)
#define _u67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSuspendTimerWheel$netio.sys", 0x16b50, 0x0, true, 0x25032f473e8de256)
#define _u68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUpdateCurrentTimerWheelTick$netio.sys", 0x18e00, 0x0, true, 0xdfd28e3f884c4c79)
#define _u69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAcquireWriteLockAtDpcLevel$tcpip.sys", 0x0, 0x0, false, 0xbab57dc9253765ee)
#define _u70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReleaseReadLock$tcpip.sys", 0x0, 0x0, false, 0x6713294c09d3062)
#define _u71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReleaseWriteLock$tcpip.sys", 0xef764, 0x0, true, 0x1bf2b8c1a31a9f3a)
#define _u72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRestructureHashTable$tcpip.sys", 0x0, 0x0, false, 0xbab09d040e6ebdc4)
#define _u73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAcquireReadLockAtDpcLevel$tcpip.sys", 0x29f48, 0x0, true, 0xd5ef39c6efd3698)
#define _u74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAcquireScalableReadLockAtDpcLevel$tcpip.sys", 0x6b740, 0x0, true, 0xfac09bdbbe46a25b)
#define _u75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAcquireScalableWriteLockAtDpcLevel$tcpip.sys", 0x15c3a8, 0x0, true, 0x8c749213933825fe)
#define _u76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCanonicalizeUrl$tcpip.sys", 0x230de8, 0x0, true, 0xe9240ced38b1ab50)
#define _u77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCookUrl$tcpip.sys", 0x230ed8, 0x0, true, 0xed5a8378e03c0504)
#define _u78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeCookedUrlComponents$tcpip.sys", 0x14c440, 0x0, true, 0x9ec3c32acfcf3f54)
#define _u79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeUrlString$tcpip.sys", 0x14c4bc, 0x0, true, 0xed0d153518a27f20)
#define _u80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeScalableMrswLock$tcpip.sys", 0x101f44, 0x0, true, 0x5de30f6646744948)
#define _u81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStartTimerWheelEntryTimer$tcpip.sys", 0xfed58, 0x0, true, 0xcaa2205c3a7d4833)
#define _u82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbVPrintfExW$dxgkrnl.sys", 0x0, 0x0, false, 0x14224c4d09c326e1)
#define _u83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStringCbCatA$dxgkrnl.sys", 0x4bee4, 0x0, true, 0x33587911e9b6872d)
#define _u84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringCchCatStringN$dxgkrnl.sys", 0x3e594, 0x0, true, 0x2e8b48d0427c318a)
#define _u85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDownlevelGetNtSystemRoot$dxgi.dll", 0x8ab00, 0x0, true, 0xe6360020d3464358)
#define _u86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDelayExecution$ntdll.dll", 0x0, 0x0, false, 0xd2e6d3a923db68f7)
#define _u87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetImageFileMachines$ntdll.dll", 0x0, 0x0, false, 0xcb9ee1eaaa423001)
#define _u88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetSystemTimeAndBias$ntdll.dll", 0x0, 0x0, false, 0x3b2b8ab50272f548)
#define _u89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsEcCode$ntdll.dll", 0x0, 0x0, false, 0xebffb8bd500b29f9)
#define _u90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsLongPathAwareProcessByManifest$ntdll.dll", 0x0, 0x0, false, 0x605b2f728f6e304e)
#define _u91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlOpenCrossProcessEmulatorWorkConnection$ntdll.dll", 0x0, 0x0, false, 0x1f11859a1c9a6ab7)
#define _u92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlOverwriteFeatureConfigurationBuffer$ntdll.dll", 0x0, 0x0, false, 0x8e1a2d4fed53f064)
#define _u93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxAllocateArray$ntdll.dll", 0x0, 0x0, false, 0xcc899c14b132dda1)
#define _u94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxAllocateRange$ntdll.dll", 0x0, 0x0, false, 0xdd43ace08fd5706d)
#define _u95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxAreAllClear$ntdll.dll", 0x0, 0x0, false, 0x587dce7e8c28d022)
#define _u96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxAreAllSet$ntdll.dll", 0x0, 0x0, false, 0x7b8256263b4e1218)
#define _u97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::sparse_bitmap_ctx_t*, uint64_t)>*), "$RtlSparseBitmapCtxCheckBit$ntdll.dll", 0x0, 0x0, false, 0x70eebdb512717b2b)
#define _u98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxCheckBitsInternal$ntdll.dll", 0x0, 0x0, false, 0xcbc4a7ca4f3402ce)
#define _u99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxCleanup$ntdll.dll", 0x0, 0x0, false, 0x3ffcb5b845cc3fae)
#define _v00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxClearBits$ntdll.dll", 0x0, 0x0, false, 0x372d9b1aabc5020d)
#define _v01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxClearBitsEx$ntdll.dll", 0x0, 0x0, false, 0xd7a8a8cee56b4489)
#define _v02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxCountBitsSet$ntdll.dll", 0x0, 0x0, false, 0x6f8832beaec1839d)
#define _v03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxFindNextBitSet$ntdll.dll", 0x0, 0x0, false, 0xbbb0099e55dd9598)
#define _v04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxFindSetRuns$ntdll.dll", 0x0, 0x0, false, 0x9370a62f73ba3b40)
#define _v05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxInitialize$ntdll.dll", 0x0, 0x0, false, 0x28fae53d34fa7c5a)
#define _v06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxInitializeRange$ntdll.dll", 0x0, 0x0, false, 0xb3c3c98bbdd9f0fd)
#define _v07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxMetadataForBit$ntdll.dll", 0x0, 0x0, false, 0xbf896f73b8523d5d)
#define _v08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxOrBitmap$ntdll.dll", 0x0, 0x0, false, 0xbf143ee919bec05f)
#define _v09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxPrepareBits$ntdll.dll", 0x0, 0x0, false, 0x85695ac30c75a5c3)
#define _v10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxSetBits$ntdll.dll", 0x0, 0x0, false, 0xaffe5d4d5be080ff)
#define _v11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxSetBitsEx$ntdll.dll", 0x0, 0x0, false, 0x95aef07bff6c2021)
#define _v12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxStart$ntdll.dll", 0x0, 0x0, false, 0xea685a667187bf00)
#define _v13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapCtxSubtractBitmap$ntdll.dll", 0x0, 0x0, false, 0xb6dcf2ad59b7a1ae)
#define _v14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSparseBitmapEnumerateBitmap$ntdll.dll", 0x0, 0x0, false, 0xe80e47edba41e516)
#define _v15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSubscribeWnfStateChangeNotificationInternal$ntdll.dll", 0x0, 0x0, false, 0x1b500cf61ff88745)
#define _v16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlValidateProcessHeapsCallback$ntdll.dll", 0x0, 0x0, false, 0xb9040f8ce221a71c)
#define _v17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64ChangeProcessState$ntdll.dll", 0x0, 0x0, false, 0x7881659cc15c37b4)
#define _v18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64ChangeThreadState$ntdll.dll", 0x0, 0x0, false, 0xf46208de83b607f3)
#define _v19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64SuspendThreadEx$ntdll.dll", 0x0, 0x0, false, 0xf8ca117b3917b58e)
#define _v20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCallEnclave$ntdll.dll", 0x9fd40, 0x0, true, 0x10fe70ff13d4fdc7)
#define _v21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCallEnclaveReturn$ntdll.dll", 0x9fdab, 0x0, true, 0x2d3efc1a6350d9d0)
#define _v22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateProcessParametersInternal$ntdll.dll", 0x477a0, 0x0, true, 0x35397fee92ef1f71)
#define _v23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateProcessParametersWithTemplate$ntdll.dll", 0x47670, 0x0, true, 0x71a3127320b1cc74)
#define _v24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateUserFiberShadowStack$ntdll.dll", 0xe15d0, 0x0, true, 0xc1475000a5402316)
#define _v25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$RtlDisownModuleHeapAllocation$ntdll.dll", 0x7e7c0, 0x0, true, 0x6075d6829c5e227e)
#define _v26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*), "$RtlDosLongPathNameToNtPathName_U_WithStatus$ntdll.dll", 0xcc100, 0x0, true, 0xae012aa7e58d3f60)
#define _v27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*), "$RtlDosLongPathNameToRelativeNtPathName_U_WithStatus$ntdll.dll", 0xcc130, 0x0, true, 0x194c74f60295a80b)
#define _v28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnclaveCallDispatch$ntdll.dll", 0x9fcd0, 0x0, true, 0xc29bc7e0295f5714)
#define _v29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnclaveCallDispatchReturn$ntdll.dll", 0x9fd01, 0x0, true, 0x6b79f200e43660f2)
#define _v30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnclaveCallDispatcher$ntdll.dll", 0x9fcd0, 0x0, true, 0x380ad4c8fe119e9a)
#define _v31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFlsGetValue$ntdll.dll", 0x4c480, 0x0, true, 0x5ff9125b40dd36d7)
#define _v32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFlsSetValue$ntdll.dll", 0x470a0, 0x0, true, 0xc56d5aedf32e5cfa)
#define _v33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeUserFiberShadowStack$ntdll.dll", 0xe16e0, 0x0, true, 0x6582adba854a0285)
#define _v34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetReturnAddressHijackTarget$ntdll.dll", 0xfd0f0, 0x0, true, 0xd376858c984e258)
#define _v35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGuardIsExportSuppressedAddress$ntdll.dll", 0x531cc, 0x0, true, 0x2ee4576fe7314add)
#define _v36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHpInitializeHeapManager$ntdll.dll", 0x10ac18, 0x0, true, 0x71d598489b062e99)
#define _v37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeHeapGC$ntdll.dll", 0x7dde8, 0x0, true, 0x65feaa3f5d922535)
#define _v38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RtlIsCurrentProcess$ntdll.dll", 0x74730, 0x0, true, 0xb46e7f3a247d1dab)
#define _v39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RtlIsCurrentThread$ntdll.dll", 0xfebc0, 0x0, true, 0x2a16b1be2d1c8ceb)
#define _v40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::feature_configuration_t*, uint32_t*)>*), "$RtlQueryFeatureUsageNotificationSubscriptions$ntdll.dll", 0x101470, 0x0, true, 0xc8cb34bd42d92304)
#define _v41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, enum image::mitigation_policy_t, uint32_t, void*, uint32_t)>*), "$RtlQueryImageMitigationPolicy$ntdll.dll", 0xe17e0, 0x0, true, 0x6e2d2579fa04b6df)
#define _v42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t*)>*), "$RtlQueryTokenHostIdAsUlong64$ntdll.dll", 0x82850, 0x0, true, 0xfa95c130821155d4)
#define _v43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRaiseExceptionForReturnAddressHijack$ntdll.dll", 0xa0a90, 0x0, true, 0x17342cec4749916c)
#define _v44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReportFatalFailure$ntdll.dll", 0xfed20, 0x0, true, 0xbb26537c673b320a)
#define _v45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRestoreThreadPreferredUILanguages$ntdll.dll", 0xeed40, 0x0, true, 0xccbbbe99d0bdc578)
#define _v46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t*, enum rtl::feature_configuration_type_t, struct rtl::feature_configuration_t*, uint32_t)>*), "$RtlSetFeatureConfigurations$ntdll.dll", 0x1014f0, 0x0, true, 0x8f78f9c8b88ac634)
#define _v47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, enum image::mitigation_policy_t, uint32_t, void*, uint32_t)>*), "$RtlSetImageMitigationPolicy$ntdll.dll", 0xe20f0, 0x0, true, 0x3a5eafa967130699)
#define _v48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetProxiedProcessId$ntdll.dll", 0x84c00, 0x0, true, 0xa76537ef2d9381d9)
#define _v49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetThreadPreferredUILanguages2$ntdll.dll", 0x6a330, 0x0, true, 0x5735f04c66713086)
#define _v50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStackDbContextCleanup$ntdll.dll", 0x117c8c, 0x0, true, 0xd12608559ba49501)
#define _v51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::feature_configuration_t*, uint32_t)>*), "$RtlSubscribeForFeatureUsageNotification$ntdll.dll", 0x1015f0, 0x0, true, 0xf5a12f65837cedea)
#define _v52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, wchar_t*)>*/*types differ*/), "$RtlULongToUShort$ntdll.dll", 0x61164, 0x0, true, 0x800252c0025ab5fb)
#define _v53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::feature_configuration_t*, uint32_t)>*), "$RtlUnsubscribeFromFeatureUsageNotifications$ntdll.dll", 0x101600, 0x0, true, 0x8c2e357717a4b5e2)
#define _v54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUserFiberStart$ntdll.dll", 0x7ee10, 0x0, true, 0x911f91905aafe24)
#define _v55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlValidateUserCallTarget$ntdll.dll", 0x53608, 0x0, true, 0x9d7707698e78e6d1)
#define _v56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64GetSharedInfoProcess$ntdll.dll", 0x79230, 0x0, true, 0x5ca8e786482f59af)
#define _v57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64PopAllCrossProcessWorkFromWorkList$ntdll.dll", 0x102ae0, 0x0, true, 0x219ea1b014bfd2b7)
#define _v58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64PopCrossProcessWorkFromFreeList$ntdll.dll", 0x102bf0, 0x0, true, 0x7a89ef0bb9e15bee)
#define _v59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64PushCrossProcessWorkOntoFreeList$ntdll.dll", 0x102c80, 0x0, true, 0xdabee84df6c76b35)
#define _v60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64PushCrossProcessWorkOntoWorkList$ntdll.dll", 0x102d20, 0x0, true, 0xb0d85425fea53d22)
#define _v61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64RequestCrossProcessHeavyFlush$ntdll.dll", 0x102f30, 0x0, true, 0x82c1d8e7e76d931a)
#define _v62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlWow64SuspendProcess$ntdll.dll", 0xdc060, 0x0, true, 0x819dde9bc4b5b1e6)
#define _v63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAbortRXact$ntdll.dll", 0x7ee70, 0x0, true, 0x4a7880f27e83f4b)
#define _v64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$RtlAcquirePebLock$ntdll.dll", 0x79180, 0x0, true, 0x71efefb02ddf36b0)
#define _v65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::srwlock_t*)>*), "$RtlAcquireReleaseSRWLockExclusive$ntdll.dll", 0x7d5f0, 0x0, true, 0x6a15c4929af0c387)
#define _v66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::resource_t*, uint8_t)>*), "$RtlAcquireResourceExclusive$ntdll.dll", 0x65b20, 0x0, true, 0x980d39d43d8ff804)
#define _v67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::resource_t*, uint8_t)>*), "$RtlAcquireResourceShared$ntdll.dll", 0x65a00, 0x0, true, 0x84cec81f6235af43)
#define _v68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::srwlock_t*)>*), "$RtlAcquireSRWLockExclusive$ntdll.dll", 0x1dc30, 0x0, true, 0x691e30810ba36a6e)
#define _v69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::srwlock_t*)>*), "$RtlAcquireSRWLockShared$ntdll.dll", 0x206c0, 0x0, true, 0xd32765a9bb5129ba)
#define _v70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlActivateActivationContext$ntdll.dll", 0x71e80, 0x0, true, 0x9a9bc97ec92efcb0)
#define _v71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlActivateActivationContextEx$ntdll.dll", 0x71ed0, 0x0, true, 0x1e34a0722ff9af15)
#define _v72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlActivateActivationContextUnsafeFast$ntdll.dll", 0x37a20, 0x0, true, 0x61aca427ca827f8c)
#define _v73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*)>*), "$RtlAddAccessDeniedAce$ntdll.dll", 0x8ad30, 0x0, true, 0x6ee43852f1e6c6db)
#define _v74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddActionToRXact$ntdll.dll", 0x89900, 0x0, true, 0x21ca9e9b0152a718)
#define _v75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddAttributeActionToRXact$ntdll.dll", 0x80810, 0x0, true, 0xdd8b3aac81730f8a)
#define _v76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint8_t, uint32_t, void*, void*)>*), "$RtlAddCompoundAce$ntdll.dll", 0xe8fd0, 0x0, true, 0xe6ef24754133df18)
#define _v77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddFunctionTable$ntdll.dll", 0x68d00, 0x0, true, 0x5c692ea0a6d9355d)
#define _v78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddGrowableFunctionTable$ntdll.dll", 0x696a0, 0x0, true, 0x2cd536bbca97c96d)
#define _v79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*)>*), "$RtlAddIntegrityLabelToBoundaryDescriptor$ntdll.dll", 0xeaa20, 0x0, true, 0x7592dd65e8369a89)
#define _v80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddRefActivationContext$ntdll.dll", 0x3e3a0, 0x0, true, 0xbad67040bd809a60)
#define _v81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddRefMemoryStream$ntdll.dll", 0x836f0, 0x0, true, 0xf036c0b4c882b827)
#define _v82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddScopedPolicyIDAce$ntdll.dll", 0xe9480, 0x0, true, 0x4d42afe20739a855)
#define _v83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*)>*), "$RtlAddSIDToBoundaryDescriptor$ntdll.dll", 0x7e490, 0x0, true, 0xf2b15317ab47bdc8)
#define _v84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAddSIDToBoundaryDescriptorEx$ntdll.dll", 0x7e4a0, 0x0, true, 0xfeee2c4528f352e)
#define _v85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(uint32_t, sdk::function<int32_t(struct nt::exception_pointers_t*)>*)>*), "$RtlAddVectoredContinueHandler$ntdll.dll", 0xd9460, 0x0, true, 0xd5ea5aa52748dc13)
#define _v86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(uint32_t, sdk::function<int32_t(struct nt::exception_pointers_t*)>*)>*), "$RtlAddVectoredExceptionHandler$ntdll.dll", 0x810f0, 0x0, true, 0x5be549014325a89d)
#define _v87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint8_t, uint8_t, uint8_t*)>*), "$RtlAdjustPrivilege$ntdll.dll", 0x78920, 0x0, true, 0x50ab396d3694f51c)
#define _v88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAllocateActivationContextStack$ntdll.dll", 0x6f860, 0x0, true, 0x2bec9a83199ef702)
#define _v89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::sid_identifier_authority_t*, uint8_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void**)>*), "$RtlAllocateAndInitializeSid$ntdll.dll", 0x6e5a0, 0x0, true, 0xa5ff8fec0c4c2ee4)
#define _v90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::handle_table_entry_t*(struct rtl::handle_table_t*, uint32_t*)>*), "$RtlAllocateHandle$ntdll.dll", 0x58a70, 0x0, true, 0x87b691dddb5c40e0)
#define _v91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void**)>*), "$RtlAllocateMemoryBlockLookaside$ntdll.dll", 0x11b010, 0x0, true, 0x756606febc6483f5)
#define _v92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t, void**)>*), "$RtlAllocateMemoryZone$ntdll.dll", 0x11b130, 0x0, true, 0xddd178d2196e1c52)
#define _v93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAllocateWnfSerializationGroup$ntdll.dll", 0x837c0, 0x0, true, 0xa47a0f149acfc92d)
#define _v94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlAppendPathElement$ntdll.dll", 0xcbeb0, 0x0, true, 0x8692530dc425c58)
#define _v95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplicationVerifierStop$ntdll.dll", 0xdbcc0, 0x0, true, 0x2af4d6e3a0690bb2)
#define _v96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplyRXact$ntdll.dll", 0xe5c80, 0x0, true, 0x611343ff7d8fd6d6)
#define _v97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlApplyRXactNoFlush$ntdll.dll", 0x7ee40, 0x0, true, 0x73b60a595cf1bac0)
#define _v98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "$RtlAppxIsFileOwnedByTrustedInstaller$ntdll.dll", 0xcba40, 0x0, true, 0xad059a2051a7951f)
#define _v99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$RtlAreLongPathsEnabled$ntdll.dll", 0x74a00, 0x0, true, 0xdfd6da585b5098c5)
#define _w00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::barrier_t*, uint32_t)>*), "$RtlBarrier$ntdll.dll", 0xed140, 0x0, true, 0x1668d9fac847dfb7)
#define _w01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::barrier_t*, uint32_t)>*), "$RtlBarrierForDelete$ntdll.dll", 0xed150, 0x0, true, 0x314e7c1dddb7c18a)
#define _w02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCancelTimer$ntdll.dll", 0x112720, 0x0, true, 0xb44194fe63685b0d)
#define _w03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCanonicalizeDomainName$ntdll.dll", 0x30a10, 0x0, true, 0xf5b81305066017f)
#define _w04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$RtlCheckForOrphanedCriticalSections$ntdll.dll", 0x7c4e0, 0x0, true, 0x6796cd78cafbfd1f)
#define _w05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCheckHeldCriticalSections$ntdll.dll", 0x7c510, 0x0, true, 0x60e22dd727abebfd)
#define _w06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "$RtlCheckSandboxedToken$ntdll.dll", 0x849b0, 0x0, true, 0xea6fabf3df48c9bb)
#define _w07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$RtlCleanUpTEBLangLists$ntdll.dll", 0x6a150, 0x0, true, 0x68ccff1d3cfde12a)
#define _w08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlClearThreadWorkOnBehalfTicket$ntdll.dll", 0x68710, 0x0, true, 0xefde30b619da0b7)
#define _w09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCloneMemoryStream$ntdll.dll", 0xd5770, 0x0, true, 0x5d460369a2bbe4e8)
#define _w10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, void*, void*, struct rtl::user_process_information_t*)>*), "$RtlCloneUserProcess$ntdll.dll", 0xd61a0, 0x0, true, 0xa6a252675c78e1ac)
#define _w11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct rtl::debug_information_t*, uint64_t)>*), "$RtlCommitDebugInfo$ntdll.dll", 0xd7110, 0x0, true, 0x2a723ea8bcbef515)
#define _w12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCommitMemoryStream$ntdll.dll", 0xd5770, 0x0, true, 0xd939d6a1a1833436)
#define _w13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(void*, uint32_t)>*), "$RtlCompactHeap$ntdll.dll", 0xf1bd0, 0x0, true, 0x4dd89c32efa4cc92)
#define _w14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCompleteProcessCloning$ntdll.dll", 0x9a500, 0x0, true, 0x1e1de90b057ccecf)
#define _w15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, char*, uint32_t)>*), "$RtlComputeImportTableHash$ntdll.dll", 0xe03e0, 0x0, true, 0x55119f4039d3a168)
#define _w16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, nt::unicode_view*)>*), "$RtlComputePrivatizedDllName_U$ntdll.dll", 0xd53f0, 0x0, true, 0x27e7db36688289e1)
#define _w17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlConnectToSm$ntdll.dll", 0x88670, 0x0, true, 0xce9a094d64d31ae2)
#define _w18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint32_t, uint32_t*, const char*, uint32_t, uint32_t*)>*), "$RtlConsoleMultiByteToUnicodeN$ntdll.dll", 0xe49b0, 0x0, true, 0x3fc7fb2ddd93604b)
#define _w19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlControlStackTraceDataBase$ntdll.dll", 0x1008a8, 0x0, true, 0xac4a52897a3037cb)
#define _w20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlConvertDeviceFamilyInfoToString$ntdll.dll", 0x6bb00, 0x0, true, 0xa038063f3b4f80e4)
#define _w21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::resource_t*)>*), "$RtlConvertExclusiveToShared$ntdll.dll", 0x890a0, 0x0, true, 0x903e3e9c1cdc28e8)
#define _w22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint32_t, wchar_t*, uint32_t)>*), "$RtlConvertLCIDToString$ntdll.dll", 0xee6f0, 0x0, true, 0xbdf9cf39a7ac97f7)
#define _w23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::resource_t*)>*), "$RtlConvertSharedToExclusive$ntdll.dll", 0x7d1f0, 0x0, true, 0x762e33b32f14fcc4)
#define _w24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlConvertSRWLockExclusiveToShared$ntdll.dll", 0x843f0, 0x0, true, 0xa09fc0d8efe9df4)
#define _w25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**, struct nt::guid_t*, uint8_t, struct nt::generic_mapping_t*)>*), "$RtlConvertToAutoInheritSecurityObject$ntdll.dll", 0xd66e0, 0x0, true, 0x7566303751bef1b4)
#define _w26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyMappedMemory$ntdll.dll", 0x84450, 0x0, true, 0x83df560fd1a9b822)
#define _w27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyMemoryStreamTo$ntdll.dll", 0xd5770, 0x0, true, 0xde911709886602d9)
#define _w28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCopyOutOfProcessMemoryStreamTo$ntdll.dll", 0xd5770, 0x0, true, 0xacd0ad79d43ba703)
#define _w29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**)>*), "$RtlCopySecurityDescriptor$ntdll.dll", 0x6dc70, 0x0, true, 0xa2e689e499ef700d)
#define _w30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateActivationContext$ntdll.dll", 0x72980, 0x0, true, 0xf1e5875dda132467)
#define _w31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateAndSetSD$ntdll.dll", 0x67be0, 0x0, true, 0x65ecccf9407d1f02)
#define _w32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t()>*), "$RtlCreateBootStatusDataFile$ntdll.dll", 0xed690, 0x0, true, 0x725faa3c5c2ddb42)
#define _w33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(nt::unicode_view*, uint32_t)>*), "$RtlCreateBoundaryDescriptor$ntdll.dll", 0x815c0, 0x0, true, 0xc7abf65fb2290a5b)
#define _w34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, void**)>*), "$RtlCreateEnvironment$ntdll.dll", 0x47f60, 0x0, true, 0x212302b378856ce5)
#define _w35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint32_t)>*), "$RtlCreateEnvironmentEx$ntdll.dll", 0x47fd0, 0x0, true, 0x5a6bb6d8624be231)
#define _w36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, uint32_t, uint32_t, uint32_t)>*), "$RtlCreateMemoryBlockLookaside$ntdll.dll", 0x79f90, 0x0, true, 0x4b4e0fcb230c792b)
#define _w37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint64_t, uint32_t)>*), "$RtlCreateMemoryZone$ntdll.dll", 0x7a160, 0x0, true, 0x1da2572a3f423490)
#define _w38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::user_process_parameters_t**, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*)>*), "$RtlCreateProcessParameters$ntdll.dll", 0xd6430, 0x0, true, 0x64f69472ce2c5f99)
#define _w39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::user_process_parameters_t**, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, uint32_t)>*), "$RtlCreateProcessParametersEx$ntdll.dll", 0x47600, 0x0, true, 0x89a90625442dabff)
#define _w40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, void*, void*, struct rtlp::process_reflection_reflection_information_t*)>*), "$RtlCreateProcessReflection$ntdll.dll", 0xd58a0, 0x0, true, 0xa884f95a77f9f471)
#define _w41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::debug_information_t*(uint32_t, uint8_t)>*), "$RtlCreateQueryDebugBuffer$ntdll.dll", 0xd7120, 0x0, true, 0xe835f9909e13bd29)
#define _w42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, uint32_t*)>*), "$RtlCreateServiceSid$ntdll.dll", 0x5bdf0, 0x0, true, 0xe6f6457cc883a612)
#define _w43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t, wchar_t*, wchar_t*)>*), "$RtlCreateTagHeap$ntdll.dll", 0x711a0, 0x0, true, 0x73a399da1b90731e)
#define _w44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, sdk::function<void(void*, uint8_t)>*, void*, uint32_t, uint32_t, uint32_t)>*), "$RtlCreateTimer$ntdll.dll", 0x43b10, 0x0, true, 0x616feea2129c6153)
#define _w45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**)>*), "$RtlCreateTimerQueue$ntdll.dll", 0x46a20, 0x0, true, 0x63f8630bceb1b528)
#define _w46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateUmsCompletionList$ntdll.dll", 0xf66f0, 0x0, true, 0xa1158e26c8a707e9)
#define _w47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateUmsThreadContext$ntdll.dll", 0xf6810, 0x0, true, 0x82e063b10a1db63b)
#define _w48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCreateUserSecurityObject$ntdll.dll", 0xd66f0, 0x0, true, 0x9efb0a7f6d3f5a81)
#define _w49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const nt::unicode_view*, uint32_t, void*, uint32_t*)>*), "$RtlCreateVirtualAccountSid$ntdll.dll", 0x5bcd0, 0x0, true, 0x9512d5ab9930cc5d)
#define _w50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCriticalSectionDebugSList$ntdll.dll", 0x16c300, 0x0, true, 0xff20c5f04974e260)
#define _w51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCriticalSectionList$ntdll.dll", 0x165570, 0x0, true, 0xece5dc6a88eb3f84)
#define _w52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlCriticalSectionLock$ntdll.dll", 0x16c488, 0x0, true, 0x2256321d6a003c06)
#define _w53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::debug_information_t*, void*, uint64_t)>*), "$RtlDeCommitDebugInfo$ntdll.dll", 0xd73c0, 0x0, true, 0x2ae0943baf32714d)
#define _w54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::user_process_parameters_t*(struct rtl::user_process_parameters_t*)>*), "$RtlDeNormalizeProcessParams$ntdll.dll", 0xd64a0, 0x0, true, 0x9ab45194b6476d30)
#define _w55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeactivateActivationContext$ntdll.dll", 0x6fa60, 0x0, true, 0xb54e267fa9938ee4)
#define _w56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeactivateActivationContextUnsafeFast$ntdll.dll", 0x378d0, 0x0, true, 0xd5816ce3e582c773)
#define _w57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugAllocateHeap$ntdll.dll", 0xf81d0, 0x0, true, 0x59d38c73b875945b)
#define _w58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugCompactHeap$ntdll.dll", 0xf858c, 0x0, true, 0xc4c0e9b536c8de96)
#define _w59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugCreateHeap$ntdll.dll", 0xf86e0, 0x0, true, 0x5beac373b67b59fd)
#define _w60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugCreateTagHeap$ntdll.dll", 0xf89d4, 0x0, true, 0x308b0b897be514dd)
#define _w61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugDestroyHeap$ntdll.dll", 0xf8b18, 0x0, true, 0xcd2a41c7358bb194)
#define _w62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugFreeHeap$ntdll.dll", 0xf8bdc, 0x0, true, 0x3ea25d21efc48529)
#define _w63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugGetUserInfoHeap$ntdll.dll", 0xf8ed0, 0x0, true, 0x6b785fd4bde0c187)
#define _w64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugPrintTimes$ntdll.dll", 0x7ede0, 0x0, true, 0x95a6301e8e782dd0)
#define _w65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugQueryTagHeap$ntdll.dll", 0xf9074, 0x0, true, 0x230bbcda7367b78a)
#define _w66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugReAllocateHeap$ntdll.dll", 0xf91c0, 0x0, true, 0x350318e0501b02de)
#define _w67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugSetUserFlagsHeap$ntdll.dll", 0xf9744, 0x0, true, 0x5c41cda885757f13)
#define _w68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugSetUserValueHeap$ntdll.dll", 0xf9910, 0x0, true, 0x204fbfa9d6ff85b)
#define _w69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugSizeHeap$ntdll.dll", 0xf9aa4, 0x0, true, 0x5ea390e78b8a302a)
#define _w70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugWalkHeap$ntdll.dll", 0xf9c28, 0x0, true, 0x8d57d290c3105031)
#define _w71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDebugZeroHeap$ntdll.dll", 0xf9cb8, 0x0, true, 0xc3faeafce574d617)
#define _w72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*)>*), "$RtlDecodePointer$ntdll.dll", 0x6c9b0, 0x0, true, 0xd6b96f2d5f81fc83)
#define _w73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "$RtlDecodeRemotePointer$ntdll.dll", 0xdc580, 0x0, true, 0x2573ec0f742873f)
#define _w74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*)>*), "$RtlDecodeSystemPointer$ntdll.dll", 0x82b40, 0x0, true, 0x41bec2fb1af4ad8b)
#define _w75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t**)>*), "$RtlDefaultNpAcl$ntdll.dll", 0xd6790, 0x0, true, 0xa0d9dc64091a7e3d)
#define _w76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::barrier_t*)>*), "$RtlDeleteBarrier$ntdll.dll", 0xed160, 0x0, true, 0x64bacb2a921c1c96)
#define _w77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$RtlDeleteBoundaryDescriptor$ntdll.dll", 0x13c60, 0x0, true, 0x3f0a079aebd43a0b)
#define _w78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::critical_section_t*)>*), "$RtlDeleteCriticalSection$ntdll.dll", 0x4cc00, 0x0, true, 0x6e823db3a2eace1c)
#define _w79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeleteFunctionTable$ntdll.dll", 0x68b50, 0x0, true, 0x3ad32dd16b6b0049)
#define _w80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeleteGrowableFunctionTable$ntdll.dll", 0x68f10, 0x0, true, 0x616c0eeb87c560fd)
#define _w81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::resource_t*)>*), "$RtlDeleteResource$ntdll.dll", 0x4cb70, 0x0, true, 0x82f86debfc73b585)
#define _w82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**)>*), "$RtlDeleteSecurityObject$ntdll.dll", 0x7c5d0, 0x0, true, 0xdd54d2b21dabd463)
#define _w83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*)>*), "$RtlDeleteTimer$ntdll.dll", 0x43d90, 0x0, true, 0xb4afe1da6c449518)
#define _w84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlDeleteTimerQueue$ntdll.dll", 0x112730, 0x0, true, 0xac567c5400bcbd1a)
#define _w85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$RtlDeleteTimerQueueEx$ntdll.dll", 0x46ed0, 0x0, true, 0xe1ca0e3ed4051089)
#define _w86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeleteUmsCompletionList$ntdll.dll", 0xf6920, 0x0, true, 0x6bde60f20799bfa1)
#define _w87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDeleteUmsThreadContext$ntdll.dll", 0xf6980, 0x0, true, 0xfb6342e62c4958f4)
#define _w88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDequeueUmsCompletionListItems$ntdll.dll", 0xf69e0, 0x0, true, 0x213139b8c123f060)
#define _w89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<int32_t(void*, uint64_t)>*)>*), "$RtlDeregisterSecureMemoryCacheCallback$ntdll.dll", 0xf73a0, 0x0, true, 0x504753a34fa991df)
#define _w90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlDeregisterWait$ntdll.dll", 0x46b50, 0x0, true, 0xd92b40aa6819a2f2)
#define _w91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$RtlDeregisterWaitEx$ntdll.dll", 0x434e0, 0x0, true, 0x53142ec43a46c831)
#define _w92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlDestroyEnvironment$ntdll.dll", 0x7c670, 0x0, true, 0xf206d911fc082433)
#define _w93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::handle_table_t*)>*), "$RtlDestroyHandleTable$ntdll.dll", 0x845f0, 0x0, true, 0xceb747a69e1c3fb8)
#define _w94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlDestroyMemoryBlockLookaside$ntdll.dll", 0x84070, 0x0, true, 0x784b267fab234d21)
#define _w95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlDestroyMemoryZone$ntdll.dll", 0x840d0, 0x0, true, 0xd19adfe55a3c5396)
#define _w96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::user_process_parameters_t*)>*), "$RtlDestroyProcessParameters$ntdll.dll", 0x7c670, 0x0, true, 0x33875ffa66136570)
#define _w97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::debug_information_t*)>*), "$RtlDestroyQueryDebugBuffer$ntdll.dll", 0xd73d0, 0x0, true, 0x4d0cdb107aa8b9ed)
#define _w98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$RtlDetectHeapLeaks$ntdll.dll", 0x64970, 0x0, true, 0xb7141b215f0dfbac)
#define _w99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<enum rtl::path_type_t(const wchar_t*)>*), "$RtlDetermineDosPathNameType_U$ntdll.dll", 0x62b90, 0x0, true, 0xe03ba76697dc8aae)
#define _x00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<enum rtl::path_type_t(const nt::unicode_view*)>*), "$RtlDetermineDosPathNameType_Ustr$ntdll.dll", 0x3a2cc, 0x0, true, 0x1d40249fafd2a7a2)
#define _x01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlDisableThreadProfiling$ntdll.dll", 0xcbbb0, 0x0, true, 0xe8decfe3369435eb)
#define _x02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDispatchAPC$ntdll.dll", 0x7df80, 0x0, true, 0xe08bb06e4b6305f6)
#define _x03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$RtlDllShutdownInProgress$ntdll.dll", 0x45ce0, 0x0, true, 0xefe3287b7ddd29e)
#define _x04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, uint8_t)>*), "$RtlDnsHostNameToComputerName$ntdll.dll", 0x5f790, 0x0, true, 0xcd32742c708c783b)
#define _x05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const wchar_t*)>*), "$RtlDoesFileExists_U$ntdll.dll", 0x84cb0, 0x0, true, 0xf0ece8b3e7252399)
#define _x06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDoesFileExists_UEx$ntdll.dll", 0x52cb8, 0x0, true, 0x31c64cb980ecb7e)
#define _x07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDoesFileExists_UstrEx$ntdll.dll", 0x38310, 0x0, true, 0x2c3cd5dfa6a44ec1)
#define _x08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDosApplyFileIsolationRedirection_Ustr$ntdll.dll", 0x38b00, 0x0, true, 0x2824036996259066)
#define _x09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*), "$RtlDosPathNameToNtPathName_U$ntdll.dll", 0x3bc40, 0x0, true, 0x67a048ea6ba7c74a)
#define _x10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*), "$RtlDosPathNameToNtPathName_U_WithStatus$ntdll.dll", 0x3c4b0, 0x0, true, 0xbdd606decc7c91ff)
#define _x11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDosPathNameToRelativeNtPathName$ntdll.dll", 0x61cf4, 0x0, true, 0xa98d5ff90ad7cfc5)
#define _x12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*), "$RtlDosPathNameToRelativeNtPathName_U$ntdll.dll", 0x3c540, 0x0, true, 0xa4bfd5f31dfbd3b7)
#define _x13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*), "$RtlDosPathNameToRelativeNtPathName_U_WithStatus$ntdll.dll", 0x39000, 0x0, true, 0xe78612e5ccfe9fe4)
#define _x14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(nt::unicode_view*), "$RtlDosPathSeperatorsString$ntdll.dll", 0x11c0a8, 0x0, true, 0x1e7702d947c1e89)
#define _x15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const wchar_t*, const wchar_t*, const wchar_t*, uint32_t, wchar_t*, wchar_t**)>*), "$RtlDosSearchPath_U$ntdll.dll", 0x87f30, 0x0, true, 0x69bb7feb8c5705a1)
#define _x16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, const nt::unicode_view**, uint64_t*, uint64_t*)>*), "$RtlDosSearchPath_Ustr$ntdll.dll", 0x37d60, 0x0, true, 0x8a07f8d2ce180877)
#define _x17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlDumpResource$ntdll.dll", 0xe8610, 0x0, true, 0xf4dd4d478a9225da)
#define _x18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnableEarlyCriticalSectionEventCreation$ntdll.dll", 0xe8660, 0x0, true, 0x40425b870fc4a025)
#define _x19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint64_t, void**)>*), "$RtlEnableThreadProfiling$ntdll.dll", 0xcbc20, 0x0, true, 0x9f5710b819bd4905)
#define _x20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*)>*), "$RtlEncodePointer$ntdll.dll", 0x71a60, 0x0, true, 0x7338d37037049329)
#define _x21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "$RtlEncodeRemotePointer$ntdll.dll", 0xdc5f0, 0x0, true, 0xeda11e1dc46fb3ac)
#define _x22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*)>*), "$RtlEncodeSystemPointer$ntdll.dll", 0x84260, 0x0, true, 0x40dc4aed996056dc)
#define _x23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::critical_section_t*)>*), "$RtlEnterCriticalSection$ntdll.dll", 0x213a0, 0x0, true, 0x7b11bfcc615ebce5)
#define _x24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlEnterUmsSchedulingMode$ntdll.dll", 0xf6a70, 0x0, true, 0x4a70c00d5be8a465)
#define _x25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<int32_t(void*, void*)>*, void*)>*), "$RtlEnumProcessHeaps$ntdll.dll", 0xf1d60, 0x0, true, 0x665f5c58c7eb9a63)
#define _x26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(nt::unicode_view*, nt::unicode_view*)>*), "$RtlEqualComputerName$ntdll.dll", 0xeab80, 0x0, true, 0xd4ca0bc56817cd76)
#define _x27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(nt::unicode_view*, nt::unicode_view*)>*), "$RtlEqualDomainName$ntdll.dll", 0x30990, 0x0, true, 0x70acfe0b4ba82dee)
#define _x28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(nt::unicode_view*)>*), "$RtlEraseUnicodeString$ntdll.dll", 0x84d10, 0x0, true, 0x84896eec2f017636)
#define _x29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlExecuteUmsThread$ntdll.dll", 0xf6b50, 0x0, true, 0x59e81ceeb566f84c)
#define _x30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(int32_t)>*), "$RtlExitUserProcess$ntdll.dll", 0x63bd0, 0x0, true, 0x481eb133bbd8d941)
#define _x31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(int32_t)>*), "$RtlExitUserThread$ntdll.dll", 0x4cef0, 0x0, true, 0xdb77d420f6bb9f33)
#define _x32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, const wchar_t*, uint64_t, wchar_t*, uint64_t, uint64_t*)>*), "$RtlExpandEnvironmentStrings$ntdll.dll", 0x25670, 0x0, true, 0x93c08b3129e73965)
#define _x33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*, nt::unicode_view*, uint32_t*)>*), "$RtlExpandEnvironmentStrings_U$ntdll.dll", 0x75e70, 0x0, true, 0xe03ff495b96b13a4)
#define _x34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "$RtlExtendMemoryBlockLookaside$ntdll.dll", 0x1a60, 0x0, true, 0xfe6b1fdae47b00a1)
#define _x35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlExtendMemoryZone$ntdll.dll", 0x1a70, 0x0, true, 0x15c7ac7ce000eee2)
#define _x36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFailedCriticalDebugAllocations$ntdll.dll", 0x16afec, 0x0, true, 0x58fd589bf2955bcc)
#define _x37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFinalReleaseOutOfProcessMemoryStream$ntdll.dll", 0x7ede0, 0x0, true, 0x132853d82206d86f)
#define _x38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindActivationContextSectionGuid$ntdll.dll", 0x3aea0, 0x0, true, 0xae3e9f5e01ba95e8)
#define _x39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFindActivationContextSectionString$ntdll.dll", 0x3a7e0, 0x0, true, 0xf7d13a56e670f3e6)
#define _x40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, nt::unicode_view*, nt::unicode_view*, wchar_t*)>*), "$RtlFindCharInUnicodeString$ntdll.dll", 0x3b4b0, 0x0, true, 0x7c152aa810ae3ade)
#define _x41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<void(void*)>*, uint32_t*)>*), "$RtlFlsAlloc$ntdll.dll", 0x743b0, 0x0, true, 0x7e08b8ed9479728f)
#define _x42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "$RtlFlsFree$ntdll.dll", 0x731c0, 0x0, true, 0xa1cbb9be57fc758)
#define _x43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$RtlFlushHeaps$ntdll.dll", 0x73ad0, 0x0, true, 0xef2543ad33259f1)
#define _x44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint64_t)>*), "$RtlFlushSecureMemoryCache$ntdll.dll", 0xf7460, 0x0, true, 0x93c7a0476306540b)
#define _x45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeActivationContextStack$ntdll.dll", 0x6f920, 0x0, true, 0xc2d8fa723b2276cf)
#define _x46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::handle_table_t*, struct rtl::handle_table_entry_t*)>*), "$RtlFreeHandle$ntdll.dll", 0x58cf0, 0x0, true, 0x45847d423132fd36)
#define _x47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$RtlFreeMemoryBlockLookaside$ntdll.dll", 0x11b190, 0x0, true, 0x2dac0faafff98238)
#define _x48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*)>*), "$RtlFreeSid$ntdll.dll", 0x748f0, 0x0, true, 0xffcb4c39b0dbd8b1)
#define _x49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlFreeThreadActivationContextStack$ntdll.dll", 0x6f8e0, 0x0, true, 0x2fa8e8f964859640)
#define _x50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlFreeUserStack$ntdll.dll", 0x7e450, 0x0, true, 0x9879cdc4b6c3e6aa)
#define _x51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetActiveActivationContext$ntdll.dll", 0x30010, 0x0, true, 0x2ca4e1940734f6a0)
#define _x52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetAssemblyStorageRoot$ntdll.dll", 0x71a90, 0x0, true, 0x926fe531fffcba00)
#define _x53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::critical_section_t*)>*), "$RtlGetCriticalSectionRecursionCount$ntdll.dll", 0xe8690, 0x0, true, 0xb3d076780ddf7723)
#define _x54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, wchar_t*)>*), "$RtlGetCurrentDirectory_U$ntdll.dll", 0x60fa0, 0x0, true, 0x327467ae59b7887e)
#define _x55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct nt::peb_t*()>*), "$RtlGetCurrentPeb$ntdll.dll", 0xfc770, 0x0, true, 0x2e8b8ca32af0fba8)
#define _x56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t()>*), "$RtlGetCurrentProcessorNumber$ntdll.dll", 0xa09e0, 0x0, true, 0x1efa843dffcf0fc9)
#define _x57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::processor_number_t*)>*), "$RtlGetCurrentProcessorNumberEx$ntdll.dll", 0xa0a20, 0x0, true, 0x5cf32ebb18307908)
#define _x58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*()>*), "$RtlGetCurrentTransaction$ntdll.dll", 0x6e7d0, 0x0, true, 0x1ac05df82a650cbd)
#define _x59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetCurrentUmsThread$ntdll.dll", 0x58ec0, 0x0, true, 0xdd18abbb0f7e3691)
#define _x60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetDeviceFamilyInfoEnum$ntdll.dll", 0x6bbe0, 0x0, true, 0x70aa073a541dc38b)
#define _x61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<wchar_t*()>*), "$RtlGetExePath$ntdll.dll", 0x611e0, 0x0, true, 0x54466577f0570ac5)
#define _x62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint64_t(struct win::context_ex_t*)>*), "$RtlGetExtendedFeaturesMask$ntdll.dll", 0xf5580, 0x0, true, 0xa44e35a4d11f8a16)
#define _x63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetFileMUIPath$ntdll.dll", 0x50f00, 0x0, true, 0x4e55e3cbd9347a4d)
#define _x64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct nt::teb_active_frame_t*()>*), "$RtlGetFrame$ntdll.dll", 0xcd890, 0x0, true, 0x8cec55a1807319f1)
#define _x65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const wchar_t*, uint32_t, wchar_t*, wchar_t**)>*), "$RtlGetFullPathName_U$ntdll.dll", 0x809c0, 0x0, true, 0xa4cb6b07791b6c0a)
#define _x66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, uint32_t, wchar_t*, wchar_t**, uint32_t*)>*), "$RtlGetFullPathName_UEx$ntdll.dll", 0x3b920, 0x0, true, 0x514f71e071408dc5)
#define _x67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetFullPathName_Ustr$ntdll.dll", 0x39550, 0x0, true, 0xf3f2eb010c36b39d)
#define _x68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view**, uint64_t*, uint8_t*, enum rtl::path_type_t*, uint64_t*)>*), "$RtlGetFullPathName_UstrEx$ntdll.dll", 0x3b9b0, 0x0, true, 0xd6d02690ccea34b6)
#define _x69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<nt::list_entry_t*()>*), "$RtlGetFunctionTableListHead$ntdll.dll", 0xe08b0, 0x0, true, 0xf9ecadb7ab087aa0)
#define _x70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t()>*), "$RtlGetLastNtStatus$ntdll.dll", 0x7b6d0, 0x0, true, 0x27ac867670bd78b7)
#define _x71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t()>*), "$RtlGetLastWin32Error$ntdll.dll", 0x19f0, 0x0, true, 0x9e9e38fa3d03c537)
#define _x72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, nt::unicode_view*, uint32_t*)>*), "$RtlGetLengthWithoutLastFullDosOrNtPathElement$ntdll.dll", 0x76fc0, 0x0, true, 0x7324566c207d2ec7)
#define _x73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, nt::unicode_view*, uint32_t*)>*), "$RtlGetLengthWithoutTrailingPathSeperators$ntdll.dll", 0x84a80, 0x0, true, 0x4835d998109bae95)
#define _x74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t*, int64_t*)>*), "$RtlGetLocaleFileMappingAddress$ntdll.dll", 0x7b930, 0x0, true, 0xf9f366ad3a863af6)
#define _x75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t()>*), "$RtlGetLongestNtPathLength$ntdll.dll", 0x84840, 0x0, true, 0xe74f016892723a17)
#define _x76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetNextUmsListItem$ntdll.dll", 0xf6d50, 0x0, true, 0x496dc1135a50cdfd)
#define _x77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t*, uint32_t*, uint32_t*)>*), "$RtlGetNtVersionNumbers$ntdll.dll", 0xd4740, 0x0, true, 0xf39f265407edd8f2)
#define _x78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, uint32_t, uint8_t)>*), "$RtlGetParentLocaleName$ntdll.dll", 0x2e5e0, 0x0, true, 0x6b993261cf33ff26)
#define _x79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, void**)>*), "$RtlGetProcessHeaps$ntdll.dll", 0xf1d70, 0x0, true, 0x14b760d9e7ffa820)
#define _x80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetProcessHeapsCallback$ntdll.dll", 0xf1df0, 0x0, true, 0x5117cce947e9cdf9)
#define _x81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetProcessPreferredUILanguages$ntdll.dll", 0x895d0, 0x0, true, 0x92098b64581941e3)
#define _x82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(wchar_t**)>*), "$RtlGetSearchPath$ntdll.dll", 0x61190, 0x0, true, 0xbdd27f3f5b24a448)
#define _x83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint8_t*)>*), "$RtlGetSecurityDescriptorRMControl$ntdll.dll", 0x84a30, 0x0, true, 0x37e838ff0dbec7a0)
#define _x84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetSystemPreferredUILanguages$ntdll.dll", 0x75170, 0x0, true, 0xffbf30641022a7c0)
#define _x85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t()>*), "$RtlGetThreadErrorMode$ntdll.dll", 0x63210, 0x0, true, 0x2443a6e494ea9815)
#define _x86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetThreadPreferredUILanguages$ntdll.dll", 0x27dc0, 0x0, true, 0xd11d073c3d2abfae)
#define _x87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetThreadWorkOnBehalfTicket$ntdll.dll", 0x6d020, 0x0, true, 0xb5aa8f780135d07f)
#define _x88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetTickCount$ntdll.dll", 0xe56d0, 0x0, true, 0x283af3ed889e9d0a)
#define _x89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetUILanguageInfo$ntdll.dll", 0xee8c0, 0x0, true, 0xd69f64f7f4364261)
#define _x90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetUmsCompletionListEvent$ntdll.dll", 0xf6d80, 0x0, true, 0x2188a5304ac9e421)
#define _x91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::unload_event_trace_t*()>*), "$RtlGetUnloadEventTrace$ntdll.dll", 0xce4a0, 0x0, true, 0x88d6e25824efbdab)
#define _x92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t**, uint32_t**, void**)>*), "$RtlGetUnloadEventTraceEx$ntdll.dll", 0xce4b0, 0x0, true, 0xe5fd312178e7662)
#define _x93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, void*, void**, uint32_t*)>*), "$RtlGetUserInfoHeap$ntdll.dll", 0x8d00, 0x0, true, 0x93204efb1491f4e1)
#define _x94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGetUserPreferredUILanguages$ntdll.dll", 0x7b320, 0x0, true, 0x50d8ec2f5242e1b7)
#define _x95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGrowFunctionTable$ntdll.dll", 0xe08c0, 0x0, true, 0x283c9e12236ee397)
#define _x96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGuardAllowSuppressedCalls$ntdll.dll", 0x18029a, 0x0, true, 0x11e8b8f2248620f0)
#define _x97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGuardCheckImageBase$ntdll.dll", 0x746b8, 0x0, true, 0xfc7d668bedee103a)
#define _x98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlGuardGrantSuppressedCallAccess$ntdll.dll", 0x530bc, 0x0, true, 0xa2c0bd3715e99832)
#define _x99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHeapTrkInitialize$ntdll.dll", 0xfd320, 0x0, true, 0x612e2b767e0d41ca)
#define _y00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlHpQuerySegmentHeapRoutine$ntdll.dll", 0xf1e10, 0x0, true, 0xc8471cbfe2e8e52e)
#define _y01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlImageNtHeaderEx_ExceptionFilter$ntdll.dll", 0xfe794, 0x0, true, 0xb76a48d3a5f43b4b)
#define _y02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct image::section_header_t*(struct image::nt_headers64_t*, void*, uint32_t)>*), "$RtlImageRvaToSection$ntdll.dll", 0x24b50, 0x0, true, 0x8bf10adb0020c951)
#define _y03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct image::nt_headers64_t*, void*, uint32_t, struct image::section_header_t**)>*), "$RtlImageRvaToVa$ntdll.dll", 0x85a00, 0x0, true, 0x9b0a397214a32a18)
#define _y04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum sec::impersonation_level_t)>*), "$RtlImpersonateSelf$ntdll.dll", 0x768b0, 0x0, true, 0x56ad642d67c8a99a)
#define _y05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::barrier_t*, uint32_t, uint32_t)>*), "$RtlInitBarrier$ntdll.dll", 0xed190, 0x0, true, 0x82f9a45e689a72ec)
#define _y06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitMemoryStream$ntdll.dll", 0x7ede0, 0x0, true, 0x765e3cfde4601e43)
#define _y07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitOutOfProcessMemoryStream$ntdll.dll", 0x7ede0, 0x0, true, 0x9f73d8f8459f8453)
#define _y08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeAtomPackage$ntdll.dll", 0x836f0, 0x0, true, 0x8533cec5a39735b3)
#define _y09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::condition_variable_t*)>*), "$RtlInitializeConditionVariable$ntdll.dll", 0x6ca00, 0x0, true, 0x632d4ce0cd4582a3)
#define _y10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, nt::context*, void*, void*, void*)>*), "$RtlInitializeContext$ntdll.dll", 0xfe7b0, 0x0, true, 0x2dc28a310f7199b3)
#define _y11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::critical_section_t*)>*), "$RtlInitializeCriticalSection$ntdll.dll", 0x637d0, 0x0, true, 0xf55c8fc3fea1dcbc)
#define _y12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::critical_section_t*, uint32_t)>*), "$RtlInitializeCriticalSectionAndSpinCount$ntdll.dll", 0x65880, 0x0, true, 0x3df042aab09cb2c1)
#define _y13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::critical_section_t*, uint32_t, uint32_t)>*), "$RtlInitializeCriticalSectionEx$ntdll.dll", 0xb910, 0x0, true, 0x3112370b873a1f96)
#define _y14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t, uint32_t, struct rtl::handle_table_t*)>*), "$RtlInitializeHandleTable$ntdll.dll", 0x7e780, 0x0, true, 0xc94dccb9ead97ef6)
#define _y15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeHeapManager$ntdll.dll", 0xf1e74, 0x0, true, 0xe38979878beb84e)
#define _y16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeNtUserPfn$ntdll.dll", 0x8b120, 0x0, true, 0xd6eea3d43ebf9e08)
#define _y17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeRXact$ntdll.dll", 0x8a600, 0x0, true, 0xb9907ebd809b714d)
#define _y18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::resource_t*)>*), "$RtlInitializeResource$ntdll.dll", 0xb500, 0x0, true, 0x183f642a997a6af7)
#define _y19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInitializeSListHead$ntdll.dll", 0x6f060, 0x0, true, 0x9db8e6359e91f002)
#define _y20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::srwlock_t*)>*), "$RtlInitializeSRWLock$ntdll.dll", 0x6ca00, 0x0, true, 0x6ac5ce961bf5fcae)
#define _y21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInstallFunctionTableCallback$ntdll.dll", 0x69430, 0x0, true, 0x9adbb6d81fa51780)
#define _y22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInterlockedFlushSList$ntdll.dll", 0x6f1d0, 0x0, true, 0x755b1932244a0ca4)
#define _y23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInterlockedPushEntrySList$ntdll.dll", 0x6c9f0, 0x0, true, 0xac4322be1786f478)
#define _y24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlInterlockedPushListSListEx$ntdll.dll", 0xfea70, 0x0, true, 0x1d1256435566acff)
#define _y25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsActivationContextActive$ntdll.dll", 0xdf870, 0x0, true, 0xf57c03f8a1a0e9fa)
#define _y26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlIsAnyDebuggerPresent$ntdll.dll", 0xfeb90, 0x0, true, 0x861b27b3ae662a99)
#define _y27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::critical_section_t*)>*), "$RtlIsCriticalSectionLocked$ntdll.dll", 0xe86c0, 0x0, true, 0x8f365ef47c002127)
#define _y28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::critical_section_t*)>*), "$RtlIsCriticalSectionLockedByThread$ntdll.dll", 0x3d150, 0x0, true, 0xf8f1a8c997b08bab)
#define _y29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$RtlIsCurrentThreadAttachExempt$ntdll.dll", 0x9a600, 0x0, true, 0xda740c61610bdc5b)
#define _y30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const wchar_t*)>*), "$RtlIsDosDeviceName_U$ntdll.dll", 0x3c4e0, 0x0, true, 0xd7b3cf731d0da7cc)
#define _y31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, uint32_t*)>*), "$RtlIsTextUnicode$ntdll.dll", 0x653a0, 0x0, true, 0x8eaec69d37405756)
#define _y32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t()>*), "$RtlIsThreadWithinLoaderCallout$ntdll.dll", 0x7c8e0, 0x0, true, 0x3bea9ad026b1f11c)
#define _y33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::handle_table_t*, struct rtl::handle_table_entry_t*)>*), "$RtlIsValidHandle$ntdll.dll", 0x589b0, 0x0, true, 0xe271bd18fe38955c)
#define _y34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::handle_table_t*, uint32_t, struct rtl::handle_table_entry_t**)>*), "$RtlIsValidIndexHandle$ntdll.dll", 0x58970, 0x0, true, 0xf023a13285a8ec75)
#define _y35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(const wchar_t*, uint32_t)>*), "$RtlIsValidLocaleName$ntdll.dll", 0xfc850, 0x0, true, 0x363f5d1391c10875)
#define _y36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::exception_pointers_t*)>*), "$RtlKnownExceptionFilter$ntdll.dll", 0x100140, 0x0, true, 0xe38e5e76e35ab294)
#define _y37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, nt::unicode_view*, uint32_t, uint8_t)>*), "$RtlLcidToLocaleName$ntdll.dll", 0x2d440, 0x0, true, 0x9cf723254ce6f2bf)
#define _y38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::critical_section_t*)>*), "$RtlLeaveCriticalSection$ntdll.dll", 0x1b720, 0x0, true, 0xddd0d28e0669f793)
#define _y39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, uint32_t*, uint32_t)>*), "$RtlLocaleNameToLcid$ntdll.dll", 0x2dbe0, 0x0, true, 0xef24aeac2f139c82)
#define _y40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<nt::context*(struct win::context_ex_t*, uint32_t*)>*), "$RtlLocateLegacyContext$ntdll.dll", 0x80750, 0x0, true, 0xa4ebb8178b33fa2d)
#define _y41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t()>*), "$RtlLockCurrentThread$ntdll.dll", 0x82a10, 0x0, true, 0xae730bf8de46f71d)
#define _y42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$RtlLockHeap$ntdll.dll", 0x645e0, 0x0, true, 0x69a1679f90fce30e)
#define _y43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLockHeapManagerForCloning$ntdll.dll", 0xf2084, 0x0, true, 0x1d38f6ec403e2ce9)
#define _y44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlLockMemoryBlockLookaside$ntdll.dll", 0x7fff0, 0x0, true, 0x15d7995749f767c7)
#define _y45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLockMemoryStreamRegion$ntdll.dll", 0xd5770, 0x0, true, 0x6b0ab3ec26d7a792)
#define _y46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlLockMemoryZone$ntdll.dll", 0x80060, 0x0, true, 0xb28a7ec42ffbec9e)
#define _y47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlLockModuleSection$ntdll.dll", 0x802f0, 0x0, true, 0x8d9d1ff9d59fdd18)
#define _y48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLogStackBackTrace$ntdll.dll", 0x100910, 0x0, true, 0x4b1462f1edce49e3)
#define _y49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLogStackBackTraceEx$ntdll.dll", 0xb8d0, 0x0, true, 0xd70f655073f512bc)
#define _y50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlLogStackTrace$ntdll.dll", 0x100920, 0x0, true, 0xef7cb5a49a493570)
#define _y51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlMultiAppendUnicodeStringBuffer$ntdll.dll", 0x3c850, 0x0, true, 0x6a2b992038889227)
#define _y52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t, uint64_t, uint32_t, void**)>*), "$RtlMultipleAllocateHeap$ntdll.dll", 0xf21d0, 0x0, true, 0xf7714e8996521a56)
#define _y53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t, uint32_t, void**)>*), "$RtlMultipleFreeHeap$ntdll.dll", 0xf2250, 0x0, true, 0xb6f9c7624a85ea8)
#define _y54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, uint8_t, struct nt::luid_t*, struct nt::luid_t*, void*, void*, void**, uint8_t, void*, struct nt::generic_mapping_t*)>*), "$RtlNewInstanceSecurityObject$ntdll.dll", 0xd6b60, 0x0, true, 0x84f1942081f939ea)
#define _y55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlNewSecurityGrantedAccess$ntdll.dll", 0xd6c90, 0x0, true, 0x1786dd3d0f41ed68)
#define _y56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**, uint8_t, void*, struct nt::generic_mapping_t*)>*), "$RtlNewSecurityObject$ntdll.dll", 0x875c0, 0x0, true, 0x15c7e066be4cee30)
#define _y57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**, struct nt::guid_t*, uint8_t, uint32_t, void*, struct nt::generic_mapping_t*)>*), "$RtlNewSecurityObjectEx$ntdll.dll", 0x79310, 0x0, true, 0xe63e4a4e78b375bb)
#define _y58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**, struct nt::guid_t**, uint32_t, uint8_t, uint32_t, void*, struct nt::generic_mapping_t*)>*), "$RtlNewSecurityObjectWithMultipleInheritance$ntdll.dll", 0x84da0, 0x0, true, 0x647e478e86262968)
#define _y59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct rtl::user_process_parameters_t*(struct rtl::user_process_parameters_t*)>*), "$RtlNormalizeProcessParams$ntdll.dll", 0x87da0, 0x0, true, 0x441f7b28f91c8b93)
#define _y60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlNtPathNameToDosPathName$ntdll.dll", 0xcc160, 0x0, true, 0x2912b775b354a279)
#define _y61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(wchar_t**), "$RtlNtdllName$ntdll.dll", 0x11d430, 0x0, true, 0x4a12657c1ed04307)
#define _y62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlOpenModernAppOptionsKey$ntdll.dll", 0xe1748, 0x0, true, 0x87903a0a7927b9)
#define _y63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::teb_active_frame_t*)>*), "$RtlPopFrame$ntdll.dll", 0x6d000, 0x0, true, 0x7e2e2e941e33fdc7)
#define _y64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPosixBarrier$ntdll.dll", 0xed1b8, 0x0, true, 0x97c8a6f7041b1b7f)
#define _y65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPrepareForProcessCloning$ntdll.dll", 0x9a640, 0x0, true, 0x4f966baf8fa693c6)
#define _y66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlProcessFlsData$ntdll.dll", 0x63ef0, 0x0, true, 0x47c488cf043ccdf8)
#define _y67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "$RtlProtectHeap$ntdll.dll", 0xdef0, 0x0, true, 0x58332b58157a6236)
#define _y68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlPublishWnfStateData$ntdll.dll", 0x7bb50, 0x0, true, 0x3fc0509aa058ea58)
#define _y69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::teb_active_frame_t*)>*), "$RtlPushFrame$ntdll.dll", 0x6cf40, 0x0, true, 0x36c53124c755e61c)
#define _y70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryActivationContextApplicationSettings$ntdll.dll", 0x794c0, 0x0, true, 0x97f51dffcb867370)
#define _y71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryApplicationKeyOption$ntdll.dll", 0x79d28, 0x0, true, 0x120543cd43d7ad16)
#define _y72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*)>*), "$RtlQueryCriticalSectionOwner$ntdll.dll", 0xe86e0, 0x0, true, 0xaec4187e9fa9bc0)
#define _y73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint16_t(union nt::slist_header_t*)>*), "$RtlQueryDepthSList$ntdll.dll", 0x6d0a0, 0x0, true, 0xe965e1cad061dec4)
#define _y74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, const wchar_t*, uint64_t, wchar_t*, uint64_t, uint64_t*)>*), "$RtlQueryEnvironmentVariable$ntdll.dll", 0x24c80, 0x0, true, 0x90cf69af2ee57e70)
#define _y75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*, nt::unicode_view*)>*), "$RtlQueryEnvironmentVariable_U$ntdll.dll", 0x47ef0, 0x0, true, 0xa13356e0dbc3de9d)
#define _y76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum heap::information_class_t, void*, uint64_t, uint64_t*)>*), "$RtlQueryHeapInformation$ntdll.dll", 0x73af0, 0x0, true, 0x4efa34fa1b617c89)
#define _y77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryInformationActivationContext$ntdll.dll", 0x3dcc0, 0x0, true, 0xd8680ee3b00a217f)
#define _y78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryInformationActiveActivationContext$ntdll.dll", 0x7d240, 0x0, true, 0x194dfff8069d860a)
#define _y79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryInterfaceMemoryStream$ntdll.dll", 0xd5770, 0x0, true, 0x5546749a46f959ee)
#define _y80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(int64_t*)>*), "$RtlQueryPerformanceCounter$ntdll.dll", 0x2ff60, 0x0, true, 0xf8444697103d8ec5)
#define _y81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(int64_t*)>*), "$RtlQueryPerformanceFrequency$ntdll.dll", 0x70200, 0x0, true, 0xd36faa31f9a5154f)
#define _y82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryProcessBackTraceInformation$ntdll.dll", 0xd7410, 0x0, true, 0x6e1a382cbce40133)
#define _y83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct rtl::debug_information_t*)>*), "$RtlQueryProcessDebugInformation$ntdll.dll", 0xd75a0, 0x0, true, 0x2cb8cb61b3c0bcc9)
#define _y84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryProcessHeapInformation$ntdll.dll", 0xd7a80, 0x0, true, 0x7bd2f8c7d5348ed9)
#define _y85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryProcessLockInformation$ntdll.dll", 0xd7e60, 0x0, true, 0xfa4c31131330300e)
#define _y86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryProcessModuleInformation$ntdll.dll", 0xd8100, 0x0, true, 0x15c87f55bcea011)
#define _y87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::guid_t*, uint64_t*)>*), "$RtlQueryProtectedPolicy$ntdll.dll", 0x81340, 0x0, true, 0xac4fe11b1ddc30a2)
#define _y88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryResourcePolicy$ntdll.dll", 0x9550, 0x0, true, 0x9d038e2b04213a3c)
#define _y89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*)>*), "$RtlQuerySecurityObject$ntdll.dll", 0xd6dc0, 0x0, true, 0x5efbdc7516b8bb77)
#define _y90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQuerySystemTime$ntdll.dll", 0x75150, 0x0, true, 0x3d3cf56e40b23d8)
#define _y91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<wchar_t*(void*, uint32_t, uint16_t, uint8_t, struct rtl::heap_tag_info_t*)>*), "$RtlQueryTagHeap$ntdll.dll", 0xf22c0, 0x0, true, 0xe5111a6ffeed9095)
#define _y92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "$RtlQueryThreadProfiling$ntdll.dll", 0xcbd20, 0x0, true, 0x25c477f660ce9559)
#define _y93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryUmsThreadInformation$ntdll.dll", 0xf6de0, 0x0, true, 0x62de6e540e4c4dbe)
#define _y94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryUnbiasedInterruptTime$ntdll.dll", 0x5f690, 0x0, true, 0x9bf551ba67a7dfc4)
#define _y95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryVolumeDiskSpeedPolicy$ntdll.dll", 0x8a43c, 0x0, true, 0xbb78c80b121e598d)
#define _y96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryWnfMetaNotification$ntdll.dll", 0x82270, 0x0, true, 0x3eea7860f864bb81)
#define _y97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryWnfStateData$ntdll.dll", 0x8960, 0x0, true, 0x7a7d5045537a0805)
#define _y98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlQueryWnfStateDataWithExplicitScope$ntdll.dll", 0x83120, 0x0, true, 0xa5f090f23f243727)
#define _y99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, sdk::function<void(void*, void*, void*)>*, void*, void*, void*)>*), "$RtlQueueApcWow64Thread$ntdll.dll", 0xdbe50, 0x0, true, 0xbe9eb9073632ee76)
#define _z00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<void(void*)>*, void*, uint32_t)>*), "$RtlQueueWorkItem$ntdll.dll", 0x42ee0, 0x0, true, 0xc40a469a92939e5d)
#define _z01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(void*, uint32_t, void*, uint64_t)>*), "$RtlReAllocateHeap$ntdll.dll", 0x1c9a0, 0x0, true, 0x33c913d9b3f4f9b3)
#define _z02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReadMemoryStream$ntdll.dll", 0xd5770, 0x0, true, 0x460169a107adc31f)
#define _z03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReadOutOfProcessMemoryStream$ntdll.dll", 0xd5770, 0x0, true, 0xe5cd00c7ad8b74ee)
#define _z04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct win::performance_data_t*)>*), "$RtlReadThreadProfilingData$ntdll.dll", 0xcbd50, 0x0, true, 0xb36ec5cd8f265838)
#define _z05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRegisterForWnfMetaNotification$ntdll.dll", 0x46e20, 0x0, true, 0x18f6036c23ce20d0)
#define _z06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<int32_t(void*, uint64_t)>*)>*), "$RtlRegisterSecureMemoryCacheCallback$ntdll.dll", 0xf74d0, 0x0, true, 0xf6a8145f01b868d9)
#define _z07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t()>*), "$RtlRegisterThreadWithCsrss$ntdll.dll", 0x7c7d0, 0x0, true, 0x2d173bbc18d6234f)
#define _z08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*, sdk::function<void(void*, uint8_t)>*, void*, uint32_t, uint32_t)>*), "$RtlRegisterWait$ntdll.dll", 0x42830, 0x0, true, 0x5bb43e6335fe13b)
#define _z09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReleaseActivationContext$ntdll.dll", 0x40950, 0x0, true, 0xae2198cffd92cbca)
#define _z10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReleaseMemoryStream$ntdll.dll", 0x836f0, 0x0, true, 0x721c66f55015de02)
#define _z11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReleasePath$ntdll.dll", 0x62ff0, 0x0, true, 0xf57836715ba30b6c)
#define _z12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$RtlReleasePebLock$ntdll.dll", 0x76c30, 0x0, true, 0x5316651d560b2fe0)
#define _z13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::relative_name_u_t*)>*), "$RtlReleaseRelativeName$ntdll.dll", 0x38440, 0x0, true, 0x7d7e46f5888d0304)
#define _z14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::resource_t*)>*), "$RtlReleaseResource$ntdll.dll", 0x65c60, 0x0, true, 0x42911aa61a47d071)
#define _z15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::srwlock_t*)>*), "$RtlReleaseSRWLockExclusive$ntdll.dll", 0x20b10, 0x0, true, 0xdf1e3a3f85e8adcb)
#define _z16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct rtl::srwlock_t*)>*), "$RtlReleaseSRWLockShared$ntdll.dll", 0x205f0, 0x0, true, 0x5fdcbb12ac1294a3)
#define _z17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReleaseStackTrace$ntdll.dll", 0x100940, 0x0, true, 0xb76d989b7f90b11)
#define _z18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t, uint64_t*, uint8_t, uint8_t)>*), "$RtlRemoteCall$ntdll.dll", 0xfe8e0, 0x0, true, 0x2805b2376f0e354f)
#define _z19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*, uint32_t)>*), "$RtlRemovePrivileges$ntdll.dll", 0x87900, 0x0, true, 0x9a7c99529cb50c8b)
#define _z20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "$RtlRemoveVectoredContinueHandler$ntdll.dll", 0xd9480, 0x0, true, 0x9cff91f32a05222e)
#define _z21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "$RtlRemoveVectoredExceptionHandler$ntdll.dll", 0x817c0, 0x0, true, 0x29b53bddf020485b)
#define _z22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReplaceSystemDirectoryInPath$ntdll.dll", 0x861a0, 0x0, true, 0x9ae38b64acb97bc)
#define _z23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReportCriticalFailure$ntdll.dll", 0xfec5c, 0x0, true, 0xab2fbf8f09a12d33)
#define _z24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::exception_record_t*, nt::context*, uint32_t)>*), "$RtlReportException$ntdll.dll", 0xdc790, 0x0, true, 0x2a9a13472b78b30e)
#define _z25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::exception_record_t*, nt::context*, uint32_t, int64_t*)>*), "$RtlReportExceptionEx$ntdll.dll", 0xdc860, 0x0, true, 0xf7cc228a9bdf6dc5)
#define _z26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReportExceptionHelper$ntdll.dll", 0xdcd30, 0x0, true, 0x2caa9c29629b85d3)
#define _z27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t)>*), "$RtlReportSilentProcessExit$ntdll.dll", 0x64090, 0x0, true, 0x49fa0723a0b957ff)
#define _z28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlReportSqmEscalation$ntdll.dll", 0x836f0, 0x0, true, 0x56a2f7aada0c2b8e)
#define _z29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlResetMemoryBlockLookaside$ntdll.dll", 0xeaab0, 0x0, true, 0x1ce6f4e934a818cb)
#define _z30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$RtlResetMemoryZone$ntdll.dll", 0xeab10, 0x0, true, 0xbf64a36d1d8fbea4)
#define _z31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlResetNtUserPfn$ntdll.dll", 0x8b240, 0x0, true, 0x14ec5b2308467ddf)
#define _z32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlResetStackOverflow$ntdll.dll", 0xde4f4, 0x0, true, 0x361d292b1b8111e9)
#define _z33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRetrieveNtUserPfn$ntdll.dll", 0x8b2c0, 0x0, true, 0xfabab24279852391)
#define _z34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlRevertMemoryStream$ntdll.dll", 0xd5770, 0x0, true, 0xbcea41d487ca4505)
#define _z35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint8_t, nt::unicode_view*)>*), "$RtlRunDecodeUnicodeString$ntdll.dll", 0xe6870, 0x0, true, 0x1f5041cb7d471cfc)
#define _z36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint8_t*, nt::unicode_view*)>*), "$RtlRunEncodeUnicodeString$ntdll.dll", 0xe68d0, 0x0, true, 0xe1dabc7ee604dd2a)
#define _z37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSecureMemorySystemRangeStart$ntdll.dll", 0x169cd0, 0x0, true, 0xae63d7e6650a8a70)
#define _z38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSeekMemoryStream$ntdll.dll", 0xd5770, 0x0, true, 0x43e0b8a7034db14)
#define _z39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSendMsgToSm$ntdll.dll", 0x889b0, 0x0, true, 0xd6f9857edae2f94c)
#define _z40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t, uint32_t*)>*), "$RtlSetAttributesSecurityDescriptor$ntdll.dll", 0xe6990, 0x0, true, 0xa42732e2e8da10d6)
#define _z41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::critical_section_t*, uint32_t)>*), "$RtlSetCriticalSectionSpinCount$ntdll.dll", 0x71230, 0x0, true, 0x92fdbbb8a43fdb82)
#define _z42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*)>*), "$RtlSetCurrentDirectory_U$ntdll.dll", 0x60d40, 0x0, true, 0x579b3f3d665103ea)
#define _z43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**)>*), "$RtlSetCurrentEnvironment$ntdll.dll", 0x8ac60, 0x0, true, 0x6d979ca504a0cedf)
#define _z44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "$RtlSetCurrentTransaction$ntdll.dll", 0x6a080, 0x0, true, 0x4e974976927246f0)
#define _z45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, uint64_t)>*), "$RtlSetEnvironmentStrings$ntdll.dll", 0x81fd0, 0x0, true, 0x43c37dfec6611596)
#define _z46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, const wchar_t*, uint64_t, const wchar_t*, uint64_t)>*), "$RtlSetEnvironmentVar$ntdll.dll", 0x481e0, 0x0, true, 0x3e2a31814a2a29b7)
#define _z47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, nt::unicode_view*, nt::unicode_view*)>*), "$RtlSetEnvironmentVariable$ntdll.dll", 0x47f80, 0x0, true, 0xb70e79ea3630a96c)
#define _z48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct win::context_ex_t*, uint64_t)>*), "$RtlSetExtendedFeaturesMask$ntdll.dll", 0xf55c0, 0x0, true, 0xde3156378980cca1)
#define _z49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetHeapDebuggingInformation$ntdll.dll", 0xf2498, 0x0, true, 0x7336421b0a8782db)
#define _z50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum heap::information_class_t, void*, uint64_t)>*), "$RtlSetHeapInformation$ntdll.dll", 0x73900, 0x0, true, 0x6bb0bbcd8db82ed3)
#define _z51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::acl_t*, void*, uint32_t, enum win::acl_information_class_t)>*), "$RtlSetInformationAcl$ntdll.dll", 0xe9700, 0x0, true, 0xa889d7347f2cd3d3)
#define _z52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, sdk::function<void(uint32_t, void*, void*)>*, uint32_t)>*), "$RtlSetIoCompletionCallback$ntdll.dll", 0x112750, 0x0, true, 0x7e8a8822993ea6e6)
#define _z53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(int32_t)>*), "$RtlSetLastWin32Error$ntdll.dll", 0x4a840, 0x0, true, 0x70840e01c425617c)
#define _z54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(int32_t)>*), "$RtlSetLastWin32ErrorAndNtStatusFromNtStatus$ntdll.dll", 0x4a820, 0x0, true, 0x9036f157f31bff7c)
#define _z55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetLFHDebuggingInformation$ntdll.dll", 0x10b048, 0x0, true, 0xe8d33ba48ca08d61)
#define _z56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetLowFragHeapGlobalFlags$ntdll.dll", 0xf2568, 0x0, true, 0x84a029a781ba3a81)
#define _z57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetMemoryStreamSize$ntdll.dll", 0xd5770, 0x0, true, 0xf430ec180dc6f420)
#define _z58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct rtl::debug_information_t*)>*), "$RtlSetProcessDebugInformation$ntdll.dll", 0xd8200, 0x0, true, 0xd3d2470dfd6aef23)
#define _z59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetProcessIsCritical$ntdll.dll", 0x8ab40, 0x0, true, 0xa0ed9f2444cee2b4)
#define _z60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetProcessPreferredUILanguages$ntdll.dll", 0x88810, 0x0, true, 0x2536230c4da98c76)
#define _z61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::guid_t*, uint64_t, uint64_t*)>*), "$RtlSetProtectedPolicy$ntdll.dll", 0x7fab0, 0x0, true, 0x7eeab7314889ffff)
#define _z62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "$RtlSetSearchPathMode$ntdll.dll", 0x7e7e0, 0x0, true, 0x646cfb3e36504b03)
#define _z63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint8_t*)>*), "$RtlSetSecurityDescriptorRMControl$ntdll.dll", 0x84980, 0x0, true, 0xce9b95f675add188)
#define _z64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, void**, struct nt::generic_mapping_t*, void*)>*), "$RtlSetSecurityObject$ntdll.dll", 0x757e0, 0x0, true, 0x707fbd21d3288b59)
#define _z65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, void**, uint32_t, struct nt::generic_mapping_t*, void*)>*), "$RtlSetSecurityObjectEx$ntdll.dll", 0xd70d0, 0x0, true, 0x17af6628d4144bb)
#define _z66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*)>*), "$RtlSetThreadErrorMode$ntdll.dll", 0x473f0, 0x0, true, 0xb076e67e9c875879)
#define _z67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetThreadIsCritical$ntdll.dll", 0x88160, 0x0, true, 0xf7bed03a9d25f306)
#define _z68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<int32_t(sdk::function<uint32_t(void*)>*, void*, void**)>*, sdk::function<int32_t(int32_t)>*)>*), "$RtlSetThreadPoolStartFunc$ntdll.dll", 0x836f0, 0x0, true, 0x2ffd695c61586139)
#define _z69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetThreadPreferredUILanguages$ntdll.dll", 0x6a380, 0x0, true, 0x3745633ab4de61ad)
#define _z70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetThreadSubProcessTag$ntdll.dll", 0x3f460, 0x0, true, 0x26481b88c7e25e03)
#define _z71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetThreadWorkOnBehalfTicket$ntdll.dll", 0x3f3f0, 0x0, true, 0x86b94513edd5db3d)
#define _z72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetTimer$ntdll.dll", 0x112740, 0x0, true, 0xe04fe286f7f5ed98)
#define _z73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSetUmsThreadInformation$ntdll.dll", 0xf6e80, 0x0, true, 0x8f1dc7d319303605)
#define _z74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(sdk::function<uint32_t(struct nt::exception_pointers_t*)>*)>*), "$RtlSetUnhandledExceptionFilter$ntdll.dll", 0x7e740, 0x0, true, 0x43865e1966523b7b)
#define _z75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, void*, uint32_t, uint32_t)>*), "$RtlSetUserFlagsHeap$ntdll.dll", 0xf2660, 0x0, true, 0x4e6bd39aa1b4f2c7)
#define _z76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, void*, void*)>*), "$RtlSetUserValueHeap$ntdll.dll", 0xba60, 0x0, true, 0x3298dde080c25410)
#define _z77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t*)>*), "$RtlSidEqualLevel$ntdll.dll", 0xe69c0, 0x0, true, 0xe6cfec7cc9bb59ff)
#define _z78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t*)>*), "$RtlSidIsHigherLevel$ntdll.dll", 0xe6a50, 0x0, true, 0x4d987f72836638d3)
#define _z79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::condition_variable_t*, struct rtl::critical_section_t*, int64_t*)>*), "$RtlSleepConditionVariableCS$ntdll.dll", 0x651e0, 0x0, true, 0xd311e554d18849c8)
#define _z80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct rtl::condition_variable_t*, struct rtl::srwlock_t*, int64_t*, uint32_t)>*), "$RtlSleepConditionVariableSRW$ntdll.dll", 0x64f40, 0x0, true, 0x3ba84f1ab96a7d33)
#define _z81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStackDbContextSerialize$ntdll.dll", 0x117e6c, 0x0, true, 0xdcdae0886738c483)
#define _z82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStackDbStackAdd$ntdll.dll", 0x1181b8, 0x0, true, 0x1381d805454f6381)
#define _z83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStackDbStackRemove$ntdll.dll", 0x118790, 0x0, true, 0x42da76be886e1640)
#define _z84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStartRXact$ntdll.dll", 0x807a0, 0x0, true, 0xe52579b73d5d6c2f)
#define _z85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStatMemoryStream$ntdll.dll", 0xd5770, 0x0, true, 0x887d46897a6a8c6a)
#define _z86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlStdDeleteStackDatabase$ntdll.dll", 0x100970, 0x0, true, 0x5f37241c18bb93dd)
#define _z87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSubscribeWnfStateChangeNotification$ntdll.dll", 0x97a0, 0x0, true, 0x1d00ab800b855269)
#define _z88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlSwitchedVVI$ntdll.dll", 0x2ed80, 0x0, true, 0xee96ac8f11603d45)
#define _z89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTestAndPublishWnfStateData$ntdll.dll", 0x83e10, 0x0, true, 0x8b31249c53a2b0e4)
#define _z90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTpETWCallbackDequeue$ntdll.dll", 0x11301c, 0x0, true, 0x5a22b491084038b1)
#define _z91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t()>*), "$RtlTryAcquirePebLock$ntdll.dll", 0xe4a0, 0x0, true, 0x59fe08c519a90614)
#define _z92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::srwlock_t*)>*), "$RtlTryAcquireSRWLockExclusive$ntdll.dll", 0x81510, 0x0, true, 0x96f33ac7433e64de)
#define _z93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct rtl::srwlock_t*)>*), "$RtlTryAcquireSRWLockShared$ntdll.dll", 0x75e00, 0x0, true, 0xb6173e44de0ce93d)
#define _z94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlTryConvertSRWLockSharedToExclusiveOrRelease$ntdll.dll", 0xe8590, 0x0, true, 0xc667c2dcd987fd3f)
#define _z95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct rtl::critical_section_t*)>*), "$RtlTryEnterCriticalSection$ntdll.dll", 0x103a0, 0x0, true, 0x78f03f41ef2a1c87)
#define _z96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUmsThreadYield$ntdll.dll", 0xf6ec0, 0x0, true, 0x8341eb0fb8b48516)
#define _z97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::exception_pointers_t*)>*), "$RtlUnhandledExceptionFilter$ntdll.dll", 0x9b6c0, 0x0, true, 0x26e21d088bea5051)
#define _z98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::exception_pointers_t*, uint32_t)>*), "$RtlUnhandledExceptionFilter2$ntdll.dll", 0x100160, 0x0, true, 0xb218a2a731e29c7c)
#define _z99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlUnicodeStringCbCopyStringN$ntdll.dll", 0x69c9c, 0x0, true, 0x35ab281a4e6e2b8e)
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