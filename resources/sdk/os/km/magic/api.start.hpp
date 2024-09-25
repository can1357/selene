#if !IN_PARSER
#define _m00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwChangeProcessState$ntoskrnl.exe", 0x0, 0x0, false, 0xbacc2780bd72c671)
#define _m01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwChangeThreadState$ntoskrnl.exe", 0x0, 0x0, false, 0x69d0579484b6fbf5)
#define _m02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwCopyFileChunk$ntoskrnl.exe", 0x0, 0x0, false, 0xd726afff7c713cd7)
#define _m03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwCreateCpuPartition$ntoskrnl.exe", 0x0, 0x0, false, 0x9433aecb28424af8)
#define _m04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwCreateIoRing$ntoskrnl.exe", 0x0, 0x0, false, 0x462b1c06381d07e4)
#define _m05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwCreateProcessStateChange$ntoskrnl.exe", 0x0, 0x0, false, 0x9eedde7b2d516302)
#define _m06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwCreateThreadStateChange$ntoskrnl.exe", 0x0, 0x0, false, 0xf2e0144cfb65b38f)
#define _m07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwOpenCpuPartition$ntoskrnl.exe", 0x0, 0x0, false, 0xa9b87a7adbde57c5)
#define _m08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwQueryInformationCpuPartition$ntoskrnl.exe", 0x0, 0x0, false, 0x67a7f3a2237baeb4)
#define _m09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwQueryIoRingCapabilities$ntoskrnl.exe", 0x0, 0x0, false, 0xf1fdddf15a7cd5bf)
#define _m10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwQueueApcThreadEx2$ntoskrnl.exe", 0x0, 0x0, false, 0x43cc94e5731c4d03)
#define _m11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwReadVirtualMemoryEx$ntoskrnl.exe", 0x0, 0x0, false, 0x57ccaa3491c54d66)
#define _m12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwSetInformationCpuPartition$ntoskrnl.exe", 0x0, 0x0, false, 0xcb908985be140997)
#define _m13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwSetInformationIoRing$ntoskrnl.exe", 0x0, 0x0, false, 0x16391a7dfd7dc7f3)
#define _m14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwSubmitIoRing$ntoskrnl.exe", 0x0, 0x0, false, 0x2aa63a74fc1d8240)
#define _m15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwAcquireCrossVmMutant$ntoskrnl.exe", 0x3f2950, 0x0, true, 0x7f099092dbcfae40)
#define _m16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwAcquireProcessActivityReference$ntoskrnl.exe", 0x3f2970, 0x0, true, 0x4718ee667c2fd4ea)
#define _m17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwAllocateUserPhysicalPagesEx$ntoskrnl.exe", 0x3f2af0, 0x0, true, 0x6d35a61d8c385e0d)
#define _m18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t, uint32_t, struct nt::mem_extended_parameter_t*, uint32_t)>*), "$ZwAllocateVirtualMemoryEx$ntoskrnl.exe", 0x3f2b30, 0x0, true, 0xa7d09babb455a99f)
#define _m19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<void*(void*)>*, void*, uint8_t, void**)>*), "$ZwCallEnclave$ntoskrnl.exe", 0x3f2e90, 0x0, true, 0x72c65675846d42ee)
#define _m20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwCompareSigningLevels$ntoskrnl.exe", 0x3f2ff0, 0x0, true, 0xa901d0e02dafb207)
#define _m21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwContinueEx$ntoskrnl.exe", 0x3f3090, 0x0, true, 0xe34956aa13f82d52)
#define _m22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter$ntoskrnl.exe", 0x3f30b0, 0x0, true, 0x364b5d3f30955d61)
#define _m23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwCreateCrossVmEvent$ntoskrnl.exe", 0x3f30d0, 0x0, true, 0x93e4c1406e9739bf)
#define _m24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwCreateCrossVmMutant$ntoskrnl.exe", 0x3f30f0, 0x0, true, 0xdd0152165ce8ffae)
#define _m25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::mem_extended_parameter_t*, uint32_t)>*), "$ZwCreateSectionEx$ntoskrnl.exe", 0x3f3430, 0x0, true, 0x8a128a29c7a652f0)
#define _m26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwDirectGraphicsCall$ntoskrnl.exe", 0x3f3790, 0x0, true, 0xc992056eabe8c5b)
#define _m27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwLoadKey3$ntoskrnl.exe", 0x3f5730, 0x0, true, 0x6df292be0f339f2c)
#define _m28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwManageHotPatch$ntoskrnl.exe", 0x3f3e70, 0x0, true, 0x2eee940c890702cc)
#define _m29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwMapViewOfSectionEx$ntoskrnl.exe", 0x3f3ef0, 0x0, true, 0x2b07ffa034f7a4c5)
#define _m30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, uint32_t, uint8_t, enum nt::directory_notify_information_class_t)>*), "$ZwNotifyChangeDirectoryFileEx$ntoskrnl.exe", 0x3f3f70, 0x0, true, 0xac69d0db1580869e)
#define _m31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwPssCaptureVaSpaceBulk$ntoskrnl.exe", 0x3f43f0, 0x0, true, 0x3c8fcde9bfb8d814)
#define _m32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwQueryAuxiliaryCounterFrequency$ntoskrnl.exe", 0x3f4430, 0x0, true, 0xf0af119abdcc317b)
#define _m33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t, uint32_t, nt::unicode_view*)>*), "$ZwQueryDirectoryFileEx$ntoskrnl.exe", 0x3f44b0, 0x0, true, 0x4b946f33c0e0c13c)
#define _m34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t)>*), "$ZwQueryInformationByName$ntoskrnl.exe", 0x3f4570, 0x0, true, 0xcf408dc46593b95)
#define _m35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "$ZwTerminateEnclave$ntoskrnl.exe", 0x3f5430, 0x0, true, 0x43750873d5f4b38f)
#define _m36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*, struct nt::port_message_t*, uint8_t, struct win::port_view_t*, struct nt::remote_port_view_t*)>*), "$ZwAcceptConnectPort$ntoskrnl.exe", 0x3f1cb0, 0x0, true, 0xb4ef12312e433d09)
#define _m37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, struct nt::generic_mapping_t*, struct nt::privilege_set_t*, uint32_t*, uint32_t*, int32_t*)>*), "$ZwAccessCheck$ntoskrnl.exe", 0x3f1c70, 0x0, true, 0xb536bfd53b47cd51)
#define _m38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*), "$ZwAccessCheckAndAuditAlarm$ntoskrnl.exe", 0x3f2190, 0x0, true, 0x7c70dc63d849b537)
#define _m39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, struct nt::privilege_set_t*, uint32_t*, uint32_t*, int32_t*)>*), "$ZwAccessCheckByType$ntoskrnl.exe", 0x3f28d0, 0x0, true, 0x56159966f310d1fa)
#define _m40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, enum nt::audit_event_type_t, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*), "$ZwAccessCheckByTypeAndAuditAlarm$ntoskrnl.exe", 0x3f2790, 0x0, true, 0x452b5c1edaadafd0)
#define _m41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, struct nt::privilege_set_t*, uint32_t*, uint32_t*, int32_t*)>*), "$ZwAccessCheckByTypeResultList$ntoskrnl.exe", 0x3f28f0, 0x0, true, 0x749f3dd1474baec1)
#define _m42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, enum nt::audit_event_type_t, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*), "$ZwAccessCheckByTypeResultListAndAuditAlarm$ntoskrnl.exe", 0x3f2910, 0x0, true, 0x6f97cd615af2d259)
#define _m43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, enum nt::audit_event_type_t, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*), "$ZwAccessCheckByTypeResultListAndAuditAlarmByHandle$ntoskrnl.exe", 0x3f2930, 0x0, true, 0x8157d2d9adea5760)
#define _m44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint32_t, wchar_t*)>*), "$ZwAddAtom$ntoskrnl.exe", 0x3f2550, 0x0, true, 0xd9e68ec5981be958)
#define _m45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint32_t, wchar_t*, uint32_t)>*), "$ZwAddAtomEx$ntoskrnl.exe", 0x3f2990, 0x0, true, 0xd9dbb3347a1c26d0)
#define _m46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct boot::entry_t*, uint32_t*)>*), "$ZwAddBootEntry$ntoskrnl.exe", 0x3f29b0, 0x0, true, 0xd25ceadec6634b15)
#define _m47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct efi::driver_entry_t*, uint32_t*)>*), "$ZwAddDriverEntry$ntoskrnl.exe", 0x3f29d0, 0x0, true, 0x4c590a3f2c6db647)
#define _m48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, struct nt::token_groups_t*, uint32_t, struct nt::token_groups_t*, uint32_t*)>*), "$ZwAdjustGroupsToken$ntoskrnl.exe", 0x3f29f0, 0x0, true, 0x6d837bcfc755058c)
#define _m49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, struct nt::token_privileges_t*, uint32_t, struct nt::token_privileges_t*, uint32_t*)>*), "$ZwAdjustPrivilegesToken$ntoskrnl.exe", 0x3f2490, 0x0, true, 0x4324098c9d5e2bf)
#define _m50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, uint8_t, uint8_t, struct win::token_security_attributes_information_t*, struct win::token_security_attributes_information_t*, struct nt::token_groups_t*, uint32_t, struct win::token_security_attributes_information_t*, uint32_t, struct win::token_security_attributes_information_t*, uint32_t, struct nt::token_groups_t*, uint32_t*, uint32_t*, uint32_t*)>*), "$ZwAdjustTokenClaimsAndDeviceGroups$ntoskrnl.exe", 0x3f2a10, 0x0, true, 0x37f875319118e1cf)
#define _m51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "$ZwAlertResumeThread$ntoskrnl.exe", 0x3f2a30, 0x0, true, 0x1ce01a6d996e9a73)
#define _m52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwAlertThread$ntoskrnl.exe", 0x3f2a50, 0x0, true, 0xf42ea138f404665b)
#define _m53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwAlertThreadByThreadId$ntoskrnl.exe", 0x3f2a70, 0x0, true, 0x39bc4bdfe33dae48)
#define _m54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::luid_t*)>*), "$ZwAllocateLocallyUniqueId$ntoskrnl.exe", 0x3f2a90, 0x0, true, 0x62cadcd02aa0878a)
#define _m55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, struct nt::object_attributes_t*, enum win::memory_reserve_type_t)>*), "$ZwAllocateReserveObject$ntoskrnl.exe", 0x3f2ab0, 0x0, true, 0xfd5d0e38a93667d0)
#define _m56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t*, uint64_t*)>*), "$ZwAllocateUserPhysicalPages$ntoskrnl.exe", 0x3f2ad0, 0x0, true, 0x160fcd2d9f7f8fd)
#define _m57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t*, uint32_t*, uint32_t*, char*)>*), "$ZwAllocateUuids$ntoskrnl.exe", 0x3f2b10, 0x0, true, 0x9aa5b814535fb7c6)
#define _m58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint64_t, uint64_t*, uint32_t, uint32_t)>*), "$ZwAllocateVirtualMemory$ntoskrnl.exe", 0x3f1f70, 0x0, true, 0x4df216d0e90ceb42)
#define _m59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*, uint32_t, struct nt::object_attributes_t*, struct alpc::port_attributes_t*, void*, struct nt::port_message_t*, struct alpc::message_attributes_t*, uint8_t)>*), "$ZwAlpcAcceptConnectPort$ntoskrnl.exe", 0x3f2b50, 0x0, true, 0xaef3c3d7ef506ff5)
#define _m60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct alpc::context_attr_t*)>*), "$ZwAlpcCancelMessage$ntoskrnl.exe", 0x3f2b70, 0x0, true, 0x695bbb5355825654)
#define _m61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, nt::unicode_view*, struct nt::object_attributes_t*, struct alpc::port_attributes_t*, uint32_t, void*, struct nt::port_message_t*, uint32_t*, struct alpc::message_attributes_t*, struct alpc::message_attributes_t*, int64_t*)>*), "$ZwAlpcConnectPort$ntoskrnl.exe", 0x3f2b90, 0x0, true, 0xf3ffda384c9f8d9d)
#define _m62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, struct nt::object_attributes_t*, struct nt::object_attributes_t*, struct alpc::port_attributes_t*, uint32_t, void*, struct nt::port_message_t*, uint64_t*, struct alpc::message_attributes_t*, struct alpc::message_attributes_t*, int64_t*)>*), "$ZwAlpcConnectPortEx$ntoskrnl.exe", 0x3f2bb0, 0x0, true, 0x47d3ac9dd189a08d)
#define _m63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, struct nt::object_attributes_t*, struct alpc::port_attributes_t*)>*), "$ZwAlpcCreatePort$ntoskrnl.exe", 0x3f2bd0, 0x0, true, 0x2bd9462a65848909)
#define _m64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint64_t, void**, uint64_t*)>*), "$ZwAlpcCreatePortSection$ntoskrnl.exe", 0x3f2bf0, 0x0, true, 0xaa9071ba2ad0b3ed)
#define _m65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint64_t, void**)>*), "$ZwAlpcCreateResourceReserve$ntoskrnl.exe", 0x3f2c10, 0x0, true, 0xacf83bdd81e577e9)
#define _m66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct alpc::data_view_attr_t*)>*), "$ZwAlpcCreateSectionView$ntoskrnl.exe", 0x3f2c30, 0x0, true, 0xcced93138731ac57)
#define _m67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct alpc::security_attr_t*)>*), "$ZwAlpcCreateSecurityContext$ntoskrnl.exe", 0x3f2c50, 0x0, true, 0x62e329e859bb055d)
#define _m68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*)>*), "$ZwAlpcDeletePortSection$ntoskrnl.exe", 0x3f2c70, 0x0, true, 0xbf30b8c58fe2429e)
#define _m69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*)>*), "$ZwAlpcDeleteResourceReserve$ntoskrnl.exe", 0x3f2c90, 0x0, true, 0x807530193008ebd9)
#define _m70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*)>*), "$ZwAlpcDeleteSectionView$ntoskrnl.exe", 0x3f2cb0, 0x0, true, 0x3c7f2c7164166815)
#define _m71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*)>*), "$ZwAlpcDeleteSecurityContext$ntoskrnl.exe", 0x3f2cd0, 0x0, true, 0x2083644db996cc86)
#define _m72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "$ZwAlpcDisconnectPort$ntoskrnl.exe", 0x3f2cf0, 0x0, true, 0xb5e5de63d006372a)
#define _m73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*, uint32_t)>*), "$ZwAlpcImpersonateClientContainerOfPort$ntoskrnl.exe", 0x3f2d10, 0x0, true, 0x69c84bfef6ac5069)
#define _m74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*, void*)>*), "$ZwAlpcImpersonateClientOfPort$ntoskrnl.exe", 0x3f2d30, 0x0, true, 0xf657b91e8a6eb9f4)
#define _m75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*, struct nt::port_message_t*, uint32_t, uint32_t, struct nt::object_attributes_t*)>*), "$ZwAlpcOpenSenderProcess$ntoskrnl.exe", 0x3f2d50, 0x0, true, 0x6daef1893751d21b)
#define _m76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*, struct nt::port_message_t*, uint32_t, uint32_t, struct nt::object_attributes_t*)>*), "$ZwAlpcOpenSenderThread$ntoskrnl.exe", 0x3f2d70, 0x0, true, 0xb08bd9ab45a16be9)
#define _m77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum alpc::port_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwAlpcQueryInformation$ntoskrnl.exe", 0x3f2d90, 0x0, true, 0xc375f0b15e35507f)
#define _m78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*, enum alpc::message_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwAlpcQueryInformationMessage$ntoskrnl.exe", 0x3f2db0, 0x0, true, 0x5f0fe9cc6e0e62b5)
#define _m79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*)>*), "$ZwAlpcRevokeSecurityContext$ntoskrnl.exe", 0x3f2dd0, 0x0, true, 0x10ce21c730412e92)
#define _m80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::port_message_t*, struct alpc::message_attributes_t*, struct nt::port_message_t*, uint64_t*, struct alpc::message_attributes_t*, int64_t*)>*), "$ZwAlpcSendWaitReceivePort$ntoskrnl.exe", 0x3f2df0, 0x0, true, 0x1216ff555c67cb5a)
#define _m81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum alpc::port_information_class_t, void*, uint32_t)>*), "$ZwAlpcSetInformation$ntoskrnl.exe", 0x3f2e10, 0x0, true, 0x9e01ca6c7fcce51e)
#define _m82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum nt::apphelpcommand_t, void*)>*), "$ZwApphelpCacheControl$ntoskrnl.exe", 0x3f25f0, 0x0, true, 0xa18c828bc5452626)
#define _m83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwAreMappedFilesTheSame$ntoskrnl.exe", 0x3f2e30, 0x0, true, 0x82b3a28138fd7a41)
#define _m84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwAssignProcessToJobObject$ntoskrnl.exe", 0x3f2e50, 0x0, true, 0x2196aa93c1cdb926)
#define _m85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, void*, void*, int32_t, uint64_t, uint8_t*)>*), "$ZwAssociateWaitCompletionPacket$ntoskrnl.exe", 0x3f2e70, 0x0, true, 0x11de64897061cf20)
#define _m86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, int32_t)>*), "$ZwCallbackReturn$ntoskrnl.exe", 0x3f1d10, 0x0, true, 0xc13c4ad8d09d451e)
#define _m87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*)>*), "$ZwCancelIoFile$ntoskrnl.exe", 0x3f2810, 0x0, true, 0xcd9f4ee52535fa6b)
#define _m88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, struct io::status_block_t*)>*), "$ZwCancelIoFileEx$ntoskrnl.exe", 0x3f2eb0, 0x0, true, 0x2200b8b7e8ead79a)
#define _m89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, struct io::status_block_t*)>*), "$ZwCancelSynchronousIoFile$ntoskrnl.exe", 0x3f2ed0, 0x0, true, 0x68a4db8e40892a33)
#define _m90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "$ZwCancelTimer$ntoskrnl.exe", 0x3f2890, 0x0, true, 0x2d581f12cff10ade)
#define _m91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwCancelTimer2$ntoskrnl.exe", 0x3f2ef0, 0x0, true, 0x1457f385a02d80b4)
#define _m92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "$ZwCancelWaitCompletionPacket$ntoskrnl.exe", 0x3f2f10, 0x0, true, 0xb416019b226749f3)
#define _m93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwClearEvent$ntoskrnl.exe", 0x3f2430, 0x0, true, 0xe23616ae9002905d)
#define _m94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwClose$ntoskrnl.exe", 0x3f1e50, 0x0, true, 0x95c46379fcaf02be)
#define _m95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, uint8_t)>*), "$ZwCloseObjectAuditAlarm$ntoskrnl.exe", 0x3f23d0, 0x0, true, 0x6ca19d3984490ddd)
#define _m96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwCommitComplete$ntoskrnl.exe", 0x3f2f30, 0x0, true, 0x19ea3da60e8c1ddf)
#define _m97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwCommitEnlistment$ntoskrnl.exe", 0x3f2f50, 0x0, true, 0xd3b8688f2b5efb9b)
#define _m98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "$ZwCommitRegistryTransaction$ntoskrnl.exe", 0x3f2f70, 0x0, true, 0xca8aa2ab478762ce)
#define _m99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "$ZwCommitTransaction$ntoskrnl.exe", 0x3f2f90, 0x0, true, 0xd35f2286118ac4d0)
#define _n00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void**)>*), "$ZwCompactKeys$ntoskrnl.exe", 0x3f2fb0, 0x0, true, 0x2d923473075a441b)
#define _n01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwCompareObjects$ntoskrnl.exe", 0x3f2fd0, 0x0, true, 0x3e8444b60c30c81)
#define _n02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t*)>*), "$ZwCompareTokens$ntoskrnl.exe", 0x3f3010, 0x0, true, 0x56a199f5df8a8572)
#define _n03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwCompleteConnectPort$ntoskrnl.exe", 0x3f3030, 0x0, true, 0x241d8cfb29d3a2ac)
#define _n04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwCompressKey$ntoskrnl.exe", 0x3f3050, 0x0, true, 0x9880fb6bec556192)
#define _n05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, nt::unicode_view*, struct sec::quality_of_service_t*, struct win::port_view_t*, struct nt::remote_port_view_t*, uint32_t*, void*, uint32_t*)>*), "$ZwConnectPort$ntoskrnl.exe", 0x3f3070, 0x0, true, 0xab6ca952e0d6efa)
#define _n06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::context*, uint8_t)>*), "$ZwContinue$ntoskrnl.exe", 0x3f24d0, 0x0, true, 0xc643ad2f75c7d7ca)
#define _n07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*), "$ZwCreateDebugObject$ntoskrnl.exe", 0x3f3110, 0x0, true, 0x30f4ab083faadae3)
#define _n08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwCreateDirectoryObject$ntoskrnl.exe", 0x3f3130, 0x0, true, 0xe61bb835d3da6d39)
#define _n09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, uint32_t)>*), "$ZwCreateDirectoryObjectEx$ntoskrnl.exe", 0x3f3150, 0x0, true, 0x12e5c1451ce50fda)
#define _n10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint64_t, uint64_t, uint64_t, uint32_t, void*, uint32_t, uint32_t*)>*), "$ZwCreateEnclave$ntoskrnl.exe", 0x3f3170, 0x0, true, 0x9b8ee4e5fcd47341)
#define _n11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, void*, void*, struct nt::object_attributes_t*, uint32_t, uint32_t, void*)>*), "$ZwCreateEnlistment$ntoskrnl.exe", 0x3f3190, 0x0, true, 0xf61cf7c4e956be4f)
#define _n12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::event_type_t, uint8_t)>*), "$ZwCreateEvent$ntoskrnl.exe", 0x3f2570, 0x0, true, 0xbda7c9ea2cba5318)
#define _n13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwCreateEventPair$ntoskrnl.exe", 0x3f31b0, 0x0, true, 0x6028888e5ba8efae)
#define _n14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, int64_t*, uint32_t, uint32_t, uint32_t, uint32_t, void*, uint32_t)>*), "$ZwCreateFile$ntoskrnl.exe", 0x3f2710, 0x0, true, 0x33994ea492f4790a)
#define _n15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*), "$ZwCreateIoCompletion$ntoskrnl.exe", 0x3f31f0, 0x0, true, 0xd6d82f4a7f295639)
#define _n16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t)>*), "$ZwCreateIRTimer$ntoskrnl.exe", 0x3f31d0, 0x0, true, 0x9b3f39c17fef558a)
#define _n17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwCreateJobObject$ntoskrnl.exe", 0x3f3210, 0x0, true, 0xfc772fb76b2e419e)
#define _n18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, struct win::job_set_array_t*, uint32_t)>*), "$ZwCreateJobSet$ntoskrnl.exe", 0x3f3230, 0x0, true, 0x6f9080926407aed8)
#define _n19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t, nt::unicode_view*, uint32_t, uint32_t*)>*), "$ZwCreateKey$ntoskrnl.exe", 0x3f2010, 0x0, true, 0xfd2e6f3460f887ec)
#define _n20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t, nt::unicode_view*, uint32_t, void*, uint32_t*)>*), "$ZwCreateKeyTransacted$ntoskrnl.exe", 0x3f3250, 0x0, true, 0x8a4f189bc54cc650)
#define _n21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*), "$ZwCreateKeyedEvent$ntoskrnl.exe", 0x3f3270, 0x0, true, 0xd2926db113a0a23b)
#define _n22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*, uint32_t, struct nt::object_attributes_t*, void*, uint32_t, struct nt::sid_and_attributes_t*, uint32_t, void**)>*), "$ZwCreateLowBoxToken$ntoskrnl.exe", 0x3f3290, 0x0, true, 0x71d28fd8b7787a44)
#define _n23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, uint32_t, uint32_t, uint32_t, int64_t*)>*), "$ZwCreateMailslotFile$ntoskrnl.exe", 0x3f32b0, 0x0, true, 0xff2cc179493ff16d)
#define _n24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint8_t)>*), "$ZwCreateMutant$ntoskrnl.exe", 0x3f32d0, 0x0, true, 0x99f518b2246f3538)
#define _n25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int64_t*)>*), "$ZwCreateNamedPipeFile$ntoskrnl.exe", 0x3f32f0, 0x0, true, 0xf3913722cb9435a4)
#define _n26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, int64_t*, int64_t*, uint32_t)>*), "$ZwCreatePagingFile$ntoskrnl.exe", 0x3f3310, 0x0, true, 0x64023729f0c2c6bf)
#define _n27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*), "$ZwCreatePartition$ntoskrnl.exe", 0x3f3330, 0x0, true, 0x5ec4565c7136948c)
#define _n28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, struct nt::object_attributes_t*, uint32_t, uint32_t, uint32_t)>*), "$ZwCreatePort$ntoskrnl.exe", 0x3f3350, 0x0, true, 0xabd8fe9363333628)
#define _n29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*)>*), "$ZwCreatePrivateNamespace$ntoskrnl.exe", 0x3f3370, 0x0, true, 0xa8e5086f6d7698c0)
#define _n30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, uint8_t, void*, void*, void*)>*), "$ZwCreateProcess$ntoskrnl.exe", 0x3f3390, 0x0, true, 0x1412a60fe7abb9ec)
#define _n31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, uint32_t, void*, void*, void*, uint32_t)>*), "$ZwCreateProcessEx$ntoskrnl.exe", 0x3f2610, 0x0, true, 0x6577d0bcbcb3eaf9)
#define _n32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*, void*, uint64_t, uint32_t, uint32_t*, uint32_t, enum nt::kprofile_source_t, uint64_t)>*), "$ZwCreateProfile$ntoskrnl.exe", 0x3f33b0, 0x0, true, 0xbe71a3cc6fc200e6)
#define _n33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*, void*, uint64_t, uint32_t, uint32_t*, uint32_t, enum nt::kprofile_source_t, uint16_t, struct nt::group_affinity_t*)>*), "$ZwCreateProfileEx$ntoskrnl.exe", 0x3f33d0, 0x0, true, 0x7a05a05b8399ab8e)
#define _n34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*), "$ZwCreateRegistryTransaction$ntoskrnl.exe", 0x3f33f0, 0x0, true, 0xadd6922dd918d55a)
#define _n35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, void*, struct nt::guid_t*, struct nt::object_attributes_t*, uint32_t, nt::unicode_view*)>*), "$ZwCreateResourceManager$ntoskrnl.exe", 0x3f3410, 0x0, true, 0xaa94f9247680bf4a)
#define _n36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, void*)>*), "$ZwCreateSection$ntoskrnl.exe", 0x3f25b0, 0x0, true, 0x48a9febe6a5443c5)
#define _n37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int32_t, int32_t)>*), "$ZwCreateSemaphore$ntoskrnl.exe", 0x3f3450, 0x0, true, 0x5c68d2d9694a2e09)
#define _n38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, nt::unicode_view*)>*), "$ZwCreateSymbolicLinkObject$ntoskrnl.exe", 0x3f3470, 0x0, true, 0x9c5d26029edf429f)
#define _n39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, struct nt::client_id_t*, nt::context*, struct win::initial_teb_t*, uint8_t)>*), "$ZwCreateThread$ntoskrnl.exe", 0x3f2630, 0x0, true, 0xa0d7fb93a7e412e2)
#define _n40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, void*, void*, uint32_t, uint64_t, uint64_t, uint64_t, struct ps::attribute_list_t*)>*), "$ZwCreateThreadEx$ntoskrnl.exe", 0x3f3490, 0x0, true, 0x2324cbbbd662a822)
#define _n41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::timer_type_t)>*), "$ZwCreateTimer$ntoskrnl.exe", 0x3f34b0, 0x0, true, 0xf77a67a6e2063ed2)
#define _n42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void*, void*, uint32_t, uint32_t)>*), "$ZwCreateTimer2$ntoskrnl.exe", 0x3f34d0, 0x0, true, 0x6c2bf72ed41d6e0)
#define _n43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::token_type_t, struct nt::luid_t*, int64_t*, struct win::token_user_t*, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct win::token_owner_t*, struct win::token_primary_group_t*, struct win::token_default_dacl_t*, struct nt::token_source_t*)>*), "$ZwCreateToken$ntoskrnl.exe", 0x3f34f0, 0x0, true, 0x87c87c975f3eb63c)
#define _n44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::token_type_t, struct nt::luid_t*, int64_t*, struct win::token_user_t*, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct win::token_security_attributes_information_t*, struct win::token_security_attributes_information_t*, struct nt::token_groups_t*, struct nt::token_mandatory_policy_t*, struct win::token_owner_t*, struct win::token_primary_group_t*, struct win::token_default_dacl_t*, struct nt::token_source_t*)>*), "$ZwCreateTokenEx$ntoskrnl.exe", 0x3f3510, 0x0, true, 0x19842d7838bb5c1f)
#define _n45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::guid_t*, void*, uint32_t, uint32_t, uint32_t, int64_t*, nt::unicode_view*)>*), "$ZwCreateTransaction$ntoskrnl.exe", 0x3f3530, 0x0, true, 0xab86cf709ea326de)
#define _n46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, nt::unicode_view*, uint32_t, uint32_t)>*), "$ZwCreateTransactionManager$ntoskrnl.exe", 0x3f3550, 0x0, true, 0xc5cec24c8811cf0c)
#define _n47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, void**, uint32_t, uint32_t, struct nt::object_attributes_t*, struct nt::object_attributes_t*, uint32_t, uint32_t, void*, struct ps::create_info_t*, struct ps::attribute_list_t*)>*), "$ZwCreateUserProcess$ntoskrnl.exe", 0x3f3570, 0x0, true, 0x95327f95b80b6ee1)
#define _n48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwCreateWaitCompletionPacket$ntoskrnl.exe", 0x3f3590, 0x0, true, 0xc6f3311c0298ce04)
#define _n49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, struct nt::object_attributes_t*, uint32_t, uint32_t, uint32_t)>*), "$ZwCreateWaitablePort$ntoskrnl.exe", 0x3f35b0, 0x0, true, 0x63be5ed7cfb63bee)
#define _n50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct wnf::state_name_t*, enum wnf::state_name_lifetime_t, enum wnf::data_scope_t, uint8_t, const struct wnf::type_id_t*, uint32_t, void*)>*), "$ZwCreateWnfStateName$ntoskrnl.exe", 0x3f35d0, 0x0, true, 0x177d83ea3b41fe9d)
#define _n51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, void*, void*, void*, uint32_t, uint64_t, uint64_t)>*), "$ZwCreateWorkerFactory$ntoskrnl.exe", 0x3f35f0, 0x0, true, 0xe1dc5d68f4f0c4df)
#define _n52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwDebugActiveProcess$ntoskrnl.exe", 0x3f3610, 0x0, true, 0x1329dbd090dc2f41)
#define _n53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::client_id_t*, int32_t)>*), "$ZwDebugContinue$ntoskrnl.exe", 0x3f3630, 0x0, true, 0x35b8f1ab282e63f)
#define _n54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, int64_t*)>*), "$ZwDelayExecution$ntoskrnl.exe", 0x3f22f0, 0x0, true, 0xc65c7a0d4be7509e)
#define _n55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t)>*), "$ZwDeleteAtom$ntoskrnl.exe", 0x3f3650, 0x0, true, 0x4f4074a0675bfde0)
#define _n56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "$ZwDeleteBootEntry$ntoskrnl.exe", 0x3f3670, 0x0, true, 0x9de435262fbe7864)
#define _n57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "$ZwDeleteDriverEntry$ntoskrnl.exe", 0x3f3690, 0x0, true, 0x18fd00e430e7943d)
#define _n58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*)>*), "$ZwDeleteFile$ntoskrnl.exe", 0x3f36b0, 0x0, true, 0x22ef1dd8cf397252)
#define _n59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwDeleteKey$ntoskrnl.exe", 0x3f36d0, 0x0, true, 0xc38964af2c68dba9)
#define _n60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, uint8_t)>*), "$ZwDeleteObjectAuditAlarm$ntoskrnl.exe", 0x3f36f0, 0x0, true, 0x3f2d85be4d07406e)
#define _n61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwDeletePrivateNamespace$ntoskrnl.exe", 0x3f3710, 0x0, true, 0x8bde09ce0613fb0d)
#define _n62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*)>*), "$ZwDeleteValueKey$ntoskrnl.exe", 0x3f3730, 0x0, true, 0xb4f321c63fc31234)
#define _n63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct wnf::state_name_t*, const void*)>*), "$ZwDeleteWnfStateData$ntoskrnl.exe", 0x3f3750, 0x0, true, 0xa2625987866b7674)
#define _n64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct wnf::state_name_t*)>*), "$ZwDeleteWnfStateName$ntoskrnl.exe", 0x3f3770, 0x0, true, 0xdc47e55d1ef764bc)
#define _n65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, void*, uint32_t, void*, uint32_t)>*), "$ZwDeviceIoControlFile$ntoskrnl.exe", 0x3f1d50, 0x0, true, 0x54b577b9c32905c5)
#define _n66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwDisableLastKnownGood$ntoskrnl.exe", 0x3f37b0, 0x0, true, 0xd4a99208b7ffdf5a)
#define _n67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*)>*), "$ZwDisplayString$ntoskrnl.exe", 0x3f37d0, 0x0, true, 0x7869746c4b23a868)
#define _n68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*)>*), "$ZwDrawText$ntoskrnl.exe", 0x3f37f0, 0x0, true, 0xd6bc394e6f8b4984)
#define _n69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, void**, uint32_t, uint32_t, uint32_t)>*), "$ZwDuplicateObject$ntoskrnl.exe", 0x3f23f0, 0x0, true, 0x5c24711b01b07510)
#define _n70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::object_attributes_t*, uint8_t, enum nt::token_type_t, void**)>*), "$ZwDuplicateToken$ntoskrnl.exe", 0x3f24b0, 0x0, true, 0xc486233a94f394af)
#define _n71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwEnableLastKnownGood$ntoskrnl.exe", 0x3f3810, 0x0, true, 0xb5703c9e28c1c6a6)
#define _n72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "$ZwEnumerateBootEntries$ntoskrnl.exe", 0x3f3830, 0x0, true, 0x28262f64b36ccd41)
#define _n73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "$ZwEnumerateDriverEntries$ntoskrnl.exe", 0x3f3850, 0x0, true, 0x327b9f8ce67554fe)
#define _n74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, enum nt::key_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwEnumerateKey$ntoskrnl.exe", 0x3f22b0, 0x0, true, 0x45ffdb743cc353f8)
#define _n75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, uint32_t*)>*), "$ZwEnumerateSystemEnvironmentValuesEx$ntoskrnl.exe", 0x3f3870, 0x0, true, 0x86aa5629a243d8a5)
#define _n76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::ktmobject_type_t, struct nt::ktmobject_cursor_t*, uint32_t, uint32_t*)>*), "$ZwEnumerateTransactionObject$ntoskrnl.exe", 0x3f3890, 0x0, true, 0x9417c9ce5267a3ed)
#define _n77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, enum nt::key_value_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwEnumerateValueKey$ntoskrnl.exe", 0x3f1ed0, 0x0, true, 0xa2f020b6a06f56a4)
#define _n78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwExtendSection$ntoskrnl.exe", 0x3f38b0, 0x0, true, 0xa9bafe95d71d5dd8)
#define _n79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum win::filter_boot_option_operation_t, uint32_t, uint32_t, void*, uint32_t)>*), "$ZwFilterBootOption$ntoskrnl.exe", 0x3f38d0, 0x0, true, 0x74753272b8364713)
#define _n80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct nt::token_groups_t*, void**)>*), "$ZwFilterToken$ntoskrnl.exe", 0x3f38f0, 0x0, true, 0xd652bbecb67afbc)
#define _n81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct nt::token_groups_t*, uint32_t, nt::unicode_view*, uint32_t, nt::unicode_view*, struct nt::token_groups_t*, struct win::token_security_attributes_information_t*, struct win::token_security_attributes_information_t*, struct nt::token_groups_t*, void**)>*), "$ZwFilterTokenEx$ntoskrnl.exe", 0x3f3910, 0x0, true, 0xdcfdc86f331920ac)
#define _n82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*, uint32_t, wchar_t*)>*), "$ZwFindAtom$ntoskrnl.exe", 0x3f1ef0, 0x0, true, 0x607920e60625c730)
#define _n83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*)>*), "$ZwFlushBuffersFile$ntoskrnl.exe", 0x3f25d0, 0x0, true, 0x78664e8e15a765cd)
#define _n84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, struct io::status_block_t*)>*), "$ZwFlushBuffersFileEx$ntoskrnl.exe", 0x3f3930, 0x0, true, 0x8346fe28e6118a92)
#define _n85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, uint32_t)>*), "$ZwFlushInstallUILanguage$ntoskrnl.exe", 0x3f3950, 0x0, true, 0xd657d678b6f1c106)
#define _n86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint64_t)>*), "$ZwFlushInstructionCache$ntoskrnl.exe", 0x3f3970, 0x0, true, 0xbba3dd8658f7d410)
#define _n87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwFlushKey$ntoskrnl.exe", 0x3f3990, 0x0, true, 0xebe80dadb0662a35)
#define _n88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(...)>*), "$ZwFlushProcessWriteBuffers$ntoskrnl.exe", 0x3f39b0, 0x0, true, 0x44cb3b4dc2fe3e39)
#define _n89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint64_t*, struct io::status_block_t*)>*), "$ZwFlushVirtualMemory$ntoskrnl.exe", 0x3f39d0, 0x0, true, 0xfa7abb4589e09ab0)
#define _n90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwFlushWriteBuffer$ntoskrnl.exe", 0x3f39f0, 0x0, true, 0xb5af441109f5b65e)
#define _n91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t*, uint64_t*)>*), "$ZwFreeUserPhysicalPages$ntoskrnl.exe", 0x3f3a10, 0x0, true, 0x6dda4745537d52ad)
#define _n92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*), "$ZwFreeVirtualMemory$ntoskrnl.exe", 0x3f2030, 0x0, true, 0x4227b4cb5fcce27f)
#define _n93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "$ZwFreezeRegistry$ntoskrnl.exe", 0x3f3a30, 0x0, true, 0xfc9e96b39c893c26)
#define _n94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int64_t*, int64_t*)>*), "$ZwFreezeTransactions$ntoskrnl.exe", 0x3f3a50, 0x0, true, 0x96d0e997e91406fa)
#define _n95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, void*, uint32_t, void*, uint32_t)>*), "$ZwFsControlFile$ntoskrnl.exe", 0x3f2390, 0x0, true, 0x162f669383c5ded9)
#define _n96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t*)>*), "$ZwGetCachedSigningLevel$ntoskrnl.exe", 0x3f3a70, 0x0, true, 0x34f2adb4d86cdc1e)
#define _n97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct wnf::state_name_t*, uint64_t*, uint32_t, uint32_t, struct wnf::delivery_descriptor_t*, uint32_t)>*), "$ZwGetCompleteWnfStateSubscription$ntoskrnl.exe", 0x3f3a90, 0x0, true, 0x7fe035a4e082278e)
#define _n98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::context*)>*), "$ZwGetContextThread$ntoskrnl.exe", 0x3f3ab0, 0x0, true, 0xa06262e8e148996c)
#define _n99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(...)>*), "$ZwGetCurrentProcessorNumber$ntoskrnl.exe", 0x3f3ad0, 0x0, true, 0xf67b6b630d4abb99)
#define _o00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwGetCurrentProcessorNumberEx$ntoskrnl.exe", 0x3f3af0, 0x0, true, 0xb3eb4a0df60eca89)
#define _o01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::device_power_state_t*)>*), "$ZwGetDevicePowerState$ntoskrnl.exe", 0x3f3b10, 0x0, true, 0xcf618c6c8bf6259f)
#define _o02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*, void*)>*), "$ZwGetMUIRegistryInfo$ntoskrnl.exe", 0x3f3b30, 0x0, true, 0x4a2c7fc350b2baca)
#define _o03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, void**)>*), "$ZwGetNextProcess$ntoskrnl.exe", 0x3f3b50, 0x0, true, 0x7f82179469e80eed)
#define _o04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, uint32_t, uint32_t, void**)>*), "$ZwGetNextThread$ntoskrnl.exe", 0x3f3b70, 0x0, true, 0x5b4e66dd9b20bdd6)
#define _o05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, void*, void**, uint32_t*)>*), "$ZwGetNlsSectionPtr$ntoskrnl.exe", 0x3f3b90, 0x0, true, 0xdf456ebafc07f93b)
#define _o06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::transaction_notification_t*, uint32_t, int64_t*, uint32_t*, uint32_t, uint64_t)>*), "$ZwGetNotificationResourceManager$ntoskrnl.exe", 0x3f3bb0, 0x0, true, 0xe23bf61d8fb18261)
#define _o07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint64_t, void**, uint64_t*, uint32_t*)>*), "$ZwGetWriteWatch$ntoskrnl.exe", 0x3f3bd0, 0x0, true, 0x9b20bccfa2280d72)
#define _o08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwImpersonateAnonymousToken$ntoskrnl.exe", 0x3f3bf0, 0x0, true, 0x6300c11c2501c32)
#define _o09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*)>*), "$ZwImpersonateClientOfPort$ntoskrnl.exe", 0x3f2050, 0x0, true, 0x6b9fa4cf3ff262eb)
#define _o10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct sec::quality_of_service_t*)>*), "$ZwImpersonateThread$ntoskrnl.exe", 0x3f3c10, 0x0, true, 0x75027faa81e14712)
#define _o11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t, uint32_t*)>*), "$ZwInitializeEnclave$ntoskrnl.exe", 0x3f3c30, 0x0, true, 0xea802cd773664505)
#define _o12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t*, int64_t*)>*), "$ZwInitializeNlsFiles$ntoskrnl.exe", 0x3f3c50, 0x0, true, 0x803abb2b49616086)
#define _o13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t)>*), "$ZwInitializeRegistry$ntoskrnl.exe", 0x3f3c70, 0x0, true, 0x850fb6404059a77d)
#define _o14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum power::action_t, enum nt::system_power_state_t, uint32_t, uint8_t)>*), "$ZwInitiatePowerAction$ntoskrnl.exe", 0x3f3c90, 0x0, true, 0x47b8212da7c4cc75)
#define _o15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwIsProcessInJob$ntoskrnl.exe", 0x3f2650, 0x0, true, 0x2058e3b28cda17c7)
#define _o16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(...)>*), "$ZwIsSystemResumeAutomatic$ntoskrnl.exe", 0x3f3cb0, 0x0, true, 0xa60048dbaba6771c)
#define _o17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwIsUILanguageComitted$ntoskrnl.exe", 0x3f3cd0, 0x0, true, 0xe2e596eb63a3e6fd)
#define _o18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*)>*), "$ZwListenPort$ntoskrnl.exe", 0x3f3cf0, 0x0, true, 0x2aaeed172fbb1a6d)
#define _o19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*)>*), "$ZwLoadDriver$ntoskrnl.exe", 0x3f3d10, 0x0, true, 0x1e60ac450b6ed1a5)
#define _o20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint64_t, uint32_t, void*, uint32_t, uint64_t*, uint32_t*)>*), "$ZwLoadEnclaveData$ntoskrnl.exe", 0x3f3d30, 0x0, true, 0x47c94cc007e52ba2)
#define _o21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_attributes_t*)>*), "$ZwLoadKey$ntoskrnl.exe", 0x3f3d50, 0x0, true, 0x32e0d4e749509c41)
#define _o22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_attributes_t*, uint32_t)>*), "$ZwLoadKey2$ntoskrnl.exe", 0x3f3d70, 0x0, true, 0x4a2253ededaac43e)
#define _o23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_attributes_t*, uint32_t, void*, void*, uint32_t, void**, struct io::status_block_t*)>*), "$ZwLoadKeyEx$ntoskrnl.exe", 0x3f3d90, 0x0, true, 0x401563e4359295c2)
#define _o24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, int64_t*, int64_t*, uint32_t, uint8_t, uint8_t)>*), "$ZwLockFile$ntoskrnl.exe", 0x3f3db0, 0x0, true, 0x81d3c36578f61c1e)
#define _o25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, uint32_t*)>*), "$ZwLockProductActivationKeys$ntoskrnl.exe", 0x3f3dd0, 0x0, true, 0x51c06e435aa0b20e)
#define _o26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwLockRegistryKey$ntoskrnl.exe", 0x3f3df0, 0x0, true, 0x6610404c19eb4897)
#define _o27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*), "$ZwLockVirtualMemory$ntoskrnl.exe", 0x3f3e10, 0x0, true, 0x83c8641e149b8da2)
#define _o28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwMakePermanentObject$ntoskrnl.exe", 0x3f3e30, 0x0, true, 0xc01e51362528819a)
#define _o29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwMakeTemporaryObject$ntoskrnl.exe", 0x3f3e50, 0x0, true, 0xd1d90979016ac82b)
#define _o30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum nt::memory_partition_information_class_t, void*, uint32_t)>*), "$ZwManagePartition$ntoskrnl.exe", 0x3f3e90, 0x0, true, 0x5a5f81fdea41b2f4)
#define _o31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint32_t*, uint32_t*, uint32_t*, void**)>*), "$ZwMapCMFModule$ntoskrnl.exe", 0x3f3eb0, 0x0, true, 0x7adcf81a35bfb686)
#define _o32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t, uint64_t*)>*), "$ZwMapUserPhysicalPages$ntoskrnl.exe", 0x3f3ed0, 0x0, true, 0xce43a2f487a7fe54)
#define _o33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint64_t, uint64_t*)>*), "$ZwMapUserPhysicalPagesScatter$ntoskrnl.exe", 0x3f1cd0, 0x0, true, 0xa5330e510f208cd1)
#define _o34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**, uint64_t, uint64_t, int64_t*, uint64_t*, enum nt::section_inherit_t, uint32_t, uint32_t)>*), "$ZwMapViewOfSection$ntoskrnl.exe", 0x3f2170, 0x0, true, 0x4c6e1858a4742eaf)
#define _o35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct boot::entry_t*)>*), "$ZwModifyBootEntry$ntoskrnl.exe", 0x3f3f10, 0x0, true, 0xe35fd2c41d8bf3ce)
#define _o36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct efi::driver_entry_t*)>*), "$ZwModifyDriverEntry$ntoskrnl.exe", 0x3f3f30, 0x0, true, 0x29ec60e04f049423)
#define _o37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, uint32_t, uint8_t)>*), "$ZwNotifyChangeDirectoryFile$ntoskrnl.exe", 0x3f3f50, 0x0, true, 0x5a275bf41115f68a)
#define _o38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, uint8_t, void*, uint32_t, uint8_t)>*), "$ZwNotifyChangeKey$ntoskrnl.exe", 0x3f3f90, 0x0, true, 0x43dbcabc383da03a)
#define _o39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::object_attributes_t*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, uint8_t, void*, uint32_t, uint8_t)>*), "$ZwNotifyChangeMultipleKeys$ntoskrnl.exe", 0x3f3fb0, 0x0, true, 0xd7a29c56c299c756)
#define _o40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, int64_t*, enum io::session_event_t, enum io::session_state_t, enum io::session_state_t, void*, uint32_t)>*), "$ZwNotifyChangeSession$ntoskrnl.exe", 0x3f3fd0, 0x0, true, 0x454cf90cc164307)
#define _o41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenDirectoryObject$ntoskrnl.exe", 0x3f2770, 0x0, true, 0x4d18f6e2f25d71d4)
#define _o42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, void*, struct nt::guid_t*, struct nt::object_attributes_t*)>*), "$ZwOpenEnlistment$ntoskrnl.exe", 0x3f3ff0, 0x0, true, 0xfe567e5e4ab0d18b)
#define _o43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenEvent$ntoskrnl.exe", 0x3f2470, 0x0, true, 0x7c10fbb936ec2264)
#define _o44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenEventPair$ntoskrnl.exe", 0x3f4010, 0x0, true, 0x3eb27902ab016fe8)
#define _o45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, uint32_t, uint32_t)>*), "$ZwOpenFile$ntoskrnl.exe", 0x3f22d0, 0x0, true, 0xc664dd331778fa0f)
#define _o46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenIoCompletion$ntoskrnl.exe", 0x3f4030, 0x0, true, 0x14027a2efe154098)
#define _o47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenJobObject$ntoskrnl.exe", 0x3f4050, 0x0, true, 0x7b1daa2cbd50c9a8)
#define _o48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenKey$ntoskrnl.exe", 0x3f1eb0, 0x0, true, 0x2001c46fe56f7c17)
#define _o49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*), "$ZwOpenKeyEx$ntoskrnl.exe", 0x3f4070, 0x0, true, 0xe1ab1de134bf3e2f)
#define _o50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*)>*), "$ZwOpenKeyTransacted$ntoskrnl.exe", 0x3f4090, 0x0, true, 0xd92e30ec67cc5707)
#define _o51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t, void*)>*), "$ZwOpenKeyTransactedEx$ntoskrnl.exe", 0x3f40b0, 0x0, true, 0xb653bf7ade53fba0)
#define _o52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenKeyedEvent$ntoskrnl.exe", 0x3f40d0, 0x0, true, 0x275e4f1531ac6597)
#define _o53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenMutant$ntoskrnl.exe", 0x3f40f0, 0x0, true, 0x7f5f0f91f7a0af3b)
#define _o54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, uint32_t, struct nt::privilege_set_t*, uint8_t, uint8_t, uint8_t*)>*), "$ZwOpenObjectAuditAlarm$ntoskrnl.exe", 0x3f4110, 0x0, true, 0x521587b6c19885b2)
#define _o55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenPartition$ntoskrnl.exe", 0x3f4130, 0x0, true, 0x1236a2b938cde4ac)
#define _o56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*)>*), "$ZwOpenPrivateNamespace$ntoskrnl.exe", 0x3f4150, 0x0, true, 0x1b531bd65813a4bd)
#define _o57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::client_id_t*)>*), "$ZwOpenProcess$ntoskrnl.exe", 0x3f2130, 0x0, true, 0x4950ecab5cd17d89)
#define _o58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void**)>*), "$ZwOpenProcessToken$ntoskrnl.exe", 0x3f4170, 0x0, true, 0x6489c1d28f6e0465)
#define _o59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, void**)>*), "$ZwOpenProcessTokenEx$ntoskrnl.exe", 0x3f2270, 0x0, true, 0x97b1d804213042be)
#define _o60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenRegistryTransaction$ntoskrnl.exe", 0x3f4190, 0x0, true, 0xa04b6c5a4d90d573)
#define _o61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, void*, struct nt::guid_t*, struct nt::object_attributes_t*)>*), "$ZwOpenResourceManager$ntoskrnl.exe", 0x3f41b0, 0x0, true, 0x34c4dd4c66d20df7)
#define _o62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenSection$ntoskrnl.exe", 0x3f2350, 0x0, true, 0xf5c47957469a00fc)
#define _o63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenSemaphore$ntoskrnl.exe", 0x3f41d0, 0x0, true, 0x8c29318c57b24a00)
#define _o64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenSession$ntoskrnl.exe", 0x3f41f0, 0x0, true, 0xe475e808c211f7fd)
#define _o65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenSymbolicLinkObject$ntoskrnl.exe", 0x3f4210, 0x0, true, 0x99486a893aaae513)
#define _o66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::client_id_t*)>*), "$ZwOpenThread$ntoskrnl.exe", 0x3f4230, 0x0, true, 0x56035476895db9b8)
#define _o67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint8_t, void**)>*), "$ZwOpenThreadToken$ntoskrnl.exe", 0x3f20f0, 0x0, true, 0x27554e0128706449)
#define _o68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint8_t, uint32_t, void**)>*), "$ZwOpenThreadTokenEx$ntoskrnl.exe", 0x3f2250, 0x0, true, 0xbe305cc74b69fbec)
#define _o69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*), "$ZwOpenTimer$ntoskrnl.exe", 0x3f4250, 0x0, true, 0x229ee53df0da6ca6)
#define _o70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::guid_t*, void*)>*), "$ZwOpenTransaction$ntoskrnl.exe", 0x3f4270, 0x0, true, 0xe5a5318df7571987)
#define _o71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, nt::unicode_view*, struct nt::guid_t*, uint32_t)>*), "$ZwOpenTransactionManager$ntoskrnl.exe", 0x3f4290, 0x0, true, 0x8efe7eafcd610ce5)
#define _o72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum win::plugplay_control_class_t, void*, uint32_t)>*), "$ZwPlugPlayControl$ntoskrnl.exe", 0x3f42b0, 0x0, true, 0xb75c530358f94801)
#define _o73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum power::information_level_t, void*, uint32_t, void*, uint32_t)>*), "$ZwPowerInformation$ntoskrnl.exe", 0x3f2850, 0x0, true, 0x406085665ae50de2)
#define _o74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwPrePrepareComplete$ntoskrnl.exe", 0x3f42d0, 0x0, true, 0x4608062a0b0ac595)
#define _o75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwPrePrepareEnlistment$ntoskrnl.exe", 0x3f42f0, 0x0, true, 0x252f48c898aff16d)
#define _o76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwPrepareComplete$ntoskrnl.exe", 0x3f4310, 0x0, true, 0x7b8b0880380fca87)
#define _o77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwPrepareEnlistment$ntoskrnl.exe", 0x3f4330, 0x0, true, 0x87ce47f5dadfd4e7)
#define _o78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::privilege_set_t*, uint8_t*)>*), "$ZwPrivilegeCheck$ntoskrnl.exe", 0x3f4350, 0x0, true, 0xffba7d201a9f33c8)
#define _o79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, void*, uint32_t, struct nt::privilege_set_t*, uint8_t)>*), "$ZwPrivilegeObjectAuditAlarm$ntoskrnl.exe", 0x3f4370, 0x0, true, 0x53ea49a64d99222e)
#define _o80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, void*, struct nt::privilege_set_t*, uint8_t)>*), "$ZwPrivilegedServiceAuditAlarm$ntoskrnl.exe", 0x3f4390, 0x0, true, 0x1b9832a91a8d1209)
#define _o81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*), "$ZwPropagationComplete$ntoskrnl.exe", 0x3f43b0, 0x0, true, 0x16d72b0c99f58aa9)
#define _o82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, int32_t)>*), "$ZwPropagationFailed$ntoskrnl.exe", 0x3f43d0, 0x0, true, 0xea6fd215c96049ca)
#define _o83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t, uint32_t*)>*), "$ZwProtectVirtualMemory$ntoskrnl.exe", 0x3f2670, 0x0, true, 0xbaa15c7bcb236d92)
#define _o84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t*)>*), "$ZwPulseEvent$ntoskrnl.exe", 0x3f4410, 0x0, true, 0x9870fb06fa32d7d8)
#define _o85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::file_basic_information_t*)>*), "$ZwQueryAttributesFile$ntoskrnl.exe", 0x3f2410, 0x0, true, 0xcec27f66f89d99e2)
#define _o86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, uint32_t*)>*), "$ZwQueryBootEntryOrder$ntoskrnl.exe", 0x3f4450, 0x0, true, 0xea47f6d13bfba5a7)
#define _o87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct boot::options_t*, uint32_t*)>*), "$ZwQueryBootOptions$ntoskrnl.exe", 0x3f4470, 0x0, true, 0xb106bbef21b47d6a)
#define _o88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t)>*), "$ZwQueryDebugFilterState$ntoskrnl.exe", 0x3f4490, 0x0, true, 0x6d4ffe526503182)
#define _o89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, uint32_t*)>*), "$ZwQueryDefaultLocale$ntoskrnl.exe", 0x3f1f10, 0x0, true, 0xef5ed2ef426b9889)
#define _o90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*)>*), "$ZwQueryDefaultUILanguage$ntoskrnl.exe", 0x3f24f0, 0x0, true, 0xc6301533edd3517a)
#define _o91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t, uint8_t, nt::unicode_view*, uint8_t)>*), "$ZwQueryDirectoryFile$ntoskrnl.exe", 0x3f2310, 0x0, true, 0xebbd05ed0c3f5247)
#define _o92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, uint8_t, uint8_t, uint32_t*, uint32_t*)>*), "$ZwQueryDirectoryObject$ntoskrnl.exe", 0x3f44d0, 0x0, true, 0x3aff0b7d0cb77511)
#define _o93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, uint32_t*)>*), "$ZwQueryDriverEntryOrder$ntoskrnl.exe", 0x3f44f0, 0x0, true, 0xe60e458cc072d32b)
#define _o94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, uint8_t, void*, uint32_t, uint32_t*, uint8_t)>*), "$ZwQueryEaFile$ntoskrnl.exe", 0x3f4510, 0x0, true, 0x23fe39d9757665ca)
#define _o95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::event_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryEvent$ntoskrnl.exe", 0x3f2730, 0x0, true, 0xdece7863ec592958)
#define _o96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::file_network_open_information_t*)>*), "$ZwQueryFullAttributesFile$ntoskrnl.exe", 0x3f4530, 0x0, true, 0x55fe408e377e0c1e)
#define _o97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t, enum win::atom_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationAtom$ntoskrnl.exe", 0x3f4550, 0x0, true, 0x2ed7a6a4f6f0c76f)
#define _o98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::enlistment_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationEnlistment$ntoskrnl.exe", 0x3f4590, 0x0, true, 0x8059f511060da99e)
#define _o99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t)>*), "$ZwQueryInformationFile$ntoskrnl.exe", 0x3f1e90, 0x0, true, 0xfb34761dd560f1bf)
#define _p00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::jobobjectinfoclass_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationJobObject$ntoskrnl.exe", 0x3f45b0, 0x0, true, 0x83fb9a9d0a7da7da)
#define _p01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::port_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationPort$ntoskrnl.exe", 0x3f45d0, 0x0, true, 0xff09deb1228ce5f3)
#define _p02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::processinfoclass_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationProcess$ntoskrnl.exe", 0x3f1f90, 0x0, true, 0x91166c5ce96634e3)
#define _p03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::resourcemanager_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationResourceManager$ntoskrnl.exe", 0x3f45f0, 0x0, true, 0x910daa112520886f)
#define _p04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::threadinfoclass_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationThread$ntoskrnl.exe", 0x3f2110, 0x0, true, 0x5c732209fc845770)
#define _p05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::token_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationToken$ntoskrnl.exe", 0x3f2090, 0x0, true, 0xb0c7730886f96332)
#define _p06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::transaction_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationTransaction$ntoskrnl.exe", 0x3f4610, 0x0, true, 0x6aa89a306167cd3)
#define _p07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::transactionmanager_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationTransactionManager$ntoskrnl.exe", 0x3f4630, 0x0, true, 0x8bf83050c2ab58e4)
#define _p08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::workerfactoryinfoclass_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryInformationWorkerFactory$ntoskrnl.exe", 0x3f4650, 0x0, true, 0x65b9f71147e78c73)
#define _p09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(wchar_t*)>*), "$ZwQueryInstallUILanguage$ntoskrnl.exe", 0x3f4670, 0x0, true, 0xb3cc6f1de55efe49)
#define _p10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum nt::kprofile_source_t, uint32_t*)>*), "$ZwQueryIntervalProfile$ntoskrnl.exe", 0x3f4690, 0x0, true, 0x24dee27cbcd44173)
#define _p11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum io::completion_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryIoCompletion$ntoskrnl.exe", 0x3f46b0, 0x0, true, 0x549f8cf163d9c282)
#define _p12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::key_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryKey$ntoskrnl.exe", 0x3f1f30, 0x0, true, 0xcd0ee45c76a0d577)
#define _p13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, uint32_t*, void*, uint32_t, uint32_t*)>*), "$ZwQueryLicenseValue$ntoskrnl.exe", 0x3f46d0, 0x0, true, 0xb6b8e90705f88bc6)
#define _p14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct win::key_value_entry_t*, uint32_t, void*, uint32_t*, uint32_t*)>*), "$ZwQueryMultipleValueKey$ntoskrnl.exe", 0x3f46f0, 0x0, true, 0xe2d62db00aada703)
#define _p15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::mutant_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryMutant$ntoskrnl.exe", 0x3f4710, 0x0, true, 0xbfef87331dd41827)
#define _p16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::object_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryObject$ntoskrnl.exe", 0x3f1e70, 0x0, true, 0x87e39649ba68a5d7)
#define _p17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, uint32_t*)>*), "$ZwQueryOpenSubKeys$ntoskrnl.exe", 0x3f4730, 0x0, true, 0x936b145e80e07411)
#define _p18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, uint32_t, void*, uint32_t*)>*), "$ZwQueryOpenSubKeysEx$ntoskrnl.exe", 0x3f4750, 0x0, true, 0x3ce75498bee0f6ad)
#define _p19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int64_t*, int64_t*)>*), "$ZwQueryPerformanceCounter$ntoskrnl.exe", 0x3f2290, 0x0, true, 0x995f4bf5a4dccc9f)
#define _p20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwQueryPortInformationProcess$ntoskrnl.exe", 0x3f4770, 0x0, true, 0xe907bb5c1b7e9250)
#define _p21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, uint8_t, void*, uint32_t, uint32_t*, uint8_t)>*), "$ZwQueryQuotaInformationFile$ntoskrnl.exe", 0x3f4790, 0x0, true, 0xca0ce3d1c4ebee8e)
#define _p22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::section_information_class_t, void*, uint64_t, uint64_t*)>*), "$ZwQuerySection$ntoskrnl.exe", 0x3f2690, 0x0, true, 0x118e391b45bd0fc2)
#define _p23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, void*, uint32_t, uint32_t*)>*), "$ZwQuerySecurityAttributesToken$ntoskrnl.exe", 0x3f47b0, 0x0, true, 0x2eee7308779582ee)
#define _p24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*)>*), "$ZwQuerySecurityObject$ntoskrnl.exe", 0x3f47d0, 0x0, true, 0x7a744c97ba4c09ae)
#define _p25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwQuerySecurityPolicy$ntoskrnl.exe", 0x3f47f0, 0x0, true, 0xeeee578f22542f09)
#define _p26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::semaphore_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQuerySemaphore$ntoskrnl.exe", 0x3f4810, 0x0, true, 0xf1ed18b5e7e0480e)
#define _p27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t*)>*), "$ZwQuerySymbolicLinkObject$ntoskrnl.exe", 0x3f4830, 0x0, true, 0x73c63d605162cb6e)
#define _p28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, wchar_t*, uint16_t, wchar_t*)>*), "$ZwQuerySystemEnvironmentValue$ntoskrnl.exe", 0x3f4850, 0x0, true, 0x49e0538dead28392)
#define _p29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t*, uint32_t*)>*), "$ZwQuerySystemEnvironmentValueEx$ntoskrnl.exe", 0x3f4870, 0x0, true, 0x3b80f5a31a1f3aa5)
#define _p30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum win::system_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQuerySystemInformation$ntoskrnl.exe", 0x3f2330, 0x0, true, 0x7636f046142ea7c0)
#define _p31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum win::system_information_class_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*), "$ZwQuerySystemInformationEx$ntoskrnl.exe", 0x3f4890, 0x0, true, 0x232a8c71baf3afe3)
#define _p32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int64_t*)>*), "$ZwQuerySystemTime$ntoskrnl.exe", 0x3f27b0, 0x0, true, 0x59e0ad236c6eb72e)
#define _p33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::timer_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryTimer$ntoskrnl.exe", 0x3f2370, 0x0, true, 0x5130c4fe34e6bce1)
#define _p34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, uint32_t*, uint32_t*)>*), "$ZwQueryTimerResolution$ntoskrnl.exe", 0x3f48b0, 0x0, true, 0x918f58c8c0c8a415)
#define _p35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*, enum nt::key_value_information_class_t, void*, uint32_t, uint32_t*)>*), "$ZwQueryValueKey$ntoskrnl.exe", 0x3f1f50, 0x0, true, 0xe1a2afacd00575d4)
#define _p36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, enum nt::memory_information_class_t, void*, uint64_t, uint64_t*)>*), "$ZwQueryVirtualMemory$ntoskrnl.exe", 0x3f20d0, 0x0, true, 0xca39890f690029cf)
#define _p37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum fs::information_class_t)>*), "$ZwQueryVolumeInformationFile$ntoskrnl.exe", 0x3f2590, 0x0, true, 0xd680b1f35dad4a77)
#define _p38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct wnf::state_name_t*, const struct wnf::type_id_t*, const void*, uint32_t*, void*, uint32_t*)>*), "$ZwQueryWnfStateData$ntoskrnl.exe", 0x3f48d0, 0x0, true, 0x90bff54613e198ec)
#define _p39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct wnf::state_name_t*, enum wnf::state_name_information_t, const void*, void*, uint32_t)>*), "$ZwQueryWnfStateNameInformation$ntoskrnl.exe", 0x3f48f0, 0x0, true, 0xaa188222e927db63)
#define _p40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, sdk::function<void(void*, void*, void*)>*, void*, void*, void*)>*), "$ZwQueueApcThread$ntoskrnl.exe", 0x3f2510, 0x0, true, 0xa6b2c4e49984fd98)
#define _p41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, void*, void*)>*, void*, void*, void*)>*), "$ZwQueueApcThreadEx$ntoskrnl.exe", 0x3f4910, 0x0, true, 0x67f9ae08d847f1ca)
#define _p42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::exception_record_t*, nt::context*, uint8_t)>*), "$ZwRaiseException$ntoskrnl.exe", 0x3f4930, 0x0, true, 0x964de6c5ea69ac14)
#define _p43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int32_t, uint32_t, uint32_t, uint64_t*, uint32_t, uint32_t*)>*), "$ZwRaiseHardError$ntoskrnl.exe", 0x3f4950, 0x0, true, 0xb3e985d913e9345a)
#define _p44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, int64_t*, uint32_t*)>*), "$ZwReadFile$ntoskrnl.exe", 0x3f1d30, 0x0, true, 0x4ab3ec4275b7c36b)
#define _p45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, union nt::file_segment_element_t*, uint32_t, int64_t*, uint32_t*)>*), "$ZwReadFileScatter$ntoskrnl.exe", 0x3f2230, 0x0, true, 0x6daeca24f2df0a7f)
#define _p46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwReadOnlyEnlistment$ntoskrnl.exe", 0x3f4970, 0x0, true, 0x2626d55d43b2c650)
#define _p47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*, uint32_t, void*, uint64_t, uint64_t*)>*), "$ZwReadRequestData$ntoskrnl.exe", 0x3f26f0, 0x0, true, 0x3642b64f3517e64a)
#define _p48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint64_t, uint64_t*)>*), "$ZwReadVirtualMemory$ntoskrnl.exe", 0x3f2450, 0x0, true, 0xd3bda8e387e2d950)
#define _p49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwRecoverEnlistment$ntoskrnl.exe", 0x3f4990, 0x0, true, 0xa691032ab3b66eb)
#define _p50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwRecoverResourceManager$ntoskrnl.exe", 0x3f49b0, 0x0, true, 0x5a4a2d13f3021c32)
#define _p51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwRecoverTransactionManager$ntoskrnl.exe", 0x3f49d0, 0x0, true, 0x75968bf58dd18191)
#define _p52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::guid_t*, uint32_t, void*, uint32_t)>*), "$ZwRegisterProtocolAddressInformation$ntoskrnl.exe", 0x3f49f0, 0x0, true, 0x7bef1b25cba957f9)
#define _p53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwRegisterThreadTerminatePort$ntoskrnl.exe", 0x3f4a10, 0x0, true, 0x619771fcaa21879a)
#define _p54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t, int64_t*)>*), "$ZwReleaseKeyedEvent$ntoskrnl.exe", 0x3f4a30, 0x0, true, 0x32fb36d705356c40)
#define _p55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t*)>*), "$ZwReleaseMutant$ntoskrnl.exe", 0x3f2070, 0x0, true, 0xb3f0e1013cfbbe05)
#define _p56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t, int32_t*)>*), "$ZwReleaseSemaphore$ntoskrnl.exe", 0x3f1db0, 0x0, true, 0xa6a01552365fc4b9)
#define _p57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwReleaseWorkerFactoryWorker$ntoskrnl.exe", 0x3f4a50, 0x0, true, 0xd1fcf6da20b9e137)
#define _p58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, void**, struct io::status_block_t*, int64_t*)>*), "$ZwRemoveIoCompletion$ntoskrnl.exe", 0x3f1d90, 0x0, true, 0x62e394c6751bcb46)
#define _p59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct win::file_io_completion_information_t*, uint32_t, uint32_t*, int64_t*, uint8_t)>*), "$ZwRemoveIoCompletionEx$ntoskrnl.exe", 0x3f4a70, 0x0, true, 0xf5d5977d6fd5f19)
#define _p60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwRemoveProcessDebug$ntoskrnl.exe", 0x3f4a90, 0x0, true, 0x26bdb67f559d5fe8)
#define _p61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*)>*), "$ZwRenameKey$ntoskrnl.exe", 0x3f4ab0, 0x0, true, 0xdcf81be3aaa33d90)
#define _p62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*)>*), "$ZwRenameTransactionManager$ntoskrnl.exe", 0x3f4ad0, 0x0, true, 0x2dd355bd93311666)
#define _p63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, void*, struct nt::object_attributes_t*)>*), "$ZwReplaceKey$ntoskrnl.exe", 0x3f4af0, 0x0, true, 0xc98937974f0a282c)
#define _p64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, uint32_t)>*), "$ZwReplacePartitionUnit$ntoskrnl.exe", 0x3f4b10, 0x0, true, 0x3ece93e992e846ba)
#define _p65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*)>*), "$ZwReplyPort$ntoskrnl.exe", 0x3f1df0, 0x0, true, 0xf900073306892904)
#define _p66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, struct nt::port_message_t*, struct nt::port_message_t*)>*), "$ZwReplyWaitReceivePort$ntoskrnl.exe", 0x3f1dd0, 0x0, true, 0x1c9b35d25c850c35)
#define _p67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, struct nt::port_message_t*, struct nt::port_message_t*, int64_t*)>*), "$ZwReplyWaitReceivePortEx$ntoskrnl.exe", 0x3f21d0, 0x0, true, 0x5fb65bcabb00cb3c)
#define _p68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*)>*), "$ZwReplyWaitReplyPort$ntoskrnl.exe", 0x3f4b30, 0x0, true, 0x884e35498d41d0b)
#define _p69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*)>*), "$ZwRequestPort$ntoskrnl.exe", 0x3f4b50, 0x0, true, 0x578ea9ab096362f8)
#define _p70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*, struct nt::port_message_t*)>*), "$ZwRequestWaitReplyPort$ntoskrnl.exe", 0x3f20b0, 0x0, true, 0x1112502acfb31095)
#define _p71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t*)>*), "$ZwResetEvent$ntoskrnl.exe", 0x3f4b70, 0x0, true, 0xd5507600454c0a81)
#define _p72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint64_t)>*), "$ZwResetWriteWatch$ntoskrnl.exe", 0x3f4b90, 0x0, true, 0x3d907aed4cb9db99)
#define _p73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t)>*), "$ZwRestoreKey$ntoskrnl.exe", 0x3f4bb0, 0x0, true, 0x23c835b27536dea)
#define _p74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwResumeProcess$ntoskrnl.exe", 0x3f4bd0, 0x0, true, 0xd43a4d4f2b3aa63c)
#define _p75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "$ZwResumeThread$ntoskrnl.exe", 0x3f26b0, 0x0, true, 0x5a154b0dd9613945)
#define _p76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t()>*), "$ZwRevertContainerImpersonation$ntoskrnl.exe", 0x3f4bf0, 0x0, true, 0xe979a8c1e746d6f8)
#define _p77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwRollbackComplete$ntoskrnl.exe", 0x3f4c10, 0x0, true, 0xd29aa479bce878bf)
#define _p78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwRollbackEnlistment$ntoskrnl.exe", 0x3f4c30, 0x0, true, 0x47e891c3219c85ea)
#define _p79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "$ZwRollbackRegistryTransaction$ntoskrnl.exe", 0x3f4c50, 0x0, true, 0xd338fa8ac60e2b6)
#define _p80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "$ZwRollbackTransaction$ntoskrnl.exe", 0x3f4c70, 0x0, true, 0xe26f1ff2c9875bd0)
#define _p81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwRollforwardTransactionManager$ntoskrnl.exe", 0x3f4c90, 0x0, true, 0x3fc09d6c804c834b)
#define _p82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwSaveKey$ntoskrnl.exe", 0x3f4cb0, 0x0, true, 0x5009d52a05022170)
#define _p83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t)>*), "$ZwSaveKeyEx$ntoskrnl.exe", 0x3f4cd0, 0x0, true, 0x68c002581a08b869)
#define _p84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*)>*), "$ZwSaveMergedKeys$ntoskrnl.exe", 0x3f4cf0, 0x0, true, 0x23894bd8bdffbb57)
#define _p85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, nt::unicode_view*, struct sec::quality_of_service_t*, struct win::port_view_t*, void*, struct nt::remote_port_view_t*, uint32_t*, void*, uint32_t*)>*), "$ZwSecureConnectPort$ntoskrnl.exe", 0x3f4d10, 0x0, true, 0xb4b087c57de8430e)
#define _p86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwSerializeBoot$ntoskrnl.exe", 0x3f4d30, 0x0, true, 0x85b3e44a273f6951)
#define _p87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, uint32_t)>*), "$ZwSetBootEntryOrder$ntoskrnl.exe", 0x3f4d50, 0x0, true, 0x98ee4a5077ba8d07)
#define _p88(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct boot::options_t*, uint32_t)>*), "$ZwSetBootOptions$ntoskrnl.exe", 0x3f4d70, 0x0, true, 0x40bd46df8cb11b35)
#define _p89(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint8_t, void**, uint32_t, void*)>*), "$ZwSetCachedSigningLevel$ntoskrnl.exe", 0x3f4d90, 0x0, true, 0x5cee162b84d61f23)
#define _p90(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwSetCachedSigningLevel2$ntoskrnl.exe", 0x3f4db0, 0x0, true, 0xefa3f2f65e976413)
#define _p91(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::context*)>*), "$ZwSetContextThread$ntoskrnl.exe", 0x3f4dd0, 0x0, true, 0x35f70c85478e2a4f)
#define _p92(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint8_t)>*), "$ZwSetDebugFilterState$ntoskrnl.exe", 0x3f4df0, 0x0, true, 0xbadaacd066f89411)
#define _p93(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwSetDefaultHardErrorPort$ntoskrnl.exe", 0x3f4e10, 0x0, true, 0xe5673bdea0159059)
#define _p94(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, uint32_t)>*), "$ZwSetDefaultLocale$ntoskrnl.exe", 0x3f4e30, 0x0, true, 0x80035c9a93d99f7a)
#define _p95(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint16_t)>*), "$ZwSetDefaultUILanguage$ntoskrnl.exe", 0x3f4e50, 0x0, true, 0x9170e6d6c6a5ab70)
#define _p96(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, uint32_t)>*), "$ZwSetDriverEntryOrder$ntoskrnl.exe", 0x3f4e70, 0x0, true, 0x6077c554e56b555d)
#define _p97(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t)>*), "$ZwSetEaFile$ntoskrnl.exe", 0x3f4e90, 0x0, true, 0x163d7c7e0da3a520)
#define _p98(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t*)>*), "$ZwSetEvent$ntoskrnl.exe", 0x3f1e30, 0x0, true, 0xee52423732baad15)
#define _p99(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwSetEventBoostPriority$ntoskrnl.exe", 0x3f2210, 0x0, true, 0x5fedbeaf8f0a4ca8)
#define _q00(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwSetHighEventPair$ntoskrnl.exe", 0x3f4eb0, 0x0, true, 0xbf5bd9243562f492)
#define _q01(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwSetHighWaitLowEventPair$ntoskrnl.exe", 0x3f4ed0, 0x0, true, 0x771b9bbbb356eb80)
#define _q02(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::debugobjectinfoclass_t, void*, uint32_t, uint32_t*)>*), "$ZwSetInformationDebugObject$ntoskrnl.exe", 0x3f4f10, 0x0, true, 0x9d9be71d7c34fae7)
#define _q03(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::enlistment_information_class_t, void*, uint32_t)>*), "$ZwSetInformationEnlistment$ntoskrnl.exe", 0x3f4f30, 0x0, true, 0x3dbb1769b8029b3f)
#define _q04(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t)>*), "$ZwSetInformationFile$ntoskrnl.exe", 0x3f2150, 0x0, true, 0x3b366baccdfc7471)
#define _q05(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::jobobjectinfoclass_t, void*, uint32_t)>*), "$ZwSetInformationJobObject$ntoskrnl.exe", 0x3f4f50, 0x0, true, 0x3c52a91c7ec05d9a)
#define _q06(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::key_set_information_class_t, void*, uint32_t)>*), "$ZwSetInformationKey$ntoskrnl.exe", 0x3f4f70, 0x0, true, 0x432921aae8232849)
#define _q07(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::object_information_class_t, void*, uint32_t)>*), "$ZwSetInformationObject$ntoskrnl.exe", 0x3f27f0, 0x0, true, 0x8865b915a06aaf5f)
#define _q08(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::processinfoclass_t, void*, uint32_t)>*), "$ZwSetInformationProcess$ntoskrnl.exe", 0x3f1ff0, 0x0, true, 0x25bb37f67fb34945)
#define _q09(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::resourcemanager_information_class_t, void*, uint32_t)>*), "$ZwSetInformationResourceManager$ntoskrnl.exe", 0x3f4f90, 0x0, true, 0xaa1ca11161e32aa2)
#define _q10(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwSetInformationSymbolicLink$ntoskrnl.exe", 0x3f4fb0, 0x0, true, 0xa50ffa9ee7edb3de)
#define _q11(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::threadinfoclass_t, void*, uint32_t)>*), "$ZwSetInformationThread$ntoskrnl.exe", 0x3f1e10, 0x0, true, 0xeecdba76add054c1)
#define _q12(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::token_information_class_t, void*, uint32_t)>*), "$ZwSetInformationToken$ntoskrnl.exe", 0x3f4fd0, 0x0, true, 0x55474001fe70b405)
#define _q13(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::transaction_information_class_t, void*, uint32_t)>*), "$ZwSetInformationTransaction$ntoskrnl.exe", 0x3f4ff0, 0x0, true, 0x13a90f25558a4153)
#define _q14(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::transactionmanager_information_class_t, void*, uint32_t)>*), "$ZwSetInformationTransactionManager$ntoskrnl.exe", 0x3f5010, 0x0, true, 0x232d23a46c1bd882)
#define _q15(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::virtual_memory_information_class_t, uint64_t, struct nt::memory_range_entry_t*, void*, uint32_t)>*), "$ZwSetInformationVirtualMemory$ntoskrnl.exe", 0x3f5030, 0x0, true, 0x8aa242388e935b97)
#define _q16(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::workerfactoryinfoclass_t, void*, uint32_t)>*), "$ZwSetInformationWorkerFactory$ntoskrnl.exe", 0x3f5050, 0x0, true, 0x44ecae77ea5cfb8c)
#define _q17(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, enum nt::kprofile_source_t)>*), "$ZwSetIntervalProfile$ntoskrnl.exe", 0x3f5070, 0x0, true, 0xc42b63f56dee5bdd)
#define _q18(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, int32_t, uint64_t)>*), "$ZwSetIoCompletion$ntoskrnl.exe", 0x3f5090, 0x0, true, 0xe1f979248d624f5f)
#define _q19(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, void*, int32_t, uint64_t)>*), "$ZwSetIoCompletionEx$ntoskrnl.exe", 0x3f50b0, 0x0, true, 0xbe42eabe86dd523f)
#define _q20(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwSetIRTimer$ntoskrnl.exe", 0x3f4ef0, 0x0, true, 0xa69d666403bff317)
#define _q21(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)>*), "$ZwSetLdtEntries$ntoskrnl.exe", 0x3f50d0, 0x0, true, 0x2622a365c3830609)
#define _q22(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwSetLowEventPair$ntoskrnl.exe", 0x3f50f0, 0x0, true, 0xafde07816ef06b8e)
#define _q23(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwSetLowWaitHighEventPair$ntoskrnl.exe", 0x3f5110, 0x0, true, 0x61f2dd446e9bd50c)
#define _q24(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t)>*), "$ZwSetQuotaInformationFile$ntoskrnl.exe", 0x3f5130, 0x0, true, 0x7c3e6183d84a7739)
#define _q25(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*)>*), "$ZwSetSecurityObject$ntoskrnl.exe", 0x3f5150, 0x0, true, 0xfbd0bc7a089148a2)
#define _q26(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*)>*), "$ZwSetSystemEnvironmentValue$ntoskrnl.exe", 0x3f5170, 0x0, true, 0xb6234e0aee36f695)
#define _q27(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t, uint32_t)>*), "$ZwSetSystemEnvironmentValueEx$ntoskrnl.exe", 0x3f5190, 0x0, true, 0x229bb109cbb609ce)
#define _q28(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum win::system_information_class_t, void*, uint32_t)>*), "$ZwSetSystemInformation$ntoskrnl.exe", 0x3f51b0, 0x0, true, 0x349cd418990d1b)
#define _q29(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum power::action_t, enum nt::system_power_state_t, uint32_t)>*), "$ZwSetSystemPowerState$ntoskrnl.exe", 0x3f51d0, 0x0, true, 0xf832e9a7c52c722c)
#define _q30(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int64_t*, int64_t*)>*), "$ZwSetSystemTime$ntoskrnl.exe", 0x3f51f0, 0x0, true, 0x236936645941a98d)
#define _q31(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*)>*), "$ZwSetThreadExecutionState$ntoskrnl.exe", 0x3f5210, 0x0, true, 0xc2c58b631a833829)
#define _q32(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*, sdk::function<void(void*, uint32_t, int32_t)>*, void*, uint8_t, int32_t, uint8_t*)>*), "$ZwSetTimer$ntoskrnl.exe", 0x3f28b0, 0x0, true, 0x6da1a28bbc091fe0)
#define _q33(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*, int64_t*, struct win::t2_set_parameters_v0_t*)>*), "$ZwSetTimer2$ntoskrnl.exe", 0x3f5230, 0x0, true, 0xe83708ea4e5d2747)
#define _q34(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, enum win::timer_set_information_class_t, void*, uint32_t)>*), "$ZwSetTimerEx$ntoskrnl.exe", 0x3f5250, 0x0, true, 0xc728825783c4ddbb)
#define _q35(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint8_t, uint32_t*)>*), "$ZwSetTimerResolution$ntoskrnl.exe", 0x3f5270, 0x0, true, 0x80a7bbec89beb7a7)
#define _q36(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(char*)>*), "$ZwSetUuidSeed$ntoskrnl.exe", 0x3f5290, 0x0, true, 0x2277cc51a5f25faa)
#define _q37(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, uint32_t, void*, uint32_t)>*), "$ZwSetValueKey$ntoskrnl.exe", 0x3f2870, 0x0, true, 0xdade12c9bbcfaa0e)
#define _q38(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum fs::information_class_t)>*), "$ZwSetVolumeInformationFile$ntoskrnl.exe", 0x3f52b0, 0x0, true, 0x3c07bda3f5559d70)
#define _q39(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwSetWnfProcessNotificationEvent$ntoskrnl.exe", 0x3f52d0, 0x0, true, 0x9951bfb665070d8c)
#define _q40(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum win::shutdown_action_t)>*), "$ZwShutdownSystem$ntoskrnl.exe", 0x3f52f0, 0x0, true, 0xed8e697507e160f4)
#define _q41(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, volatile int32_t*)>*), "$ZwShutdownWorkerFactory$ntoskrnl.exe", 0x3f5310, 0x0, true, 0x2dba9dba07377ef3)
#define _q42(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t, int64_t*)>*), "$ZwSignalAndWaitForSingleObject$ntoskrnl.exe", 0x3f5330, 0x0, true, 0xf1198880615409ab)
#define _q43(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwSinglePhaseReject$ntoskrnl.exe", 0x3f5350, 0x0, true, 0x880cc9c828caa05)
#define _q44(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwStartProfile$ntoskrnl.exe", 0x3f5370, 0x0, true, 0xc620f16eb711e1b)
#define _q45(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwStopProfile$ntoskrnl.exe", 0x3f5390, 0x0, true, 0x89552f3204d15c5a)
#define _q46(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct wnf::state_name_t*, uint32_t, uint32_t, uint64_t*)>*), "$ZwSubscribeWnfStateChange$ntoskrnl.exe", 0x3f53b0, 0x0, true, 0x835bd3df9e7b6e1c)
#define _q47(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwSuspendProcess$ntoskrnl.exe", 0x3f53d0, 0x0, true, 0xb06e4cca4b2f91a2)
#define _q48(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "$ZwSuspendThread$ntoskrnl.exe", 0x3f53f0, 0x0, true, 0xf7fc3ec1facd89a3)
#define _q49(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum win::sysdbg_command_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*), "$ZwSystemDebugControl$ntoskrnl.exe", 0x3f5410, 0x0, true, 0xcf001c1baf00864c)
#define _q50(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t)>*), "$ZwTerminateJobObject$ntoskrnl.exe", 0x3f5450, 0x0, true, 0x93f4635415166859)
#define _q51(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t)>*), "$ZwTerminateProcess$ntoskrnl.exe", 0x3f21f0, 0x0, true, 0x973025fb64b87848)
#define _q52(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t)>*), "$ZwTerminateThread$ntoskrnl.exe", 0x3f26d0, 0x0, true, 0xd7c7c355d2551658)
#define _q53(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwTestAlert$ntoskrnl.exe", 0x3f5470, 0x0, true, 0x5747156d70383690)
#define _q54(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwThawRegistry$ntoskrnl.exe", 0x3f5490, 0x0, true, 0xb9afef1d900c2d35)
#define _q55(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwThawTransactions$ntoskrnl.exe", 0x3f54b0, 0x0, true, 0x4cdfda619c37aa62)
#define _q56(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum trace::control_information_class_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*), "$ZwTraceControl$ntoskrnl.exe", 0x3f54d0, 0x0, true, 0x321d995698ab5ce1)
#define _q57(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*), "$ZwTraceEvent$ntoskrnl.exe", 0x3f2830, 0x0, true, 0x72f88a3b342d41f)
#define _q58(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct win::file_path_t*, uint32_t, struct win::file_path_t*, uint32_t*)>*), "$ZwTranslateFilePath$ntoskrnl.exe", 0x3f54f0, 0x0, true, 0xdc7545229bf5ef67)
#define _q59(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwUmsThreadYield$ntoskrnl.exe", 0x3f5510, 0x0, true, 0xe72f8857c7ddcd76)
#define _q60(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*)>*), "$ZwUnloadDriver$ntoskrnl.exe", 0x3f5530, 0x0, true, 0xea78a0fe50b36e26)
#define _q61(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*)>*), "$ZwUnloadKey$ntoskrnl.exe", 0x3f5550, 0x0, true, 0x2e062cadd6135904)
#define _q62(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, uint32_t)>*), "$ZwUnloadKey2$ntoskrnl.exe", 0x3f5570, 0x0, true, 0x430b8d30cee6b7f8)
#define _q63(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, void*)>*), "$ZwUnloadKeyEx$ntoskrnl.exe", 0x3f5590, 0x0, true, 0x45233bcad855bb02)
#define _q64(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct io::status_block_t*, int64_t*, int64_t*, uint32_t)>*), "$ZwUnlockFile$ntoskrnl.exe", 0x3f55b0, 0x0, true, 0xeccafc06c343ef61)
#define _q65(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*), "$ZwUnlockVirtualMemory$ntoskrnl.exe", 0x3f55d0, 0x0, true, 0xb23c1975b0b73852)
#define _q66(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "$ZwUnmapViewOfSection$ntoskrnl.exe", 0x3f21b0, 0x0, true, 0x9e22cfbb3db85f7f)
#define _q67(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t)>*), "$ZwUnmapViewOfSectionEx$ntoskrnl.exe", 0x3f55f0, 0x0, true, 0x370bbc9d9b8e7a8)
#define _q68(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct wnf::state_name_t*)>*), "$ZwUnsubscribeWnfStateChange$ntoskrnl.exe", 0x3f5610, 0x0, true, 0xb41358c75e3bcece)
#define _q69(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct wnf::state_name_t*, const void*, uint32_t, const struct wnf::type_id_t*, void const*, uint32_t, uint32_t)>*/*types differ*/), "$ZwUpdateWnfStateData$ntoskrnl.exe", 0x3f5630, 0x0, true, 0x4fb6b05aca972f7)
#define _q70(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum nt::vdmserviceclass_t, void*)>*), "$ZwVdmControl$ntoskrnl.exe", 0x3f5650, 0x0, true, 0x94039508521350bd)
#define _q71(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t*)>*), "$ZwWaitForAlertByThreadId$ntoskrnl.exe", 0x3f5670, 0x0, true, 0xdcdfb4e1d917ee0a)
#define _q72(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, int64_t*, struct nt::dbgui_wait_state_change_t*)>*), "$ZwWaitForDebugEvent$ntoskrnl.exe", 0x3f5690, 0x0, true, 0xdd530ace425ce451)
#define _q73(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t, int64_t*)>*), "$ZwWaitForKeyedEvent$ntoskrnl.exe", 0x3f56b0, 0x0, true, 0x408744dfae1ec384)
#define _q74(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void**, enum nt::wait_type_t, uint8_t, int64_t*)>*), "$ZwWaitForMultipleObjects$ntoskrnl.exe", 0x3f27d0, 0x0, true, 0x39cd2f438d26a504)
#define _q75(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, int32_t*, enum nt::wait_type_t, uint8_t, int64_t*)>*), "$ZwWaitForMultipleObjects32$ntoskrnl.exe", 0x3f1fb0, 0x0, true, 0x293bf76e93706138)
#define _q76(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, int64_t*)>*), "$ZwWaitForSingleObject$ntoskrnl.exe", 0x3f1cf0, 0x0, true, 0x26feee14a71483e2)
#define _q77(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct win::file_io_completion_information_t*)>*), "$ZwWaitForWorkViaWorkerFactory$ntoskrnl.exe", 0x3f56d0, 0x0, true, 0x93dd30df72be4afc)
#define _q78(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwWaitHighEventPair$ntoskrnl.exe", 0x3f56f0, 0x0, true, 0x3267b0f686ea97d6)
#define _q79(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwWaitLowEventPair$ntoskrnl.exe", 0x3f5710, 0x0, true, 0x9475a7b0d1baf4aa)
#define _q80(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$ZwWorkerFactoryWorkerReady$ntoskrnl.exe", 0x3f1c90, 0x0, true, 0x6a7f0ec4b95a9846)
#define _q81(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, int64_t*, uint32_t*)>*), "$ZwWriteFile$ntoskrnl.exe", 0x3f1d70, 0x0, true, 0xbd00e107c0ef3974)
#define _q82(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, union nt::file_segment_element_t*, uint32_t, int64_t*, uint32_t*)>*), "$ZwWriteFileGather$ntoskrnl.exe", 0x3f1fd0, 0x0, true, 0x62583c8ab6502c9a)
#define _q83(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*, uint32_t, void*, uint64_t, uint64_t*)>*), "$ZwWriteRequestData$ntoskrnl.exe", 0x3f2750, 0x0, true, 0x88d21da177350e35)
#define _q84(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint64_t, uint64_t*)>*), "$ZwWriteVirtualMemory$ntoskrnl.exe", 0x3f23b0, 0x0, true, 0x6b2ec05258f870e7)
#define _q85(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(...)>*), "$ZwYieldExecution$ntoskrnl.exe", 0x3f2530, 0x0, true, 0x2774f0578c49236d)
#define _q86(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZwWin32CreateSection$win32kfull.sys", 0x3ef34, 0x0, true, 0x44646786bc745a45)
#define _q87(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::file_object_t*, uint32_t, void**)>*), "$ZwWin32CreateSectionRetainHandle$win32kfull.sys", 0x3ef90, 0x0, true, 0xdb70d189c60cf9bb)
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
#endif