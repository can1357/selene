#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCleanupSiloState$ntoskrnl.exe", 0x0, 0x0, false, 0x5cf01898a2b41733)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObClearProcessDeviceMap$ntoskrnl.exe", 0x0, 0x0, false, 0x3dc251c0a829cb7a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDereferenceObjectExWithTag$ntoskrnl.exe", 0x0, 0x0, false, 0x96b8cee6836ec93)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDrainDeferredObjectDeletion$ntoskrnl.exe", 0x0, 0x0, false, 0xbe05c0ab685ab57b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct ex::fast_ref_t*, void*, uint32_t)>*), "$ObFastDereferenceObjectDeferDelete$ntoskrnl.exe", 0x0, 0x0, false, 0x3b65d1db192aaf5a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObGetAssociatedWaitObject$ntoskrnl.exe", 0x0, 0x0, false, 0xdee0a713625e2423)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObNormalizeHandleValue$ntoskrnl.exe", 0x0, 0x0, false, 0x95d9679d1a68e129)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObReleaseObjectSecurityEx$ntoskrnl.exe", 0x0, 0x0, false, 0x6191fc80003b085c)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDisableEtwReferenceTrace$ntoskrnl.exe", 0x0, 0x0, false, 0x7ab63f229717657d)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObGetExtendedUserInfo$ntoskrnl.exe", 0x8d89fc, 0x0, true, 0x4103c5d75fe48695)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCleanupSecurityDescriptor$ntoskrnl.exe", 0x782804, 0x0, true, 0x3961ea835e03a306)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCreateKernelObjectsSD$ntoskrnl.exe", 0x782848, 0x0, true, 0x6758f3c0cf6ae573)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCreateSymbolicLink$ntoskrnl.exe", 0x6d794c, 0x0, true, 0xf6723a6867b5d5da)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObGetCurrentIrql$ntoskrnl.exe", 0x236140, 0x0, true, 0xe275d3e78e5bbfd3)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObSetCurrentProcessDeviceMap$ntoskrnl.exe", 0x6c1878, 0x0, true, 0xe408093cfe3a394b)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObAdjustSecurityQuota$ntoskrnl.exe", 0x613db8, 0x0, true, 0x912e59b457d1dd59)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObAssignObjectSecurityDescriptor$ntoskrnl.exe", 0x6cc7f0, 0x0, true, 0x4e2822f1533f0609)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::access_state_t*, void*, void*, struct nt::object_type_t*)>*), "$ObAssignSecurity$ntoskrnl.exe", 0x75e010, 0x0, true, 0xee4a326c8e76b4b5)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObAuditInheritedHandleProcedure$ntoskrnl.exe", 0x8d7ac0, 0x0, true, 0xb2a7f3ce83506db2)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCaptureObjectStateForDuplication$ntoskrnl.exe", 0x6c839c, 0x0, true, 0x9f2ee78cb14de3b2)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCheckActiveHandles$ntoskrnl.exe", 0x6df00c, 0x0, true, 0xc7e2d4ddc2b7415f)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, struct nt::access_state_t*, nt::unicode_view*, uint8_t, char, int32_t*)>*), "$ObCheckCreateObjectAccess$ntoskrnl.exe", 0x616ca0, 0x0, true, 0x1b4a52def7dcbce6)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct nt::access_state_t*, uint8_t, char, int32_t*)>*), "$ObCheckObjectAccess$ntoskrnl.exe", 0x6bb580, 0x0, true, 0x1b04d75b5ca1caa6)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCheckRefTraceProcess$ntoskrnl.exe", 0x66f530, 0x0, true, 0xa367acedc3e3435c)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, char)>*), "$ObCloseHandle$ntoskrnl.exe", 0x637060, 0x0, true, 0x84b8bdbed0271f1e)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCloseHandleTableEntry$ntoskrnl.exe", 0x6285e0, 0x0, true, 0xa5734bdc54e7677c)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCompleteObjectDuplication$ntoskrnl.exe", 0x66b2ac, 0x0, true, 0x97ed8741784a171b)
#define _o7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(char, struct nt::object_type_t*, struct nt::object_attributes_t*, char, void*, uint32_t, uint32_t, uint32_t, void**)>*), "$ObCreateObject$ntoskrnl.exe", 0x643a20, 0x0, true, 0x7f83b3ea20f34629)
#define _o8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCreateObjectEx$ntoskrnl.exe", 0x601b00, 0x0, true, 0xf1a97dc1ba0d8c11)
#define _o9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, void*, struct nt::object_type_t**)>*), "$ObCreateObjectType$ntoskrnl.exe", 0x77dd70, 0x0, true, 0x7c4060b182dce750)
#define _p0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, void*, void*, int64_t, struct nt::object_type_t**)>*), "$ObCreateObjectTypeEx$ntoskrnl.exe", 0x77dd90, 0x0, true, 0xf471486a0dcc62b9)
#define _p1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObCreateSiloRootDirectory$ntoskrnl.exe", 0x97bbb0, 0x0, true, 0x8c779c2f36531317)
#define _p2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDeassignSecurity$ntoskrnl.exe", 0x6cc86c, 0x0, true, 0x8b96cb144a366015)
#define _p3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$ObDeleteCapturedInsertInfo$ntoskrnl.exe", 0x68d880, 0x0, true, 0x435eaf9d67f36f0f)
#define _p4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDereferenceDeviceMap$ntoskrnl.exe", 0x65e354, 0x0, true, 0xae59188f286350ae)
#define _p5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDereferenceObject$ntoskrnl.exe", 0x261190, 0x0, true, 0x9cdd88b0635f4296)
#define _p6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$ObDereferenceObjectDeferDelete$ntoskrnl.exe", 0x24a1d0, 0x0, true, 0x2a1c9d1440ae0ed1)
#define _p7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "$ObDereferenceObjectDeferDeleteWithTag$ntoskrnl.exe", 0x24cfc0, 0x0, true, 0x444a0dec975d6d4a)
#define _p8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDereferenceObjectEx$ntoskrnl.exe", 0x281800, 0x0, true, 0xfa3ee1bf9b8f8611)
#define _p9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDereferenceProcessHandleTable$ntoskrnl.exe", 0x6cbeb0, 0x0, true, 0x8ae72ce3d56489)
#define _q0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "$ObDereferenceSecurityDescriptor$ntoskrnl.exe", 0x613910, 0x0, true, 0x6aaf59743776bbbd)
#define _q1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDestroyHandleRevocationBlock$ntoskrnl.exe", 0x6d2534, 0x0, true, 0xdedfdb278814497a)
#define _q2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObDuplicateObject$ntoskrnl.exe", 0x61e8d0, 0x0, true, 0xab04a87d840b8b0f)
#define _q3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObEnableEtwReferenceTrace$ntoskrnl.exe", 0x8d9600, 0x0, true, 0x4d01296b6983a4b)
#define _q4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObEnumerateObjectsByType$ntoskrnl.exe", 0x8d8a2c, 0x0, true, 0xf3a6d7fb53eadc1e)
#define _q5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObFastDereferenceObject$ntoskrnl.exe", 0x206540, 0x0, true, 0xefb3f8fc6f037708)
#define _q6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*(struct ex::fast_ref_t*)>*/*types differ*/), "$ObFastReferenceObject$ntoskrnl.exe", 0x206610, 0x0, true, 0x2972ab74ff8d1843)
#define _q7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObFastReferenceObjectLocked$ntoskrnl.exe", 0x25b058, 0x0, true, 0x11e4927518a9b336)
#define _q8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObFastReplaceObject$ntoskrnl.exe", 0x233a3c, 0x0, true, 0x4ae323303d3c22dd)
#define _q9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::kprocess_t*, void*, struct nt::object_type_t*, struct nt::object_handle_information_t*, void**)>*), "$ObFindHandleForObject$ntoskrnl.exe", 0x6b7c40, 0x0, true, 0x2edb06fff1efb68)
#define _r0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint16_t(...)>*), "$ObGetFilterVersion$ntoskrnl.exe", 0x8d92b0, 0x0, true, 0xc7af51f73380717b)
#define _r1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObGetHandleInformation$ntoskrnl.exe", 0x8d846c, 0x0, true, 0xbc20203cd2e5bddd)
#define _r2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObGetHandleInformationEx$ntoskrnl.exe", 0x8d84c0, 0x0, true, 0xed19a22f93dbaef0)
#define _r3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObGetObjectInformation$ntoskrnl.exe", 0x8d8af8, 0x0, true, 0xf6bdfcd68c503ef6)
#define _r4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint8_t*)>*), "$ObGetObjectSecurity$ntoskrnl.exe", 0x6e9cc0, 0x0, true, 0xa0cb08c4df3f204a)
#define _r5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObGetObjectType$ntoskrnl.exe", 0x6d9160, 0x0, true, 0xae7d4d62ec9a0702)
#define _r6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObGetProcessHandleCount$ntoskrnl.exe", 0x6dfd4c, 0x0, true, 0x606bdca18d21fa1)
#define _r7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObGetSiloRootDirectoryPath$ntoskrnl.exe", 0x97beec, 0x0, true, 0x39d5868ef9fabffd)
#define _r8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObHandleRevocationBlockAddObject$ntoskrnl.exe", 0x8d7fc0, 0x0, true, 0x54f77b5294c084da)
#define _r9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObHeaderCookie$ntoskrnl.exe", 0xcfb71c, 0x0, true, 0xe76ba121835dc758)
#define _s0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObInheritObjectHandle$ntoskrnl.exe", 0x671064, 0x0, true, 0x24d0d0938d8d2b2)
#define _s1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObInitProcess$ntoskrnl.exe", 0x66f200, 0x0, true, 0xc03b9121d2f4b38e)
#define _s2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObInitServerSilo$ntoskrnl.exe", 0x7b2860, 0x0, true, 0x78b4820bd4f211d2)
#define _s3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObInitSystem$ntoskrnl.exe", 0xa3aa14, 0x0, true, 0x889b665506dbf5b8)
#define _s4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObInitializeFastReference$ntoskrnl.exe", 0x6f6a34, 0x0, true, 0x8b452e5a4171b12)
#define _s5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObInitializeProcessor$ntoskrnl.exe", 0x77e67c, 0x0, true, 0xda67b424acb956ff)
#define _s6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::access_state_t*, uint32_t, uint32_t, void**, void**)>*), "$ObInsertObject$ntoskrnl.exe", 0x642330, 0x0, true, 0x895dc9a4426cc28e)
#define _s7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObInsertObjectEx$ntoskrnl.exe", 0x601d40, 0x0, true, 0x529e4fa0bdc43b95)
#define _s8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint8_t*)>*), "$ObIsDosDeviceLocallyMapped$ntoskrnl.exe", 0x7b7af0, 0x0, true, 0xe4178ccd5204b14)
#define _s9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$ObIsKernelHandle$ntoskrnl.exe", 0x323260, 0x0, true, 0x1935dfc04ecfb95)
#define _t0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObKillProcess$ntoskrnl.exe", 0x5d8208, 0x0, true, 0x34510e94cd55c9dc)
#define _t1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint32_t)>*), "$ObLogSecurityDescriptor$ntoskrnl.exe", 0x614120, 0x0, true, 0x5a67eda277718bb2)
#define _t2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$ObMakeTemporaryObject$ntoskrnl.exe", 0x703f30, 0x0, true, 0xca4dc21aa44ffd06)
#define _t3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_type_t*, char, struct nt::access_state_t*, uint32_t, void*, void**)>*), "$ObOpenObjectByName$ntoskrnl.exe", 0x5eaf20, 0x0, true, 0x6e159800e4cb2b01)
#define _t4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_type_t*, char, struct nt::access_state_t*, uint32_t, void*, struct nt::ejob_t*, void**)>*), "$ObOpenObjectByNameEx$ntoskrnl.exe", 0x5eafa0, 0x0, true, 0x5dc49cfcd1870ea9)
#define _t5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::access_state_t*, uint32_t, struct nt::object_type_t*, char, void**)>*), "$ObOpenObjectByPointer$ntoskrnl.exe", 0x5e0db0, 0x0, true, 0xa5f6aa9e1490f2b1)
#define _t6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::access_state_t*, uint32_t, struct nt::object_type_t*, char, uint32_t, void**)>*), "$ObOpenObjectByPointerWithTag$ntoskrnl.exe", 0x8d8130, 0x0, true, 0x678687ef51f024b3)
#define _t7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObQueryDeviceMapInformation$ntoskrnl.exe", 0x5df740, 0x0, true, 0xdafcedad7352d864)
#define _t8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObQueryNameInfo$ntoskrnl.exe", 0x6d3540, 0x0, true, 0xfb057e5fbe8f2491)
#define _t9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::object_name_information_t*, uint32_t, uint32_t*)>*), "$ObQueryNameString$ntoskrnl.exe", 0x5d9410, 0x0, true, 0xf9460c00151c4b93)
#define _u0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObQueryNameStringMode$ntoskrnl.exe", 0x5d9930, 0x0, true, 0xe21fd6f5a64b16f3)
#define _u1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "$ObQueryObjectAuditingByHandle$ntoskrnl.exe", 0x6b5a70, 0x0, true, 0x6518c1084619fb05)
#define _u2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObQueryRefTraceInformation$ntoskrnl.exe", 0x8d9674, 0x0, true, 0x765e31b03dd4ed12)
#define _u3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObQuerySecurityDescriptorInfo$ntoskrnl.exe", 0x616f58, 0x0, true, 0x2aed5cb5ea55605e)
#define _u4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObQuerySecurityObject$ntoskrnl.exe", 0x6f7534, 0x0, true, 0x1fbc69dd4e8bee50)
#define _u5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObQueryTypeInfo$ntoskrnl.exe", 0x6d8338, 0x0, true, 0xb3741db4d1696639)
#define _u6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObQueryTypeName$ntoskrnl.exe", 0x8d9550, 0x0, true, 0xa257d509310ea865)
#define _u7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, char, void**, struct nt::object_handle_information_t*)>*), "$ObReferenceFileObjectForWrite$ntoskrnl.exe", 0x5e46a0, 0x0, true, 0x9d00d056669b1531)
#define _u8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::object_type_t*, char, void**, struct nt::object_handle_information_t*)>*), "$ObReferenceObjectByHandle$ntoskrnl.exe", 0x62ad10, 0x0, true, 0x262bb7e6899b32f3)
#define _u9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::object_type_t*, char, uint32_t, void**, struct nt::object_handle_information_t*)>*), "$ObReferenceObjectByHandleWithTag$ntoskrnl.exe", 0x62acd0, 0x0, true, 0xf92a2cfd6ff95311)
#define _v0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, uint32_t, struct nt::access_state_t*, uint32_t, struct nt::object_type_t*, char, void*, void**)>*), "$ObReferenceObjectByName$ntoskrnl.exe", 0x613070, 0x0, true, 0x5070cea18be23096)
#define _v1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObReferenceObjectByNameEx$ntoskrnl.exe", 0x64b400, 0x0, true, 0x53f462fca7494305)
#define _v2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::object_type_t*, char)>*), "$ObReferenceObjectByPointer$ntoskrnl.exe", 0x2de590, 0x0, true, 0xb9f5db50b85e375f)
#define _v3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::object_type_t*, char, uint32_t)>*), "$ObReferenceObjectByPointerWithTag$ntoskrnl.exe", 0x2046b0, 0x0, true, 0x957d107137c44d6d)
#define _v4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObReferenceObjectExWithTag$ntoskrnl.exe", 0x2f3250, 0x0, true, 0xf06ae73c0e43631c)
#define _v5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "$ObReferenceObjectSafe$ntoskrnl.exe", 0x2eea30, 0x0, true, 0xb602196e149c4163)
#define _v6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t)>*), "$ObReferenceObjectSafeWithTag$ntoskrnl.exe", 0x263e60, 0x0, true, 0xdebb3149ac70ec2)
#define _v7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObReferenceProcessHandleTable$ntoskrnl.exe", 0x61eed4, 0x0, true, 0x948c85d194a7beb0)
#define _v8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "$ObReferenceSecurityDescriptor$ntoskrnl.exe", 0x6dfd30, 0x0, true, 0x493ff37e3cb7a39b)
#define _v9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct ob::callback_registration_t*, void**)>*), "$ObRegisterCallbacks$ntoskrnl.exe", 0x7b3f90, 0x0, true, 0x67990892b0c53097)
#define _w0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "$ObReleaseObjectSecurity$ntoskrnl.exe", 0x613680, 0x0, true, 0xcdb96bde13d7b4c7)
#define _w1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObRevokeHandles$ntoskrnl.exe", 0x76464c, 0x0, true, 0x58e3afe8c11160f8)
#define _w2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct win::object_handle_flag_information_t*, char)>*), "$ObSetHandleAttributes$ntoskrnl.exe", 0x6c0ee0, 0x0, true, 0x494dd70918125f57)
#define _w3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObSetProcessDeviceMap$ntoskrnl.exe", 0x8dad0c, 0x0, true, 0x91dc09d9cb9bd63a)
#define _w4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObSetRefTraceInformation$ntoskrnl.exe", 0x8d994c, 0x0, true, 0x13a878a5e7fcdab4)
#define _w5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*, void*, void**, enum nt::pool_type_t, struct nt::generic_mapping_t*)>*), "$ObSetSecurityDescriptorInfo$ntoskrnl.exe", 0x613520, 0x0, true, 0x1d89b2a2b0c80009)
#define _w6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*)>*), "$ObSetSecurityObjectByPointer$ntoskrnl.exe", 0x6151b0, 0x0, true, 0x7f7415fb3117f0e8)
#define _w7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObShutdownSystem$ntoskrnl.exe", 0x8d7b30, 0x0, true, 0x206865e7f85730c8)
#define _w8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObTypeIndexTable$ntoskrnl.exe", 0xcfbe10, 0x0, true, 0xf4666520afd41b10)
#define _w9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$ObUnRegisterCallbacks$ntoskrnl.exe", 0x8d92c0, 0x0, true, 0x764bb0d9b927eff2)
#define _x0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void**, char, enum nt::wait_type_t, char, uint8_t, int64_t*)>*), "$ObWaitForMultipleObjects$ntoskrnl.exe", 0x5f7450, 0x0, true, 0x5a6944e1b79d7603)
#define _x1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, char, char, uint8_t, int64_t*)>*), "$ObWaitForSingleObject$ntoskrnl.exe", 0x62c610, 0x0, true, 0xb5492f298a799aec)
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
#endif